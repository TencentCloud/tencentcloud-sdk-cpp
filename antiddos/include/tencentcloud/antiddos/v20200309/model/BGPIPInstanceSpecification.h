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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_BGPIPINSTANCESPECIFICATION_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_BGPIPINSTANCESPECIFICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * 高防IP资产实例的规格信息
                */
                class BGPIPInstanceSpecification : public AbstractModel
                {
                public:
                    BGPIPInstanceSpecification();
                    ~BGPIPInstanceSpecification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取保底防护峰值，单位Mbps
                     * @return ProtectBandwidth 保底防护峰值，单位Mbps
                     * 
                     */
                    uint64_t GetProtectBandwidth() const;

                    /**
                     * 设置保底防护峰值，单位Mbps
                     * @param _protectBandwidth 保底防护峰值，单位Mbps
                     * 
                     */
                    void SetProtectBandwidth(const uint64_t& _protectBandwidth);

                    /**
                     * 判断参数 ProtectBandwidth 是否已赋值
                     * @return ProtectBandwidth 是否已赋值
                     * 
                     */
                    bool ProtectBandwidthHasBeenSet() const;

                    /**
                     * 获取CC防护峰值，单位qps
                     * @return ProtectCCQPS CC防护峰值，单位qps
                     * 
                     */
                    uint64_t GetProtectCCQPS() const;

                    /**
                     * 设置CC防护峰值，单位qps
                     * @param _protectCCQPS CC防护峰值，单位qps
                     * 
                     */
                    void SetProtectCCQPS(const uint64_t& _protectCCQPS);

                    /**
                     * 判断参数 ProtectCCQPS 是否已赋值
                     * @return ProtectCCQPS 是否已赋值
                     * 
                     */
                    bool ProtectCCQPSHasBeenSet() const;

                    /**
                     * 获取正常业务带宽，单位Mbps
                     * @return NormalBandwidth 正常业务带宽，单位Mbps
                     * 
                     */
                    uint64_t GetNormalBandwidth() const;

                    /**
                     * 设置正常业务带宽，单位Mbps
                     * @param _normalBandwidth 正常业务带宽，单位Mbps
                     * 
                     */
                    void SetNormalBandwidth(const uint64_t& _normalBandwidth);

                    /**
                     * 判断参数 NormalBandwidth 是否已赋值
                     * @return NormalBandwidth 是否已赋值
                     * 
                     */
                    bool NormalBandwidthHasBeenSet() const;

                    /**
                     * 获取转发规则数，单位条
                     * @return ForwardRulesLimit 转发规则数，单位条
                     * 
                     */
                    uint64_t GetForwardRulesLimit() const;

                    /**
                     * 设置转发规则数，单位条
                     * @param _forwardRulesLimit 转发规则数，单位条
                     * 
                     */
                    void SetForwardRulesLimit(const uint64_t& _forwardRulesLimit);

                    /**
                     * 判断参数 ForwardRulesLimit 是否已赋值
                     * @return ForwardRulesLimit 是否已赋值
                     * 
                     */
                    bool ForwardRulesLimitHasBeenSet() const;

                    /**
                     * 获取自动续费状态，取值[
0：没有开启自动续费
1：开启了自动续费
]
                     * @return AutoRenewFlag 自动续费状态，取值[
0：没有开启自动续费
1：开启了自动续费
]
                     * 
                     */
                    uint64_t GetAutoRenewFlag() const;

                    /**
                     * 设置自动续费状态，取值[
0：没有开启自动续费
1：开启了自动续费
]
                     * @param _autoRenewFlag 自动续费状态，取值[
0：没有开启自动续费
1：开启了自动续费
]
                     * 
                     */
                    void SetAutoRenewFlag(const uint64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取高防IP线路，取值为[
1：BGP线路
2：电信
3：联通
4：移动
99：第三方合作线路
]
                     * @return Line 高防IP线路，取值为[
1：BGP线路
2：电信
3：联通
4：移动
99：第三方合作线路
]
                     * 
                     */
                    uint64_t GetLine() const;

                    /**
                     * 设置高防IP线路，取值为[
1：BGP线路
2：电信
3：联通
4：移动
99：第三方合作线路
]
                     * @param _line 高防IP线路，取值为[
1：BGP线路
2：电信
3：联通
4：移动
99：第三方合作线路
]
                     * 
                     */
                    void SetLine(const uint64_t& _line);

                    /**
                     * 判断参数 Line 是否已赋值
                     * @return Line 是否已赋值
                     * 
                     */
                    bool LineHasBeenSet() const;

                    /**
                     * 获取弹性防护峰值，单位Mbps
                     * @return ElasticBandwidth 弹性防护峰值，单位Mbps
                     * 
                     */
                    uint64_t GetElasticBandwidth() const;

                    /**
                     * 设置弹性防护峰值，单位Mbps
                     * @param _elasticBandwidth 弹性防护峰值，单位Mbps
                     * 
                     */
                    void SetElasticBandwidth(const uint64_t& _elasticBandwidth);

                    /**
                     * 判断参数 ElasticBandwidth 是否已赋值
                     * @return ElasticBandwidth 是否已赋值
                     * 
                     */
                    bool ElasticBandwidthHasBeenSet() const;

                private:

                    /**
                     * 保底防护峰值，单位Mbps
                     */
                    uint64_t m_protectBandwidth;
                    bool m_protectBandwidthHasBeenSet;

                    /**
                     * CC防护峰值，单位qps
                     */
                    uint64_t m_protectCCQPS;
                    bool m_protectCCQPSHasBeenSet;

                    /**
                     * 正常业务带宽，单位Mbps
                     */
                    uint64_t m_normalBandwidth;
                    bool m_normalBandwidthHasBeenSet;

                    /**
                     * 转发规则数，单位条
                     */
                    uint64_t m_forwardRulesLimit;
                    bool m_forwardRulesLimitHasBeenSet;

                    /**
                     * 自动续费状态，取值[
0：没有开启自动续费
1：开启了自动续费
]
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 高防IP线路，取值为[
1：BGP线路
2：电信
3：联通
4：移动
99：第三方合作线路
]
                     */
                    uint64_t m_line;
                    bool m_lineHasBeenSet;

                    /**
                     * 弹性防护峰值，单位Mbps
                     */
                    uint64_t m_elasticBandwidth;
                    bool m_elasticBandwidthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_BGPIPINSTANCESPECIFICATION_H_
