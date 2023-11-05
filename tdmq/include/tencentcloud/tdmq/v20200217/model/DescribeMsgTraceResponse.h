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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEMSGTRACERESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEMSGTRACERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/ProducerLog.h>
#include <tencentcloud/tdmq/v20200217/model/ServerLog.h>
#include <tencentcloud/tdmq/v20200217/model/ConsumerLogs.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeMsgTrace返回参数结构体
                */
                class DescribeMsgTraceResponse : public AbstractModel
                {
                public:
                    DescribeMsgTraceResponse();
                    ~DescribeMsgTraceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取生产信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProducerLog 生产信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ProducerLog GetProducerLog() const;

                    /**
                     * 判断参数 ProducerLog 是否已赋值
                     * @return ProducerLog 是否已赋值
                     * 
                     */
                    bool ProducerLogHasBeenSet() const;

                    /**
                     * 获取服务方信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServerLog 服务方信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ServerLog GetServerLog() const;

                    /**
                     * 判断参数 ServerLog 是否已赋值
                     * @return ServerLog 是否已赋值
                     * 
                     */
                    bool ServerLogHasBeenSet() const;

                    /**
                     * 获取消费信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConsumerLogs 消费信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ConsumerLogs GetConsumerLogs() const;

                    /**
                     * 判断参数 ConsumerLogs 是否已赋值
                     * @return ConsumerLogs 是否已赋值
                     * 
                     */
                    bool ConsumerLogsHasBeenSet() const;

                private:

                    /**
                     * 生产信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ProducerLog m_producerLog;
                    bool m_producerLogHasBeenSet;

                    /**
                     * 服务方信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ServerLog m_serverLog;
                    bool m_serverLogHasBeenSet;

                    /**
                     * 消费信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ConsumerLogs m_consumerLogs;
                    bool m_consumerLogsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEMSGTRACERESPONSE_H_
