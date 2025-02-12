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

#ifndef TENCENTCLOUD_SMOP_V20201203_MODEL_SUBMITTASKEVENTRESPONSE_H_
#define TENCENTCLOUD_SMOP_V20201203_MODEL_SUBMITTASKEVENTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/smop/v20201203/model/TaskEventData.h>


namespace TencentCloud
{
    namespace Smop
    {
        namespace V20201203
        {
            namespace Model
            {
                /**
                * SubmitTaskEvent返回参数结构体
                */
                class SubmitTaskEventResponse : public AbstractModel
                {
                public:
                    SubmitTaskEventResponse();
                    ~SubmitTaskEventResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务的唯一订单号
                     * @return OrderId 任务的唯一订单号
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取信息码。0表示成功，-1标识失败
                     * @return Code 信息码。0表示成功，-1标识失败
                     * 
                     */
                    int64_t GetCode() const;

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取提示信息
                     * @return Message 提示信息
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取任务处理结果列表
                     * @return Data 任务处理结果列表
                     * 
                     */
                    std::vector<TaskEventData> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 任务的唯一订单号
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 信息码。0表示成功，-1标识失败
                     */
                    int64_t m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 提示信息
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 任务处理结果列表
                     */
                    std::vector<TaskEventData> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMOP_V20201203_MODEL_SUBMITTASKEVENTRESPONSE_H_
