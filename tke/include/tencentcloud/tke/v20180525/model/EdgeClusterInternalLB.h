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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_EDGECLUSTERINTERNALLB_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_EDGECLUSTERINTERNALLB_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 边缘计算集群内网访问LB信息
                */
                class EdgeClusterInternalLB : public AbstractModel
                {
                public:
                    EdgeClusterInternalLB();
                    ~EdgeClusterInternalLB() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启内网访问LB
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Enabled 是否开启内网访问LB
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置是否开启内网访问LB
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Enabled 是否开启内网访问LB
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取内网访问LB关联的子网Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetId 内网访问LB关联的子网Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetSubnetId() const;

                    /**
                     * 设置内网访问LB关联的子网Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SubnetId 内网访问LB关联的子网Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSubnetId(const std::vector<std::string>& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                private:

                    /**
                     * 是否开启内网访问LB
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 内网访问LB关联的子网Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_subnetId;
                    bool m_subnetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_EDGECLUSTERINTERNALLB_H_
