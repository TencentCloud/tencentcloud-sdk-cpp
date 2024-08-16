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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQPUBLICACCESSPOINTRESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQPUBLICACCESSPOINTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/PublicAccessRule.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeRocketMQPublicAccessPoint返回参数结构体
                */
                class DescribeRocketMQPublicAccessPointResponse : public AbstractModel
                {
                public:
                    DescribeRocketMQPublicAccessPointResponse();
                    ~DescribeRocketMQPublicAccessPointResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取公网接入点状态：
0， 已开启
1， 已关闭
2，开启中
3，关闭中
4，修改中
                     * @return Status 公网接入点状态：
0， 已开启
1， 已关闭
2，开启中
3，关闭中
4，修改中
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取支付状态：
0, 未知
1，正常
2，欠费
                     * @return PayStatus 支付状态：
0, 未知
1，正常
2，欠费
                     * 
                     */
                    int64_t GetPayStatus() const;

                    /**
                     * 判断参数 PayStatus 是否已赋值
                     * @return PayStatus 是否已赋值
                     * 
                     */
                    bool PayStatusHasBeenSet() const;

                    /**
                     * 获取接入点地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccessUrl 接入点地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccessUrl() const;

                    /**
                     * 判断参数 AccessUrl 是否已赋值
                     * @return AccessUrl 是否已赋值
                     * 
                     */
                    bool AccessUrlHasBeenSet() const;

                    /**
                     * 获取安全访问规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Rules 安全访问规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<PublicAccessRule> GetRules() const;

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取带宽
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Bandwidth 带宽
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取付费模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayMode 付费模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取公网是否按流量计费
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BillingFlow 公网是否按流量计费
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetBillingFlow() const;

                    /**
                     * 判断参数 BillingFlow 是否已赋值
                     * @return BillingFlow 是否已赋值
                     * 
                     */
                    bool BillingFlowHasBeenSet() const;

                private:

                    /**
                     * 公网接入点状态：
0， 已开启
1， 已关闭
2，开启中
3，关闭中
4，修改中
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 支付状态：
0, 未知
1，正常
2，欠费
                     */
                    int64_t m_payStatus;
                    bool m_payStatusHasBeenSet;

                    /**
                     * 接入点地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accessUrl;
                    bool m_accessUrlHasBeenSet;

                    /**
                     * 安全访问规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<PublicAccessRule> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * 带宽
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * 付费模式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 公网是否按流量计费
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_billingFlow;
                    bool m_billingFlowHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBEROCKETMQPUBLICACCESSPOINTRESPONSE_H_
