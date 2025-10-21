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

#include <tencentcloud/dlc/v20210125/model/SparkSessionInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dlc::V20210125::Model;
using namespace std;

SparkSessionInfo::SparkSessionInfo() :
    m_sparkSessionIdHasBeenSet(false),
    m_sparkSessionNameHasBeenSet(false),
    m_resourceGroupIdHasBeenSet(false),
    m_engineSessionIdHasBeenSet(false),
    m_engineSessionNameHasBeenSet(false),
    m_idleTimeoutMinHasBeenSet(false),
    m_driverSpecHasBeenSet(false),
    m_executorSpecHasBeenSet(false),
    m_executorNumMinHasBeenSet(false),
    m_executorNumMaxHasBeenSet(false),
    m_totalSpecMinHasBeenSet(false),
    m_totalSpecMaxHasBeenSet(false)
{
}

CoreInternalOutcome SparkSessionInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("SparkSessionId") && !value["SparkSessionId"].IsNull())
    {
        if (!value["SparkSessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkSessionInfo.SparkSessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sparkSessionId = string(value["SparkSessionId"].GetString());
        m_sparkSessionIdHasBeenSet = true;
    }

    if (value.HasMember("SparkSessionName") && !value["SparkSessionName"].IsNull())
    {
        if (!value["SparkSessionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkSessionInfo.SparkSessionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_sparkSessionName = string(value["SparkSessionName"].GetString());
        m_sparkSessionNameHasBeenSet = true;
    }

    if (value.HasMember("ResourceGroupId") && !value["ResourceGroupId"].IsNull())
    {
        if (!value["ResourceGroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkSessionInfo.ResourceGroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_resourceGroupId = string(value["ResourceGroupId"].GetString());
        m_resourceGroupIdHasBeenSet = true;
    }

    if (value.HasMember("EngineSessionId") && !value["EngineSessionId"].IsNull())
    {
        if (!value["EngineSessionId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkSessionInfo.EngineSessionId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineSessionId = string(value["EngineSessionId"].GetString());
        m_engineSessionIdHasBeenSet = true;
    }

    if (value.HasMember("EngineSessionName") && !value["EngineSessionName"].IsNull())
    {
        if (!value["EngineSessionName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkSessionInfo.EngineSessionName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_engineSessionName = string(value["EngineSessionName"].GetString());
        m_engineSessionNameHasBeenSet = true;
    }

    if (value.HasMember("IdleTimeoutMin") && !value["IdleTimeoutMin"].IsNull())
    {
        if (!value["IdleTimeoutMin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SparkSessionInfo.IdleTimeoutMin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_idleTimeoutMin = value["IdleTimeoutMin"].GetInt64();
        m_idleTimeoutMinHasBeenSet = true;
    }

    if (value.HasMember("DriverSpec") && !value["DriverSpec"].IsNull())
    {
        if (!value["DriverSpec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkSessionInfo.DriverSpec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_driverSpec = string(value["DriverSpec"].GetString());
        m_driverSpecHasBeenSet = true;
    }

    if (value.HasMember("ExecutorSpec") && !value["ExecutorSpec"].IsNull())
    {
        if (!value["ExecutorSpec"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SparkSessionInfo.ExecutorSpec` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_executorSpec = string(value["ExecutorSpec"].GetString());
        m_executorSpecHasBeenSet = true;
    }

    if (value.HasMember("ExecutorNumMin") && !value["ExecutorNumMin"].IsNull())
    {
        if (!value["ExecutorNumMin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SparkSessionInfo.ExecutorNumMin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_executorNumMin = value["ExecutorNumMin"].GetInt64();
        m_executorNumMinHasBeenSet = true;
    }

    if (value.HasMember("ExecutorNumMax") && !value["ExecutorNumMax"].IsNull())
    {
        if (!value["ExecutorNumMax"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SparkSessionInfo.ExecutorNumMax` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_executorNumMax = value["ExecutorNumMax"].GetInt64();
        m_executorNumMaxHasBeenSet = true;
    }

    if (value.HasMember("TotalSpecMin") && !value["TotalSpecMin"].IsNull())
    {
        if (!value["TotalSpecMin"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SparkSessionInfo.TotalSpecMin` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalSpecMin = value["TotalSpecMin"].GetInt64();
        m_totalSpecMinHasBeenSet = true;
    }

    if (value.HasMember("TotalSpecMax") && !value["TotalSpecMax"].IsNull())
    {
        if (!value["TotalSpecMax"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `SparkSessionInfo.TotalSpecMax` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_totalSpecMax = value["TotalSpecMax"].GetInt64();
        m_totalSpecMaxHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SparkSessionInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_sparkSessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SparkSessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sparkSessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_sparkSessionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SparkSessionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_sparkSessionName.c_str(), allocator).Move(), allocator);
    }

    if (m_resourceGroupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ResourceGroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_resourceGroupId.c_str(), allocator).Move(), allocator);
    }

    if (m_engineSessionIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineSessionId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineSessionId.c_str(), allocator).Move(), allocator);
    }

    if (m_engineSessionNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EngineSessionName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_engineSessionName.c_str(), allocator).Move(), allocator);
    }

    if (m_idleTimeoutMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "IdleTimeoutMin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_idleTimeoutMin, allocator);
    }

    if (m_driverSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DriverSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_driverSpec.c_str(), allocator).Move(), allocator);
    }

    if (m_executorSpecHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorSpec";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_executorSpec.c_str(), allocator).Move(), allocator);
    }

    if (m_executorNumMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorNumMin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_executorNumMin, allocator);
    }

    if (m_executorNumMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ExecutorNumMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_executorNumMax, allocator);
    }

    if (m_totalSpecMinHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalSpecMin";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalSpecMin, allocator);
    }

    if (m_totalSpecMaxHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TotalSpecMax";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_totalSpecMax, allocator);
    }

}


string SparkSessionInfo::GetSparkSessionId() const
{
    return m_sparkSessionId;
}

void SparkSessionInfo::SetSparkSessionId(const string& _sparkSessionId)
{
    m_sparkSessionId = _sparkSessionId;
    m_sparkSessionIdHasBeenSet = true;
}

bool SparkSessionInfo::SparkSessionIdHasBeenSet() const
{
    return m_sparkSessionIdHasBeenSet;
}

string SparkSessionInfo::GetSparkSessionName() const
{
    return m_sparkSessionName;
}

void SparkSessionInfo::SetSparkSessionName(const string& _sparkSessionName)
{
    m_sparkSessionName = _sparkSessionName;
    m_sparkSessionNameHasBeenSet = true;
}

bool SparkSessionInfo::SparkSessionNameHasBeenSet() const
{
    return m_sparkSessionNameHasBeenSet;
}

string SparkSessionInfo::GetResourceGroupId() const
{
    return m_resourceGroupId;
}

void SparkSessionInfo::SetResourceGroupId(const string& _resourceGroupId)
{
    m_resourceGroupId = _resourceGroupId;
    m_resourceGroupIdHasBeenSet = true;
}

bool SparkSessionInfo::ResourceGroupIdHasBeenSet() const
{
    return m_resourceGroupIdHasBeenSet;
}

string SparkSessionInfo::GetEngineSessionId() const
{
    return m_engineSessionId;
}

void SparkSessionInfo::SetEngineSessionId(const string& _engineSessionId)
{
    m_engineSessionId = _engineSessionId;
    m_engineSessionIdHasBeenSet = true;
}

bool SparkSessionInfo::EngineSessionIdHasBeenSet() const
{
    return m_engineSessionIdHasBeenSet;
}

string SparkSessionInfo::GetEngineSessionName() const
{
    return m_engineSessionName;
}

void SparkSessionInfo::SetEngineSessionName(const string& _engineSessionName)
{
    m_engineSessionName = _engineSessionName;
    m_engineSessionNameHasBeenSet = true;
}

bool SparkSessionInfo::EngineSessionNameHasBeenSet() const
{
    return m_engineSessionNameHasBeenSet;
}

int64_t SparkSessionInfo::GetIdleTimeoutMin() const
{
    return m_idleTimeoutMin;
}

void SparkSessionInfo::SetIdleTimeoutMin(const int64_t& _idleTimeoutMin)
{
    m_idleTimeoutMin = _idleTimeoutMin;
    m_idleTimeoutMinHasBeenSet = true;
}

bool SparkSessionInfo::IdleTimeoutMinHasBeenSet() const
{
    return m_idleTimeoutMinHasBeenSet;
}

string SparkSessionInfo::GetDriverSpec() const
{
    return m_driverSpec;
}

void SparkSessionInfo::SetDriverSpec(const string& _driverSpec)
{
    m_driverSpec = _driverSpec;
    m_driverSpecHasBeenSet = true;
}

bool SparkSessionInfo::DriverSpecHasBeenSet() const
{
    return m_driverSpecHasBeenSet;
}

string SparkSessionInfo::GetExecutorSpec() const
{
    return m_executorSpec;
}

void SparkSessionInfo::SetExecutorSpec(const string& _executorSpec)
{
    m_executorSpec = _executorSpec;
    m_executorSpecHasBeenSet = true;
}

bool SparkSessionInfo::ExecutorSpecHasBeenSet() const
{
    return m_executorSpecHasBeenSet;
}

int64_t SparkSessionInfo::GetExecutorNumMin() const
{
    return m_executorNumMin;
}

void SparkSessionInfo::SetExecutorNumMin(const int64_t& _executorNumMin)
{
    m_executorNumMin = _executorNumMin;
    m_executorNumMinHasBeenSet = true;
}

bool SparkSessionInfo::ExecutorNumMinHasBeenSet() const
{
    return m_executorNumMinHasBeenSet;
}

int64_t SparkSessionInfo::GetExecutorNumMax() const
{
    return m_executorNumMax;
}

void SparkSessionInfo::SetExecutorNumMax(const int64_t& _executorNumMax)
{
    m_executorNumMax = _executorNumMax;
    m_executorNumMaxHasBeenSet = true;
}

bool SparkSessionInfo::ExecutorNumMaxHasBeenSet() const
{
    return m_executorNumMaxHasBeenSet;
}

int64_t SparkSessionInfo::GetTotalSpecMin() const
{
    return m_totalSpecMin;
}

void SparkSessionInfo::SetTotalSpecMin(const int64_t& _totalSpecMin)
{
    m_totalSpecMin = _totalSpecMin;
    m_totalSpecMinHasBeenSet = true;
}

bool SparkSessionInfo::TotalSpecMinHasBeenSet() const
{
    return m_totalSpecMinHasBeenSet;
}

int64_t SparkSessionInfo::GetTotalSpecMax() const
{
    return m_totalSpecMax;
}

void SparkSessionInfo::SetTotalSpecMax(const int64_t& _totalSpecMax)
{
    m_totalSpecMax = _totalSpecMax;
    m_totalSpecMaxHasBeenSet = true;
}

bool SparkSessionInfo::TotalSpecMaxHasBeenSet() const
{
    return m_totalSpecMaxHasBeenSet;
}

