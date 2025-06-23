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

#include <tencentcloud/ssl/v20191205/model/UploadUpdateRecordInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ssl::V20191205::Model;
using namespace std;

UploadUpdateRecordInfo::UploadUpdateRecordInfo() :
    m_idHasBeenSet(false),
    m_oldCertIdHasBeenSet(false),
    m_resourceTypesHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false)
{
}

CoreInternalOutcome UploadUpdateRecordInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UploadUpdateRecordInfo.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("OldCertId") && !value["OldCertId"].IsNull())
    {
        if (!value["OldCertId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UploadUpdateRecordInfo.OldCertId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_oldCertId = string(value["OldCertId"].GetString());
        m_oldCertIdHasBeenSet = true;
    }

    if (value.HasMember("ResourceTypes") && !value["ResourceTypes"].IsNull())
    {
        if (!value["ResourceTypes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `UploadUpdateRecordInfo.ResourceTypes` is not array type"));

        const rapidjson::Value &tmpValue = value["ResourceTypes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            m_resourceTypes.push_back((*itr).GetString());
        }
        m_resourceTypesHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `UploadUpdateRecordInfo.Status` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetUint64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UploadUpdateRecordInfo.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `UploadUpdateRecordInfo.UpdateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = string(value["UpdateTime"].GetString());
        m_updateTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void UploadUpdateRecordInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_oldCertIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OldCertId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_oldCertId.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceTypesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceTypes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        for (auto itr = m_resourceTypes.begin(); itr != m_resourceTypes.end(); ++itr)
        {
            value[key.c_str()].PushBack(rapidjson::Value().SetString((*itr).c_str(), allocator), allocator);
        }
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
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

}


uint64_t UploadUpdateRecordInfo::GetId() const
{
    return m_id;
}

void UploadUpdateRecordInfo::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool UploadUpdateRecordInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string UploadUpdateRecordInfo::GetOldCertId() const
{
    return m_oldCertId;
}

void UploadUpdateRecordInfo::SetOldCertId(const string& _oldCertId)
{
    m_oldCertId = _oldCertId;
    m_oldCertIdHasBeenSet = true;
}

bool UploadUpdateRecordInfo::OldCertIdHasBeenSet() const
{
    return m_oldCertIdHasBeenSet;
}

vector<string> UploadUpdateRecordInfo::GetResourceTypes() const
{
    return m_resourceTypes;
}

void UploadUpdateRecordInfo::SetResourceTypes(const vector<string>& _resourceTypes)
{
    m_resourceTypes = _resourceTypes;
    m_resourceTypesHasBeenSet = true;
}

bool UploadUpdateRecordInfo::ResourceTypesHasBeenSet() const
{
    return m_resourceTypesHasBeenSet;
}

uint64_t UploadUpdateRecordInfo::GetStatus() const
{
    return m_status;
}

void UploadUpdateRecordInfo::SetStatus(const uint64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool UploadUpdateRecordInfo::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string UploadUpdateRecordInfo::GetCreateTime() const
{
    return m_createTime;
}

void UploadUpdateRecordInfo::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool UploadUpdateRecordInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string UploadUpdateRecordInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void UploadUpdateRecordInfo::SetUpdateTime(const string& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool UploadUpdateRecordInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

