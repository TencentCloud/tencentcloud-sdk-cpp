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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEIPAMDRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEIPAMDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeIPAMD返回参数结构体
                */
                class DescribeIPAMDResponse : public AbstractModel
                {
                public:
                    DescribeIPAMDResponse();
                    ~DescribeIPAMDResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取是否安装了eniipamd组件
                     * @return EnableIPAMD 是否安装了eniipamd组件
                     * 
                     */
                    bool GetEnableIPAMD() const;

                    /**
                     * 判断参数 EnableIPAMD 是否已赋值
                     * @return EnableIPAMD 是否已赋值
                     * 
                     */
                    bool EnableIPAMDHasBeenSet() const;

                    /**
                     * 获取是否开启自定义podcidr，默认为false，已安装eniipamd组件才意义
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableCustomizedPodCidr 是否开启自定义podcidr，默认为false，已安装eniipamd组件才意义
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnableCustomizedPodCidr() const;

                    /**
                     * 判断参数 EnableCustomizedPodCidr 是否已赋值
                     * @return EnableCustomizedPodCidr 是否已赋值
                     * 
                     */
                    bool EnableCustomizedPodCidrHasBeenSet() const;

                    /**
                     * 获取是否不开启vpccni模式，默认为false，已安装eniipamd组件才意义
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DisableVpcCniMode 是否不开启vpccni模式，默认为false，已安装eniipamd组件才意义
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetDisableVpcCniMode() const;

                    /**
                     * 判断参数 DisableVpcCniMode 是否已赋值
                     * @return DisableVpcCniMode 是否已赋值
                     * 
                     */
                    bool DisableVpcCniModeHasBeenSet() const;

                    /**
                     * 获取组件状态，已安装eniipamd组件才会有值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Phase 组件状态，已安装eniipamd组件才会有值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPhase() const;

                    /**
                     * 判断参数 Phase 是否已赋值
                     * @return Phase 是否已赋值
                     * 
                     */
                    bool PhaseHasBeenSet() const;

                    /**
                     * 获取错误信息，已安装eniipamd组件且状态为非running才会有错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Reason 错误信息，已安装eniipamd组件且状态为非running才会有错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取子网信息，已安装eniipamd组件才会有值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetIds 子网信息，已安装eniipamd组件才会有值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     * 
                     */
                    bool SubnetIdsHasBeenSet() const;

                private:

                    /**
                     * 是否安装了eniipamd组件
                     */
                    bool m_enableIPAMD;
                    bool m_enableIPAMDHasBeenSet;

                    /**
                     * 是否开启自定义podcidr，默认为false，已安装eniipamd组件才意义
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableCustomizedPodCidr;
                    bool m_enableCustomizedPodCidrHasBeenSet;

                    /**
                     * 是否不开启vpccni模式，默认为false，已安装eniipamd组件才意义
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_disableVpcCniMode;
                    bool m_disableVpcCniModeHasBeenSet;

                    /**
                     * 组件状态，已安装eniipamd组件才会有值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_phase;
                    bool m_phaseHasBeenSet;

                    /**
                     * 错误信息，已安装eniipamd组件且状态为非running才会有错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * 子网信息，已安装eniipamd组件才会有值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEIPAMDRESPONSE_H_
