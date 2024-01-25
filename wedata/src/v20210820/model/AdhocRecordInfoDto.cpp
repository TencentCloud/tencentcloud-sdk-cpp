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

#include <tencentcloud/wedata/v20210820/model/AdhocRecordInfoDto.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Wedata::V20210820::Model;
using namespace std;

AdhocRecordInfoDto::AdhocRecordInfoDto() :
    m_idHasBeenSet(false),
    m_scriptContentHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_detailsHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_executorIdHasBeenSet(false),
    m_executorDisplayNameHasBeenSet(false)
{
}

CoreInternalOutcome AdhocRecordInfoDto::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `AdhocRecordInfoDto.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("ScriptContent") && !value["ScriptContent"].IsNull())
    {
        if (!value["ScriptContent"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdhocRecordInfoDto.ScriptContent` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_scriptContent = string(value["ScriptContent"].GetString());
        m_scriptContentHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdhocRecordInfoDto.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdhocRecordInfoDto.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("Details") && !value["Details"].IsNull())
    {
        if (!value["Details"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AdhocRecordInfoDto.Details` is not array type"));

        const rapidjson::Value &tmpValue = value["Details"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AdhocSubTaskDto item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_details.push_back(item);
        }
        m_detailsHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdhocRecordInfoDto.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("ExecutorId") && !value["ExecutorId"].IsNull())
    {
        if (!value["ExecutorId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdhocRecordInfoDto.ExecutorId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executorId = string(value["ExecutorId"].GetString());
        m_executorIdHasBeenSet = true;
    }

    if (value.HasMember("ExecutorDisplayName") && !value["ExecutorDisplayName"].IsNull())
    {
        if (!value["ExecutorDisplayName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdhocRecordInfoDto.ExecutorDisplayName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executorDisplayName = string(value["ExecutorDisplayName"].GetString());
        m_executorDisplayNameHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AdhocRecordInfoDto::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_scriptContentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ScriptContent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_scriptContent.c_str(), allocator).Move(), allocator);
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

    if (m_detailsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Details";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_details.begin(); itr != m_details.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_executorIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executorId.c_str(), allocator).Move(), allocator);
    }

    if (m_executorDisplayNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorDisplayName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executorDisplayName.c_str(), allocator).Move(), allocator);
    }

}


uint64_t AdhocRecordInfoDto::GetId() const
{
    return m_id;
}

void AdhocRecordInfoDto::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool AdhocRecordInfoDto::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

string AdhocRecordInfoDto::GetScriptContent() const
{
    return m_scriptContent;
}

void AdhocRecordInfoDto::SetScriptContent(const string& _scriptContent)
{
    m_scriptContent = _scriptContent;
    m_scriptContentHasBeenSet = true;
}

bool AdhocRecordInfoDto::ScriptContentHasBeenSet() const
{
    return m_scriptContentHasBeenSet;
}

string AdhocRecordInfoDto::GetCreateTime() const
{
    return m_createTime;
}

void AdhocRecordInfoDto::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool AdhocRecordInfoDto::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string AdhocRecordInfoDto::GetStatus() const
{
    return m_status;
}

void AdhocRecordInfoDto::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool AdhocRecordInfoDto::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

vector<AdhocSubTaskDto> AdhocRecordInfoDto::GetDetails() const
{
    return m_details;
}

void AdhocRecordInfoDto::SetDetails(const vector<AdhocSubTaskDto>& _details)
{
    m_details = _details;
    m_detailsHasBeenSet = true;
}

bool AdhocRecordInfoDto::DetailsHasBeenSet() const
{
    return m_detailsHasBeenSet;
}

string AdhocRecordInfoDto::GetInstanceId() const
{
    return m_instanceId;
}

void AdhocRecordInfoDto::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool AdhocRecordInfoDto::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string AdhocRecordInfoDto::GetExecutorId() const
{
    return m_executorId;
}

void AdhocRecordInfoDto::SetExecutorId(const string& _executorId)
{
    m_executorId = _executorId;
    m_executorIdHasBeenSet = true;
}

bool AdhocRecordInfoDto::ExecutorIdHasBeenSet() const
{
    return m_executorIdHasBeenSet;
}

string AdhocRecordInfoDto::GetExecutorDisplayName() const
{
    return m_executorDisplayName;
}

void AdhocRecordInfoDto::SetExecutorDisplayName(const string& _executorDisplayName)
{
    m_executorDisplayName = _executorDisplayName;
    m_executorDisplayNameHasBeenSet = true;
}

bool AdhocRecordInfoDto::ExecutorDisplayNameHasBeenSet() const
{
    return m_executorDisplayNameHasBeenSet;
}

