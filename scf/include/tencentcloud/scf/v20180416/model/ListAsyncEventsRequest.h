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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_LISTASYNCEVENTSREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_LISTASYNCEVENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/TimeInterval.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * ListAsyncEvents请求参数结构体
                */
                class ListAsyncEventsRequest : public AbstractModel
                {
                public:
                    ListAsyncEventsRequest();
                    ~ListAsyncEventsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取函数名称
                     * @return FunctionName 函数名称
                     * 
                     */
                    std::string GetFunctionName() const;

                    /**
                     * 设置函数名称
                     * @param _functionName 函数名称
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
                     * 获取命名空间
                     * @return Namespace 命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间
                     * @param _namespace 命名空间
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
                     * 获取过滤条件，函数版本
                     * @return Qualifier 过滤条件，函数版本
                     * 
                     */
                    std::string GetQualifier() const;

                    /**
                     * 设置过滤条件，函数版本
                     * @param _qualifier 过滤条件，函数版本
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
                     * 获取过滤条件，调用类型列表
                     * @return InvokeType 过滤条件，调用类型列表
                     * 
                     */
                    std::vector<std::string> GetInvokeType() const;

                    /**
                     * 设置过滤条件，调用类型列表
                     * @param _invokeType 过滤条件，调用类型列表
                     * 
                     */
                    void SetInvokeType(const std::vector<std::string>& _invokeType);

                    /**
                     * 判断参数 InvokeType 是否已赋值
                     * @return InvokeType 是否已赋值
                     * 
                     */
                    bool InvokeTypeHasBeenSet() const;

                    /**
                     * 获取过滤条件，事件状态列表
                     * @return Status 过滤条件，事件状态列表
                     * 
                     */
                    std::vector<std::string> GetStatus() const;

                    /**
                     * 设置过滤条件，事件状态列表
                     * @param _status 过滤条件，事件状态列表
                     * 
                     */
                    void SetStatus(const std::vector<std::string>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取过滤条件，开始执行时间左闭右开区间
                     * @return StartTimeInterval 过滤条件，开始执行时间左闭右开区间
                     * 
                     */
                    TimeInterval GetStartTimeInterval() const;

                    /**
                     * 设置过滤条件，开始执行时间左闭右开区间
                     * @param _startTimeInterval 过滤条件，开始执行时间左闭右开区间
                     * 
                     */
                    void SetStartTimeInterval(const TimeInterval& _startTimeInterval);

                    /**
                     * 判断参数 StartTimeInterval 是否已赋值
                     * @return StartTimeInterval 是否已赋值
                     * 
                     */
                    bool StartTimeIntervalHasBeenSet() const;

                    /**
                     * 获取过滤条件，结束执行时间左闭右开区间
                     * @return EndTimeInterval 过滤条件，结束执行时间左闭右开区间
                     * 
                     */
                    TimeInterval GetEndTimeInterval() const;

                    /**
                     * 设置过滤条件，结束执行时间左闭右开区间
                     * @param _endTimeInterval 过滤条件，结束执行时间左闭右开区间
                     * 
                     */
                    void SetEndTimeInterval(const TimeInterval& _endTimeInterval);

                    /**
                     * 判断参数 EndTimeInterval 是否已赋值
                     * @return EndTimeInterval 是否已赋值
                     * 
                     */
                    bool EndTimeIntervalHasBeenSet() const;

                    /**
                     * 获取可选值 ASC 和 DESC，默认 DESC
                     * @return Order 可选值 ASC 和 DESC，默认 DESC
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置可选值 ASC 和 DESC，默认 DESC
                     * @param _order 可选值 ASC 和 DESC，默认 DESC
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
                     * 获取可选值 StartTime 和 EndTime，默认值 StartTime
                     * @return Orderby 可选值 StartTime 和 EndTime，默认值 StartTime
                     * 
                     */
                    std::string GetOrderby() const;

                    /**
                     * 设置可选值 StartTime 和 EndTime，默认值 StartTime
                     * @param _orderby 可选值 StartTime 和 EndTime，默认值 StartTime
                     * 
                     */
                    void SetOrderby(const std::string& _orderby);

                    /**
                     * 判断参数 Orderby 是否已赋值
                     * @return Orderby 是否已赋值
                     * 
                     */
                    bool OrderbyHasBeenSet() const;

                    /**
                     * 获取数据偏移量，默认值为 0
                     * @return Offset 数据偏移量，默认值为 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置数据偏移量，默认值为 0
                     * @param _offset 数据偏移量，默认值为 0
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
                     * 获取返回数据长度，默认值为 20，最大值 100
                     * @return Limit 返回数据长度，默认值为 20，最大值 100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数据长度，默认值为 20，最大值 100
                     * @param _limit 返回数据长度，默认值为 20，最大值 100
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
                     * 获取过滤条件，事件调用请求id
                     * @return InvokeRequestId 过滤条件，事件调用请求id
                     * 
                     */
                    std::string GetInvokeRequestId() const;

                    /**
                     * 设置过滤条件，事件调用请求id
                     * @param _invokeRequestId 过滤条件，事件调用请求id
                     * 
                     */
                    void SetInvokeRequestId(const std::string& _invokeRequestId);

                    /**
                     * 判断参数 InvokeRequestId 是否已赋值
                     * @return InvokeRequestId 是否已赋值
                     * 
                     */
                    bool InvokeRequestIdHasBeenSet() const;

                private:

                    /**
                     * 函数名称
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * 命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 过滤条件，函数版本
                     */
                    std::string m_qualifier;
                    bool m_qualifierHasBeenSet;

                    /**
                     * 过滤条件，调用类型列表
                     */
                    std::vector<std::string> m_invokeType;
                    bool m_invokeTypeHasBeenSet;

                    /**
                     * 过滤条件，事件状态列表
                     */
                    std::vector<std::string> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 过滤条件，开始执行时间左闭右开区间
                     */
                    TimeInterval m_startTimeInterval;
                    bool m_startTimeIntervalHasBeenSet;

                    /**
                     * 过滤条件，结束执行时间左闭右开区间
                     */
                    TimeInterval m_endTimeInterval;
                    bool m_endTimeIntervalHasBeenSet;

                    /**
                     * 可选值 ASC 和 DESC，默认 DESC
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 可选值 StartTime 和 EndTime，默认值 StartTime
                     */
                    std::string m_orderby;
                    bool m_orderbyHasBeenSet;

                    /**
                     * 数据偏移量，默认值为 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数据长度，默认值为 20，最大值 100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 过滤条件，事件调用请求id
                     */
                    std::string m_invokeRequestId;
                    bool m_invokeRequestIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_LISTASYNCEVENTSREQUEST_H_
