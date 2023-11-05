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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_PRODUCERLOG_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_PRODUCERLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 消息生产信息
                */
                class ProducerLog : public AbstractModel
                {
                public:
                    ProducerLog();
                    ~ProducerLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取消息ID。
                     * @return MsgId 消息ID。
                     * 
                     */
                    std::string GetMsgId() const;

                    /**
                     * 设置消息ID。
                     * @param _msgId 消息ID。
                     * 
                     */
                    void SetMsgId(const std::string& _msgId);

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
                     * 设置生产者名称。
                     * @param _producerName 生产者名称。
                     * 
                     */
                    void SetProducerName(const std::string& _producerName);

                    /**
                     * 判断参数 ProducerName 是否已赋值
                     * @return ProducerName 是否已赋值
                     * 
                     */
                    bool ProducerNameHasBeenSet() const;

                    /**
                     * 获取消息生产时间。
                     * @return ProduceTime 消息生产时间。
                     * 
                     */
                    std::string GetProduceTime() const;

                    /**
                     * 设置消息生产时间。
                     * @param _produceTime 消息生产时间。
                     * 
                     */
                    void SetProduceTime(const std::string& _produceTime);

                    /**
                     * 判断参数 ProduceTime 是否已赋值
                     * @return ProduceTime 是否已赋值
                     * 
                     */
                    bool ProduceTimeHasBeenSet() const;

                    /**
                     * 获取生产者客户端。
                     * @return ProducerAddr 生产者客户端。
                     * 
                     */
                    std::string GetProducerAddr() const;

                    /**
                     * 设置生产者客户端。
                     * @param _producerAddr 生产者客户端。
                     * 
                     */
                    void SetProducerAddr(const std::string& _producerAddr);

                    /**
                     * 判断参数 ProducerAddr 是否已赋值
                     * @return ProducerAddr 是否已赋值
                     * 
                     */
                    bool ProducerAddrHasBeenSet() const;

                    /**
                     * 获取生产耗时（秒）。
                     * @return ProduceUseTime 生产耗时（秒）。
                     * 
                     */
                    uint64_t GetProduceUseTime() const;

                    /**
                     * 设置生产耗时（秒）。
                     * @param _produceUseTime 生产耗时（秒）。
                     * 
                     */
                    void SetProduceUseTime(const uint64_t& _produceUseTime);

                    /**
                     * 判断参数 ProduceUseTime 是否已赋值
                     * @return ProduceUseTime 是否已赋值
                     * 
                     */
                    bool ProduceUseTimeHasBeenSet() const;

                    /**
                     * 获取状态。
                     * @return Status 状态。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态。
                     * @param _status 状态。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

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

                    /**
                     * 消息生产时间。
                     */
                    std::string m_produceTime;
                    bool m_produceTimeHasBeenSet;

                    /**
                     * 生产者客户端。
                     */
                    std::string m_producerAddr;
                    bool m_producerAddrHasBeenSet;

                    /**
                     * 生产耗时（秒）。
                     */
                    uint64_t m_produceUseTime;
                    bool m_produceUseTimeHasBeenSet;

                    /**
                     * 状态。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_PRODUCERLOG_H_
