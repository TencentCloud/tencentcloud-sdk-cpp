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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEINVOCATIONMETRICDATADIMENSIONREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEINVOCATIONMETRICDATADIMENSIONREQUEST_H_

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
                * DescribeInvocationMetricDataDimension请求参数结构体
                */
                class DescribeInvocationMetricDataDimensionRequest : public AbstractModel
                {
                public:
                    DescribeInvocationMetricDataDimensionRequest();
                    ~DescribeInvocationMetricDataDimensionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开始时间，格式yyyy-MM-dd HH:mm:ss
                     * @return StartTime 开始时间，格式yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间，格式yyyy-MM-dd HH:mm:ss
                     * @param _startTime 开始时间，格式yyyy-MM-dd HH:mm:ss
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
                     * 获取结束时间，格式yyyy-MM-dd HH:mm:ss
                     * @return EndTime 结束时间，格式yyyy-MM-dd HH:mm:ss
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间，格式yyyy-MM-dd HH:mm:ss
                     * @param _endTime 结束时间，格式yyyy-MM-dd HH:mm:ss
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
                     * 获取开始index，取值范围大于等于0，默认值为0
                     * @return Offset 开始index，取值范围大于等于0，默认值为0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置开始index，取值范围大于等于0，默认值为0
                     * @param _offset 开始index，取值范围大于等于0，默认值为0
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

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
                    int64_t GetLimit() const;

                    /**
                     * 设置单页请求配置数量，取值范围[1, 50]，默认值为10
                     * @param _limit 单页请求配置数量，取值范围[1, 50]，默认值为10
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取聚合维度。可选值 NamespaceId：命名空间ID，GroupId：部署组ID，InstanceId：实例ID，ApplicationId：应用ID，OperationMethod：执行方法，OperationName：执行名称，ServiceName：服务名，UpstreamNamespaceId：上游命名空间ID
                     * @return DimensionName 聚合维度。可选值 NamespaceId：命名空间ID，GroupId：部署组ID，InstanceId：实例ID，ApplicationId：应用ID，OperationMethod：执行方法，OperationName：执行名称，ServiceName：服务名，UpstreamNamespaceId：上游命名空间ID
                     * 
                     */
                    std::string GetDimensionName() const;

                    /**
                     * 设置聚合维度。可选值 NamespaceId：命名空间ID，GroupId：部署组ID，InstanceId：实例ID，ApplicationId：应用ID，OperationMethod：执行方法，OperationName：执行名称，ServiceName：服务名，UpstreamNamespaceId：上游命名空间ID
                     * @param _dimensionName 聚合维度。可选值 NamespaceId：命名空间ID，GroupId：部署组ID，InstanceId：实例ID，ApplicationId：应用ID，OperationMethod：执行方法，OperationName：执行名称，ServiceName：服务名，UpstreamNamespaceId：上游命名空间ID
                     * 
                     */
                    void SetDimensionName(const std::string& _dimensionName);

                    /**
                     * 判断参数 DimensionName 是否已赋值
                     * @return DimensionName 是否已赋值
                     * 
                     */
                    bool DimensionNameHasBeenSet() const;

                    /**
                     * 获取搜索关键字
                     * @return SearchWord 搜索关键字
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置搜索关键字
                     * @param _searchWord 搜索关键字
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
                     * 获取构建维度
                     * @return MetricDimensionValues 构建维度
                     * 
                     */
                    std::vector<MetricDimensionValue> GetMetricDimensionValues() const;

                    /**
                     * 设置构建维度
                     * @param _metricDimensionValues 构建维度
                     * 
                     */
                    void SetMetricDimensionValues(const std::vector<MetricDimensionValue>& _metricDimensionValues);

                    /**
                     * 判断参数 MetricDimensionValues 是否已赋值
                     * @return MetricDimensionValues 是否已赋值
                     * 
                     */
                    bool MetricDimensionValuesHasBeenSet() const;

                private:

                    /**
                     * 开始时间，格式yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间，格式yyyy-MM-dd HH:mm:ss
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 开始index，取值范围大于等于0，默认值为0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 单页请求配置数量，取值范围[1, 50]，默认值为10
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 聚合维度。可选值 NamespaceId：命名空间ID，GroupId：部署组ID，InstanceId：实例ID，ApplicationId：应用ID，OperationMethod：执行方法，OperationName：执行名称，ServiceName：服务名，UpstreamNamespaceId：上游命名空间ID
                     */
                    std::string m_dimensionName;
                    bool m_dimensionNameHasBeenSet;

                    /**
                     * 搜索关键字
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * 构建维度
                     */
                    std::vector<MetricDimensionValue> m_metricDimensionValues;
                    bool m_metricDimensionValuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEINVOCATIONMETRICDATADIMENSIONREQUEST_H_
