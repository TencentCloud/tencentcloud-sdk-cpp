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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_BGPINSTANCESPECIFICATION_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_BGPINSTANCESPECIFICATION_H_

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
                * 高防包资产实例的规格信息
                */
                class BGPInstanceSpecification : public AbstractModel
                {
                public:
                    BGPInstanceSpecification();
                    ~BGPInstanceSpecification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取保底防护峰值，单位Gbps
                     * @return ProtectBandwidth 保底防护峰值，单位Gbps
                     */
                    uint64_t GetProtectBandwidth() const;

                    /**
                     * 设置保底防护峰值，单位Gbps
                     * @param ProtectBandwidth 保底防护峰值，单位Gbps
                     */
                    void SetProtectBandwidth(const uint64_t& _protectBandwidth);

                    /**
                     * 判断参数 ProtectBandwidth 是否已赋值
                     * @return ProtectBandwidth 是否已赋值
                     */
                    bool ProtectBandwidthHasBeenSet() const;

                    /**
                     * 获取防护次数，单位次
                     * @return ProtectCountLimit 防护次数，单位次
                     */
                    uint64_t GetProtectCountLimit() const;

                    /**
                     * 设置防护次数，单位次
                     * @param ProtectCountLimit 防护次数，单位次
                     */
                    void SetProtectCountLimit(const uint64_t& _protectCountLimit);

                    /**
                     * 判断参数 ProtectCountLimit 是否已赋值
                     * @return ProtectCountLimit 是否已赋值
                     */
                    bool ProtectCountLimitHasBeenSet() const;

                    /**
                     * 获取防护IP数，单位个
                     * @return ProtectIPNumberLimit 防护IP数，单位个
                     */
                    uint64_t GetProtectIPNumberLimit() const;

                    /**
                     * 设置防护IP数，单位个
                     * @param ProtectIPNumberLimit 防护IP数，单位个
                     */
                    void SetProtectIPNumberLimit(const uint64_t& _protectIPNumberLimit);

                    /**
                     * 判断参数 ProtectIPNumberLimit 是否已赋值
                     * @return ProtectIPNumberLimit 是否已赋值
                     */
                    bool ProtectIPNumberLimitHasBeenSet() const;

                    /**
                     * 获取自动续费状态，取值[
0：没有开启自动续费
1：开启了自动续费
]
                     * @return AutoRenewFlag 自动续费状态，取值[
0：没有开启自动续费
1：开启了自动续费
]
                     */
                    uint64_t GetAutoRenewFlag() const;

                    /**
                     * 设置自动续费状态，取值[
0：没有开启自动续费
1：开启了自动续费
]
                     * @param AutoRenewFlag 自动续费状态，取值[
0：没有开启自动续费
1：开启了自动续费
]
                     */
                    void SetAutoRenewFlag(const uint64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取联合产品标记，0代表普通高防包，1代表联合高防包
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UnionPackFlag 联合产品标记，0代表普通高防包，1代表联合高防包
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetUnionPackFlag() const;

                    /**
                     * 设置联合产品标记，0代表普通高防包，1代表联合高防包
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UnionPackFlag 联合产品标记，0代表普通高防包，1代表联合高防包
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUnionPackFlag(const uint64_t& _unionPackFlag);

                    /**
                     * 判断参数 UnionPackFlag 是否已赋值
                     * @return UnionPackFlag 是否已赋值
                     */
                    bool UnionPackFlagHasBeenSet() const;

                private:

                    /**
                     * 保底防护峰值，单位Gbps
                     */
                    uint64_t m_protectBandwidth;
                    bool m_protectBandwidthHasBeenSet;

                    /**
                     * 防护次数，单位次
                     */
                    uint64_t m_protectCountLimit;
                    bool m_protectCountLimitHasBeenSet;

                    /**
                     * 防护IP数，单位个
                     */
                    uint64_t m_protectIPNumberLimit;
                    bool m_protectIPNumberLimitHasBeenSet;

                    /**
                     * 自动续费状态，取值[
0：没有开启自动续费
1：开启了自动续费
]
                     */
                    uint64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 联合产品标记，0代表普通高防包，1代表联合高防包
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_unionPackFlag;
                    bool m_unionPackFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_BGPINSTANCESPECIFICATION_H_
