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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBESTATISTICSREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBESTATISTICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/MetricDimensionValue.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DescribeStatistics请求参数结构体
                */
                class DescribeStatisticsRequest : public AbstractModel
                {
                public:
                    DescribeStatisticsRequest();
                    ~DescribeStatisticsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取类型：Interface、Service、Group、Instance、SQL、NoSQL
                     * @return Type 类型：Interface、Service、Group、Instance、SQL、NoSQL
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型：Interface、Service、Group、Instance、SQL、NoSQL
                     * @param _type 类型：Interface、Service、Group、Instance、SQL、NoSQL
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取步长，单位s：60、3600、86400
                     * @return TimeStep 步长，单位s：60、3600、86400
                     * 
                     */
                    uint64_t GetTimeStep() const;

                    /**
                     * 设置步长，单位s：60、3600、86400
                     * @param _timeStep 步长，单位s：60、3600、86400
                     * 
                     */
                    void SetTimeStep(const uint64_t& _timeStep);

                    /**
                     * 判断参数 TimeStep 是否已赋值
                     * @return TimeStep 是否已赋值
                     * 
                     */
                    bool TimeStepHasBeenSet() const;

                    /**
                     * 获取偏移量，取值范围大于等于0，默认值为0
                     * @return Offset 偏移量，取值范围大于等于0，默认值为0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，取值范围大于等于0，默认值为0
                     * @param _offset 偏移量，取值范围大于等于0，默认值为0
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取单页请求配置数量，取值范围[1, 50]，默认值为10
                     * @return Limit 单页请求配置数量，取值范围[1, 50]，默认值为10
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置单页请求配置数量，取值范围[1, 50]，默认值为10
                     * @param _limit 单页请求配置数量，取值范围[1, 50]，默认值为10
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取命名空间Id,此字段，和 NamespaceIdList 或者 MetricDimensionValues 字段包含 namespaceId 维度信息。三者选其一。
                     * @return NamespaceId 命名空间Id,此字段，和 NamespaceIdList 或者 MetricDimensionValues 字段包含 namespaceId 维度信息。三者选其一。
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置命名空间Id,此字段，和 NamespaceIdList 或者 MetricDimensionValues 字段包含 namespaceId 维度信息。三者选其一。
                     * @param _namespaceId 命名空间Id,此字段，和 NamespaceIdList 或者 MetricDimensionValues 字段包含 namespaceId 维度信息。三者选其一。
                     * 
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     * 
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取排序字段:AvgTimeConsuming[默认]、RequestCount、ErrorRate。实例监控还支持 CpuPercent
                     * @return OrderBy 排序字段:AvgTimeConsuming[默认]、RequestCount、ErrorRate。实例监控还支持 CpuPercent
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序字段:AvgTimeConsuming[默认]、RequestCount、ErrorRate。实例监控还支持 CpuPercent
                     * @param _orderBy 排序字段:AvgTimeConsuming[默认]、RequestCount、ErrorRate。实例监控还支持 CpuPercent
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取排序方式：ASC:0、DESC:1
                     * @return OrderType 排序方式：ASC:0、DESC:1
                     * 
                     */
                    uint64_t GetOrderType() const;

                    /**
                     * 设置排序方式：ASC:0、DESC:1
                     * @param _orderType 排序方式：ASC:0、DESC:1
                     * 
                     */
                    void SetOrderType(const uint64_t& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                    /**
                     * 获取开始时间：年月日 时分秒2020-05-12 14:43:12， 不能为空
                     * @return EndTime 开始时间：年月日 时分秒2020-05-12 14:43:12， 不能为空
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置开始时间：年月日 时分秒2020-05-12 14:43:12， 不能为空
                     * @param _endTime 开始时间：年月日 时分秒2020-05-12 14:43:12， 不能为空
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取开始时间：年月日 时分秒2020-05-12 14:43:12， 不能为空
                     * @return StartTime 开始时间：年月日 时分秒2020-05-12 14:43:12， 不能为空
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间：年月日 时分秒2020-05-12 14:43:12， 不能为空
                     * @param _startTime 开始时间：年月日 时分秒2020-05-12 14:43:12， 不能为空
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取服务名称
                     * @return ServiceName 服务名称
                     * 
                     */
                    std::string GetServiceName() const;

                    /**
                     * 设置服务名称
                     * @param _serviceName 服务名称
                     * 
                     */
                    void SetServiceName(const std::string& _serviceName);

                    /**
                     * 判断参数 ServiceName 是否已赋值
                     * @return ServiceName 是否已赋值
                     * 
                     */
                    bool ServiceNameHasBeenSet() const;

                    /**
                     * 获取搜索关键词
                     * @return SearchWord 搜索关键词
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置搜索关键词
                     * @param _searchWord 搜索关键词
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                    /**
                     * 获取维度
                     * @return MetricDimensionValues 维度
                     * 
                     */
                    std::vector<MetricDimensionValue> GetMetricDimensionValues() const;

                    /**
                     * 设置维度
                     * @param _metricDimensionValues 维度
                     * 
                     */
                    void SetMetricDimensionValues(const std::vector<MetricDimensionValue>& _metricDimensionValues);

                    /**
                     * 判断参数 MetricDimensionValues 是否已赋值
                     * @return MetricDimensionValues 是否已赋值
                     * 
                     */
                    bool MetricDimensionValuesHasBeenSet() const;

                    /**
                     * 获取聚合关键词
                     * @return BucketKey 聚合关键词
                     * 
                     */
                    std::string GetBucketKey() const;

                    /**
                     * 设置聚合关键词
                     * @param _bucketKey 聚合关键词
                     * 
                     */
                    void SetBucketKey(const std::string& _bucketKey);

                    /**
                     * 判断参数 BucketKey 是否已赋值
                     * @return BucketKey 是否已赋值
                     * 
                     */
                    bool BucketKeyHasBeenSet() const;

                    /**
                     * 获取数据库
                     * @return DbName 数据库
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置数据库
                     * @param _dbName 数据库
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
                     * 获取命名空间id数组
                     * @return NamespaceIdList 命名空间id数组
                     * 
                     */
                    std::vector<std::string> GetNamespaceIdList() const;

                    /**
                     * 设置命名空间id数组
                     * @param _namespaceIdList 命名空间id数组
                     * 
                     */
                    void SetNamespaceIdList(const std::vector<std::string>& _namespaceIdList);

                    /**
                     * 判断参数 NamespaceIdList 是否已赋值
                     * @return NamespaceIdList 是否已赋值
                     * 
                     */
                    bool NamespaceIdListHasBeenSet() const;

                    /**
                     * 获取独占配置中心的ID
                     * @return ConfigCenterInstanceId 独占配置中心的ID
                     * 
                     */
                    std::string GetConfigCenterInstanceId() const;

                    /**
                     * 设置独占配置中心的ID
                     * @param _configCenterInstanceId 独占配置中心的ID
                     * 
                     */
                    void SetConfigCenterInstanceId(const std::string& _configCenterInstanceId);

                    /**
                     * 判断参数 ConfigCenterInstanceId 是否已赋值
                     * @return ConfigCenterInstanceId 是否已赋值
                     * 
                     */
                    bool ConfigCenterInstanceIdHasBeenSet() const;

                private:

                    /**
                     * 类型：Interface、Service、Group、Instance、SQL、NoSQL
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 步长，单位s：60、3600、86400
                     */
                    uint64_t m_timeStep;
                    bool m_timeStepHasBeenSet;

                    /**
                     * 偏移量，取值范围大于等于0，默认值为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 单页请求配置数量，取值范围[1, 50]，默认值为10
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 命名空间Id,此字段，和 NamespaceIdList 或者 MetricDimensionValues 字段包含 namespaceId 维度信息。三者选其一。
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 排序字段:AvgTimeConsuming[默认]、RequestCount、ErrorRate。实例监控还支持 CpuPercent
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序方式：ASC:0、DESC:1
                     */
                    uint64_t m_orderType;
                    bool m_orderTypeHasBeenSet;

                    /**
                     * 开始时间：年月日 时分秒2020-05-12 14:43:12， 不能为空
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 开始时间：年月日 时分秒2020-05-12 14:43:12， 不能为空
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 服务名称
                     */
                    std::string m_serviceName;
                    bool m_serviceNameHasBeenSet;

                    /**
                     * 搜索关键词
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * 维度
                     */
                    std::vector<MetricDimensionValue> m_metricDimensionValues;
                    bool m_metricDimensionValuesHasBeenSet;

                    /**
                     * 聚合关键词
                     */
                    std::string m_bucketKey;
                    bool m_bucketKeyHasBeenSet;

                    /**
                     * 数据库
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * 命名空间id数组
                     */
                    std::vector<std::string> m_namespaceIdList;
                    bool m_namespaceIdListHasBeenSet;

                    /**
                     * 独占配置中心的ID
                     */
                    std::string m_configCenterInstanceId;
                    bool m_configCenterInstanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBESTATISTICSREQUEST_H_
