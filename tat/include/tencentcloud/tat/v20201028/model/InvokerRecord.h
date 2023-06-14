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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_INVOKERRECORD_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_INVOKERRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * 执行器执行记录。
                */
                class InvokerRecord : public AbstractModel
                {
                public:
                    InvokerRecord();
                    ~InvokerRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取执行器ID。
                     * @return InvokerId 执行器ID。
                     * 
                     */
                    std::string GetInvokerId() const;

                    /**
                     * 设置执行器ID。
                     * @param _invokerId 执行器ID。
                     * 
                     */
                    void SetInvokerId(const std::string& _invokerId);

                    /**
                     * 判断参数 InvokerId 是否已赋值
                     * @return InvokerId 是否已赋值
                     * 
                     */
                    bool InvokerIdHasBeenSet() const;

                    /**
                     * 获取执行时间。
                     * @return InvokeTime 执行时间。
                     * 
                     */
                    std::string GetInvokeTime() const;

                    /**
                     * 设置执行时间。
                     * @param _invokeTime 执行时间。
                     * 
                     */
                    void SetInvokeTime(const std::string& _invokeTime);

                    /**
                     * 判断参数 InvokeTime 是否已赋值
                     * @return InvokeTime 是否已赋值
                     * 
                     */
                    bool InvokeTimeHasBeenSet() const;

                    /**
                     * 获取执行原因。
                     * @return Reason 执行原因。
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置执行原因。
                     * @param _reason 执行原因。
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取命令执行ID。
                     * @return InvocationId 命令执行ID。
                     * 
                     */
                    std::string GetInvocationId() const;

                    /**
                     * 设置命令执行ID。
                     * @param _invocationId 命令执行ID。
                     * 
                     */
                    void SetInvocationId(const std::string& _invocationId);

                    /**
                     * 判断参数 InvocationId 是否已赋值
                     * @return InvocationId 是否已赋值
                     * 
                     */
                    bool InvocationIdHasBeenSet() const;

                    /**
                     * 获取触发结果。
                     * @return Result 触发结果。
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置触发结果。
                     * @param _result 触发结果。
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * 执行器ID。
                     */
                    std::string m_invokerId;
                    bool m_invokerIdHasBeenSet;

                    /**
                     * 执行时间。
                     */
                    std::string m_invokeTime;
                    bool m_invokeTimeHasBeenSet;

                    /**
                     * 执行原因。
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * 命令执行ID。
                     */
                    std::string m_invocationId;
                    bool m_invocationIdHasBeenSet;

                    /**
                     * 触发结果。
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_INVOKERRECORD_H_
