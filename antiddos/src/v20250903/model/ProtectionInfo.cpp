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

#include <tencentcloud/antiddos/v20250903/model/ProtectionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Antiddos::V20250903::Model;
using namespace std;

ProtectionInfo::ProtectionInfo() :
    m_protectionIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_protectionLevelHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_resourceCountHasBeenSet(false)
{
}

CoreInternalOutcome ProtectionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ProtectionId") && !value["ProtectionId"].IsNull())
    {
        if (!value["ProtectionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectionInfo.ProtectionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protectionId = string(value["ProtectionId"].GetString());
        m_protectionIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectionInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("ProtectionLevel") && !value["ProtectionLevel"].IsNull())
    {
        if (!value["ProtectionLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectionInfo.ProtectionLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_protectionLevel = string(value["ProtectionLevel"].GetString());
        m_protectionLevelHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectionInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ProtectionInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            TagInfo item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tags.push_back(item);
        }
        m_tagsHasBeenSet = true;
    }

    if (value.HasMember("ResourceCount") && !value["ResourceCount"].IsNull())
    {
        if (!value["ResourceCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ProtectionInfo.ResourceCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_resourceCount = value["ResourceCount"].GetInt64();
        m_resourceCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProtectionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_protectionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protectionId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_protectionLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ProtectionLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_protectionLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_tagsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Tags";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tags.begin(); itr != m_tags.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_resourceCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_resourceCount, allocator);
    }

}


string ProtectionInfo::GetProtectionId() const
{
    return m_protectionId;
}

void ProtectionInfo::SetProtectionId(const string& _protectionId)
{
    m_protectionId = _protectionId;
    m_protectionIdHasBeenSet = true;
}

bool ProtectionInfo::ProtectionIdHasBeenSet() const
{
    return m_protectionIdHasBeenSet;
}

string ProtectionInfo::GetName() const
{
    return m_name;
}

void ProtectionInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool ProtectionInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string ProtectionInfo::GetProtectionLevel() const
{
    return m_protectionLevel;
}

void ProtectionInfo::SetProtectionLevel(const string& _protectionLevel)
{
    m_protectionLevel = _protectionLevel;
    m_protectionLevelHasBeenSet = true;
}

bool ProtectionInfo::ProtectionLevelHasBeenSet() const
{
    return m_protectionLevelHasBeenSet;
}

string ProtectionInfo::GetStatus() const
{
    return m_status;
}

void ProtectionInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ProtectionInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<TagInfo> ProtectionInfo::GetTags() const
{
    return m_tags;
}

void ProtectionInfo::SetTags(const vector<TagInfo>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool ProtectionInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

int64_t ProtectionInfo::GetResourceCount() const
{
    return m_resourceCount;
}

void ProtectionInfo::SetResourceCount(const int64_t& _resourceCount)
{
    m_resourceCount = _resourceCount;
    m_resourceCountHasBeenSet = true;
}

bool ProtectionInfo::ResourceCountHasBeenSet() const
{
    return m_resourceCountHasBeenSet;
}

