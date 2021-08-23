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

#include <tencentcloud/cvm/v20170312/model/OperationCountLimit.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cvm::V20170312::Model;
using namespace std;

OperationCountLimit::OperationCountLimit() :
    m_operationHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_currentCountHasBeenSet(false),
    m_limitCountHasBeenSet(false)
{
}

CoreInternalOutcome OperationCountLimit::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Operation") && !value["Operation"].IsNull())
    {
        if (!value["Operation"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperationCountLimit.Operation` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_operation = string(value["Operation"].GetString());
        m_operationHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OperationCountLimit.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("CurrentCount") && !value["CurrentCount"].IsNull())
    {
        if (!value["CurrentCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OperationCountLimit.CurrentCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_currentCount = value["CurrentCount"].GetInt64();
        m_currentCountHasBeenSet = true;
    }

    if (value.HasMember("LimitCount") && !value["LimitCount"].IsNull())
    {
        if (!value["LimitCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `OperationCountLimit.LimitCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_limitCount = value["LimitCount"].GetInt64();
        m_limitCountHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OperationCountLimit::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_operationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Operation";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_operation.c_str(), allocator).Move(), allocator);
    }

    if (m_instanceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceId.c_str(), allocator).Move(), allocator);
    }

    if (m_currentCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CurrentCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_currentCount, allocator);
    }

    if (m_limitCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LimitCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_limitCount, allocator);
    }

}


string OperationCountLimit::GetOperation() const
{
    return m_operation;
}

void OperationCountLimit::SetOperation(const string& _operation)
{
    m_operation = _operation;
    m_operationHasBeenSet = true;
}

bool OperationCountLimit::OperationHasBeenSet() const
{
    return m_operationHasBeenSet;
}

string OperationCountLimit::GetInstanceId() const
{
    return m_instanceId;
}

void OperationCountLimit::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool OperationCountLimit::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

int64_t OperationCountLimit::GetCurrentCount() const
{
    return m_currentCount;
}

void OperationCountLimit::SetCurrentCount(const int64_t& _currentCount)
{
    m_currentCount = _currentCount;
    m_currentCountHasBeenSet = true;
}

bool OperationCountLimit::CurrentCountHasBeenSet() const
{
    return m_currentCountHasBeenSet;
}

int64_t OperationCountLimit::GetLimitCount() const
{
    return m_limitCount;
}

void OperationCountLimit::SetLimitCount(const int64_t& _limitCount)
{
    m_limitCount = _limitCount;
    m_limitCountHasBeenSet = true;
}

bool OperationCountLimit::LimitCountHasBeenSet() const
{
    return m_limitCountHasBeenSet;
}

