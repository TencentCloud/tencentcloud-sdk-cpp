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

#include <tencentcloud/vod/v20180717/model/SubAppIdInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Vod::V20180717::Model;
using namespace std;

SubAppIdInfo::SubAppIdInfo() :
    m_subAppIdHasBeenSet(false),
    m_subAppIdNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_modeHasBeenSet(false),
    m_storageRegionsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome SubAppIdInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SubAppId") && !value["SubAppId"].IsNull())
    {
        if (!value["SubAppId"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `SubAppIdInfo.SubAppId` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_subAppId = value["SubAppId"].GetUint64();
        m_subAppIdHasBeenSet = true;
    }

    if (value.HasMember("SubAppIdName") && !value["SubAppIdName"].IsNull())
    {
        if (!value["SubAppIdName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubAppIdInfo.SubAppIdName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_subAppIdName = string(value["SubAppIdName"].GetString());
        m_subAppIdNameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubAppIdInfo.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubAppIdInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubAppIdInfo.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubAppIdInfo.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Mode") && !value["Mode"].IsNull())
    {
        if (!value["Mode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubAppIdInfo.Mode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_mode = string(value["Mode"].GetString());
        m_modeHasBeenSet = true;
    }

    if (value.HasMember("StorageRegions") && !value["StorageRegions"].IsNull())
    {
        if (!value["StorageRegions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SubAppIdInfo.StorageRegions` is not array type"));

        const rapidjson::Value &tmpValue = value["StorageRegions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_storageRegions.push_back((*itr).GetString());
        }
        m_storageRegionsHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `SubAppIdInfo.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            ResourceTag item;
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


    return CoreInternalOutcome(true);
}

void SubAppIdInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_subAppIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_subAppId, allocator);
    }

    if (m_subAppIdNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SubAppIdName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_subAppIdName.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_modeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Mode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_mode.c_str(), allocator).Move(), allocator);
    }

    if (m_storageRegionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "StorageRegions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_storageRegions.begin(); itr != m_storageRegions.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
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

}


uint64_t SubAppIdInfo::GetSubAppId() const
{
    return m_subAppId;
}

void SubAppIdInfo::SetSubAppId(const uint64_t& _subAppId)
{
    m_subAppId = _subAppId;
    m_subAppIdHasBeenSet = true;
}

bool SubAppIdInfo::SubAppIdHasBeenSet() const
{
    return m_subAppIdHasBeenSet;
}

string SubAppIdInfo::GetSubAppIdName() const
{
    return m_subAppIdName;
}

void SubAppIdInfo::SetSubAppIdName(const string& _subAppIdName)
{
    m_subAppIdName = _subAppIdName;
    m_subAppIdNameHasBeenSet = true;
}

bool SubAppIdInfo::SubAppIdNameHasBeenSet() const
{
    return m_subAppIdNameHasBeenSet;
}

string SubAppIdInfo::GetDescription() const
{
    return m_description;
}

void SubAppIdInfo::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool SubAppIdInfo::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string SubAppIdInfo::GetCreateTime() const
{
    return m_createTime;
}

void SubAppIdInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool SubAppIdInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string SubAppIdInfo::GetStatus() const
{
    return m_status;
}

void SubAppIdInfo::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SubAppIdInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string SubAppIdInfo::GetName() const
{
    return m_name;
}

void SubAppIdInfo::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool SubAppIdInfo::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string SubAppIdInfo::GetMode() const
{
    return m_mode;
}

void SubAppIdInfo::SetMode(const string& _mode)
{
    m_mode = _mode;
    m_modeHasBeenSet = true;
}

bool SubAppIdInfo::ModeHasBeenSet() const
{
    return m_modeHasBeenSet;
}

vector<string> SubAppIdInfo::GetStorageRegions() const
{
    return m_storageRegions;
}

void SubAppIdInfo::SetStorageRegions(const vector<string>& _storageRegions)
{
    m_storageRegions = _storageRegions;
    m_storageRegionsHasBeenSet = true;
}

bool SubAppIdInfo::StorageRegionsHasBeenSet() const
{
    return m_storageRegionsHasBeenSet;
}

vector<ResourceTag> SubAppIdInfo::GetTags() const
{
    return m_tags;
}

void SubAppIdInfo::SetTags(const vector<ResourceTag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool SubAppIdInfo::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

