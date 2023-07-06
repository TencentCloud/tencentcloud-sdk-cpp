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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SV_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SV_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 询价参数
                */
                class Sv : public AbstractModel
                {
                public:
                    Sv();
                    ~Sv() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取询价参数键。
                     * @return Key 询价参数键。
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置询价参数键。
                     * @param _key 询价参数键。
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取询价参数值。
                     * @return Value 询价参数值。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置询价参数值。
                     * @param _value 询价参数值。
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取询价参数映射的配额，取值有：
<li>zone：站点数；</li>
<li>custom-rule：自定义规则数；</li>
<li>rate-limiting-rule：速率限制规则数；</li>
<li>l4-proxy-instance：四层代理实例数。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Pack 询价参数映射的配额，取值有：
<li>zone：站点数；</li>
<li>custom-rule：自定义规则数；</li>
<li>rate-limiting-rule：速率限制规则数；</li>
<li>l4-proxy-instance：四层代理实例数。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPack() const;

                    /**
                     * 设置询价参数映射的配额，取值有：
<li>zone：站点数；</li>
<li>custom-rule：自定义规则数；</li>
<li>rate-limiting-rule：速率限制规则数；</li>
<li>l4-proxy-instance：四层代理实例数。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pack 询价参数映射的配额，取值有：
<li>zone：站点数；</li>
<li>custom-rule：自定义规则数；</li>
<li>rate-limiting-rule：速率限制规则数；</li>
<li>l4-proxy-instance：四层代理实例数。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPack(const std::string& _pack);

                    /**
                     * 判断参数 Pack 是否已赋值
                     * @return Pack 是否已赋值
                     * 
                     */
                    bool PackHasBeenSet() const;

                    /**
                     * 获取询价参数映射的四层代理实例Id。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 询价参数映射的四层代理实例Id。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置询价参数映射的四层代理实例Id。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId 询价参数映射的四层代理实例Id。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取询价参数对应的防护等级。
取值有： <li> cm_30G：中国大陆加速区域保底防护30Gbps；</li><li> cm_60G：中国大陆加速区域保底防护60Gbps；</li><li> cm_100G：中国大陆加速区域保底防护100Gbps；</li><li> anycast_300G：全球加速区域（除中国大陆）Anycast联防300Gbps；</li><li> anycast_unlimited：全球加速区域（除中国大陆）Anycast无上限全力防护；</li><li> cm_30G_anycast_300G：中国大陆加速区域保底防护30Gbps，全球加速区域（除中国大陆）Anycast联防300Gbps；</li><li> cm_30G_anycast_unlimited：中国大陆加速区域保底防护30Gbps，全球加速区域（除中国大陆）Anycast无上限全力防护；</li><li> cm_60G_anycast_300G：中国大陆加速区域保底防护60Gbps，全球加速区域（除中国大陆）Anycast联防300Gbps；</li><li> cm_60G_anycast_unlimited：中国大陆加速区域保底防护60Gbps，全球加速区域（除中国大陆）Anycast无上限全力防护；</li><li> cm_100G_anycast_300G：中国大陆加速区域保底防护100Gbps，全球加速区域（除中国大陆）Anycast联防300Gbps；</li><li> cm_100G_anycast_unlimited：中国大陆加速区域保底防护100Gbps，全球加速区域（除中国大陆）Anycast无上限全力防护。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProtectionSpecs 询价参数对应的防护等级。
取值有： <li> cm_30G：中国大陆加速区域保底防护30Gbps；</li><li> cm_60G：中国大陆加速区域保底防护60Gbps；</li><li> cm_100G：中国大陆加速区域保底防护100Gbps；</li><li> anycast_300G：全球加速区域（除中国大陆）Anycast联防300Gbps；</li><li> anycast_unlimited：全球加速区域（除中国大陆）Anycast无上限全力防护；</li><li> cm_30G_anycast_300G：中国大陆加速区域保底防护30Gbps，全球加速区域（除中国大陆）Anycast联防300Gbps；</li><li> cm_30G_anycast_unlimited：中国大陆加速区域保底防护30Gbps，全球加速区域（除中国大陆）Anycast无上限全力防护；</li><li> cm_60G_anycast_300G：中国大陆加速区域保底防护60Gbps，全球加速区域（除中国大陆）Anycast联防300Gbps；</li><li> cm_60G_anycast_unlimited：中国大陆加速区域保底防护60Gbps，全球加速区域（除中国大陆）Anycast无上限全力防护；</li><li> cm_100G_anycast_300G：中国大陆加速区域保底防护100Gbps，全球加速区域（除中国大陆）Anycast联防300Gbps；</li><li> cm_100G_anycast_unlimited：中国大陆加速区域保底防护100Gbps，全球加速区域（除中国大陆）Anycast无上限全力防护。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProtectionSpecs() const;

                    /**
                     * 设置询价参数对应的防护等级。
取值有： <li> cm_30G：中国大陆加速区域保底防护30Gbps；</li><li> cm_60G：中国大陆加速区域保底防护60Gbps；</li><li> cm_100G：中国大陆加速区域保底防护100Gbps；</li><li> anycast_300G：全球加速区域（除中国大陆）Anycast联防300Gbps；</li><li> anycast_unlimited：全球加速区域（除中国大陆）Anycast无上限全力防护；</li><li> cm_30G_anycast_300G：中国大陆加速区域保底防护30Gbps，全球加速区域（除中国大陆）Anycast联防300Gbps；</li><li> cm_30G_anycast_unlimited：中国大陆加速区域保底防护30Gbps，全球加速区域（除中国大陆）Anycast无上限全力防护；</li><li> cm_60G_anycast_300G：中国大陆加速区域保底防护60Gbps，全球加速区域（除中国大陆）Anycast联防300Gbps；</li><li> cm_60G_anycast_unlimited：中国大陆加速区域保底防护60Gbps，全球加速区域（除中国大陆）Anycast无上限全力防护；</li><li> cm_100G_anycast_300G：中国大陆加速区域保底防护100Gbps，全球加速区域（除中国大陆）Anycast联防300Gbps；</li><li> cm_100G_anycast_unlimited：中国大陆加速区域保底防护100Gbps，全球加速区域（除中国大陆）Anycast无上限全力防护。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _protectionSpecs 询价参数对应的防护等级。
取值有： <li> cm_30G：中国大陆加速区域保底防护30Gbps；</li><li> cm_60G：中国大陆加速区域保底防护60Gbps；</li><li> cm_100G：中国大陆加速区域保底防护100Gbps；</li><li> anycast_300G：全球加速区域（除中国大陆）Anycast联防300Gbps；</li><li> anycast_unlimited：全球加速区域（除中国大陆）Anycast无上限全力防护；</li><li> cm_30G_anycast_300G：中国大陆加速区域保底防护30Gbps，全球加速区域（除中国大陆）Anycast联防300Gbps；</li><li> cm_30G_anycast_unlimited：中国大陆加速区域保底防护30Gbps，全球加速区域（除中国大陆）Anycast无上限全力防护；</li><li> cm_60G_anycast_300G：中国大陆加速区域保底防护60Gbps，全球加速区域（除中国大陆）Anycast联防300Gbps；</li><li> cm_60G_anycast_unlimited：中国大陆加速区域保底防护60Gbps，全球加速区域（除中国大陆）Anycast无上限全力防护；</li><li> cm_100G_anycast_300G：中国大陆加速区域保底防护100Gbps，全球加速区域（除中国大陆）Anycast联防300Gbps；</li><li> cm_100G_anycast_unlimited：中国大陆加速区域保底防护100Gbps，全球加速区域（除中国大陆）Anycast无上限全力防护。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProtectionSpecs(const std::string& _protectionSpecs);

                    /**
                     * 判断参数 ProtectionSpecs 是否已赋值
                     * @return ProtectionSpecs 是否已赋值
                     * 
                     */
                    bool ProtectionSpecsHasBeenSet() const;

                private:

                    /**
                     * 询价参数键。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 询价参数值。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 询价参数映射的配额，取值有：
<li>zone：站点数；</li>
<li>custom-rule：自定义规则数；</li>
<li>rate-limiting-rule：速率限制规则数；</li>
<li>l4-proxy-instance：四层代理实例数。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pack;
                    bool m_packHasBeenSet;

                    /**
                     * 询价参数映射的四层代理实例Id。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 询价参数对应的防护等级。
取值有： <li> cm_30G：中国大陆加速区域保底防护30Gbps；</li><li> cm_60G：中国大陆加速区域保底防护60Gbps；</li><li> cm_100G：中国大陆加速区域保底防护100Gbps；</li><li> anycast_300G：全球加速区域（除中国大陆）Anycast联防300Gbps；</li><li> anycast_unlimited：全球加速区域（除中国大陆）Anycast无上限全力防护；</li><li> cm_30G_anycast_300G：中国大陆加速区域保底防护30Gbps，全球加速区域（除中国大陆）Anycast联防300Gbps；</li><li> cm_30G_anycast_unlimited：中国大陆加速区域保底防护30Gbps，全球加速区域（除中国大陆）Anycast无上限全力防护；</li><li> cm_60G_anycast_300G：中国大陆加速区域保底防护60Gbps，全球加速区域（除中国大陆）Anycast联防300Gbps；</li><li> cm_60G_anycast_unlimited：中国大陆加速区域保底防护60Gbps，全球加速区域（除中国大陆）Anycast无上限全力防护；</li><li> cm_100G_anycast_300G：中国大陆加速区域保底防护100Gbps，全球加速区域（除中国大陆）Anycast联防300Gbps；</li><li> cm_100G_anycast_unlimited：中国大陆加速区域保底防护100Gbps，全球加速区域（除中国大陆）Anycast无上限全力防护。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_protectionSpecs;
                    bool m_protectionSpecsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SV_H_
