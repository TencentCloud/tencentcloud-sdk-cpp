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

#ifndef TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_MODIFYFORWARDRULERESPONSE_H_
#define TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_MODIFYFORWARDRULERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20201215
        {
            namespace Model
            {
                /**
                * ModifyForwardRule返回参数结构体
                */
                class ModifyForwardRuleResponse : public AbstractModel
                {
                public:
                    ModifyForwardRuleResponse();
                    ~ModifyForwardRuleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取腾讯云账号
                     * @return Endpoint 腾讯云账号
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 判断参数 Endpoint 是否已赋值
                     * @return Endpoint 是否已赋值
                     * 
                     */
                    bool EndpointHasBeenSet() const;

                    /**
                     * 获取产品ID
                     * @return ProductID 产品ID
                     * 
                     */
                    std::string GetProductID() const;

                    /**
                     * 判断参数 ProductID 是否已赋值
                     * @return ProductID 是否已赋值
                     * 
                     */
                    bool ProductIDHasBeenSet() const;

                    /**
                     * 获取结果
                     * @return Result 结果
                     * 
                     */
                    uint64_t GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取错误信息
                     * @return ErrMsg 错误信息
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                    /**
                     * 获取队列类型 0.CMQ 1.CKafka
                     * @return QueueType 队列类型 0.CMQ 1.CKafka
                     * 
                     */
                    uint64_t GetQueueType() const;

                    /**
                     * 判断参数 QueueType 是否已赋值
                     * @return QueueType 是否已赋值
                     * 
                     */
                    bool QueueTypeHasBeenSet() const;

                private:

                    /**
                     * 腾讯云账号
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                    /**
                     * 产品ID
                     */
                    std::string m_productID;
                    bool m_productIDHasBeenSet;

                    /**
                     * 结果
                     */
                    uint64_t m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 错误信息
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                    /**
                     * 队列类型 0.CMQ 1.CKafka
                     */
                    uint64_t m_queueType;
                    bool m_queueTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_MODIFYFORWARDRULERESPONSE_H_
