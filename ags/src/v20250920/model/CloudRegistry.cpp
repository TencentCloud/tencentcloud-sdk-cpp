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

#include <tencentcloud/ags/v20250920/model/CloudRegistry.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

CloudRegistry::CloudRegistry() :
    m_registryIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_approvalModeHasBeenSet(false),
    m_regionHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_recordCountHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_publishedRecordCountHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_creatorUinHasBeenSet(false),
    m_creatorSubAccountUinHasBeenSet(false)
{
}

CoreInternalOutcome CloudRegistry::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RegistryId") && !value["RegistryId"].IsNull())
    {
        if (!value["RegistryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRegistry.RegistryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryId = string(value["RegistryId"].GetString());
        m_registryIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRegistry.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRegistry.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("ApprovalMode") && !value["ApprovalMode"].IsNull())
    {
        if (!value["ApprovalMode"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRegistry.ApprovalMode` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_approvalMode = string(value["ApprovalMode"].GetString());
        m_approvalModeHasBeenSet = true;
    }

    if (value.HasMember("Region") && !value["Region"].IsNull())
    {
        if (!value["Region"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRegistry.Region` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_region = string(value["Region"].GetString());
        m_regionHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRegistry.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRegistry.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRegistry.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("RecordCount") && !value["RecordCount"].IsNull())
    {
        if (!value["RecordCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRegistry.RecordCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_recordCount = value["RecordCount"].GetInt64();
        m_recordCountHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudRegistry.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            CloudTag item;
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

    if (value.HasMember("PublishedRecordCount") && !value["PublishedRecordCount"].IsNull())
    {
        if (!value["PublishedRecordCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRegistry.PublishedRecordCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_publishedRecordCount = value["PublishedRecordCount"].GetInt64();
        m_publishedRecordCountHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRegistry.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("CreatorUin") && !value["CreatorUin"].IsNull())
    {
        if (!value["CreatorUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRegistry.CreatorUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorUin = string(value["CreatorUin"].GetString());
        m_creatorUinHasBeenSet = true;
    }

    if (value.HasMember("CreatorSubAccountUin") && !value["CreatorSubAccountUin"].IsNull())
    {
        if (!value["CreatorSubAccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRegistry.CreatorSubAccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorSubAccountUin = string(value["CreatorSubAccountUin"].GetString());
        m_creatorSubAccountUinHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudRegistry::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_registryIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RegistryId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_registryId.c_str(), allocator).Move(), allocator);
    }

    if (m_nameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Name";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_name.c_str(), allocator).Move(), allocator);
    }

    if (m_descriptionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Description";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_description.c_str(), allocator).Move(), allocator);
    }

    if (m_approvalModeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApprovalMode";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_approvalMode.c_str(), allocator).Move(), allocator);
    }

    if (m_regionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Region";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_region.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_updateTime.c_str(), allocator).Move(), allocator);
    }

    if (m_recordCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_recordCount, allocator);
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

    if (m_publishedRecordCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "PublishedRecordCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_publishedRecordCount, allocator);
    }

    if (m_appIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AppId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_appId, allocator);
    }

    if (m_creatorUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorUin.c_str(), allocator).Move(), allocator);
    }

    if (m_creatorSubAccountUinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreatorSubAccountUin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_creatorSubAccountUin.c_str(), allocator).Move(), allocator);
    }

}


string CloudRegistry::GetRegistryId() const
{
    return m_registryId;
}

void CloudRegistry::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool CloudRegistry::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

string CloudRegistry::GetName() const
{
    return m_name;
}

void CloudRegistry::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CloudRegistry::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CloudRegistry::GetDescription() const
{
    return m_description;
}

void CloudRegistry::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CloudRegistry::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CloudRegistry::GetApprovalMode() const
{
    return m_approvalMode;
}

void CloudRegistry::SetApprovalMode(const string& _approvalMode)
{
    m_approvalMode = _approvalMode;
    m_approvalModeHasBeenSet = true;
}

bool CloudRegistry::ApprovalModeHasBeenSet() const
{
    return m_approvalModeHasBeenSet;
}

string CloudRegistry::GetRegion() const
{
    return m_region;
}

void CloudRegistry::SetRegion(const string& _region)
{
    m_region = _region;
    m_regionHasBeenSet = true;
}

bool CloudRegistry::RegionHasBeenSet() const
{
    return m_regionHasBeenSet;
}

string CloudRegistry::GetStatus() const
{
    return m_status;
}

void CloudRegistry::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool CloudRegistry::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string CloudRegistry::GetCreateTime() const
{
    return m_createTime;
}

void CloudRegistry::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CloudRegistry::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string CloudRegistry::GetUpdateTime() const
{
    return m_updateTime;
}

void CloudRegistry::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool CloudRegistry::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t CloudRegistry::GetRecordCount() const
{
    return m_recordCount;
}

void CloudRegistry::SetRecordCount(const int64_t& _recordCount)
{
    m_recordCount = _recordCount;
    m_recordCountHasBeenSet = true;
}

bool CloudRegistry::RecordCountHasBeenSet() const
{
    return m_recordCountHasBeenSet;
}

vector<CloudTag> CloudRegistry::GetTags() const
{
    return m_tags;
}

void CloudRegistry::SetTags(const vector<CloudTag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool CloudRegistry::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

int64_t CloudRegistry::GetPublishedRecordCount() const
{
    return m_publishedRecordCount;
}

void CloudRegistry::SetPublishedRecordCount(const int64_t& _publishedRecordCount)
{
    m_publishedRecordCount = _publishedRecordCount;
    m_publishedRecordCountHasBeenSet = true;
}

bool CloudRegistry::PublishedRecordCountHasBeenSet() const
{
    return m_publishedRecordCountHasBeenSet;
}

int64_t CloudRegistry::GetAppId() const
{
    return m_appId;
}

void CloudRegistry::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool CloudRegistry::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string CloudRegistry::GetCreatorUin() const
{
    return m_creatorUin;
}

void CloudRegistry::SetCreatorUin(const string& _creatorUin)
{
    m_creatorUin = _creatorUin;
    m_creatorUinHasBeenSet = true;
}

bool CloudRegistry::CreatorUinHasBeenSet() const
{
    return m_creatorUinHasBeenSet;
}

string CloudRegistry::GetCreatorSubAccountUin() const
{
    return m_creatorSubAccountUin;
}

void CloudRegistry::SetCreatorSubAccountUin(const string& _creatorSubAccountUin)
{
    m_creatorSubAccountUin = _creatorSubAccountUin;
    m_creatorSubAccountUinHasBeenSet = true;
}

bool CloudRegistry::CreatorSubAccountUinHasBeenSet() const
{
    return m_creatorSubAccountUinHasBeenSet;
}

