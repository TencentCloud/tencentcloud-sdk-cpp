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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_TSEGATEWAYSELECTOR_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_TSEGATEWAYSELECTOR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 网关服务信息匹配条件
                */
                class TSEGatewaySelector : public AbstractModel
                {
                public:
                    TSEGatewaySelector();
                    ~TSEGatewaySelector() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取网关引擎实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GatewayId 网关引擎实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置网关引擎实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gatewayId 网关引擎实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取网关服务
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Services 网关服务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetServices() const;

                    /**
                     * 设置网关服务
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _services 网关服务
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServices(const std::vector<std::string>& _services);

                    /**
                     * 判断参数 Services 是否已赋值
                     * @return Services 是否已赋值
                     * 
                     */
                    bool ServicesHasBeenSet() const;

                private:

                    /**
                     * 网关引擎实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 网关服务
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_services;
                    bool m_servicesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_TSEGATEWAYSELECTOR_H_
