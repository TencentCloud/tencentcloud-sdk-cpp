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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBELOGSREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBELOGSREQUEST_H_

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
                * DescribeLogs请求参数结构体
                */
                class DescribeLogsRequest : public AbstractModel
                {
                public:
                    DescribeLogsRequest();
                    ~DescribeLogsRequest() = default;
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
                     * 获取日志查询开始时间（RFC3339格式的时间字符串），默认值为当前时间的前一个小时
                     * @return StartTime 日志查询开始时间（RFC3339格式的时间字符串），默认值为当前时间的前一个小时
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置日志查询开始时间（RFC3339格式的时间字符串），默认值为当前时间的前一个小时
                     * @param _startTime 日志查询开始时间（RFC3339格式的时间字符串），默认值为当前时间的前一个小时
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
                     * 获取日志查询结束时间（RFC3339格式的时间字符串），默认值为当前时间
                     * @return EndTime 日志查询结束时间（RFC3339格式的时间字符串），默认值为当前时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置日志查询结束时间（RFC3339格式的时间字符串），默认值为当前时间
                     * @param _endTime 日志查询结束时间（RFC3339格式的时间字符串），默认值为当前时间
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
                     * 获取日志查询条数，默认值100，最大值100
                     * @return Limit 日志查询条数，默认值100，最大值100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置日志查询条数，默认值100，最大值100
                     * @param _limit 日志查询条数，默认值100，最大值100
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
                     * 获取Pod的名称，即需要查询服务对应的Pod，和Service参数对应，不同Service的PodName获取方式不同，具体如下：
- Service类型为TRAIN：
  调用[DescribeTrainingTaskPods接口](/document/product/851/75088)查询训练任务pod列表，PodName为接口返回值中Response.PodNames
- Service类型为NOTEBOOK：
  调用[DescribeNotebook接口](/document/product/851/95662)查询Notebook详情，PodName为接口返回值中Response.NotebookDetail.PodName
- Service类型为INFER：
  调用[DescribeModelService接口](/document/product/851/82287)查询单个服务详情，PodName为接口返回值中Response.Service.ServiceInfo.PodInfos
- Service类型为BATCH：
  调用[DescribeBatchTask接口](/document/product/851/80180)查询跑批任务详情，PodName为接口返回值中Response.BatchTaskDetail. PodList
注：支持结尾通配符*
                     * @return PodName Pod的名称，即需要查询服务对应的Pod，和Service参数对应，不同Service的PodName获取方式不同，具体如下：
- Service类型为TRAIN：
  调用[DescribeTrainingTaskPods接口](/document/product/851/75088)查询训练任务pod列表，PodName为接口返回值中Response.PodNames
- Service类型为NOTEBOOK：
  调用[DescribeNotebook接口](/document/product/851/95662)查询Notebook详情，PodName为接口返回值中Response.NotebookDetail.PodName
- Service类型为INFER：
  调用[DescribeModelService接口](/document/product/851/82287)查询单个服务详情，PodName为接口返回值中Response.Service.ServiceInfo.PodInfos
- Service类型为BATCH：
  调用[DescribeBatchTask接口](/document/product/851/80180)查询跑批任务详情，PodName为接口返回值中Response.BatchTaskDetail. PodList
注：支持结尾通配符*
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置Pod的名称，即需要查询服务对应的Pod，和Service参数对应，不同Service的PodName获取方式不同，具体如下：
- Service类型为TRAIN：
  调用[DescribeTrainingTaskPods接口](/document/product/851/75088)查询训练任务pod列表，PodName为接口返回值中Response.PodNames
- Service类型为NOTEBOOK：
  调用[DescribeNotebook接口](/document/product/851/95662)查询Notebook详情，PodName为接口返回值中Response.NotebookDetail.PodName
- Service类型为INFER：
  调用[DescribeModelService接口](/document/product/851/82287)查询单个服务详情，PodName为接口返回值中Response.Service.ServiceInfo.PodInfos
- Service类型为BATCH：
  调用[DescribeBatchTask接口](/document/product/851/80180)查询跑批任务详情，PodName为接口返回值中Response.BatchTaskDetail. PodList
注：支持结尾通配符*
                     * @param _podName Pod的名称，即需要查询服务对应的Pod，和Service参数对应，不同Service的PodName获取方式不同，具体如下：
- Service类型为TRAIN：
  调用[DescribeTrainingTaskPods接口](/document/product/851/75088)查询训练任务pod列表，PodName为接口返回值中Response.PodNames
- Service类型为NOTEBOOK：
  调用[DescribeNotebook接口](/document/product/851/95662)查询Notebook详情，PodName为接口返回值中Response.NotebookDetail.PodName
- Service类型为INFER：
  调用[DescribeModelService接口](/document/product/851/82287)查询单个服务详情，PodName为接口返回值中Response.Service.ServiceInfo.PodInfos
- Service类型为BATCH：
  调用[DescribeBatchTask接口](/document/product/851/80180)查询跑批任务详情，PodName为接口返回值中Response.BatchTaskDetail. PodList
注：支持结尾通配符*
                     * 
                     */
                    void SetPodName(const std::string& _podName);

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     * 
                     */
                    bool PodNameHasBeenSet() const;

                    /**
                     * 获取排序方向（可选值为ASC, DESC ），默认为DESC
                     * @return Order 排序方向（可选值为ASC, DESC ），默认为DESC
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序方向（可选值为ASC, DESC ），默认为DESC
                     * @param _order 排序方向（可选值为ASC, DESC ），默认为DESC
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
                     * 获取按哪个字段排序（可选值为Timestamp），默认值为Timestamp
                     * @return OrderField 按哪个字段排序（可选值为Timestamp），默认值为Timestamp
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置按哪个字段排序（可选值为Timestamp），默认值为Timestamp
                     * @param _orderField 按哪个字段排序（可选值为Timestamp），默认值为Timestamp
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
                     * 获取日志查询上下文，查询下一页的时候需要回传这个字段，该字段来自本接口的返回
                     * @return Context 日志查询上下文，查询下一页的时候需要回传这个字段，该字段来自本接口的返回
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置日志查询上下文，查询下一页的时候需要回传这个字段，该字段来自本接口的返回
                     * @param _context 日志查询上下文，查询下一页的时候需要回传这个字段，该字段来自本接口的返回
                     * 
                     */
                    void SetContext(const std::string& _context);

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取过滤条件
注意: 
1. Filter.Name：目前只支持Key（也就是按关键字过滤日志）
2. Filter.Values：表示过滤日志的关键字；Values为多个的时候表示同时满足
3. Filter. Negative和Filter. Fuzzy没有使用
                     * @return Filters 过滤条件
注意: 
1. Filter.Name：目前只支持Key（也就是按关键字过滤日志）
2. Filter.Values：表示过滤日志的关键字；Values为多个的时候表示同时满足
3. Filter. Negative和Filter. Fuzzy没有使用
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件
注意: 
1. Filter.Name：目前只支持Key（也就是按关键字过滤日志）
2. Filter.Values：表示过滤日志的关键字；Values为多个的时候表示同时满足
3. Filter. Negative和Filter. Fuzzy没有使用
                     * @param _filters 过滤条件
注意: 
1. Filter.Name：目前只支持Key（也就是按关键字过滤日志）
2. Filter.Values：表示过滤日志的关键字；Values为多个的时候表示同时满足
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
                     * 日志查询开始时间（RFC3339格式的时间字符串），默认值为当前时间的前一个小时
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 日志查询结束时间（RFC3339格式的时间字符串），默认值为当前时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 日志查询条数，默认值100，最大值100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

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
                     * Pod的名称，即需要查询服务对应的Pod，和Service参数对应，不同Service的PodName获取方式不同，具体如下：
- Service类型为TRAIN：
  调用[DescribeTrainingTaskPods接口](/document/product/851/75088)查询训练任务pod列表，PodName为接口返回值中Response.PodNames
- Service类型为NOTEBOOK：
  调用[DescribeNotebook接口](/document/product/851/95662)查询Notebook详情，PodName为接口返回值中Response.NotebookDetail.PodName
- Service类型为INFER：
  调用[DescribeModelService接口](/document/product/851/82287)查询单个服务详情，PodName为接口返回值中Response.Service.ServiceInfo.PodInfos
- Service类型为BATCH：
  调用[DescribeBatchTask接口](/document/product/851/80180)查询跑批任务详情，PodName为接口返回值中Response.BatchTaskDetail. PodList
注：支持结尾通配符*
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * 排序方向（可选值为ASC, DESC ），默认为DESC
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 按哪个字段排序（可选值为Timestamp），默认值为Timestamp
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * 日志查询上下文，查询下一页的时候需要回传这个字段，该字段来自本接口的返回
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * 过滤条件
注意: 
1. Filter.Name：目前只支持Key（也就是按关键字过滤日志）
2. Filter.Values：表示过滤日志的关键字；Values为多个的时候表示同时满足
3. Filter. Negative和Filter. Fuzzy没有使用
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBELOGSREQUEST_H_
