/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#include <tencentcloud/ivld/v20210903/model/MultiLevelTag.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ivld::V20210903::Model;
using namespace std;

MultiLevelTag::MultiLevelTag() :
    m_tagSetHasBeenSet(false),
    m_appearInfoHasBeenSet(false)
{
}

CoreInternalOutcome MultiLevelTag::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TagSet") && !value["TagSet"].IsNull())
    {
        if (!value["TagSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `MultiLevelTag.TagSet` is not array type"));

        const rapidjson::Value &tmpValue = value["TagSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            L1Tag item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagSet.push_back(item);
        }
        m_tagSetHasBeenSet = true;
    }

    if (value.HasMember("AppearInfo") && !value["AppearInfo"].IsNull())
    {
        if (!value["AppearInfo"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `MultiLevelTag.AppearInfo` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_appearInfo.Deserialize(value["AppearInfo"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_appearInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void MultiLevelTag::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tagSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagSet.begin(); itr != m_tagSet.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_appearInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppearInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_appearInfo.ToJsonObject(value[key.c_str()], allocator);
    }

}


vector<L1Tag> MultiLevelTag::GetTagSet() const
{
    return m_tagSet;
}

void MultiLevelTag::SetTagSet(const vector<L1Tag>& _tagSet)
{
    m_tagSet = _tagSet;
    m_tagSetHasBeenSet = true;
}

bool MultiLevelTag::TagSetHasBeenSet() const
{
    return m_tagSetHasBeenSet;
}

AppearInfo MultiLevelTag::GetAppearInfo() const
{
    return m_appearInfo;
}

void MultiLevelTag::SetAppearInfo(const AppearInfo& _appearInfo)
{
    m_appearInfo = _appearInfo;
    m_appearInfoHasBeenSet = true;
}

bool MultiLevelTag::AppearInfoHasBeenSet() const
{
    return m_appearInfoHasBeenSet;
}

