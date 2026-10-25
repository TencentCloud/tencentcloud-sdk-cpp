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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMSSESUMMARYRESPONSE_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMSSESUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeTDEMSSESummary返回参数结构体
                */
                class DescribeTDEMSSESummaryResponse : public AbstractModel
                {
                public:
                    DescribeTDEMSSESummaryResponse();
                    ~DescribeTDEMSSESummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>对话次数。一条大模型对话对应一条 sse_call。</p>
                     * @return ConversationCount <p>对话次数。一条大模型对话对应一条 sse_call。</p>
                     * 
                     */
                    int64_t GetConversationCount() const;

                    /**
                     * 判断参数 ConversationCount 是否已赋值
                     * @return ConversationCount 是否已赋值
                     * 
                     */
                    bool ConversationCountHasBeenSet() const;

                    /**
                     * 获取<p>token 总数。对话次数为 0 时为 0。</p>
                     * @return TotalTokenCount <p>token 总数。对话次数为 0 时为 0。</p>
                     * 
                     */
                    int64_t GetTotalTokenCount() const;

                    /**
                     * 判断参数 TotalTokenCount 是否已赋值
                     * @return TotalTokenCount 是否已赋值
                     * 
                     */
                    bool TotalTokenCountHasBeenSet() const;

                    /**
                     * 获取<p>token 吞吐率，单位 token/秒。对话次数为 0 时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TokenThroughput <p>token 吞吐率，单位 token/秒。对话次数为 0 时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetTokenThroughput() const;

                    /**
                     * 判断参数 TokenThroughput 是否已赋值
                     * @return TokenThroughput 是否已赋值
                     * 
                     */
                    bool TokenThroughputHasBeenSet() const;

                    /**
                     * 获取<p>首次消息时延，单位毫秒。对话次数为 0 时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FirstMessageDelay <p>首次消息时延，单位毫秒。对话次数为 0 时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetFirstMessageDelay() const;

                    /**
                     * 判断参数 FirstMessageDelay 是否已赋值
                     * @return FirstMessageDelay 是否已赋值
                     * 
                     */
                    bool FirstMessageDelayHasBeenSet() const;

                    /**
                     * 获取<p>错误率，已乘 100。对话次数为 0 时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorRate <p>错误率，已乘 100。对话次数为 0 时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetErrorRate() const;

                    /**
                     * 判断参数 ErrorRate 是否已赋值
                     * @return ErrorRate 是否已赋值
                     * 
                     */
                    bool ErrorRateHasBeenSet() const;

                    /**
                     * 获取<p>卡死率，已乘 100。对话次数为 0 时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StallRate <p>卡死率，已乘 100。对话次数为 0 时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetStallRate() const;

                    /**
                     * 判断参数 StallRate 是否已赋值
                     * @return StallRate 是否已赋值
                     * 
                     */
                    bool StallRateHasBeenSet() const;

                    /**
                     * 获取<p>流畅度，已乘 100。对话次数为 0 时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Fluency <p>流畅度，已乘 100。对话次数为 0 时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetFluency() const;

                    /**
                     * 判断参数 Fluency 是否已赋值
                     * @return Fluency 是否已赋值
                     * 
                     */
                    bool FluencyHasBeenSet() const;

                private:

                    /**
                     * <p>对话次数。一条大模型对话对应一条 sse_call。</p>
                     */
                    int64_t m_conversationCount;
                    bool m_conversationCountHasBeenSet;

                    /**
                     * <p>token 总数。对话次数为 0 时为 0。</p>
                     */
                    int64_t m_totalTokenCount;
                    bool m_totalTokenCountHasBeenSet;

                    /**
                     * <p>token 吞吐率，单位 token/秒。对话次数为 0 时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_tokenThroughput;
                    bool m_tokenThroughputHasBeenSet;

                    /**
                     * <p>首次消息时延，单位毫秒。对话次数为 0 时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_firstMessageDelay;
                    bool m_firstMessageDelayHasBeenSet;

                    /**
                     * <p>错误率，已乘 100。对话次数为 0 时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_errorRate;
                    bool m_errorRateHasBeenSet;

                    /**
                     * <p>卡死率，已乘 100。对话次数为 0 时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_stallRate;
                    bool m_stallRateHasBeenSet;

                    /**
                     * <p>流畅度，已乘 100。对话次数为 0 时为 null。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_fluency;
                    bool m_fluencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBETDEMSSESUMMARYRESPONSE_H_
