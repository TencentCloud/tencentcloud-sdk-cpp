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

#include <tencentcloud/databuddy/v20260715/model/TagValueInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Databuddy::V20260715::Model;
using namespace std;

TagValueInfo::TagValueInfo() :
    m_tagValueIdHasBeenSet(false),
    m_tagValueHasBeenSet(false),
    m_sourceHasBeenSet(false),
    m_groupNamesHasBeenSet(false)
{
}

CoreInternalOutcome TagValueInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TagValueId") && !value["TagValueId"].IsNull())
    {
        if (!value["TagValueId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagValueInfo.TagValueId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagValueId = string(value["TagValueId"].GetString());
        m_tagValueIdHasBeenSet = true;
    }

    if (value.HasMember("TagValue") && !value["TagValue"].IsNull())
    {
        if (!value["TagValue"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `TagValueInfo.TagValue` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_tagValue = string(value["TagValue"].GetString());
        m_tagValueHasBeenSet = true;
    }

    if (value.HasMember("Source") && !value["Source"].IsNull())
    {
        if (!value["Source"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `TagValueInfo.Source` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_source = value["Source"].GetInt64();
        m_sourceHasBeenSet = true;
    }

    if (value.HasMember("GroupNames") && !value["GroupNames"].IsNull())
    {
        if (!value["GroupNames"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TagValueInfo.GroupNames` is not array type"));

        const rapidjson::Value &tmpValue = value["GroupNames"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_groupNames.push_back((*itr).GetString());
        }
        m_groupNamesHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void TagValueInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_tagValueIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagValueId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagValueId.c_str(), allocator).Move(), allocator);
    }

    if (m_tagValueHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagValue";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_tagValue.c_str(), allocator).Move(), allocator);
    }

    if (m_sourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Source";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_source, allocator);
    }

    if (m_groupNamesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupNames";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_groupNames.begin(); itr != m_groupNames.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string TagValueInfo::GetTagValueId() const
{
    return m_tagValueId;
}

void TagValueInfo::SetTagValueId(const string& _tagValueId)
{
    m_tagValueId = _tagValueId;
    m_tagValueIdHasBeenSet = true;
}

bool TagValueInfo::TagValueIdHasBeenSet() const
{
    return m_tagValueIdHasBeenSet;
}

string TagValueInfo::GetTagValue() const
{
    return m_tagValue;
}

void TagValueInfo::SetTagValue(const string& _tagValue)
{
    m_tagValue = _tagValue;
    m_tagValueHasBeenSet = true;
}

bool TagValueInfo::TagValueHasBeenSet() const
{
    return m_tagValueHasBeenSet;
}

int64_t TagValueInfo::GetSource() const
{
    return m_source;
}

void TagValueInfo::SetSource(const int64_t& _source)
{
    m_source = _source;
    m_sourceHasBeenSet = true;
}

bool TagValueInfo::SourceHasBeenSet() const
{
    return m_sourceHasBeenSet;
}

vector<string> TagValueInfo::GetGroupNames() const
{
    return m_groupNames;
}

void TagValueInfo::SetGroupNames(const vector<string>& _groupNames)
{
    m_groupNames = _groupNames;
    m_groupNamesHasBeenSet = true;
}

bool TagValueInfo::GroupNamesHasBeenSet() const
{
    return m_groupNamesHasBeenSet;
}

