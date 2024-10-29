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

#include <tencentcloud/bsca/v20210811/model/ComponentVersionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Bsca::V20210811::Model;
using namespace std;

ComponentVersionInfo::ComponentVersionInfo() :
    m_publishTimeHasBeenSet(false),
    m_copyrightListHasBeenSet(false),
    m_tagListHasBeenSet(false)
{
}

CoreInternalOutcome ComponentVersionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("PublishTime") && !value["PublishTime"].IsNull())
    {
        if (!value["PublishTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ComponentVersionInfo.PublishTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_publishTime = string(value["PublishTime"].GetString());
        m_publishTimeHasBeenSet = true;
    }

    if (value.HasMember("CopyrightList") && !value["CopyrightList"].IsNull())
    {
        if (!value["CopyrightList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ComponentVersionInfo.CopyrightList` is not array type"));

        const rapidjson::Value &tmpValue = value["CopyrightList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_copyrightList.push_back((*itr).GetString());
        }
        m_copyrightListHasBeenSet = true;
    }

    if (value.HasMember("TagList") && !value["TagList"].IsNull())
    {
        if (!value["TagList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ComponentVersionInfo.TagList` is not array type"));

        const rapidjson::Value &tmpValue = value["TagList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_tagList.push_back((*itr).GetString());
        }
        m_tagListHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ComponentVersionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_publishTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_publishTime.c_str(), allocator).Move(), allocator);
    }

    if (m_copyrightListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CopyrightList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_copyrightList.begin(); itr != m_copyrightList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_tagListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_tagList.begin(); itr != m_tagList.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string ComponentVersionInfo::GetPublishTime() const
{
    return m_publishTime;
}

void ComponentVersionInfo::SetPublishTime(const string& _publishTime)
{
    m_publishTime = _publishTime;
    m_publishTimeHasBeenSet = true;
}

bool ComponentVersionInfo::PublishTimeHasBeenSet() const
{
    return m_publishTimeHasBeenSet;
}

vector<string> ComponentVersionInfo::GetCopyrightList() const
{
    return m_copyrightList;
}

void ComponentVersionInfo::SetCopyrightList(const vector<string>& _copyrightList)
{
    m_copyrightList = _copyrightList;
    m_copyrightListHasBeenSet = true;
}

bool ComponentVersionInfo::CopyrightListHasBeenSet() const
{
    return m_copyrightListHasBeenSet;
}

vector<string> ComponentVersionInfo::GetTagList() const
{
    return m_tagList;
}

void ComponentVersionInfo::SetTagList(const vector<string>& _tagList)
{
    m_tagList = _tagList;
    m_tagListHasBeenSet = true;
}

bool ComponentVersionInfo::TagListHasBeenSet() const
{
    return m_tagListHasBeenSet;
}

