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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_LANETRAFFICENTRY_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_LANETRAFFICENTRY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/TSEGatewaySelector.h>
#include <tencentcloud/tse/v20201207/model/ServiceGatewaySelector.h>
#include <tencentcloud/tse/v20201207/model/ServiceSelector.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 泳道入口信息
                */
                class LaneTrafficEntry : public AbstractModel
                {
                public:
                    LaneTrafficEntry();
                    ~LaneTrafficEntry() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取   // type == "polarismesh.cn/gateway/tse-gateway, 则 selector 为 TSEGatewaySelector
   // type == "polarismesh.cn/gateway/spring-cloud-gateway", 则 selector 为 ServiceGatewaySelector
   // type == "polarismesh.cn/service, 则 selector 为 ServiceSelector
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EntryType    // type == "polarismesh.cn/gateway/tse-gateway, 则 selector 为 TSEGatewaySelector
   // type == "polarismesh.cn/gateway/spring-cloud-gateway", 则 selector 为 ServiceGatewaySelector
   // type == "polarismesh.cn/service, 则 selector 为 ServiceSelector
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEntryType() const;

                    /**
                     * 设置   // type == "polarismesh.cn/gateway/tse-gateway, 则 selector 为 TSEGatewaySelector
   // type == "polarismesh.cn/gateway/spring-cloud-gateway", 则 selector 为 ServiceGatewaySelector
   // type == "polarismesh.cn/service, 则 selector 为 ServiceSelector
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _entryType    // type == "polarismesh.cn/gateway/tse-gateway, 则 selector 为 TSEGatewaySelector
   // type == "polarismesh.cn/gateway/spring-cloud-gateway", 则 selector 为 ServiceGatewaySelector
   // type == "polarismesh.cn/service, 则 selector 为 ServiceSelector
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEntryType(const std::string& _entryType);

                    /**
                     * 判断参数 EntryType 是否已赋值
                     * @return EntryType 是否已赋值
                     * 
                     */
                    bool EntryTypeHasBeenSet() const;

                    /**
                     * 获取TSE云原生网关选择器
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TSEGatewaySelector TSE云原生网关选择器
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TSEGatewaySelector GetTSEGatewaySelector() const;

                    /**
                     * 设置TSE云原生网关选择器
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tSEGatewaySelector TSE云原生网关选择器
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTSEGatewaySelector(const TSEGatewaySelector& _tSEGatewaySelector);

                    /**
                     * 判断参数 TSEGatewaySelector 是否已赋值
                     * @return TSEGatewaySelector 是否已赋值
                     * 
                     */
                    bool TSEGatewaySelectorHasBeenSet() const;

                    /**
                     * 获取微服务网关选择器
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceGatewaySelector 微服务网关选择器
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ServiceGatewaySelector GetServiceGatewaySelector() const;

                    /**
                     * 设置微服务网关选择器
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceGatewaySelector 微服务网关选择器
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceGatewaySelector(const ServiceGatewaySelector& _serviceGatewaySelector);

                    /**
                     * 判断参数 ServiceGatewaySelector 是否已赋值
                     * @return ServiceGatewaySelector 是否已赋值
                     * 
                     */
                    bool ServiceGatewaySelectorHasBeenSet() const;

                    /**
                     * 获取普通微服务选择器
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceSelector 普通微服务选择器
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ServiceSelector GetServiceSelector() const;

                    /**
                     * 设置普通微服务选择器
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceSelector 普通微服务选择器
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceSelector(const ServiceSelector& _serviceSelector);

                    /**
                     * 判断参数 ServiceSelector 是否已赋值
                     * @return ServiceSelector 是否已赋值
                     * 
                     */
                    bool ServiceSelectorHasBeenSet() const;

                private:

                    /**
                     *    // type == "polarismesh.cn/gateway/tse-gateway, 则 selector 为 TSEGatewaySelector
   // type == "polarismesh.cn/gateway/spring-cloud-gateway", 则 selector 为 ServiceGatewaySelector
   // type == "polarismesh.cn/service, 则 selector 为 ServiceSelector
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_entryType;
                    bool m_entryTypeHasBeenSet;

                    /**
                     * TSE云原生网关选择器
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TSEGatewaySelector m_tSEGatewaySelector;
                    bool m_tSEGatewaySelectorHasBeenSet;

                    /**
                     * 微服务网关选择器
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ServiceGatewaySelector m_serviceGatewaySelector;
                    bool m_serviceGatewaySelectorHasBeenSet;

                    /**
                     * 普通微服务选择器
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ServiceSelector m_serviceSelector;
                    bool m_serviceSelectorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_LANETRAFFICENTRY_H_
