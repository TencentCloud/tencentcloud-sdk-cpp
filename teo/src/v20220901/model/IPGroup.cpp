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

#include <tencentcloud/teo/v20220901/model/IPGroup.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Teo::V20220901::Model;
using namespace std;

IPGroup::IPGroup() :
    m_groupIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_contentHasBeenSet(false),
    m_iPExpireInfoHasBeenSet(false)
{
}

CoreInternalOutcome IPGroup::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `IPGroup.GroupId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = value["GroupId"].GetInt64();
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `IPGroup.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Content") && !value["Content"].IsNull())
    {
        if (!value["Content"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IPGroup.Content` is not array type"));

        const rapidjson::Value &tmpValue = value["Content"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_content.push_back((*itr).GetString());
        }
        m_contentHasBeenSet = true;
    }

    if (value.HasMember("IPExpireInfo") && !value["IPExpireInfo"].IsNull())
    {
        if (!value["IPExpireInfo"].IsArray())
            return CoreInternalOutcome(Core::Error("response `IPGroup.IPExpireInfo` is not array type"));

        const rapidjson::Value &tmpValue = value["IPExpireInfo"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            IPExpireInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_iPExpireInfo.push_back(item);
        }
        m_iPExpireInfoHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void IPGroup::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupId, allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_contentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Content";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_content.begin(); itr != m_content.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_iPExpireInfoHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IPExpireInfo";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_iPExpireInfo.begin(); itr != m_iPExpireInfo.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


int64_t IPGroup::GetGroupId() const
{
    return m_groupId;
}

void IPGroup::SetGroupId(const int64_t& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool IPGroup::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string IPGroup::GetName() const
{
    return m_name;
}

void IPGroup::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool IPGroup::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

vector<string> IPGroup::GetContent() const
{
    return m_content;
}

void IPGroup::SetContent(const vector<string>& _content)
{
    m_content = _content;
    m_contentHasBeenSet = true;
}

bool IPGroup::ContentHasBeenSet() const
{
    return m_contentHasBeenSet;
}

vector<IPExpireInfo> IPGroup::GetIPExpireInfo() const
{
    return m_iPExpireInfo;
}

void IPGroup::SetIPExpireInfo(const vector<IPExpireInfo>& _iPExpireInfo)
{
    m_iPExpireInfo = _iPExpireInfo;
    m_iPExpireInfoHasBeenSet = true;
}

bool IPGroup::IPExpireInfoHasBeenSet() const
{
    return m_iPExpireInfoHasBeenSet;
}

