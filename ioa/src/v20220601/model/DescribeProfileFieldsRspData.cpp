/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <tencentcloud/ioa/v20220601/model/DescribeProfileFieldsRspData.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ioa::V20220601::Model;
using namespace std;

DescribeProfileFieldsRspData::DescribeProfileFieldsRspData() :
    m_itemHasBeenSet(false),
    m_profileTipsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeProfileFieldsRspData::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Item") && !value["Item"].IsNull())
    {
        if (!value["Item"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeProfileFieldsRspData.Item` is not array type"));

        const rapidjson::Value &tmpValue = value["Item"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ProfileFieldItem item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_item.push_back(item);
        }
        m_itemHasBeenSet = true;
    }

    if (value.HasMember("ProfileTips") && !value["ProfileTips"].IsNull())
    {
        if (!value["ProfileTips"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeProfileFieldsRspData.ProfileTips` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_profileTips.Deserialize(value["ProfileTips"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_profileTipsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void DescribeProfileFieldsRspData::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_itemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Item";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_item.begin(); itr != m_item.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_profileTipsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProfileTips";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_profileTips.ToJsonObject(value[key.c_str()], allocator);
    }

}


vector<ProfileFieldItem> DescribeProfileFieldsRspData::GetItem() const
{
    return m_item;
}

void DescribeProfileFieldsRspData::SetItem(const vector<ProfileFieldItem>& _item)
{
    m_item = _item;
    m_itemHasBeenSet = true;
}

bool DescribeProfileFieldsRspData::ItemHasBeenSet() const
{
    return m_itemHasBeenSet;
}

ProfileTips DescribeProfileFieldsRspData::GetProfileTips() const
{
    return m_profileTips;
}

void DescribeProfileFieldsRspData::SetProfileTips(const ProfileTips& _profileTips)
{
    m_profileTips = _profileTips;
    m_profileTipsHasBeenSet = true;
}

bool DescribeProfileFieldsRspData::ProfileTipsHasBeenSet() const
{
    return m_profileTipsHasBeenSet;
}

