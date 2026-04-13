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
                     * 获取<p>服务类型，TRAIN为任务式建模, NOTEBOOK为Notebook, INFER为在线服务, BATCH为批量预测<br>枚举值：</p><ul><li>TRAIN</li><li>NOTEBOOK</li><li>INFER</li><li>BATCH</li></ul>
                     * @return Service <p>服务类型，TRAIN为任务式建模, NOTEBOOK为Notebook, INFER为在线服务, BATCH为批量预测<br>枚举值：</p><ul><li>TRAIN</li><li>NOTEBOOK</li><li>INFER</li><li>BATCH</li></ul>
                     * 
                     */
                    std::string GetService() const;

                    /**
                     * 设置<p>服务类型，TRAIN为任务式建模, NOTEBOOK为Notebook, INFER为在线服务, BATCH为批量预测<br>枚举值：</p><ul><li>TRAIN</li><li>NOTEBOOK</li><li>INFER</li><li>BATCH</li></ul>
                     * @param _service <p>服务类型，TRAIN为任务式建模, NOTEBOOK为Notebook, INFER为在线服务, BATCH为批量预测<br>枚举值：</p><ul><li>TRAIN</li><li>NOTEBOOK</li><li>INFER</li><li>BATCH</li></ul>
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
                     * 获取<p>日志查询开始时间（RFC3339格式的时间字符串），默认值为当前时间的前一个小时</p>
                     * @return StartTime <p>日志查询开始时间（RFC3339格式的时间字符串），默认值为当前时间的前一个小时</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>日志查询开始时间（RFC3339格式的时间字符串），默认值为当前时间的前一个小时</p>
                     * @param _startTime <p>日志查询开始时间（RFC3339格式的时间字符串），默认值为当前时间的前一个小时</p>
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
                     * 获取<p>日志查询结束时间（RFC3339格式的时间字符串），默认值为当前时间</p>
                     * @return EndTime <p>日志查询结束时间（RFC3339格式的时间字符串），默认值为当前时间</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>日志查询结束时间（RFC3339格式的时间字符串），默认值为当前时间</p>
                     * @param _endTime <p>日志查询结束时间（RFC3339格式的时间字符串），默认值为当前时间</p>
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
                     * 获取<p>日志查询条数，默认值100，最大值1000</p>
                     * @return Limit <p>日志查询条数，默认值100，最大值1000</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>日志查询条数，默认值100，最大值1000</p>
                     * @param _limit <p>日志查询条数，默认值100，最大值1000</p>
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
                     * 获取<p>服务ID，和Service参数对应，不同Service的服务ID获取方式不同，具体如下：</p><ul><li>Service类型为TRAIN：<br>调用<a href="/document/product/851/75089">DescribeTrainingTask接口</a>查询训练任务详情，ServiceId为接口返回值中Response.TrainingTaskDetail.LatestInstanceId</li><li>Service类型为NOTEBOOK：<br>调用<a href="/document/product/851/95662">DescribeNotebook接口</a>查询Notebook详情，ServiceId为接口返回值中Response.NotebookDetail.PodName</li><li>Service类型为INFER：<br>调用<a href="/document/product/851/82285">DescribeModelServiceGroup接口</a>查询服务组详情，ServiceId为接口返回值中Response.ServiceGroup.Services.ServiceId</li><li>Service类型为BATCH：<br>调用<a href="/document/product/851/80180">DescribeBatchTask接口</a>查询跑批任务详情，ServiceId为接口返回值中Response.BatchTaskDetail.LatestInstanceId</li></ul>
                     * @return ServiceId <p>服务ID，和Service参数对应，不同Service的服务ID获取方式不同，具体如下：</p><ul><li>Service类型为TRAIN：<br>调用<a href="/document/product/851/75089">DescribeTrainingTask接口</a>查询训练任务详情，ServiceId为接口返回值中Response.TrainingTaskDetail.LatestInstanceId</li><li>Service类型为NOTEBOOK：<br>调用<a href="/document/product/851/95662">DescribeNotebook接口</a>查询Notebook详情，ServiceId为接口返回值中Response.NotebookDetail.PodName</li><li>Service类型为INFER：<br>调用<a href="/document/product/851/82285">DescribeModelServiceGroup接口</a>查询服务组详情，ServiceId为接口返回值中Response.ServiceGroup.Services.ServiceId</li><li>Service类型为BATCH：<br>调用<a href="/document/product/851/80180">DescribeBatchTask接口</a>查询跑批任务详情，ServiceId为接口返回值中Response.BatchTaskDetail.LatestInstanceId</li></ul>
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置<p>服务ID，和Service参数对应，不同Service的服务ID获取方式不同，具体如下：</p><ul><li>Service类型为TRAIN：<br>调用<a href="/document/product/851/75089">DescribeTrainingTask接口</a>查询训练任务详情，ServiceId为接口返回值中Response.TrainingTaskDetail.LatestInstanceId</li><li>Service类型为NOTEBOOK：<br>调用<a href="/document/product/851/95662">DescribeNotebook接口</a>查询Notebook详情，ServiceId为接口返回值中Response.NotebookDetail.PodName</li><li>Service类型为INFER：<br>调用<a href="/document/product/851/82285">DescribeModelServiceGroup接口</a>查询服务组详情，ServiceId为接口返回值中Response.ServiceGroup.Services.ServiceId</li><li>Service类型为BATCH：<br>调用<a href="/document/product/851/80180">DescribeBatchTask接口</a>查询跑批任务详情，ServiceId为接口返回值中Response.BatchTaskDetail.LatestInstanceId</li></ul>
                     * @param _serviceId <p>服务ID，和Service参数对应，不同Service的服务ID获取方式不同，具体如下：</p><ul><li>Service类型为TRAIN：<br>调用<a href="/document/product/851/75089">DescribeTrainingTask接口</a>查询训练任务详情，ServiceId为接口返回值中Response.TrainingTaskDetail.LatestInstanceId</li><li>Service类型为NOTEBOOK：<br>调用<a href="/document/product/851/95662">DescribeNotebook接口</a>查询Notebook详情，ServiceId为接口返回值中Response.NotebookDetail.PodName</li><li>Service类型为INFER：<br>调用<a href="/document/product/851/82285">DescribeModelServiceGroup接口</a>查询服务组详情，ServiceId为接口返回值中Response.ServiceGroup.Services.ServiceId</li><li>Service类型为BATCH：<br>调用<a href="/document/product/851/80180">DescribeBatchTask接口</a>查询跑批任务详情，ServiceId为接口返回值中Response.BatchTaskDetail.LatestInstanceId</li></ul>
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
                     * 获取<p>Pod的名称，即需要查询服务对应的Pod，和Service参数对应，不同Service的PodName获取方式不同，具体如下：</p><ul><li>Service类型为TRAIN：<br>调用<a href="/document/product/851/75088">DescribeTrainingTaskPods接口</a>查询训练任务pod列表，PodName为接口返回值中Response.PodNames</li><li>Service类型为NOTEBOOK：<br>调用<a href="/document/product/851/95662">DescribeNotebook接口</a>查询Notebook详情，PodName为接口返回值中Response.NotebookDetail.PodName</li><li>Service类型为INFER：<br>调用<a href="/document/product/851/82287">DescribeModelService接口</a>查询单个服务详情，PodName为接口返回值中Response.Service.ServiceInfo.PodInfos</li><li>Service类型为BATCH：<br>调用<a href="/document/product/851/80180">DescribeBatchTask接口</a>查询跑批任务详情，PodName为接口返回值中Response.BatchTaskDetail. PodList<br>注：支持结尾通配符*</li></ul>
                     * @return PodName <p>Pod的名称，即需要查询服务对应的Pod，和Service参数对应，不同Service的PodName获取方式不同，具体如下：</p><ul><li>Service类型为TRAIN：<br>调用<a href="/document/product/851/75088">DescribeTrainingTaskPods接口</a>查询训练任务pod列表，PodName为接口返回值中Response.PodNames</li><li>Service类型为NOTEBOOK：<br>调用<a href="/document/product/851/95662">DescribeNotebook接口</a>查询Notebook详情，PodName为接口返回值中Response.NotebookDetail.PodName</li><li>Service类型为INFER：<br>调用<a href="/document/product/851/82287">DescribeModelService接口</a>查询单个服务详情，PodName为接口返回值中Response.Service.ServiceInfo.PodInfos</li><li>Service类型为BATCH：<br>调用<a href="/document/product/851/80180">DescribeBatchTask接口</a>查询跑批任务详情，PodName为接口返回值中Response.BatchTaskDetail. PodList<br>注：支持结尾通配符*</li></ul>
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置<p>Pod的名称，即需要查询服务对应的Pod，和Service参数对应，不同Service的PodName获取方式不同，具体如下：</p><ul><li>Service类型为TRAIN：<br>调用<a href="/document/product/851/75088">DescribeTrainingTaskPods接口</a>查询训练任务pod列表，PodName为接口返回值中Response.PodNames</li><li>Service类型为NOTEBOOK：<br>调用<a href="/document/product/851/95662">DescribeNotebook接口</a>查询Notebook详情，PodName为接口返回值中Response.NotebookDetail.PodName</li><li>Service类型为INFER：<br>调用<a href="/document/product/851/82287">DescribeModelService接口</a>查询单个服务详情，PodName为接口返回值中Response.Service.ServiceInfo.PodInfos</li><li>Service类型为BATCH：<br>调用<a href="/document/product/851/80180">DescribeBatchTask接口</a>查询跑批任务详情，PodName为接口返回值中Response.BatchTaskDetail. PodList<br>注：支持结尾通配符*</li></ul>
                     * @param _podName <p>Pod的名称，即需要查询服务对应的Pod，和Service参数对应，不同Service的PodName获取方式不同，具体如下：</p><ul><li>Service类型为TRAIN：<br>调用<a href="/document/product/851/75088">DescribeTrainingTaskPods接口</a>查询训练任务pod列表，PodName为接口返回值中Response.PodNames</li><li>Service类型为NOTEBOOK：<br>调用<a href="/document/product/851/95662">DescribeNotebook接口</a>查询Notebook详情，PodName为接口返回值中Response.NotebookDetail.PodName</li><li>Service类型为INFER：<br>调用<a href="/document/product/851/82287">DescribeModelService接口</a>查询单个服务详情，PodName为接口返回值中Response.Service.ServiceInfo.PodInfos</li><li>Service类型为BATCH：<br>调用<a href="/document/product/851/80180">DescribeBatchTask接口</a>查询跑批任务详情，PodName为接口返回值中Response.BatchTaskDetail. PodList<br>注：支持结尾通配符*</li></ul>
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
                     * 获取<p>排序方向（可选值为ASC, DESC ），默认为DESC</p>
                     * @return Order <p>排序方向（可选值为ASC, DESC ），默认为DESC</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>排序方向（可选值为ASC, DESC ），默认为DESC</p>
                     * @param _order <p>排序方向（可选值为ASC, DESC ），默认为DESC</p>
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
                     * 获取<p>按哪个字段排序（可选值为Timestamp），默认值为Timestamp</p>
                     * @return OrderField <p>按哪个字段排序（可选值为Timestamp），默认值为Timestamp</p>
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置<p>按哪个字段排序（可选值为Timestamp），默认值为Timestamp</p>
                     * @param _orderField <p>按哪个字段排序（可选值为Timestamp），默认值为Timestamp</p>
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
                     * 获取<p>日志查询上下文，查询下一页的时候需要回传这个字段，该字段来自本接口的返回</p>
                     * @return Context <p>日志查询上下文，查询下一页的时候需要回传这个字段，该字段来自本接口的返回</p>
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置<p>日志查询上下文，查询下一页的时候需要回传这个字段，该字段来自本接口的返回</p>
                     * @param _context <p>日志查询上下文，查询下一页的时候需要回传这个字段，该字段来自本接口的返回</p>
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
                     * 获取<p>过滤条件<br>注意: </p><ol><li>Filter.Name：目前只支持Key（也就是按关键字过滤日志）</li><li>Filter.Values：表示过滤日志的关键字；Values为多个的时候表示同时满足</li><li>Filter. Negative和Filter. Fuzzy没有使用</li></ol>
                     * @return Filters <p>过滤条件<br>注意: </p><ol><li>Filter.Name：目前只支持Key（也就是按关键字过滤日志）</li><li>Filter.Values：表示过滤日志的关键字；Values为多个的时候表示同时满足</li><li>Filter. Negative和Filter. Fuzzy没有使用</li></ol>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>过滤条件<br>注意: </p><ol><li>Filter.Name：目前只支持Key（也就是按关键字过滤日志）</li><li>Filter.Values：表示过滤日志的关键字；Values为多个的时候表示同时满足</li><li>Filter. Negative和Filter. Fuzzy没有使用</li></ol>
                     * @param _filters <p>过滤条件<br>注意: </p><ol><li>Filter.Name：目前只支持Key（也就是按关键字过滤日志）</li><li>Filter.Values：表示过滤日志的关键字；Values为多个的时候表示同时满足</li><li>Filter. Negative和Filter. Fuzzy没有使用</li></ol>
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>使用OFFSET分页查询时，指定返回的数据偏移量，默认为0</p>
                     * @return Offset <p>使用OFFSET分页查询时，指定返回的数据偏移量，默认为0</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>使用OFFSET分页查询时，指定返回的数据偏移量，默认为0</p>
                     * @param _offset <p>使用OFFSET分页查询时，指定返回的数据偏移量，默认为0</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * <p>服务类型，TRAIN为任务式建模, NOTEBOOK为Notebook, INFER为在线服务, BATCH为批量预测<br>枚举值：</p><ul><li>TRAIN</li><li>NOTEBOOK</li><li>INFER</li><li>BATCH</li></ul>
                     */
                    std::string m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * <p>日志查询开始时间（RFC3339格式的时间字符串），默认值为当前时间的前一个小时</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>日志查询结束时间（RFC3339格式的时间字符串），默认值为当前时间</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>日志查询条数，默认值100，最大值1000</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>服务ID，和Service参数对应，不同Service的服务ID获取方式不同，具体如下：</p><ul><li>Service类型为TRAIN：<br>调用<a href="/document/product/851/75089">DescribeTrainingTask接口</a>查询训练任务详情，ServiceId为接口返回值中Response.TrainingTaskDetail.LatestInstanceId</li><li>Service类型为NOTEBOOK：<br>调用<a href="/document/product/851/95662">DescribeNotebook接口</a>查询Notebook详情，ServiceId为接口返回值中Response.NotebookDetail.PodName</li><li>Service类型为INFER：<br>调用<a href="/document/product/851/82285">DescribeModelServiceGroup接口</a>查询服务组详情，ServiceId为接口返回值中Response.ServiceGroup.Services.ServiceId</li><li>Service类型为BATCH：<br>调用<a href="/document/product/851/80180">DescribeBatchTask接口</a>查询跑批任务详情，ServiceId为接口返回值中Response.BatchTaskDetail.LatestInstanceId</li></ul>
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * <p>Pod的名称，即需要查询服务对应的Pod，和Service参数对应，不同Service的PodName获取方式不同，具体如下：</p><ul><li>Service类型为TRAIN：<br>调用<a href="/document/product/851/75088">DescribeTrainingTaskPods接口</a>查询训练任务pod列表，PodName为接口返回值中Response.PodNames</li><li>Service类型为NOTEBOOK：<br>调用<a href="/document/product/851/95662">DescribeNotebook接口</a>查询Notebook详情，PodName为接口返回值中Response.NotebookDetail.PodName</li><li>Service类型为INFER：<br>调用<a href="/document/product/851/82287">DescribeModelService接口</a>查询单个服务详情，PodName为接口返回值中Response.Service.ServiceInfo.PodInfos</li><li>Service类型为BATCH：<br>调用<a href="/document/product/851/80180">DescribeBatchTask接口</a>查询跑批任务详情，PodName为接口返回值中Response.BatchTaskDetail. PodList<br>注：支持结尾通配符*</li></ul>
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                    /**
                     * <p>排序方向（可选值为ASC, DESC ），默认为DESC</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>按哪个字段排序（可选值为Timestamp），默认值为Timestamp</p>
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                    /**
                     * <p>日志查询上下文，查询下一页的时候需要回传这个字段，该字段来自本接口的返回</p>
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * <p>过滤条件<br>注意: </p><ol><li>Filter.Name：目前只支持Key（也就是按关键字过滤日志）</li><li>Filter.Values：表示过滤日志的关键字；Values为多个的时候表示同时满足</li><li>Filter. Negative和Filter. Fuzzy没有使用</li></ol>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>使用OFFSET分页查询时，指定返回的数据偏移量，默认为0</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBELOGSREQUEST_H_
