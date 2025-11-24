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

#include <tencentcloud/emr/v20190103/model/OperationLog.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Emr::V20190103::Model;
using namespace std;

OperationLog::OperationLog() :
    m_instanceIdHasBeenSet(false),
    m_operationHasBeenSet(false),
    m_operationTypeHasBeenSet(false),
    m_userTypeHasBeenSet(false),
    m_operatorHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_operandHasBeenSet(false),
    m_operationDescHasBeenSet(false),
    m_securityLevelHasBeenSet(false)
{
}

CoreInternalOutcome OperationLog::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OperationLog.InstanceId` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = value["InstanceId"].GetInt64();
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("Operation") && !value["Operation"].IsNull())
    {
        if (!value["Operation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperationLog.Operation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operation = string(value["Operation"].GetString());
        m_operationHasBeenSet = true;
    }

    if (value.HasMember("OperationType") && !value["OperationType"].IsNull())
    {
        if (!value["OperationType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OperationLog.OperationType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_operationType = value["OperationType"].GetInt64();
        m_operationTypeHasBeenSet = true;
    }

    if (value.HasMember("UserType") && !value["UserType"].IsNull())
    {
        if (!value["UserType"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OperationLog.UserType` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_userType = value["UserType"].GetInt64();
        m_userTypeHasBeenSet = true;
    }

    if (value.HasMember("Operator") && !value["Operator"].IsNull())
    {
        if (!value["Operator"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperationLog.Operator` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operator = string(value["Operator"].GetString());
        m_operatorHasBeenSet = true;
    }

    if (value.HasMember("CreateTime") && !value["CreateTime"].IsNull())
    {
        if (!value["CreateTime"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperationLog.CreateTime` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_createTime = string(value["CreateTime"].GetString());
        m_createTimeHasBeenSet = true;
    }

    if (value.HasMember("Operand") && !value["Operand"].IsNull())
    {
        if (!value["Operand"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperationLog.Operand` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operand = string(value["Operand"].GetString());
        m_operandHasBeenSet = true;
    }

    if (value.HasMember("OperationDesc") && !value["OperationDesc"].IsNull())
    {
        if (!value["OperationDesc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperationLog.OperationDesc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operationDesc = string(value["OperationDesc"].GetString());
        m_operationDescHasBeenSet = true;
    }

    if (value.HasMember("SecurityLevel") && !value["SecurityLevel"].IsNull())
    {
        if (!value["SecurityLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperationLog.SecurityLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_securityLevel = string(value["SecurityLevel"].GetString());
        m_securityLevelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OperationLog::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceId, allocator);
    }

    if (m_operationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operation.c_str(), allocator).Move(), allocator);
    }

    if (m_operationTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_operationType, allocator);
    }

    if (m_userTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UserType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_userType, allocator);
    }

    if (m_operatorHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operator";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operator.c_str(), allocator).Move(), allocator);
    }

    if (m_createTimeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CreateTime";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_createTime.c_str(), allocator).Move(), allocator);
    }

    if (m_operandHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operand";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operand.c_str(), allocator).Move(), allocator);
    }

    if (m_operationDescHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OperationDesc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operationDesc.c_str(), allocator).Move(), allocator);
    }

    if (m_securityLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SecurityLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_securityLevel.c_str(), allocator).Move(), allocator);
    }

}


int64_t OperationLog::GetInstanceId() const
{
    return m_instanceId;
}

void OperationLog::SetInstanceId(const int64_t& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool OperationLog::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string OperationLog::GetOperation() const
{
    return m_operation;
}

void OperationLog::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool OperationLog::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

int64_t OperationLog::GetOperationType() const
{
    return m_operationType;
}

void OperationLog::SetOperationType(const int64_t& _operationType)
{
    m_operationType = _operationType;
    m_operationTypeHasBeenSet = true;
}

bool OperationLog::OperationTypeHasBeenSet() const
{
    return m_operationTypeHasBeenSet;
}

int64_t OperationLog::GetUserType() const
{
    return m_userType;
}

void OperationLog::SetUserType(const int64_t& _userType)
{
    m_userType = _userType;
    m_userTypeHasBeenSet = true;
}

bool OperationLog::UserTypeHasBeenSet() const
{
    return m_userTypeHasBeenSet;
}

string OperationLog::GetOperator() const
{
    return m_operator;
}

void OperationLog::SetOperator(const string& _operator)
{
    m_operator = _operator;
    m_operatorHasBeenSet = true;
}

bool OperationLog::OperatorHasBeenSet() const
{
    return m_operatorHasBeenSet;
}

string OperationLog::GetCreateTime() const
{
    return m_createTime;
}

void OperationLog::SetCreateTime(const string& _createTime)
{
    m_createTime = _createTime;
    m_createTimeHasBeenSet = true;
}

bool OperationLog::CreateTimeHasBeenSet() const
{
    return m_createTimeHasBeenSet;
}

string OperationLog::GetOperand() const
{
    return m_operand;
}

void OperationLog::SetOperand(const string& _operand)
{
    m_operand = _operand;
    m_operandHasBeenSet = true;
}

bool OperationLog::OperandHasBeenSet() const
{
    return m_operandHasBeenSet;
}

string OperationLog::GetOperationDesc() const
{
    return m_operationDesc;
}

void OperationLog::SetOperationDesc(const string& _operationDesc)
{
    m_operationDesc = _operationDesc;
    m_operationDescHasBeenSet = true;
}

bool OperationLog::OperationDescHasBeenSet() const
{
    return m_operationDescHasBeenSet;
}

string OperationLog::GetSecurityLevel() const
{
    return m_securityLevel;
}

void OperationLog::SetSecurityLevel(const string& _securityLevel)
{
    m_securityLevel = _securityLevel;
    m_securityLevelHasBeenSet = true;
}

bool OperationLog::SecurityLevelHasBeenSet() const
{
    return m_securityLevelHasBeenSet;
}

