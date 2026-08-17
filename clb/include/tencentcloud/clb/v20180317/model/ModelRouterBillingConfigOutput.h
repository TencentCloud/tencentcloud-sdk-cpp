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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODELROUTERBILLINGCONFIGOUTPUT_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODELROUTERBILLINGCONFIGOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 模型路由计费信息
                */
                class ModelRouterBillingConfigOutput : public AbstractModel
                {
                public:
                    ModelRouterBillingConfigOutput();
                    ~ModelRouterBillingConfigOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>模型路由计费模式</p><p>枚举值：</p><ul><li>POSTPAID_BY_HOUR： 按量计费</li><li>RESOURCE_PACKAGE： 按资源包抵扣</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChargeType <p>模型路由计费模式</p><p>枚举值：</p><ul><li>POSTPAID_BY_HOUR： 按量计费</li><li>RESOURCE_PACKAGE： 按资源包抵扣</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置<p>模型路由计费模式</p><p>枚举值：</p><ul><li>POSTPAID_BY_HOUR： 按量计费</li><li>RESOURCE_PACKAGE： 按资源包抵扣</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _chargeType <p>模型路由计费模式</p><p>枚举值：</p><ul><li>POSTPAID_BY_HOUR： 按量计费</li><li>RESOURCE_PACKAGE： 按资源包抵扣</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取<p>实例规格</p><p>枚举值：</p><ul><li>t1.nano-01： 入门版</li><li>t1.nano-02： 轻量版</li><li>t1.nano-03： 轻量增强版</li><li>t1.micro-01： 微型版</li><li>t1.micro-02： 基础版</li><li>t1.small-01： 标准版</li><li>t1.small-02： 标准增强版</li><li>t1.medium-01： 进阶版</li><li>t1.medium-02： 进阶增强版</li><li>t1.large-01： 专业版</li><li>t1.large-02： 专业增强版</li><li>t1.xlarge-01： 旗舰版</li><li>t1.xlarge-02： 至尊版</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SlaType <p>实例规格</p><p>枚举值：</p><ul><li>t1.nano-01： 入门版</li><li>t1.nano-02： 轻量版</li><li>t1.nano-03： 轻量增强版</li><li>t1.micro-01： 微型版</li><li>t1.micro-02： 基础版</li><li>t1.small-01： 标准版</li><li>t1.small-02： 标准增强版</li><li>t1.medium-01： 进阶版</li><li>t1.medium-02： 进阶增强版</li><li>t1.large-01： 专业版</li><li>t1.large-02： 专业增强版</li><li>t1.xlarge-01： 旗舰版</li><li>t1.xlarge-02： 至尊版</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSlaType() const;

                    /**
                     * 设置<p>实例规格</p><p>枚举值：</p><ul><li>t1.nano-01： 入门版</li><li>t1.nano-02： 轻量版</li><li>t1.nano-03： 轻量增强版</li><li>t1.micro-01： 微型版</li><li>t1.micro-02： 基础版</li><li>t1.small-01： 标准版</li><li>t1.small-02： 标准增强版</li><li>t1.medium-01： 进阶版</li><li>t1.medium-02： 进阶增强版</li><li>t1.large-01： 专业版</li><li>t1.large-02： 专业增强版</li><li>t1.xlarge-01： 旗舰版</li><li>t1.xlarge-02： 至尊版</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _slaType <p>实例规格</p><p>枚举值：</p><ul><li>t1.nano-01： 入门版</li><li>t1.nano-02： 轻量版</li><li>t1.nano-03： 轻量增强版</li><li>t1.micro-01： 微型版</li><li>t1.micro-02： 基础版</li><li>t1.small-01： 标准版</li><li>t1.small-02： 标准增强版</li><li>t1.medium-01： 进阶版</li><li>t1.medium-02： 进阶增强版</li><li>t1.large-01： 专业版</li><li>t1.large-02： 专业增强版</li><li>t1.xlarge-01： 旗舰版</li><li>t1.xlarge-02： 至尊版</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSlaType(const std::string& _slaType);

                    /**
                     * 判断参数 SlaType 是否已赋值
                     * @return SlaType 是否已赋值
                     * 
                     */
                    bool SlaTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否关联资源包抵扣</p><p>枚举值：</p><ul><li>true： 关联</li><li>false： 不关联</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssociateResourcePackage <p>是否关联资源包抵扣</p><p>枚举值：</p><ul><li>true： 关联</li><li>false： 不关联</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetAssociateResourcePackage() const;

                    /**
                     * 设置<p>是否关联资源包抵扣</p><p>枚举值：</p><ul><li>true： 关联</li><li>false： 不关联</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _associateResourcePackage <p>是否关联资源包抵扣</p><p>枚举值：</p><ul><li>true： 关联</li><li>false： 不关联</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssociateResourcePackage(const bool& _associateResourcePackage);

                    /**
                     * 判断参数 AssociateResourcePackage 是否已赋值
                     * @return AssociateResourcePackage 是否已赋值
                     * 
                     */
                    bool AssociateResourcePackageHasBeenSet() const;

                private:

                    /**
                     * <p>模型路由计费模式</p><p>枚举值：</p><ul><li>POSTPAID_BY_HOUR： 按量计费</li><li>RESOURCE_PACKAGE： 按资源包抵扣</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * <p>实例规格</p><p>枚举值：</p><ul><li>t1.nano-01： 入门版</li><li>t1.nano-02： 轻量版</li><li>t1.nano-03： 轻量增强版</li><li>t1.micro-01： 微型版</li><li>t1.micro-02： 基础版</li><li>t1.small-01： 标准版</li><li>t1.small-02： 标准增强版</li><li>t1.medium-01： 进阶版</li><li>t1.medium-02： 进阶增强版</li><li>t1.large-01： 专业版</li><li>t1.large-02： 专业增强版</li><li>t1.xlarge-01： 旗舰版</li><li>t1.xlarge-02： 至尊版</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_slaType;
                    bool m_slaTypeHasBeenSet;

                    /**
                     * <p>是否关联资源包抵扣</p><p>枚举值：</p><ul><li>true： 关联</li><li>false： 不关联</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_associateResourcePackage;
                    bool m_associateResourcePackageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODELROUTERBILLINGCONFIGOUTPUT_H_
