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

#include <tencentcloud/ckafka/v20190819/model/DescribeDatahubTaskRes.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ckafka::V20190819::Model;
using namespace std;

DescribeDatahubTaskRes::DescribeDatahubTaskRes() :
    m_taskIdHasBeenSet(false),
    m_taskNameHasBeenSet(false),
    m_taskTypeHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_sourceResourceHasBeenSet(false),
    m_targetResourceHasBeenSet(false),
    m_connectionsHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_transformParamHasBeenSet(false),
    m_datahubIdHasBeenSet(false),
    m_schemaIdHasBeenSet(false),
    m_schemaNameHasBeenSet(false),
    m_transformsParamHasBeenSet(false),
    m_errorMessageHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CoreInternalOutcome DescribeDatahubTaskRes::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("TaskId") && !value["TaskId"].IsNull())
    {
        if (!value["TaskId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDatahubTaskRes.TaskId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskId = string(value["TaskId"].GetString());
        m_taskIdHasBeenSet = true;
    }

    if (value.HasMember("TaskName") && !value["TaskName"].IsNull())
    {
        if (!value["TaskName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDatahubTaskRes.TaskName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskName = string(value["TaskName"].GetString());
        m_taskNameHasBeenSet = true;
    }

    if (value.HasMember("TaskType") && !value["TaskType"].IsNull())
    {
        if (!value["TaskType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDatahubTaskRes.TaskType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_taskType = string(value["TaskType"].GetString());
        m_taskTypeHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDatahubTaskRes.Status` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_status = value["Status"].GetInt64();
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("SourceResource") && !value["SourceResource"].IsNull())
    {
        if (!value["SourceResource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDatahubTaskRes.SourceResource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_sourceResource.Deserialize(value["SourceResource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_sourceResourceHasBeenSet = true;
    }

    if (value.HasMember("TargetResource") && !value["TargetResource"].IsNull())
    {
        if (!value["TargetResource"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDatahubTaskRes.TargetResource` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_targetResource.Deserialize(value["TargetResource"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_targetResourceHasBeenSet = true;
    }

    if (value.HasMember("Connections") && !value["Connections"].IsNull())
    {
        if (!value["Connections"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeDatahubTaskRes.Connections` is not array type"));

        const rapidjson::Value &tmpValue = value["Connections"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Connection item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_connections.push_back(item);
        }
        m_connectionsHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDatahubTaskRes.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("TransformParam") && !value["TransformParam"].IsNull())
    {
        if (!value["TransformParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDatahubTaskRes.TransformParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_transformParam.Deserialize(value["TransformParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_transformParamHasBeenSet = true;
    }

    if (value.HasMember("DatahubId") && !value["DatahubId"].IsNull())
    {
        if (!value["DatahubId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDatahubTaskRes.DatahubId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_datahubId = string(value["DatahubId"].GetString());
        m_datahubIdHasBeenSet = true;
    }

    if (value.HasMember("SchemaId") && !value["SchemaId"].IsNull())
    {
        if (!value["SchemaId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDatahubTaskRes.SchemaId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schemaId = string(value["SchemaId"].GetString());
        m_schemaIdHasBeenSet = true;
    }

    if (value.HasMember("SchemaName") && !value["SchemaName"].IsNull())
    {
        if (!value["SchemaName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDatahubTaskRes.SchemaName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_schemaName = string(value["SchemaName"].GetString());
        m_schemaNameHasBeenSet = true;
    }

    if (value.HasMember("TransformsParam") && !value["TransformsParam"].IsNull())
    {
        if (!value["TransformsParam"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDatahubTaskRes.TransformsParam` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_transformsParam.Deserialize(value["TransformsParam"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_transformsParamHasBeenSet = true;
    }

    if (value.HasMember("ErrorMessage") && !value["ErrorMessage"].IsNull())
    {
        if (!value["ErrorMessage"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `DescribeDatahubTaskRes.ErrorMessage` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorMessage = string(value["ErrorMessage"].GetString());
        m_errorMessageHasBeenSet = true;
    }

    if (value.HasMember("Tags") && !value["Tags"].IsNull())
    {
        if (!value["Tags"].IsArray())
            return CoreInternalOutcome(Core::Error("response `DescribeDatahubTaskRes.Tags` is not array type"));

        const rapidjson::Value &tmpValue = value["Tags"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Tag item;
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

void DescribeDatahubTaskRes::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_taskIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskId.c_str(), allocator).Move(), allocator);
    }

    if (m_taskNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskName.c_str(), allocator).Move(), allocator);
    }

    if (m_taskTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaskType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_taskType.c_str(), allocator).Move(), allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_status, allocator);
    }

    if (m_sourceResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SourceResource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_sourceResource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_targetResourceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TargetResource";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_targetResource.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_connectionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Connections";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_connections.begin(); itr != m_connections.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_transformParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransformParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_transformParam.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_datahubIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DatahubId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_datahubId.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schemaId.c_str(), allocator).Move(), allocator);
    }

    if (m_schemaNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SchemaName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_schemaName.c_str(), allocator).Move(), allocator);
    }

    if (m_transformsParamHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransformsParam";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_transformsParam.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_errorMessageHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorMessage";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorMessage.c_str(), allocator).Move(), allocator);
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


string DescribeDatahubTaskRes::GetTaskId() const
{
    return m_taskId;
}

void DescribeDatahubTaskRes::SetTaskId(const string& _taskId)
{
    m_taskId = _taskId;
    m_taskIdHasBeenSet = true;
}

bool DescribeDatahubTaskRes::TaskIdHasBeenSet() const
{
    return m_taskIdHasBeenSet;
}

string DescribeDatahubTaskRes::GetTaskName() const
{
    return m_taskName;
}

void DescribeDatahubTaskRes::SetTaskName(const string& _taskName)
{
    m_taskName = _taskName;
    m_taskNameHasBeenSet = true;
}

bool DescribeDatahubTaskRes::TaskNameHasBeenSet() const
{
    return m_taskNameHasBeenSet;
}

string DescribeDatahubTaskRes::GetTaskType() const
{
    return m_taskType;
}

void DescribeDatahubTaskRes::SetTaskType(const string& _taskType)
{
    m_taskType = _taskType;
    m_taskTypeHasBeenSet = true;
}

bool DescribeDatahubTaskRes::TaskTypeHasBeenSet() const
{
    return m_taskTypeHasBeenSet;
}

int64_t DescribeDatahubTaskRes::GetStatus() const
{
    return m_status;
}

void DescribeDatahubTaskRes::SetStatus(const int64_t& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool DescribeDatahubTaskRes::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

DatahubResource DescribeDatahubTaskRes::GetSourceResource() const
{
    return m_sourceResource;
}

void DescribeDatahubTaskRes::SetSourceResource(const DatahubResource& _sourceResource)
{
    m_sourceResource = _sourceResource;
    m_sourceResourceHasBeenSet = true;
}

bool DescribeDatahubTaskRes::SourceResourceHasBeenSet() const
{
    return m_sourceResourceHasBeenSet;
}

DatahubResource DescribeDatahubTaskRes::GetTargetResource() const
{
    return m_targetResource;
}

void DescribeDatahubTaskRes::SetTargetResource(const DatahubResource& _targetResource)
{
    m_targetResource = _targetResource;
    m_targetResourceHasBeenSet = true;
}

bool DescribeDatahubTaskRes::TargetResourceHasBeenSet() const
{
    return m_targetResourceHasBeenSet;
}

vector<Connection> DescribeDatahubTaskRes::GetConnections() const
{
    return m_connections;
}

void DescribeDatahubTaskRes::SetConnections(const vector<Connection>& _connections)
{
    m_connections = _connections;
    m_connectionsHasBeenSet = true;
}

bool DescribeDatahubTaskRes::ConnectionsHasBeenSet() const
{
    return m_connectionsHasBeenSet;
}

string DescribeDatahubTaskRes::GetCreateTime() const
{
    return m_createTime;
}

void DescribeDatahubTaskRes::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool DescribeDatahubTaskRes::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

TransformParam DescribeDatahubTaskRes::GetTransformParam() const
{
    return m_transformParam;
}

void DescribeDatahubTaskRes::SetTransformParam(const TransformParam& _transformParam)
{
    m_transformParam = _transformParam;
    m_transformParamHasBeenSet = true;
}

bool DescribeDatahubTaskRes::TransformParamHasBeenSet() const
{
    return m_transformParamHasBeenSet;
}

string DescribeDatahubTaskRes::GetDatahubId() const
{
    return m_datahubId;
}

void DescribeDatahubTaskRes::SetDatahubId(const string& _datahubId)
{
    m_datahubId = _datahubId;
    m_datahubIdHasBeenSet = true;
}

bool DescribeDatahubTaskRes::DatahubIdHasBeenSet() const
{
    return m_datahubIdHasBeenSet;
}

string DescribeDatahubTaskRes::GetSchemaId() const
{
    return m_schemaId;
}

void DescribeDatahubTaskRes::SetSchemaId(const string& _schemaId)
{
    m_schemaId = _schemaId;
    m_schemaIdHasBeenSet = true;
}

bool DescribeDatahubTaskRes::SchemaIdHasBeenSet() const
{
    return m_schemaIdHasBeenSet;
}

string DescribeDatahubTaskRes::GetSchemaName() const
{
    return m_schemaName;
}

void DescribeDatahubTaskRes::SetSchemaName(const string& _schemaName)
{
    m_schemaName = _schemaName;
    m_schemaNameHasBeenSet = true;
}

bool DescribeDatahubTaskRes::SchemaNameHasBeenSet() const
{
    return m_schemaNameHasBeenSet;
}

TransformsParam DescribeDatahubTaskRes::GetTransformsParam() const
{
    return m_transformsParam;
}

void DescribeDatahubTaskRes::SetTransformsParam(const TransformsParam& _transformsParam)
{
    m_transformsParam = _transformsParam;
    m_transformsParamHasBeenSet = true;
}

bool DescribeDatahubTaskRes::TransformsParamHasBeenSet() const
{
    return m_transformsParamHasBeenSet;
}

string DescribeDatahubTaskRes::GetErrorMessage() const
{
    return m_errorMessage;
}

void DescribeDatahubTaskRes::SetErrorMessage(const string& _errorMessage)
{
    m_errorMessage = _errorMessage;
    m_errorMessageHasBeenSet = true;
}

bool DescribeDatahubTaskRes::ErrorMessageHasBeenSet() const
{
    return m_errorMessageHasBeenSet;
}

vector<Tag> DescribeDatahubTaskRes::GetTags() const
{
    return m_tags;
}

void DescribeDatahubTaskRes::SetTags(const vector<Tag>& _tags)
{
    m_tags = _tags;
    m_tagsHasBeenSet = true;
}

bool DescribeDatahubTaskRes::TagsHasBeenSet() const
{
    return m_tagsHasBeenSet;
}

