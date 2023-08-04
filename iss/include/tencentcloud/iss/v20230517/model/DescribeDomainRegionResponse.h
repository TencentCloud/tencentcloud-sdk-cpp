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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEDOMAINREGIONRESPONSE_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEDOMAINREGIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 查询域名可绑定集群数据
                */
                class DescribeDomainRegionResponse : public AbstractModel
                {
                public:
                    DescribeDomainRegionResponse();
                    ~DescribeDomainRegionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取服务节点描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Label 服务节点描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取服务节点 ID（对应为其他接口中所需的 ClusterId）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value 服务节点 ID（对应为其他接口中所需的 ClusterId）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取地域信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 地域信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                private:

                    /**
                     * 服务节点描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 服务节点 ID（对应为其他接口中所需的 ClusterId）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 地域信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEDOMAINREGIONRESPONSE_H_
