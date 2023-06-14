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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_GETREQUESTSTATUSREQUEST_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_GETREQUESTSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * GetRequestStatus请求参数结构体
                */
                class GetRequestStatusRequest : public AbstractModel
                {
                public:
                    GetRequestStatusRequest();
                    ~GetRequestStatusRequest() = default;
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
                     * 获取需要查询状态的请求 id
                     * @return FunctionRequestId 需要查询状态的请求 id
                     * 
                     */
                    std::string GetFunctionRequestId() const;

                    /**
                     * 设置需要查询状态的请求 id
                     * @param _functionRequestId 需要查询状态的请求 id
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
                     * 获取函数的所在的命名空间
                     * @return Namespace 函数的所在的命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置函数的所在的命名空间
                     * @param _namespace 函数的所在的命名空间
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
                     * 获取查询的开始时间，例如：2017-05-16 20:00:00，不填默认为当前时间 - 15min
                     * @return StartTime 查询的开始时间，例如：2017-05-16 20:00:00，不填默认为当前时间 - 15min
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置查询的开始时间，例如：2017-05-16 20:00:00，不填默认为当前时间 - 15min
                     * @param _startTime 查询的开始时间，例如：2017-05-16 20:00:00，不填默认为当前时间 - 15min
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
                     * 获取查询的结束时间，例如：2017-05-16 20:59:59。StartTime 为空时，EndTime 默认为当前时间；StartTime 有值时，需要同时传 EndTime。EndTime 需要晚于 StartTime。
                     * @return EndTime 查询的结束时间，例如：2017-05-16 20:59:59。StartTime 为空时，EndTime 默认为当前时间；StartTime 有值时，需要同时传 EndTime。EndTime 需要晚于 StartTime。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置查询的结束时间，例如：2017-05-16 20:59:59。StartTime 为空时，EndTime 默认为当前时间；StartTime 有值时，需要同时传 EndTime。EndTime 需要晚于 StartTime。
                     * @param _endTime 查询的结束时间，例如：2017-05-16 20:59:59。StartTime 为空时，EndTime 默认为当前时间；StartTime 有值时，需要同时传 EndTime。EndTime 需要晚于 StartTime。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 函数名称
                     */
                    std::string m_functionName;
                    bool m_functionNameHasBeenSet;

                    /**
                     * 需要查询状态的请求 id
                     */
                    std::string m_functionRequestId;
                    bool m_functionRequestIdHasBeenSet;

                    /**
                     * 函数的所在的命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 查询的开始时间，例如：2017-05-16 20:00:00，不填默认为当前时间 - 15min
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询的结束时间，例如：2017-05-16 20:59:59。StartTime 为空时，EndTime 默认为当前时间；StartTime 有值时，需要同时传 EndTime。EndTime 需要晚于 StartTime。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_GETREQUESTSTATUSREQUEST_H_
