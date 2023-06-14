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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_USAGEPLANBINDENVIRONMENT_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_USAGEPLANBINDENVIRONMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * 使用计划绑定环境信息
                */
                class UsagePlanBindEnvironment : public AbstractModel
                {
                public:
                    UsagePlanBindEnvironment();
                    ~UsagePlanBindEnvironment() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取环境名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnvironmentName 环境名。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEnvironmentName() const;

                    /**
                     * 设置环境名。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _environmentName 环境名。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnvironmentName(const std::string& _environmentName);

                    /**
                     * 判断参数 EnvironmentName 是否已赋值
                     * @return EnvironmentName 是否已赋值
                     * 
                     */
                    bool EnvironmentNameHasBeenSet() const;

                    /**
                     * 获取服务唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceId 服务唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置服务唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceId 服务唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                private:

                    /**
                     * 环境名。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_environmentName;
                    bool m_environmentNameHasBeenSet;

                    /**
                     * 服务唯一ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_USAGEPLANBINDENVIRONMENT_H_
