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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEMSGRESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEMSGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeMsg返回参数结构体
                */
                class DescribeMsgResponse : public AbstractModel
                {
                public:
                    DescribeMsgResponse();
                    ~DescribeMsgResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取消息属性。
                     * @return Properties 消息属性。
                     * 
                     */
                    std::string GetProperties() const;

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     * 
                     */
                    bool PropertiesHasBeenSet() const;

                    /**
                     * 获取消息体。
                     * @return Body 消息体。
                     * 
                     */
                    std::string GetBody() const;

                    /**
                     * 判断参数 Body 是否已赋值
                     * @return Body 是否已赋值
                     * 
                     */
                    bool BodyHasBeenSet() const;

                    /**
                     * 获取批次ID。
                     * @return BatchId 批次ID。
                     * 
                     */
                    std::string GetBatchId() const;

                    /**
                     * 判断参数 BatchId 是否已赋值
                     * @return BatchId 是否已赋值
                     * 
                     */
                    bool BatchIdHasBeenSet() const;

                    /**
                     * 获取生产时间。
                     * @return ProduceTime 生产时间。
                     * 
                     */
                    std::string GetProduceTime() const;

                    /**
                     * 判断参数 ProduceTime 是否已赋值
                     * @return ProduceTime 是否已赋值
                     * 
                     */
                    bool ProduceTimeHasBeenSet() const;

                    /**
                     * 获取消息ID。
                     * @return MsgId 消息ID。
                     * 
                     */
                    std::string GetMsgId() const;

                    /**
                     * 判断参数 MsgId 是否已赋值
                     * @return MsgId 是否已赋值
                     * 
                     */
                    bool MsgIdHasBeenSet() const;

                    /**
                     * 获取生产者名称。
                     * @return ProducerName 生产者名称。
                     * 
                     */
                    std::string GetProducerName() const;

                    /**
                     * 判断参数 ProducerName 是否已赋值
                     * @return ProducerName 是否已赋值
                     * 
                     */
                    bool ProducerNameHasBeenSet() const;

                private:

                    /**
                     * 消息属性。
                     */
                    std::string m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * 消息体。
                     */
                    std::string m_body;
                    bool m_bodyHasBeenSet;

                    /**
                     * 批次ID。
                     */
                    std::string m_batchId;
                    bool m_batchIdHasBeenSet;

                    /**
                     * 生产时间。
                     */
                    std::string m_produceTime;
                    bool m_produceTimeHasBeenSet;

                    /**
                     * 消息ID。
                     */
                    std::string m_msgId;
                    bool m_msgIdHasBeenSet;

                    /**
                     * 生产者名称。
                     */
                    std::string m_producerName;
                    bool m_producerNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEMSGRESPONSE_H_
