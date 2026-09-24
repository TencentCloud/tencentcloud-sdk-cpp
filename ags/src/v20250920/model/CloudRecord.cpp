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

#include <tencentcloud/ags/v20250920/model/CloudRecord.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ags::V20250920::Model;
using namespace std;

CloudRecord::CloudRecord() :
    m_recordIdHasBeenSet(false),
    m_registryIdHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_descriptorTypeHasBeenSet(false),
    m_lifecycleStatusHasBeenSet(false),
    m_appIdHasBeenSet(false),
    m_creatorUinHasBeenSet(false),
    m_creatorSubAccountUinHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_versionCountHasBeenSet(false),
    m_labelSetHasBeenSet(false)
{
}

CoreInternalOutcome CloudRecord::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("RecordId") && !value["RecordId"].IsNull())
    {
        if (!value["RecordId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRecord.RecordId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_recordId = string(value["RecordId"].GetString());
        m_recordIdHasBeenSet = true;
    }

    if (value.HasMember("RegistryId") && !value["RegistryId"].IsNull())
    {
        if (!value["RegistryId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRecord.RegistryId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_registryId = string(value["RegistryId"].GetString());
        m_registryIdHasBeenSet = true;
    }

    if (value.HasMember("Name") && !value["Name"].IsNull())
    {
        if (!value["Name"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRecord.Name` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_name = string(value["Name"].GetString());
        m_nameHasBeenSet = true;
    }

    if (value.HasMember("Description") && !value["Description"].IsNull())
    {
        if (!value["Description"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRecord.Description` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_description = string(value["Description"].GetString());
        m_descriptionHasBeenSet = true;
    }

    if (value.HasMember("DescriptorType") && !value["DescriptorType"].IsNull())
    {
        if (!value["DescriptorType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRecord.DescriptorType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_descriptorType = string(value["DescriptorType"].GetString());
        m_descriptorTypeHasBeenSet = true;
    }

    if (value.HasMember("LifecycleStatus") && !value["LifecycleStatus"].IsNull())
    {
        if (!value["LifecycleStatus"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRecord.LifecycleStatus` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_lifecycleStatus = string(value["LifecycleStatus"].GetString());
        m_lifecycleStatusHasBeenSet = true;
    }

    if (value.HasMember("AppId") && !value["AppId"].IsNull())
    {
        if (!value["AppId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRecord.AppId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_appId = value["AppId"].GetInt64();
        m_appIdHasBeenSet = true;
    }

    if (value.HasMember("CreatorUin") && !value["CreatorUin"].IsNull())
    {
        if (!value["CreatorUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRecord.CreatorUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorUin = string(value["CreatorUin"].GetString());
        m_creatorUinHasBeenSet = true;
    }

    if (value.HasMember("CreatorSubAccountUin") && !value["CreatorSubAccountUin"].IsNull())
    {
        if (!value["CreatorSubAccountUin"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRecord.CreatorSubAccountUin` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_creatorSubAccountUin = string(value["CreatorSubAccountUin"].GetString());
        m_creatorSubAccountUinHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRecord.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRecord.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("VersionCount") && !value["VersionCount"].IsNull())
    {
        if (!value["VersionCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `CloudRecord.VersionCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_versionCount = value["VersionCount"].GetInt64();
        m_versionCountHasBeenSet = true;
    }

    if (value.HasMember("LabelSet") && !value["LabelSet"].IsNull())
    {
        if (!value["LabelSet"].IsArray())
            return CoreInternalOutcome(Core::Error("response `CloudRecord.LabelSet` is not array type"));

        const rapidjson::Value &tmpValue = value["LabelSet"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_labelSet.push_back((*itr).GetString());
        }
        m_labelSetHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CloudRecord::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_recordIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RecordId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_recordId.c_str(), allocator).Move(), allocator);
    }

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

    if (m_descriptorTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DescriptorType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_descriptorType.c_str(), allocator).Move(), allocator);
    }

    if (m_lifecycleStatusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LifecycleStatus";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_lifecycleStatus.c_str(), allocator).Move(), allocator);
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

    if (m_versionCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VersionCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_versionCount, allocator);
    }

    if (m_labelSetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LabelSet";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_labelSet.begin(); itr != m_labelSet.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

}


string CloudRecord::GetRecordId() const
{
    return m_recordId;
}

void CloudRecord::SetRecordId(const string& _recordId)
{
    m_recordId = _recordId;
    m_recordIdHasBeenSet = true;
}

bool CloudRecord::RecordIdHasBeenSet() const
{
    return m_recordIdHasBeenSet;
}

string CloudRecord::GetRegistryId() const
{
    return m_registryId;
}

void CloudRecord::SetRegistryId(const string& _registryId)
{
    m_registryId = _registryId;
    m_registryIdHasBeenSet = true;
}

bool CloudRecord::RegistryIdHasBeenSet() const
{
    return m_registryIdHasBeenSet;
}

string CloudRecord::GetName() const
{
    return m_name;
}

void CloudRecord::SetName(const string& _name)
{
    m_name = _name;
    m_nameHasBeenSet = true;
}

bool CloudRecord::NameHasBeenSet() const
{
    return m_nameHasBeenSet;
}

string CloudRecord::GetDescription() const
{
    return m_description;
}

void CloudRecord::SetDescription(const string& _description)
{
    m_description = _description;
    m_descriptionHasBeenSet = true;
}

bool CloudRecord::DescriptionHasBeenSet() const
{
    return m_descriptionHasBeenSet;
}

string CloudRecord::GetDescriptorType() const
{
    return m_descriptorType;
}

void CloudRecord::SetDescriptorType(const string& _descriptorType)
{
    m_descriptorType = _descriptorType;
    m_descriptorTypeHasBeenSet = true;
}

bool CloudRecord::DescriptorTypeHasBeenSet() const
{
    return m_descriptorTypeHasBeenSet;
}

string CloudRecord::GetLifecycleStatus() const
{
    return m_lifecycleStatus;
}

void CloudRecord::SetLifecycleStatus(const string& _lifecycleStatus)
{
    m_lifecycleStatus = _lifecycleStatus;
    m_lifecycleStatusHasBeenSet = true;
}

bool CloudRecord::LifecycleStatusHasBeenSet() const
{
    return m_lifecycleStatusHasBeenSet;
}

int64_t CloudRecord::GetAppId() const
{
    return m_appId;
}

void CloudRecord::SetAppId(const int64_t& _appId)
{
    m_appId = _appId;
    m_appIdHasBeenSet = true;
}

bool CloudRecord::AppIdHasBeenSet() const
{
    return m_appIdHasBeenSet;
}

string CloudRecord::GetCreatorUin() const
{
    return m_creatorUin;
}

void CloudRecord::SetCreatorUin(const string& _creatorUin)
{
    m_creatorUin = _creatorUin;
    m_creatorUinHasBeenSet = true;
}

bool CloudRecord::CreatorUinHasBeenSet() const
{
    return m_creatorUinHasBeenSet;
}

string CloudRecord::GetCreatorSubAccountUin() const
{
    return m_creatorSubAccountUin;
}

void CloudRecord::SetCreatorSubAccountUin(const string& _creatorSubAccountUin)
{
    m_creatorSubAccountUin = _creatorSubAccountUin;
    m_creatorSubAccountUinHasBeenSet = true;
}

bool CloudRecord::CreatorSubAccountUinHasBeenSet() const
{
    return m_creatorSubAccountUinHasBeenSet;
}

string CloudRecord::GetCreateTime() const
{
    return m_createTime;
}

void CloudRecord::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool CloudRecord::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string CloudRecord::GetUpdateTime() const
{
    return m_updateTime;
}

void CloudRecord::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool CloudRecord::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

int64_t CloudRecord::GetVersionCount() const
{
    return m_versionCount;
}

void CloudRecord::SetVersionCount(const int64_t& _versionCount)
{
    m_versionCount = _versionCount;
    m_versionCountHasBeenSet = true;
}

bool CloudRecord::VersionCountHasBeenSet() const
{
    return m_versionCountHasBeenSet;
}

vector<string> CloudRecord::GetLabelSet() const
{
    return m_labelSet;
}

void CloudRecord::SetLabelSet(const vector<string>& _labelSet)
{
    m_labelSet = _labelSet;
    m_labelSetHasBeenSet = true;
}

bool CloudRecord::LabelSetHasBeenSet() const
{
    return m_labelSetHasBeenSet;
}

