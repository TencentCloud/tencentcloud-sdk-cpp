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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_SERVICESTATISTICSRESULT_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_SERVICESTATISTICSRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/MetricDataCurve.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 服务统计结果
                */
                class ServiceStatisticsResult : public AbstractModel
                {
                public:
                    ServiceStatisticsResult();
                    ~ServiceStatisticsResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取请求模板路径:type为接口时返回，服务时不返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Path 请求模板路径:type为接口时返回，服务时不返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置请求模板路径:type为接口时返回，服务时不返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _path 请求模板路径:type为接口时返回，服务时不返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取请求方法:type为接口时返回，服务时不返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Method 请求方法:type为接口时返回，服务时不返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置请求方法:type为接口时返回，服务时不返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _method 请求方法:type为接口时返回，服务时不返回
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取微服务Id
                     * @return MicroserviceId 微服务Id
                     * 
                     */
                    std::string GetMicroserviceId() const;

                    /**
                     * 设置微服务Id
                     * @param _microserviceId 微服务Id
                     * 
                     */
                    void SetMicroserviceId(const std::string& _microserviceId);

                    /**
                     * 判断参数 MicroserviceId 是否已赋值
                     * @return MicroserviceId 是否已赋值
                     * 
                     */
                    bool MicroserviceIdHasBeenSet() const;

                    /**
                     * 获取微服务名称
                     * @return MicroserviceName 微服务名称
                     * 
                     */
                    std::string GetMicroserviceName() const;

                    /**
                     * 设置微服务名称
                     * @param _microserviceName 微服务名称
                     * 
                     */
                    void SetMicroserviceName(const std::string& _microserviceName);

                    /**
                     * 判断参数 MicroserviceName 是否已赋值
                     * @return MicroserviceName 是否已赋值
                     * 
                     */
                    bool MicroserviceNameHasBeenSet() const;

                    /**
                     * 获取请求数
                     * @return RequestCount 请求数
                     * 
                     */
                    uint64_t GetRequestCount() const;

                    /**
                     * 设置请求数
                     * @param _requestCount 请求数
                     * 
                     */
                    void SetRequestCount(const uint64_t& _requestCount);

                    /**
                     * 判断参数 RequestCount 是否已赋值
                     * @return RequestCount 是否已赋值
                     * 
                     */
                    bool RequestCountHasBeenSet() const;

                    /**
                     * 获取请求错误率，不带百分号
                     * @return ErrorRate 请求错误率，不带百分号
                     * 
                     */
                    double GetErrorRate() const;

                    /**
                     * 设置请求错误率，不带百分号
                     * @param _errorRate 请求错误率，不带百分号
                     * 
                     */
                    void SetErrorRate(const double& _errorRate);

                    /**
                     * 判断参数 ErrorRate 是否已赋值
                     * @return ErrorRate 是否已赋值
                     * 
                     */
                    bool ErrorRateHasBeenSet() const;

                    /**
                     * 获取平均响应耗时ms
                     * @return AvgTimeConsuming 平均响应耗时ms
                     * 
                     */
                    double GetAvgTimeConsuming() const;

                    /**
                     * 设置平均响应耗时ms
                     * @param _avgTimeConsuming 平均响应耗时ms
                     * 
                     */
                    void SetAvgTimeConsuming(const double& _avgTimeConsuming);

                    /**
                     * 判断参数 AvgTimeConsuming 是否已赋值
                     * @return AvgTimeConsuming 是否已赋值
                     * 
                     */
                    bool AvgTimeConsumingHasBeenSet() const;

                    /**
                     * 获取响应耗时曲线
                     * @return MetricDataCurves 响应耗时曲线
                     * 
                     */
                    std::vector<MetricDataCurve> GetMetricDataCurves() const;

                    /**
                     * 设置响应耗时曲线
                     * @param _metricDataCurves 响应耗时曲线
                     * 
                     */
                    void SetMetricDataCurves(const std::vector<MetricDataCurve>& _metricDataCurves);

                    /**
                     * 判断参数 MetricDataCurves 是否已赋值
                     * @return MetricDataCurves 是否已赋值
                     * 
                     */
                    bool MetricDataCurvesHasBeenSet() const;

                    /**
                     * 获取实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId 实例id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例name
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceName 实例name
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例name
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceName 实例name
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取部署组id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupId 部署组id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置部署组id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupId 部署组id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取部署组name
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupName 部署组name
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置部署组name
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupName 部署组name
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取部署组类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterType 部署组类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置部署组类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterType 部署组类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取部署组是否存在
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupExist 部署组是否存在
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetGroupExist() const;

                    /**
                     * 设置部署组是否存在
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupExist 部署组是否存在
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupExist(const int64_t& _groupExist);

                    /**
                     * 判断参数 GroupExist 是否已赋值
                     * @return GroupExist 是否已赋值
                     * 
                     */
                    bool GroupExistHasBeenSet() const;

                    /**
                     * 获取实例是否存在，仅限cvm
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceExist 实例是否存在，仅限cvm
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetInstanceExist() const;

                    /**
                     * 设置实例是否存在，仅限cvm
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceExist 实例是否存在，仅限cvm
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceExist(const int64_t& _instanceExist);

                    /**
                     * 判断参数 InstanceExist 是否已赋值
                     * @return InstanceExist 是否已赋值
                     * 
                     */
                    bool InstanceExistHasBeenSet() const;

                    /**
                     * 获取应用id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationId 应用id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApplicationId() const;

                    /**
                     * 设置应用id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _applicationId 应用id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApplicationId(const std::string& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取微服务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MicroserviceType 微服务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMicroserviceType() const;

                    /**
                     * 设置微服务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _microserviceType 微服务类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMicroserviceType(const std::string& _microserviceType);

                    /**
                     * 判断参数 MicroserviceType 是否已赋值
                     * @return MicroserviceType 是否已赋值
                     * 
                     */
                    bool MicroserviceTypeHasBeenSet() const;

                    /**
                     * 获取cpu使用率
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CpuPercent cpu使用率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCpuPercent() const;

                    /**
                     * 设置cpu使用率
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cpuPercent cpu使用率
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCpuPercent(const int64_t& _cpuPercent);

                    /**
                     * 判断参数 CpuPercent 是否已赋值
                     * @return CpuPercent 是否已赋值
                     * 
                     */
                    bool CpuPercentHasBeenSet() const;

                    /**
                     * 获取已用堆大小,单位KB
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HeapUsed 已用堆大小,单位KB
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetHeapUsed() const;

                    /**
                     * 设置已用堆大小,单位KB
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _heapUsed 已用堆大小,单位KB
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHeapUsed(const int64_t& _heapUsed);

                    /**
                     * 判断参数 HeapUsed 是否已赋值
                     * @return HeapUsed 是否已赋值
                     * 
                     */
                    bool HeapUsedHasBeenSet() const;

                    /**
                     * 获取数据库
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DbName 数据库
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置数据库
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dbName 数据库
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取Script值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Script Script值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScript() const;

                    /**
                     * 设置Script值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _script Script值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScript(const std::string& _script);

                    /**
                     * 判断参数 Script 是否已赋值
                     * @return Script 是否已赋值
                     * 
                     */
                    bool ScriptHasBeenSet() const;

                    /**
                     * 获取数据库类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DbType 数据库类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDbType() const;

                    /**
                     * 设置数据库类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dbType 数据库类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDbType(const std::string& _dbType);

                    /**
                     * 判断参数 DbType 是否已赋值
                     * @return DbType 是否已赋值
                     * 
                     */
                    bool DbTypeHasBeenSet() const;

                    /**
                     * 获取Apdex值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Apdex Apdex值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetApdex() const;

                    /**
                     * 设置Apdex值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apdex Apdex值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApdex(const double& _apdex);

                    /**
                     * 判断参数 Apdex 是否已赋值
                     * @return Apdex 是否已赋值
                     * 
                     */
                    bool ApdexHasBeenSet() const;

                    /**
                     * 获取Qps值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Qps Qps值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetQps() const;

                    /**
                     * 设置Qps值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _qps Qps值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQps(const double& _qps);

                    /**
                     * 判断参数 Qps 是否已赋值
                     * @return Qps 是否已赋值
                     * 
                     */
                    bool QpsHasBeenSet() const;

                    /**
                     * 获取实例在线数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceOnlineCount 实例在线数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetInstanceOnlineCount() const;

                    /**
                     * 设置实例在线数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceOnlineCount 实例在线数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceOnlineCount(const int64_t& _instanceOnlineCount);

                    /**
                     * 判断参数 InstanceOnlineCount 是否已赋值
                     * @return InstanceOnlineCount 是否已赋值
                     * 
                     */
                    bool InstanceOnlineCountHasBeenSet() const;

                    /**
                     * 获取实例总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceTotalCount 实例总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetInstanceTotalCount() const;

                    /**
                     * 设置实例总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceTotalCount 实例总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceTotalCount(const int64_t& _instanceTotalCount);

                    /**
                     * 判断参数 InstanceTotalCount 是否已赋值
                     * @return InstanceTotalCount 是否已赋值
                     * 
                     */
                    bool InstanceTotalCountHasBeenSet() const;

                    /**
                     * 获取normal/error
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status normal/error
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置normal/error
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status normal/error
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取normal/warn/error
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorRateLevel normal/warn/error
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetErrorRateLevel() const;

                    /**
                     * 设置normal/warn/error
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorRateLevel normal/warn/error
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorRateLevel(const std::string& _errorRateLevel);

                    /**
                     * 判断参数 ErrorRateLevel 是否已赋值
                     * @return ErrorRateLevel 是否已赋值
                     * 
                     */
                    bool ErrorRateLevelHasBeenSet() const;

                    /**
                     * 获取normal/warn/error
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AvgTimeConsumingLevel normal/warn/error
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAvgTimeConsumingLevel() const;

                    /**
                     * 设置normal/warn/error
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _avgTimeConsumingLevel normal/warn/error
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAvgTimeConsumingLevel(const std::string& _avgTimeConsumingLevel);

                    /**
                     * 判断参数 AvgTimeConsumingLevel 是否已赋值
                     * @return AvgTimeConsumingLevel 是否已赋值
                     * 
                     */
                    bool AvgTimeConsumingLevelHasBeenSet() const;

                    /**
                     * 获取normal/warn/error
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApdexLevel normal/warn/error
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApdexLevel() const;

                    /**
                     * 设置normal/warn/error
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apdexLevel normal/warn/error
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApdexLevel(const std::string& _apdexLevel);

                    /**
                     * 判断参数 ApdexLevel 是否已赋值
                     * @return ApdexLevel 是否已赋值
                     * 
                     */
                    bool ApdexLevelHasBeenSet() const;

                private:

                    /**
                     * 请求模板路径:type为接口时返回，服务时不返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 请求方法:type为接口时返回，服务时不返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 微服务Id
                     */
                    std::string m_microserviceId;
                    bool m_microserviceIdHasBeenSet;

                    /**
                     * 微服务名称
                     */
                    std::string m_microserviceName;
                    bool m_microserviceNameHasBeenSet;

                    /**
                     * 请求数
                     */
                    uint64_t m_requestCount;
                    bool m_requestCountHasBeenSet;

                    /**
                     * 请求错误率，不带百分号
                     */
                    double m_errorRate;
                    bool m_errorRateHasBeenSet;

                    /**
                     * 平均响应耗时ms
                     */
                    double m_avgTimeConsuming;
                    bool m_avgTimeConsumingHasBeenSet;

                    /**
                     * 响应耗时曲线
                     */
                    std::vector<MetricDataCurve> m_metricDataCurves;
                    bool m_metricDataCurvesHasBeenSet;

                    /**
                     * 实例id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例name
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 部署组id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 部署组name
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 部署组类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * 部署组是否存在
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_groupExist;
                    bool m_groupExistHasBeenSet;

                    /**
                     * 实例是否存在，仅限cvm
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_instanceExist;
                    bool m_instanceExistHasBeenSet;

                    /**
                     * 应用id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 微服务类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_microserviceType;
                    bool m_microserviceTypeHasBeenSet;

                    /**
                     * cpu使用率
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_cpuPercent;
                    bool m_cpuPercentHasBeenSet;

                    /**
                     * 已用堆大小,单位KB
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_heapUsed;
                    bool m_heapUsedHasBeenSet;

                    /**
                     * 数据库
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * Script值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_script;
                    bool m_scriptHasBeenSet;

                    /**
                     * 数据库类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dbType;
                    bool m_dbTypeHasBeenSet;

                    /**
                     * Apdex值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_apdex;
                    bool m_apdexHasBeenSet;

                    /**
                     * Qps值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_qps;
                    bool m_qpsHasBeenSet;

                    /**
                     * 实例在线数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_instanceOnlineCount;
                    bool m_instanceOnlineCountHasBeenSet;

                    /**
                     * 实例总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_instanceTotalCount;
                    bool m_instanceTotalCountHasBeenSet;

                    /**
                     * normal/error
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * normal/warn/error
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_errorRateLevel;
                    bool m_errorRateLevelHasBeenSet;

                    /**
                     * normal/warn/error
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_avgTimeConsumingLevel;
                    bool m_avgTimeConsumingLevelHasBeenSet;

                    /**
                     * normal/warn/error
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apdexLevel;
                    bool m_apdexLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_SERVICESTATISTICSRESULT_H_
