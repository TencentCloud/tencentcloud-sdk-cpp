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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERSCHEDULERPOLICYRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERSCHEDULERPOLICYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/SchedulerPolicyConfig.h>
#include <tencentcloud/tke/v20180525/model/ClientConnection.h>
#include <tencentcloud/tke/v20180525/model/Extenders.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeClusterSchedulerPolicy返回参数结构体
                */
                class DescribeClusterSchedulerPolicyResponse : public AbstractModel
                {
                public:
                    DescribeClusterSchedulerPolicyResponse();
                    ~DescribeClusterSchedulerPolicyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>调度策略json字符串</p>
                     * @return Policy <p>调度策略json字符串</p>
                     * 
                     */
                    std::string GetPolicy() const;

                    /**
                     * 判断参数 Policy 是否已赋值
                     * @return Policy 是否已赋值
                     * 
                     */
                    bool PolicyHasBeenSet() const;

                    /**
                     * 获取<p>SchedulerPolicy配置信息</p>
                     * @return SchedulerPolicyConfig <p>SchedulerPolicy配置信息</p>
                     * 
                     */
                    std::vector<SchedulerPolicyConfig> GetSchedulerPolicyConfig() const;

                    /**
                     * 判断参数 SchedulerPolicyConfig 是否已赋值
                     * @return SchedulerPolicyConfig 是否已赋值
                     * 
                     */
                    bool SchedulerPolicyConfigHasBeenSet() const;

                    /**
                     * 获取<p>客户端连接</p>
                     * @return ClientConnection <p>客户端连接</p>
                     * 
                     */
                    ClientConnection GetClientConnection() const;

                    /**
                     * 判断参数 ClientConnection 是否已赋值
                     * @return ClientConnection 是否已赋值
                     * 
                     */
                    bool ClientConnectionHasBeenSet() const;

                    /**
                     * 获取<p>扩展调度器</p>
                     * @return Extenders <p>扩展调度器</p>
                     * 
                     */
                    std::vector<Extenders> GetExtenders() const;

                    /**
                     * 判断参数 Extenders 是否已赋值
                     * @return Extenders 是否已赋值
                     * 
                     */
                    bool ExtendersHasBeenSet() const;

                    /**
                     * 获取<p>高性能模式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HighPerformance <p>高性能模式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetHighPerformance() const;

                    /**
                     * 判断参数 HighPerformance 是否已赋值
                     * @return HighPerformance 是否已赋值
                     * 
                     */
                    bool HighPerformanceHasBeenSet() const;

                private:

                    /**
                     * <p>调度策略json字符串</p>
                     */
                    std::string m_policy;
                    bool m_policyHasBeenSet;

                    /**
                     * <p>SchedulerPolicy配置信息</p>
                     */
                    std::vector<SchedulerPolicyConfig> m_schedulerPolicyConfig;
                    bool m_schedulerPolicyConfigHasBeenSet;

                    /**
                     * <p>客户端连接</p>
                     */
                    ClientConnection m_clientConnection;
                    bool m_clientConnectionHasBeenSet;

                    /**
                     * <p>扩展调度器</p>
                     */
                    std::vector<Extenders> m_extenders;
                    bool m_extendersHasBeenSet;

                    /**
                     * <p>高性能模式</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_highPerformance;
                    bool m_highPerformanceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERSCHEDULERPOLICYRESPONSE_H_
