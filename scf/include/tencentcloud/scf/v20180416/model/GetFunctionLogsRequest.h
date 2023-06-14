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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_GETFUNCTIONLOGSREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_GETFUNCTIONLOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/LogFilter.h>
#include <tencentcloud/scf/v20180416/model/LogSearchContext.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * GetFunctionLogs请求参数结构体
                */
                class GetFunctionLogsRequest : public AbstractModel
                {
                public:
                    GetFunctionLogsRequest();
                    ~GetFunctionLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取函数的名称。
- 为保证[获取函数运行日志](https://cloud.tencent.com/document/product/583/18583)接口`GetFunctionLogs`兼容性，输入参数`FunctionName`仍为非必填项，但建议填写该参数，否则可能导致日志获取失败。
- 函数关联日志服务后，建议使用[日志服务](https://cloud.tencent.com/document/product/614/16875)相关接口以获得最佳日志检索体验。
                     * @return FunctionName 函数的名称。
- 为保证[获取函数运行日志](https://cloud.tencent.com/document/product/583/18583)接口`GetFunctionLogs`兼容性，输入参数`FunctionName`仍为非必填项，但建议填写该参数，否则可能导致日志获取失败。
- 函数关联日志服务后，建议使用[日志服务](https://cloud.tencent.com/document/product/614/16875)相关接口以获得最佳日志检索体验。
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置函数的名称。
- 为保证[获取函数运行日志](https://cloud.tencent.com/document/product/583/18583)接口`GetFunctionLogs`兼容性，输入参数`FunctionName`仍为非必填项，但建议填写该参数，否则可能导致日志获取失败。
- 函数关联日志服务后，建议使用[日志服务](https://cloud.tencent.com/document/product/614/16875)相关接口以获得最佳日志检索体验。
                     * @param _functionName 函数的名称。
- 为保证[获取函数运行日志](https://cloud.tencent.com/document/product/583/18583)接口`GetFunctionLogs`兼容性，输入参数`FunctionName`仍为非必填项，但建议填写该参数，否则可能导致日志获取失败。
- 函数关联日志服务后，建议使用[日志服务](https://cloud.tencent.com/document/product/614/16875)相关接口以获得最佳日志检索体验。
                     * 
                     */
                    void SetFunctionName(const std::string& _functionName);

                    /**
                     * 判断参数 FunctionName 是否已赋值
                     * @return FunctionName 是否已赋值
                     * 
                     */
                    bool FunctionNameHasBeenSet() const;

                    /**
                     * 获取数据的偏移量，Offset+Limit不能大于10000
                     * @return Offset 数据的偏移量，Offset+Limit不能大于10000
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置数据的偏移量，Offset+Limit不能大于10000
                     * @param _offset 数据的偏移量，Offset+Limit不能大于10000
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
                     * 获取返回数据的长度，Offset+Limit不能大于10000
                     * @return Limit 返回数据的长度，Offset+Limit不能大于10000
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数据的长度，Offset+Limit不能大于10000
                     * @param _limit 返回数据的长度，Offset+Limit不能大于10000
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
                     * 获取以升序还是降序的方式对日志进行排序，可选值 desc和 asc
                     * @return Order 以升序还是降序的方式对日志进行排序，可选值 desc和 asc
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置以升序还是降序的方式对日志进行排序，可选值 desc和 asc
                     * @param _order 以升序还是降序的方式对日志进行排序，可选值 desc和 asc
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
                     * 获取根据某个字段排序日志,支持以下字段：function_name, duration, mem_usage, start_time
                     * @return OrderBy 根据某个字段排序日志,支持以下字段：function_name, duration, mem_usage, start_time
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置根据某个字段排序日志,支持以下字段：function_name, duration, mem_usage, start_time
                     * @param _orderBy 根据某个字段排序日志,支持以下字段：function_name, duration, mem_usage, start_time
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
                     * 获取日志过滤条件。可用来区分正确和错误日志，filter.RetCode=not0 表示只返回错误日志，filter.RetCode=is0 表示只返回正确日志，不传，则返回所有日志
                     * @return Filter 日志过滤条件。可用来区分正确和错误日志，filter.RetCode=not0 表示只返回错误日志，filter.RetCode=is0 表示只返回正确日志，不传，则返回所有日志
                     * 
                     */
                    LogFilter GetFilter() const;

                    /**
                     * 设置日志过滤条件。可用来区分正确和错误日志，filter.RetCode=not0 表示只返回错误日志，filter.RetCode=is0 表示只返回正确日志，不传，则返回所有日志
                     * @param _filter 日志过滤条件。可用来区分正确和错误日志，filter.RetCode=not0 表示只返回错误日志，filter.RetCode=is0 表示只返回正确日志，不传，则返回所有日志
                     * 
                     */
                    void SetFilter(const LogFilter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取函数的命名空间
                     * @return Namespace 函数的命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置函数的命名空间
                     * @param _namespace 函数的命名空间
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取函数的版本
                     * @return Qualifier 函数的版本
                     * 
                     */
                    std::string GetQualifier() const;

                    /**
                     * 设置函数的版本
                     * @param _qualifier 函数的版本
                     * 
                     */
                    void SetQualifier(const std::string& _qualifier);

                    /**
                     * 判断参数 Qualifier 是否已赋值
                     * @return Qualifier 是否已赋值
                     * 
                     */
                    bool QualifierHasBeenSet() const;

                    /**
                     * 获取执行该函数对应的requestId
                     * @return FunctionRequestId 执行该函数对应的requestId
                     * 
                     */
                    std::string GetFunctionRequestId() const;

                    /**
                     * 设置执行该函数对应的requestId
                     * @param _functionRequestId 执行该函数对应的requestId
                     * 
                     */
                    void SetFunctionRequestId(const std::string& _functionRequestId);

                    /**
                     * 判断参数 FunctionRequestId 是否已赋值
                     * @return FunctionRequestId 是否已赋值
                     * 
                     */
                    bool FunctionRequestIdHasBeenSet() const;

                    /**
                     * 获取查询的具体日期，例如：2017-05-16 20:00:00，只能与endtime相差一天之内
                     * @return StartTime 查询的具体日期，例如：2017-05-16 20:00:00，只能与endtime相差一天之内
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询的具体日期，例如：2017-05-16 20:00:00，只能与endtime相差一天之内
                     * @param _startTime 查询的具体日期，例如：2017-05-16 20:00:00，只能与endtime相差一天之内
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
                     * 获取查询的具体日期，例如：2017-05-16 20:59:59，只能与startTime相差一天之内
                     * @return EndTime 查询的具体日期，例如：2017-05-16 20:59:59，只能与startTime相差一天之内
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询的具体日期，例如：2017-05-16 20:59:59，只能与startTime相差一天之内
                     * @param _endTime 查询的具体日期，例如：2017-05-16 20:59:59，只能与startTime相差一天之内
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
                     * 获取该字段已下线
                     * @return SearchContext 该字段已下线
                     * 
                     */
                    LogSearchContext GetSearchContext() const;

                    /**
                     * 设置该字段已下线
                     * @param _searchContext 该字段已下线
                     * 
                     */
                    void SetSearchContext(const LogSearchContext& _searchContext);

                    /**
                     * 判断参数 SearchContext 是否已赋值
                     * @return SearchContext 是否已赋值
                     * 
                     */
                    bool SearchContextHasBeenSet() const;

                private:

                    /**
                     * 函数的名称。
- 为保证[获取函数运行日志](https://cloud.tencent.com/document/product/583/18583)接口`GetFunctionLogs`兼容性，输入参数`FunctionName`仍为非必填项，但建议填写该参数，否则可能导致日志获取失败。
- 函数关联日志服务后，建议使用[日志服务](https://cloud.tencent.com/document/product/614/16875)相关接口以获得最佳日志检索体验。
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * 数据的偏移量，Offset+Limit不能大于10000
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数据的长度，Offset+Limit不能大于10000
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 以升序还是降序的方式对日志进行排序，可选值 desc和 asc
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 根据某个字段排序日志,支持以下字段：function_name, duration, mem_usage, start_time
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 日志过滤条件。可用来区分正确和错误日志，filter.RetCode=not0 表示只返回错误日志，filter.RetCode=is0 表示只返回正确日志，不传，则返回所有日志
                     */
                    LogFilter m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * 函数的命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 函数的版本
                     */
                    std::string m_qualifier;
                    bool m_qualifierHasBeenSet;

                    /**
                     * 执行该函数对应的requestId
                     */
                    std::string m_functionRequestId;
                    bool m_functionRequestIdHasBeenSet;

                    /**
                     * 查询的具体日期，例如：2017-05-16 20:00:00，只能与endtime相差一天之内
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询的具体日期，例如：2017-05-16 20:59:59，只能与startTime相差一天之内
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 该字段已下线
                     */
                    LogSearchContext m_searchContext;
                    bool m_searchContextHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_GETFUNCTIONLOGSREQUEST_H_
