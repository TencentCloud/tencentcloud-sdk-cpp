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

#include <tencentcloud/iotcloud/v20180614/model/ProductTaskInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Iotcloud::V20180614::Model;
using namespace std;

ProductTaskInfo::ProductTaskInfo() :
    m_idHasBeenSet(false),
    m_typeHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_parametersTypeHasBeenSet(false),
    m_parametersHasBeenSet(false),
    m_resultTypeHasBeenSet(false),
    m_resultHasBeenSet(false),
    m_batchCountHasBeenSet(false),
    m_batchOffsetHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_updateTimeHasBeenSet(false),
    m_completeTimeHasBeenSet(false)
{
}

CoreInternalOutcome ProductTaskInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Id") && !value["Id"].IsNull())
    {
        if (!value["Id"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductTaskInfo.Id` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_id = value["Id"].GetUint64();
        m_idHasBeenSet = true;
    }

    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductTaskInfo.Type` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_type = value["Type"].GetUint64();
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("State") && !value["State"].IsNull())
    {
        if (!value["State"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductTaskInfo.State` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_state = value["State"].GetUint64();
        m_stateHasBeenSet = true;
    }

    if (value.HasMember("ParametersType") && !value["ParametersType"].IsNull())
    {
        if (!value["ParametersType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductTaskInfo.ParametersType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parametersType = string(value["ParametersType"].GetString());
        m_parametersTypeHasBeenSet = true;
    }

    if (value.HasMember("Parameters") && !value["Parameters"].IsNull())
    {
        if (!value["Parameters"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductTaskInfo.Parameters` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_parameters = string(value["Parameters"].GetString());
        m_parametersHasBeenSet = true;
    }

    if (value.HasMember("ResultType") && !value["ResultType"].IsNull())
    {
        if (!value["ResultType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductTaskInfo.ResultType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resultType = string(value["ResultType"].GetString());
        m_resultTypeHasBeenSet = true;
    }

    if (value.HasMember("Result") && !value["Result"].IsNull())
    {
        if (!value["Result"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ProductTaskInfo.Result` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_result = string(value["Result"].GetString());
        m_resultHasBeenSet = true;
    }

    if (value.HasMember("BatchCount") && !value["BatchCount"].IsNull())
    {
        if (!value["BatchCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductTaskInfo.BatchCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_batchCount = value["BatchCount"].GetUint64();
        m_batchCountHasBeenSet = true;
    }

    if (value.HasMember("BatchOffset") && !value["BatchOffset"].IsNull())
    {
        if (!value["BatchOffset"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductTaskInfo.BatchOffset` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_batchOffset = value["BatchOffset"].GetUint64();
        m_batchOffsetHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductTaskInfo.CreateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = value["CreateTime"].GetUint64();
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("UpdateTime") && !value["UpdateTime"].IsNull())
    {
        if (!value["UpdateTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductTaskInfo.UpdateTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_updateTime = value["UpdateTime"].GetUint64();
        m_updateTimeHasBeenSet = true;
    }

    if (value.HasMember("CompleteTime") && !value["CompleteTime"].IsNull())
    {
        if (!value["CompleteTime"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ProductTaskInfo.CompleteTime` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_completeTime = value["CompleteTime"].GetUint64();
        m_completeTimeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ProductTaskInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_idHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Id";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_id, allocator);
    }

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_type, allocator);
    }

    if (m_stateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "State";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_state, allocator);
    }

    if (m_parametersTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ParametersType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parametersType.c_str(), allocator).Move(), allocator);
    }

    if (m_parametersHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Parameters";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_parameters.c_str(), allocator).Move(), allocator);
    }

    if (m_resultTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResultType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resultType.c_str(), allocator).Move(), allocator);
    }

    if (m_resultHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Result";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_result.c_str(), allocator).Move(), allocator);
    }

    if (m_batchCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_batchCount, allocator);
    }

    if (m_batchOffsetHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BatchOffset";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_batchOffset, allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_createTime, allocator);
    }

    if (m_updateTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UpdateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_updateTime, allocator);
    }

    if (m_completeTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CompleteTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_completeTime, allocator);
    }

}


uint64_t ProductTaskInfo::GetId() const
{
    return m_id;
}

void ProductTaskInfo::SetId(const uint64_t& _id)
{
    m_id = _id;
    m_idHasBeenSet = true;
}

bool ProductTaskInfo::IdHasBeenSet() const
{
    return m_idHasBeenSet;
}

uint64_t ProductTaskInfo::GetType() const
{
    return m_type;
}

void ProductTaskInfo::SetType(const uint64_t& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool ProductTaskInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

uint64_t ProductTaskInfo::GetState() const
{
    return m_state;
}

void ProductTaskInfo::SetState(const uint64_t& _state)
{
    m_state = _state;
    m_stateHasBeenSet = true;
}

bool ProductTaskInfo::StateHasBeenSet() const
{
    return m_stateHasBeenSet;
}

string ProductTaskInfo::GetParametersType() const
{
    return m_parametersType;
}

void ProductTaskInfo::SetParametersType(const string& _parametersType)
{
    m_parametersType = _parametersType;
    m_parametersTypeHasBeenSet = true;
}

bool ProductTaskInfo::ParametersTypeHasBeenSet() const
{
    return m_parametersTypeHasBeenSet;
}

string ProductTaskInfo::GetParameters() const
{
    return m_parameters;
}

void ProductTaskInfo::SetParameters(const string& _parameters)
{
    m_parameters = _parameters;
    m_parametersHasBeenSet = true;
}

bool ProductTaskInfo::ParametersHasBeenSet() const
{
    return m_parametersHasBeenSet;
}

string ProductTaskInfo::GetResultType() const
{
    return m_resultType;
}

void ProductTaskInfo::SetResultType(const string& _resultType)
{
    m_resultType = _resultType;
    m_resultTypeHasBeenSet = true;
}

bool ProductTaskInfo::ResultTypeHasBeenSet() const
{
    return m_resultTypeHasBeenSet;
}

string ProductTaskInfo::GetResult() const
{
    return m_result;
}

void ProductTaskInfo::SetResult(const string& _result)
{
    m_result = _result;
    m_resultHasBeenSet = true;
}

bool ProductTaskInfo::ResultHasBeenSet() const
{
    return m_resultHasBeenSet;
}

uint64_t ProductTaskInfo::GetBatchCount() const
{
    return m_batchCount;
}

void ProductTaskInfo::SetBatchCount(const uint64_t& _batchCount)
{
    m_batchCount = _batchCount;
    m_batchCountHasBeenSet = true;
}

bool ProductTaskInfo::BatchCountHasBeenSet() const
{
    return m_batchCountHasBeenSet;
}

uint64_t ProductTaskInfo::GetBatchOffset() const
{
    return m_batchOffset;
}

void ProductTaskInfo::SetBatchOffset(const uint64_t& _batchOffset)
{
    m_batchOffset = _batchOffset;
    m_batchOffsetHasBeenSet = true;
}

bool ProductTaskInfo::BatchOffsetHasBeenSet() const
{
    return m_batchOffsetHasBeenSet;
}

uint64_t ProductTaskInfo::GetCreateTime() const
{
    return m_createTime;
}

void ProductTaskInfo::SetCreateTime(const uint64_t& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool ProductTaskInfo::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

uint64_t ProductTaskInfo::GetUpdateTime() const
{
    return m_updateTime;
}

void ProductTaskInfo::SetUpdateTime(const uint64_t& _updateTime)
{
    m_updateTime = _updateTime;
    m_updateTimeHasBeenSet = true;
}

bool ProductTaskInfo::UpdateTimeHasBeenSet() const
{
    return m_updateTimeHasBeenSet;
}

uint64_t ProductTaskInfo::GetCompleteTime() const
{
    return m_completeTime;
}

void ProductTaskInfo::SetCompleteTime(const uint64_t& _completeTime)
{
    m_completeTime = _completeTime;
    m_completeTimeHasBeenSet = true;
}

bool ProductTaskInfo::CompleteTimeHasBeenSet() const
{
    return m_completeTimeHasBeenSet;
}

