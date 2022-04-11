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

#include <tencentcloud/tsf/v20180326/model/ServiceStatisticsResult.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Tsf::V20180326::Model;
using namespace std;

ServiceStatisticsResult::ServiceStatisticsResult() :
    m_pathHasBeenSet(false),
    m_methodHasBeenSet(false),
    m_microserviceIdHasBeenSet(false),
    m_microserviceNameHasBeenSet(false),
    m_requestCountHasBeenSet(false),
    m_errorRateHasBeenSet(false),
    m_avgTimeConsumingHasBeenSet(false),
    m_metricDataCurvesHasBeenSet(false),
    m_instanceIdHasBeenSet(false),
    m_instanceNameHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_clusterTypeHasBeenSet(false),
    m_groupExistHasBeenSet(false),
    m_instanceExistHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_microserviceTypeHasBeenSet(false),
    m_cpuPercentHasBeenSet(false),
    m_heapUsedHasBeenSet(false),
    m_dbNameHasBeenSet(false),
    m_scriptHasBeenSet(false),
    m_dbTypeHasBeenSet(false),
    m_apdexHasBeenSet(false),
    m_qpsHasBeenSet(false),
    m_instanceOnlineCountHasBeenSet(false),
    m_instanceTotalCountHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_errorRateLevelHasBeenSet(false),
    m_avgTimeConsumingLevelHasBeenSet(false),
    m_apdexLevelHasBeenSet(false)
{
}

CoreInternalOutcome ServiceStatisticsResult::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceStatisticsResult.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }

    if (value.HasMember("Method") && !value["Method"].IsNull())
    {
        if (!value["Method"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceStatisticsResult.Method` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_method = string(value["Method"].GetString());
        m_methodHasBeenSet = true;
    }

    if (value.HasMember("MicroserviceId") && !value["MicroserviceId"].IsNull())
    {
        if (!value["MicroserviceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceStatisticsResult.MicroserviceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_microserviceId = string(value["MicroserviceId"].GetString());
        m_microserviceIdHasBeenSet = true;
    }

    if (value.HasMember("MicroserviceName") && !value["MicroserviceName"].IsNull())
    {
        if (!value["MicroserviceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceStatisticsResult.MicroserviceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_microserviceName = string(value["MicroserviceName"].GetString());
        m_microserviceNameHasBeenSet = true;
    }

    if (value.HasMember("RequestCount") && !value["RequestCount"].IsNull())
    {
        if (!value["RequestCount"].IsUint64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceStatisticsResult.RequestCount` IsUint64=false incorrectly").SetRequestId(requestId));
        }
        m_requestCount = value["RequestCount"].GetUint64();
        m_requestCountHasBeenSet = true;
    }

    if (value.HasMember("ErrorRate") && !value["ErrorRate"].IsNull())
    {
        if (!value["ErrorRate"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceStatisticsResult.ErrorRate` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_errorRate = value["ErrorRate"].GetDouble();
        m_errorRateHasBeenSet = true;
    }

    if (value.HasMember("AvgTimeConsuming") && !value["AvgTimeConsuming"].IsNull())
    {
        if (!value["AvgTimeConsuming"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceStatisticsResult.AvgTimeConsuming` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_avgTimeConsuming = value["AvgTimeConsuming"].GetDouble();
        m_avgTimeConsumingHasBeenSet = true;
    }

    if (value.HasMember("MetricDataCurves") && !value["MetricDataCurves"].IsNull())
    {
        if (!value["MetricDataCurves"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ServiceStatisticsResult.MetricDataCurves` is not array type"));

        const rapidjson::Value &tmpValue = value["MetricDataCurves"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            MetricDataCurve item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_metricDataCurves.push_back(item);
        }
        m_metricDataCurvesHasBeenSet = true;
    }

    if (value.HasMember("InstanceId") && !value["InstanceId"].IsNull())
    {
        if (!value["InstanceId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceStatisticsResult.InstanceId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceId = string(value["InstanceId"].GetString());
        m_instanceIdHasBeenSet = true;
    }

    if (value.HasMember("InstanceName") && !value["InstanceName"].IsNull())
    {
        if (!value["InstanceName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceStatisticsResult.InstanceName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_instanceName = string(value["InstanceName"].GetString());
        m_instanceNameHasBeenSet = true;
    }

    if (value.HasMember("GroupId") && !value["GroupId"].IsNull())
    {
        if (!value["GroupId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceStatisticsResult.GroupId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupId = string(value["GroupId"].GetString());
        m_groupIdHasBeenSet = true;
    }

    if (value.HasMember("GroupName") && !value["GroupName"].IsNull())
    {
        if (!value["GroupName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceStatisticsResult.GroupName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_groupName = string(value["GroupName"].GetString());
        m_groupNameHasBeenSet = true;
    }

    if (value.HasMember("ClusterType") && !value["ClusterType"].IsNull())
    {
        if (!value["ClusterType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceStatisticsResult.ClusterType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_clusterType = string(value["ClusterType"].GetString());
        m_clusterTypeHasBeenSet = true;
    }

    if (value.HasMember("GroupExist") && !value["GroupExist"].IsNull())
    {
        if (!value["GroupExist"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceStatisticsResult.GroupExist` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_groupExist = value["GroupExist"].GetInt64();
        m_groupExistHasBeenSet = true;
    }

    if (value.HasMember("InstanceExist") && !value["InstanceExist"].IsNull())
    {
        if (!value["InstanceExist"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceStatisticsResult.InstanceExist` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceExist = value["InstanceExist"].GetInt64();
        m_instanceExistHasBeenSet = true;
    }

    if (value.HasMember("ApplicationId") && !value["ApplicationId"].IsNull())
    {
        if (!value["ApplicationId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceStatisticsResult.ApplicationId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_applicationId = string(value["ApplicationId"].GetString());
        m_applicationIdHasBeenSet = true;
    }

    if (value.HasMember("MicroserviceType") && !value["MicroserviceType"].IsNull())
    {
        if (!value["MicroserviceType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceStatisticsResult.MicroserviceType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_microserviceType = string(value["MicroserviceType"].GetString());
        m_microserviceTypeHasBeenSet = true;
    }

    if (value.HasMember("CpuPercent") && !value["CpuPercent"].IsNull())
    {
        if (!value["CpuPercent"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceStatisticsResult.CpuPercent` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_cpuPercent = value["CpuPercent"].GetInt64();
        m_cpuPercentHasBeenSet = true;
    }

    if (value.HasMember("HeapUsed") && !value["HeapUsed"].IsNull())
    {
        if (!value["HeapUsed"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceStatisticsResult.HeapUsed` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_heapUsed = value["HeapUsed"].GetInt64();
        m_heapUsedHasBeenSet = true;
    }

    if (value.HasMember("DbName") && !value["DbName"].IsNull())
    {
        if (!value["DbName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceStatisticsResult.DbName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbName = string(value["DbName"].GetString());
        m_dbNameHasBeenSet = true;
    }

    if (value.HasMember("Script") && !value["Script"].IsNull())
    {
        if (!value["Script"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceStatisticsResult.Script` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_script = string(value["Script"].GetString());
        m_scriptHasBeenSet = true;
    }

    if (value.HasMember("DbType") && !value["DbType"].IsNull())
    {
        if (!value["DbType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceStatisticsResult.DbType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dbType = string(value["DbType"].GetString());
        m_dbTypeHasBeenSet = true;
    }

    if (value.HasMember("Apdex") && !value["Apdex"].IsNull())
    {
        if (!value["Apdex"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceStatisticsResult.Apdex` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_apdex = value["Apdex"].GetDouble();
        m_apdexHasBeenSet = true;
    }

    if (value.HasMember("Qps") && !value["Qps"].IsNull())
    {
        if (!value["Qps"].IsLosslessDouble())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceStatisticsResult.Qps` IsLosslessDouble=false incorrectly").SetRequestId(requestId));
        }
        m_qps = value["Qps"].GetDouble();
        m_qpsHasBeenSet = true;
    }

    if (value.HasMember("InstanceOnlineCount") && !value["InstanceOnlineCount"].IsNull())
    {
        if (!value["InstanceOnlineCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceStatisticsResult.InstanceOnlineCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceOnlineCount = value["InstanceOnlineCount"].GetInt64();
        m_instanceOnlineCountHasBeenSet = true;
    }

    if (value.HasMember("InstanceTotalCount") && !value["InstanceTotalCount"].IsNull())
    {
        if (!value["InstanceTotalCount"].IsInt64())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceStatisticsResult.InstanceTotalCount` IsInt64=false incorrectly").SetRequestId(requestId));
        }
        m_instanceTotalCount = value["InstanceTotalCount"].GetInt64();
        m_instanceTotalCountHasBeenSet = true;
    }

    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceStatisticsResult.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("ErrorRateLevel") && !value["ErrorRateLevel"].IsNull())
    {
        if (!value["ErrorRateLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceStatisticsResult.ErrorRateLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_errorRateLevel = string(value["ErrorRateLevel"].GetString());
        m_errorRateLevelHasBeenSet = true;
    }

    if (value.HasMember("AvgTimeConsumingLevel") && !value["AvgTimeConsumingLevel"].IsNull())
    {
        if (!value["AvgTimeConsumingLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceStatisticsResult.AvgTimeConsumingLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_avgTimeConsumingLevel = string(value["AvgTimeConsumingLevel"].GetString());
        m_avgTimeConsumingLevelHasBeenSet = true;
    }

    if (value.HasMember("ApdexLevel") && !value["ApdexLevel"].IsNull())
    {
        if (!value["ApdexLevel"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `ServiceStatisticsResult.ApdexLevel` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_apdexLevel = string(value["ApdexLevel"].GetString());
        m_apdexLevelHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void ServiceStatisticsResult::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

    if (m_methodHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Method";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_method.c_str(), allocator).Move(), allocator);
    }

    if (m_microserviceIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MicroserviceId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_microserviceId.c_str(), allocator).Move(), allocator);
    }

    if (m_microserviceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MicroserviceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_microserviceName.c_str(), allocator).Move(), allocator);
    }

    if (m_requestCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "RequestCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_requestCount, allocator);
    }

    if (m_errorRateHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorRate";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_errorRate, allocator);
    }

    if (m_avgTimeConsumingHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgTimeConsuming";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_avgTimeConsuming, allocator);
    }

    if (m_metricDataCurvesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MetricDataCurves";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_metricDataCurves.begin(); itr != m_metricDataCurves.end(); ++itr, ++i)
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

    if (m_instanceNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_instanceName.c_str(), allocator).Move(), allocator);
    }

    if (m_groupIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupId.c_str(), allocator).Move(), allocator);
    }

    if (m_groupNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_groupName.c_str(), allocator).Move(), allocator);
    }

    if (m_clusterTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ClusterType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_clusterType.c_str(), allocator).Move(), allocator);
    }

    if (m_groupExistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "GroupExist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_groupExist, allocator);
    }

    if (m_instanceExistHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceExist";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceExist, allocator);
    }

    if (m_applicationIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApplicationId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_applicationId.c_str(), allocator).Move(), allocator);
    }

    if (m_microserviceTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MicroserviceType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_microserviceType.c_str(), allocator).Move(), allocator);
    }

    if (m_cpuPercentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CpuPercent";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_cpuPercent, allocator);
    }

    if (m_heapUsedHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "HeapUsed";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_heapUsed, allocator);
    }

    if (m_dbNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbName.c_str(), allocator).Move(), allocator);
    }

    if (m_scriptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Script";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_script.c_str(), allocator).Move(), allocator);
    }

    if (m_dbTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DbType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dbType.c_str(), allocator).Move(), allocator);
    }

    if (m_apdexHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Apdex";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_apdex, allocator);
    }

    if (m_qpsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Qps";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_qps, allocator);
    }

    if (m_instanceOnlineCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceOnlineCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceOnlineCount, allocator);
    }

    if (m_instanceTotalCountHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "InstanceTotalCount";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, m_instanceTotalCount, allocator);
    }

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_errorRateLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ErrorRateLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_errorRateLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_avgTimeConsumingLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AvgTimeConsumingLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_avgTimeConsumingLevel.c_str(), allocator).Move(), allocator);
    }

    if (m_apdexLevelHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ApdexLevel";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_apdexLevel.c_str(), allocator).Move(), allocator);
    }

}


string ServiceStatisticsResult::GetPath() const
{
    return m_path;
}

void ServiceStatisticsResult::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool ServiceStatisticsResult::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

string ServiceStatisticsResult::GetMethod() const
{
    return m_method;
}

void ServiceStatisticsResult::SetMethod(const string& _method)
{
    m_method = _method;
    m_methodHasBeenSet = true;
}

bool ServiceStatisticsResult::MethodHasBeenSet() const
{
    return m_methodHasBeenSet;
}

string ServiceStatisticsResult::GetMicroserviceId() const
{
    return m_microserviceId;
}

void ServiceStatisticsResult::SetMicroserviceId(const string& _microserviceId)
{
    m_microserviceId = _microserviceId;
    m_microserviceIdHasBeenSet = true;
}

bool ServiceStatisticsResult::MicroserviceIdHasBeenSet() const
{
    return m_microserviceIdHasBeenSet;
}

string ServiceStatisticsResult::GetMicroserviceName() const
{
    return m_microserviceName;
}

void ServiceStatisticsResult::SetMicroserviceName(const string& _microserviceName)
{
    m_microserviceName = _microserviceName;
    m_microserviceNameHasBeenSet = true;
}

bool ServiceStatisticsResult::MicroserviceNameHasBeenSet() const
{
    return m_microserviceNameHasBeenSet;
}

uint64_t ServiceStatisticsResult::GetRequestCount() const
{
    return m_requestCount;
}

void ServiceStatisticsResult::SetRequestCount(const uint64_t& _requestCount)
{
    m_requestCount = _requestCount;
    m_requestCountHasBeenSet = true;
}

bool ServiceStatisticsResult::RequestCountHasBeenSet() const
{
    return m_requestCountHasBeenSet;
}

double ServiceStatisticsResult::GetErrorRate() const
{
    return m_errorRate;
}

void ServiceStatisticsResult::SetErrorRate(const double& _errorRate)
{
    m_errorRate = _errorRate;
    m_errorRateHasBeenSet = true;
}

bool ServiceStatisticsResult::ErrorRateHasBeenSet() const
{
    return m_errorRateHasBeenSet;
}

double ServiceStatisticsResult::GetAvgTimeConsuming() const
{
    return m_avgTimeConsuming;
}

void ServiceStatisticsResult::SetAvgTimeConsuming(const double& _avgTimeConsuming)
{
    m_avgTimeConsuming = _avgTimeConsuming;
    m_avgTimeConsumingHasBeenSet = true;
}

bool ServiceStatisticsResult::AvgTimeConsumingHasBeenSet() const
{
    return m_avgTimeConsumingHasBeenSet;
}

vector<MetricDataCurve> ServiceStatisticsResult::GetMetricDataCurves() const
{
    return m_metricDataCurves;
}

void ServiceStatisticsResult::SetMetricDataCurves(const vector<MetricDataCurve>& _metricDataCurves)
{
    m_metricDataCurves = _metricDataCurves;
    m_metricDataCurvesHasBeenSet = true;
}

bool ServiceStatisticsResult::MetricDataCurvesHasBeenSet() const
{
    return m_metricDataCurvesHasBeenSet;
}

string ServiceStatisticsResult::GetInstanceId() const
{
    return m_instanceId;
}

void ServiceStatisticsResult::SetInstanceId(const string& _instanceId)
{
    m_instanceId = _instanceId;
    m_instanceIdHasBeenSet = true;
}

bool ServiceStatisticsResult::InstanceIdHasBeenSet() const
{
    return m_instanceIdHasBeenSet;
}

string ServiceStatisticsResult::GetInstanceName() const
{
    return m_instanceName;
}

void ServiceStatisticsResult::SetInstanceName(const string& _instanceName)
{
    m_instanceName = _instanceName;
    m_instanceNameHasBeenSet = true;
}

bool ServiceStatisticsResult::InstanceNameHasBeenSet() const
{
    return m_instanceNameHasBeenSet;
}

string ServiceStatisticsResult::GetGroupId() const
{
    return m_groupId;
}

void ServiceStatisticsResult::SetGroupId(const string& _groupId)
{
    m_groupId = _groupId;
    m_groupIdHasBeenSet = true;
}

bool ServiceStatisticsResult::GroupIdHasBeenSet() const
{
    return m_groupIdHasBeenSet;
}

string ServiceStatisticsResult::GetGroupName() const
{
    return m_groupName;
}

void ServiceStatisticsResult::SetGroupName(const string& _groupName)
{
    m_groupName = _groupName;
    m_groupNameHasBeenSet = true;
}

bool ServiceStatisticsResult::GroupNameHasBeenSet() const
{
    return m_groupNameHasBeenSet;
}

string ServiceStatisticsResult::GetClusterType() const
{
    return m_clusterType;
}

void ServiceStatisticsResult::SetClusterType(const string& _clusterType)
{
    m_clusterType = _clusterType;
    m_clusterTypeHasBeenSet = true;
}

bool ServiceStatisticsResult::ClusterTypeHasBeenSet() const
{
    return m_clusterTypeHasBeenSet;
}

int64_t ServiceStatisticsResult::GetGroupExist() const
{
    return m_groupExist;
}

void ServiceStatisticsResult::SetGroupExist(const int64_t& _groupExist)
{
    m_groupExist = _groupExist;
    m_groupExistHasBeenSet = true;
}

bool ServiceStatisticsResult::GroupExistHasBeenSet() const
{
    return m_groupExistHasBeenSet;
}

int64_t ServiceStatisticsResult::GetInstanceExist() const
{
    return m_instanceExist;
}

void ServiceStatisticsResult::SetInstanceExist(const int64_t& _instanceExist)
{
    m_instanceExist = _instanceExist;
    m_instanceExistHasBeenSet = true;
}

bool ServiceStatisticsResult::InstanceExistHasBeenSet() const
{
    return m_instanceExistHasBeenSet;
}

string ServiceStatisticsResult::GetApplicationId() const
{
    return m_applicationId;
}

void ServiceStatisticsResult::SetApplicationId(const string& _applicationId)
{
    m_applicationId = _applicationId;
    m_applicationIdHasBeenSet = true;
}

bool ServiceStatisticsResult::ApplicationIdHasBeenSet() const
{
    return m_applicationIdHasBeenSet;
}

string ServiceStatisticsResult::GetMicroserviceType() const
{
    return m_microserviceType;
}

void ServiceStatisticsResult::SetMicroserviceType(const string& _microserviceType)
{
    m_microserviceType = _microserviceType;
    m_microserviceTypeHasBeenSet = true;
}

bool ServiceStatisticsResult::MicroserviceTypeHasBeenSet() const
{
    return m_microserviceTypeHasBeenSet;
}

int64_t ServiceStatisticsResult::GetCpuPercent() const
{
    return m_cpuPercent;
}

void ServiceStatisticsResult::SetCpuPercent(const int64_t& _cpuPercent)
{
    m_cpuPercent = _cpuPercent;
    m_cpuPercentHasBeenSet = true;
}

bool ServiceStatisticsResult::CpuPercentHasBeenSet() const
{
    return m_cpuPercentHasBeenSet;
}

int64_t ServiceStatisticsResult::GetHeapUsed() const
{
    return m_heapUsed;
}

void ServiceStatisticsResult::SetHeapUsed(const int64_t& _heapUsed)
{
    m_heapUsed = _heapUsed;
    m_heapUsedHasBeenSet = true;
}

bool ServiceStatisticsResult::HeapUsedHasBeenSet() const
{
    return m_heapUsedHasBeenSet;
}

string ServiceStatisticsResult::GetDbName() const
{
    return m_dbName;
}

void ServiceStatisticsResult::SetDbName(const string& _dbName)
{
    m_dbName = _dbName;
    m_dbNameHasBeenSet = true;
}

bool ServiceStatisticsResult::DbNameHasBeenSet() const
{
    return m_dbNameHasBeenSet;
}

string ServiceStatisticsResult::GetScript() const
{
    return m_script;
}

void ServiceStatisticsResult::SetScript(const string& _script)
{
    m_script = _script;
    m_scriptHasBeenSet = true;
}

bool ServiceStatisticsResult::ScriptHasBeenSet() const
{
    return m_scriptHasBeenSet;
}

string ServiceStatisticsResult::GetDbType() const
{
    return m_dbType;
}

void ServiceStatisticsResult::SetDbType(const string& _dbType)
{
    m_dbType = _dbType;
    m_dbTypeHasBeenSet = true;
}

bool ServiceStatisticsResult::DbTypeHasBeenSet() const
{
    return m_dbTypeHasBeenSet;
}

double ServiceStatisticsResult::GetApdex() const
{
    return m_apdex;
}

void ServiceStatisticsResult::SetApdex(const double& _apdex)
{
    m_apdex = _apdex;
    m_apdexHasBeenSet = true;
}

bool ServiceStatisticsResult::ApdexHasBeenSet() const
{
    return m_apdexHasBeenSet;
}

double ServiceStatisticsResult::GetQps() const
{
    return m_qps;
}

void ServiceStatisticsResult::SetQps(const double& _qps)
{
    m_qps = _qps;
    m_qpsHasBeenSet = true;
}

bool ServiceStatisticsResult::QpsHasBeenSet() const
{
    return m_qpsHasBeenSet;
}

int64_t ServiceStatisticsResult::GetInstanceOnlineCount() const
{
    return m_instanceOnlineCount;
}

void ServiceStatisticsResult::SetInstanceOnlineCount(const int64_t& _instanceOnlineCount)
{
    m_instanceOnlineCount = _instanceOnlineCount;
    m_instanceOnlineCountHasBeenSet = true;
}

bool ServiceStatisticsResult::InstanceOnlineCountHasBeenSet() const
{
    return m_instanceOnlineCountHasBeenSet;
}

int64_t ServiceStatisticsResult::GetInstanceTotalCount() const
{
    return m_instanceTotalCount;
}

void ServiceStatisticsResult::SetInstanceTotalCount(const int64_t& _instanceTotalCount)
{
    m_instanceTotalCount = _instanceTotalCount;
    m_instanceTotalCountHasBeenSet = true;
}

bool ServiceStatisticsResult::InstanceTotalCountHasBeenSet() const
{
    return m_instanceTotalCountHasBeenSet;
}

string ServiceStatisticsResult::GetStatus() const
{
    return m_status;
}

void ServiceStatisticsResult::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool ServiceStatisticsResult::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string ServiceStatisticsResult::GetErrorRateLevel() const
{
    return m_errorRateLevel;
}

void ServiceStatisticsResult::SetErrorRateLevel(const string& _errorRateLevel)
{
    m_errorRateLevel = _errorRateLevel;
    m_errorRateLevelHasBeenSet = true;
}

bool ServiceStatisticsResult::ErrorRateLevelHasBeenSet() const
{
    return m_errorRateLevelHasBeenSet;
}

string ServiceStatisticsResult::GetAvgTimeConsumingLevel() const
{
    return m_avgTimeConsumingLevel;
}

void ServiceStatisticsResult::SetAvgTimeConsumingLevel(const string& _avgTimeConsumingLevel)
{
    m_avgTimeConsumingLevel = _avgTimeConsumingLevel;
    m_avgTimeConsumingLevelHasBeenSet = true;
}

bool ServiceStatisticsResult::AvgTimeConsumingLevelHasBeenSet() const
{
    return m_avgTimeConsumingLevelHasBeenSet;
}

string ServiceStatisticsResult::GetApdexLevel() const
{
    return m_apdexLevel;
}

void ServiceStatisticsResult::SetApdexLevel(const string& _apdexLevel)
{
    m_apdexLevel = _apdexLevel;
    m_apdexLevelHasBeenSet = true;
}

bool ServiceStatisticsResult::ApdexLevelHasBeenSet() const
{
    return m_apdexLevelHasBeenSet;
}

