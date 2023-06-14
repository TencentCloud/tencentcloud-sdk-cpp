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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEENVIRONMENTATTRIBUTESRESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEENVIRONMENTATTRIBUTESRESPONSE_H_

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
                * DescribeEnvironmentAttributes返回参数结构体
                */
                class DescribeEnvironmentAttributesResponse : public AbstractModel
                {
                public:
                    DescribeEnvironmentAttributesResponse();
                    ~DescribeEnvironmentAttributesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取未消费消息过期时间，单位：秒，最大1296000（15天）。
                     * @return MsgTTL 未消费消息过期时间，单位：秒，最大1296000（15天）。
                     * 
                     */
                    uint64_t GetMsgTTL() const;

                    /**
                     * 判断参数 MsgTTL 是否已赋值
                     * @return MsgTTL 是否已赋值
                     * 
                     */
                    bool MsgTTLHasBeenSet() const;

                    /**
                     * 获取消费速率限制，单位：byte/秒，0：不限速。
                     * @return RateInByte 消费速率限制，单位：byte/秒，0：不限速。
                     * 
                     */
                    uint64_t GetRateInByte() const;

                    /**
                     * 判断参数 RateInByte 是否已赋值
                     * @return RateInByte 是否已赋值
                     * 
                     */
                    bool RateInByteHasBeenSet() const;

                    /**
                     * 获取消费速率限制，单位：个数/秒，0：不限速。
                     * @return RateInSize 消费速率限制，单位：个数/秒，0：不限速。
                     * 
                     */
                    uint64_t GetRateInSize() const;

                    /**
                     * 判断参数 RateInSize 是否已赋值
                     * @return RateInSize 是否已赋值
                     * 
                     */
                    bool RateInSizeHasBeenSet() const;

                    /**
                     * 获取已消费消息保存策略，单位：小时，0：消费完马上删除。
                     * @return RetentionHours 已消费消息保存策略，单位：小时，0：消费完马上删除。
                     * 
                     */
                    uint64_t GetRetentionHours() const;

                    /**
                     * 判断参数 RetentionHours 是否已赋值
                     * @return RetentionHours 是否已赋值
                     * 
                     */
                    bool RetentionHoursHasBeenSet() const;

                    /**
                     * 获取已消费消息保存策略，单位：G，0：消费完马上删除。
                     * @return RetentionSize 已消费消息保存策略，单位：G，0：消费完马上删除。
                     * 
                     */
                    uint64_t GetRetentionSize() const;

                    /**
                     * 判断参数 RetentionSize 是否已赋值
                     * @return RetentionSize 是否已赋值
                     * 
                     */
                    bool RetentionSizeHasBeenSet() const;

                    /**
                     * 获取环境（命名空间）名称。
                     * @return EnvironmentId 环境（命名空间）名称。
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取副本数。
                     * @return Replicas 副本数。
                     * 
                     */
                    uint64_t GetReplicas() const;

                    /**
                     * 判断参数 Replicas 是否已赋值
                     * @return Replicas 是否已赋值
                     * 
                     */
                    bool ReplicasHasBeenSet() const;

                    /**
                     * 获取备注。
                     * @return Remark 备注。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 未消费消息过期时间，单位：秒，最大1296000（15天）。
                     */
                    uint64_t m_msgTTL;
                    bool m_msgTTLHasBeenSet;

                    /**
                     * 消费速率限制，单位：byte/秒，0：不限速。
                     */
                    uint64_t m_rateInByte;
                    bool m_rateInByteHasBeenSet;

                    /**
                     * 消费速率限制，单位：个数/秒，0：不限速。
                     */
                    uint64_t m_rateInSize;
                    bool m_rateInSizeHasBeenSet;

                    /**
                     * 已消费消息保存策略，单位：小时，0：消费完马上删除。
                     */
                    uint64_t m_retentionHours;
                    bool m_retentionHoursHasBeenSet;

                    /**
                     * 已消费消息保存策略，单位：G，0：消费完马上删除。
                     */
                    uint64_t m_retentionSize;
                    bool m_retentionSizeHasBeenSet;

                    /**
                     * 环境（命名空间）名称。
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * 副本数。
                     */
                    uint64_t m_replicas;
                    bool m_replicasHasBeenSet;

                    /**
                     * 备注。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEENVIRONMENTATTRIBUTESRESPONSE_H_
