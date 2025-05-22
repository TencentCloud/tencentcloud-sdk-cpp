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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEEVENTSREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEEVENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/Filter.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DescribeEvents请求参数结构体
                */
                class DescribeEventsRequest : public AbstractModel
                {
                public:
                    DescribeEventsRequest();
                    ~DescribeEventsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务类型，TRAIN为任务式建模, NOTEBOOK为Notebook, INFER为在线服务, BATCH为批量预测
枚举值：
- TRAIN
- NOTEBOOK
- INFER
- BATCH
                     * @return Service 服务类型，TRAIN为任务式建模, NOTEBOOK为Notebook, INFER为在线服务, BATCH为批量预测
枚举值：
- TRAIN
- NOTEBOOK
- INFER
- BATCH
                     * 
                     */
                    std::string GetService() const;

                    /**
                     * 设置服务类型，TRAIN为任务式建模, NOTEBOOK为Notebook, INFER为在线服务, BATCH为批量预测
枚举值：
- TRAIN
- NOTEBOOK
- INFER
- BATCH
                     * @param _service 服务类型，TRAIN为任务式建模, NOTEBOOK为Notebook, INFER为在线服务, BATCH为批量预测
枚举值：
- TRAIN
- NOTEBOOK
- INFER
- BATCH
                     * 
                     */
                    void SetService(const std::string& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     * 
                     */
                    bool ServiceHasBeenSet() const;

                    /**
                     * 获取服务ID，和Service参数对应，不同Service的服务ID获取方式不同，具体如下：
- Service类型为TRAIN：
  调用[DescribeTrainingTask接口](/document/product/851/75089)查询训练任务详情，ServiceId为接口返回值中Response.TrainingTaskDetail.LatestInstanceId
- Service类型为NOTEBOOK：
  调用[DescribeNotebook接口](/document/product/851/95662)查询Notebook详情，ServiceId为接口返回值中Response.NotebookDetail.PodName
- Service类型为INFER：
  调用[DescribeModelServiceGroup接口](/document/product/851/82285)查询服务组详情，ServiceId为接口返回值中Response.ServiceGroup.Services.ServiceId
- Service类型为BATCH：
  调用[DescribeBatchTask接口](/document/product/851/80180)查询跑批任务详情，ServiceId为接口返回值中Response.BatchTaskDetail.LatestInstanceId
                     * @return ServiceId 服务ID，和Service参数对应，不同Service的服务ID获取方式不同，具体如下：
- Service类型为TRAIN：
  调用[DescribeTrainingTask接口](/document/product/851/75089)查询训练任务详情，ServiceId为接口返回值中Response.TrainingTaskDetail.LatestInstanceId
- Service类型为NOTEBOOK：
  调用[DescribeNotebook接口](/document/product/851/95662)查询Notebook详情，ServiceId为接口返回值中Response.NotebookDetail.PodName
- Service类型为INFER：
  调用[DescribeModelServiceGroup接口](/document/product/851/82285)查询服务组详情，ServiceId为接口返回值中Response.ServiceGroup.Services.ServiceId
- Service类型为BATCH：
  调用[DescribeBatchTask接口](/document/product/851/80180)查询跑批任务详情，ServiceId为接口返回值中Response.BatchTaskDetail.LatestInstanceId
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置服务ID，和Service参数对应，不同Service的服务ID获取方式不同，具体如下：
- Service类型为TRAIN：
  调用[DescribeTrainingTask接口](/document/product/851/75089)查询训练任务详情，ServiceId为接口返回值中Response.TrainingTaskDetail.LatestInstanceId
- Service类型为NOTEBOOK：
  调用[DescribeNotebook接口](/document/product/851/95662)查询Notebook详情，ServiceId为接口返回值中Response.NotebookDetail.PodName
- Service类型为INFER：
  调用[DescribeModelServiceGroup接口](/document/product/851/82285)查询服务组详情，ServiceId为接口返回值中Response.ServiceGroup.Services.ServiceId
- Service类型为BATCH：
  调用[DescribeBatchTask接口](/document/product/851/80180)查询跑批任务详情，ServiceId为接口返回值中Response.BatchTaskDetail.LatestInstanceId
                     * @param _serviceId 服务ID，和Service参数对应，不同Service的服务ID获取方式不同，具体如下：
- Service类型为TRAIN：
  调用[DescribeTrainingTask接口](/document/product/851/75089)查询训练任务详情，ServiceId为接口返回值中Response.TrainingTaskDetail.LatestInstanceId
- Service类型为NOTEBOOK：
  调用[DescribeNotebook接口](/document/product/851/95662)查询Notebook详情，ServiceId为接口返回值中Response.NotebookDetail.PodName
- Service类型为INFER：
  调用[DescribeModelServiceGroup接口](/document/product/851/82285)查询服务组详情，ServiceId为接口返回值中Response.ServiceGroup.Services.ServiceId
- Service类型为BATCH：
  调用[DescribeBatchTask接口](/document/product/851/80180)查询跑批任务详情，ServiceId为接口返回值中Response.BatchTaskDetail.LatestInstanceId
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取查询事件最早发生的时间（RFC3339格式的时间字符串），默认值为当前时间的前一天
                     * @return StartTime 查询事件最早发生的时间（RFC3339格式的时间字符串），默认值为当前时间的前一天
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询事件最早发生的时间（RFC3339格式的时间字符串），默认值为当前时间的前一天
                     * @param _startTime 查询事件最早发生的时间（RFC3339格式的时间字符串），默认值为当前时间的前一天
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
                     * 获取查询事件最晚发生的时间（RFC3339格式的时间字符串），默认值为当前时间
                     * @return EndTime 查询事件最晚发生的时间（RFC3339格式的时间字符串），默认值为当前时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询事件最晚发生的时间（RFC3339格式的时间字符串），默认值为当前时间
                     * @param _endTime 查询事件最晚发生的时间（RFC3339格式的时间字符串），默认值为当前时间
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
                     * 获取分页Limit，默认值为100，最大值为100
                     * @return Limit 分页Limit，默认值为100，最大值为100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页Limit，默认值为100，最大值为100
                     * @param _limit 分页Limit，默认值为100，最大值为100
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
                     * 获取分页Offset，默认值为0
                     * @return Offset 分页Offset，默认值为0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页Offset，默认值为0
                     * @param _offset 分页Offset，默认值为0
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
                     * 获取排列顺序（可选值为ASC, DESC ），默认为DESC
                     * @return Order 排列顺序（可选值为ASC, DESC ），默认为DESC
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排列顺序（可选值为ASC, DESC ），默认为DESC
                     * @param _order 排列顺序（可选值为ASC, DESC ），默认为DESC
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取排序的依据字段（可选值为FirstTimestamp, LastTimestamp），默认值为LastTimestamp
                     * @return OrderField 排序的依据字段（可选值为FirstTimestamp, LastTimestamp），默认值为LastTimestamp
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置排序的依据字段（可选值为FirstTimestamp, LastTimestamp），默认值为LastTimestamp
                     * @param _orderField 排序的依据字段（可选值为FirstTimestamp, LastTimestamp），默认值为LastTimestamp
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                    /**
                     * 获取过滤条件
注意: 
1. Filter.Name：目前支持ResourceKind（按事件关联的资源类型过滤）；Type（按事件类型过滤）
2. Filter.Values：
对于Name为ResourceKind，Values的可选取值为Deployment, Replicaset, Pod等K8S资源类型；
对于Name为Type，Values的可选取值仅为Normal或者Warning；
Values为多个的时候表示同时满足
3. Filter. Negative和Filter. Fuzzy没有使用
                     * @return Filters 过滤条件
注意: 
1. Filter.Name：目前支持ResourceKind（按事件关联的资源类型过滤）；Type（按事件类型过滤）
2. Filter.Values：
对于Name为ResourceKind，Values的可选取值为Deployment, Replicaset, Pod等K8S资源类型；
对于Name为Type，Values的可选取值仅为Normal或者Warning；
Values为多个的时候表示同时满足
3. Filter. Negative和Filter. Fuzzy没有使用
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件
注意: 
1. Filter.Name：目前支持ResourceKind（按事件关联的资源类型过滤）；Type（按事件类型过滤）
2. Filter.Values：
对于Name为ResourceKind，Values的可选取值为Deployment, Replicaset, Pod等K8S资源类型；
对于Name为Type，Values的可选取值仅为Normal或者Warning；
Values为多个的时候表示同时满足
3. Filter. Negative和Filter. Fuzzy没有使用
                     * @param _filters 过滤条件
注意: 
1. Filter.Name：目前支持ResourceKind（按事件关联的资源类型过滤）；Type（按事件类型过滤）
2. Filter.Values：
对于Name为ResourceKind，Values的可选取值为Deployment, Replicaset, Pod等K8S资源类型；
对于Name为Type，Values的可选取值仅为Normal或者Warning；
Values为多个的时候表示同时满足
3. Filter. Negative和Filter. Fuzzy没有使用
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 服务类型，TRAIN为任务式建模, NOTEBOOK为Notebook, INFER为在线服务, BATCH为批量预测
枚举值：
- TRAIN
- NOTEBOOK
- INFER
- BATCH
                     */
                    std::string m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * 服务ID，和Service参数对应，不同Service的服务ID获取方式不同，具体如下：
- Service类型为TRAIN：
  调用[DescribeTrainingTask接口](/document/product/851/75089)查询训练任务详情，ServiceId为接口返回值中Response.TrainingTaskDetail.LatestInstanceId
- Service类型为NOTEBOOK：
  调用[DescribeNotebook接口](/document/product/851/95662)查询Notebook详情，ServiceId为接口返回值中Response.NotebookDetail.PodName
- Service类型为INFER：
  调用[DescribeModelServiceGroup接口](/document/product/851/82285)查询服务组详情，ServiceId为接口返回值中Response.ServiceGroup.Services.ServiceId
- Service类型为BATCH：
  调用[DescribeBatchTask接口](/document/product/851/80180)查询跑批任务详情，ServiceId为接口返回值中Response.BatchTaskDetail.LatestInstanceId
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 查询事件最早发生的时间（RFC3339格式的时间字符串），默认值为当前时间的前一天
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询事件最晚发生的时间（RFC3339格式的时间字符串），默认值为当前时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 分页Limit，默认值为100，最大值为100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页Offset，默认值为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 排列顺序（可选值为ASC, DESC ），默认为DESC
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序的依据字段（可选值为FirstTimestamp, LastTimestamp），默认值为LastTimestamp
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * 过滤条件
注意: 
1. Filter.Name：目前支持ResourceKind（按事件关联的资源类型过滤）；Type（按事件类型过滤）
2. Filter.Values：
对于Name为ResourceKind，Values的可选取值为Deployment, Replicaset, Pod等K8S资源类型；
对于Name为Type，Values的可选取值仅为Normal或者Warning；
Values为多个的时候表示同时满足
3. Filter. Negative和Filter. Fuzzy没有使用
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEEVENTSREQUEST_H_
