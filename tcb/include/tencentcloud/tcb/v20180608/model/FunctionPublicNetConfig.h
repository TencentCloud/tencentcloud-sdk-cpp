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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_FUNCTIONPUBLICNETCONFIG_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_FUNCTIONPUBLICNETCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/FunctionEipConfig.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 云函数公网访问配置
                */
                class FunctionPublicNetConfig : public AbstractModel
                {
                public:
                    FunctionPublicNetConfig();
                    ~FunctionPublicNetConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启公网访问能力取值['DISABLE','ENABLE']
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicNetStatus 是否开启公网访问能力取值['DISABLE','ENABLE']
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPublicNetStatus() const;

                    /**
                     * 设置是否开启公网访问能力取值['DISABLE','ENABLE']
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publicNetStatus 是否开启公网访问能力取值['DISABLE','ENABLE']
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublicNetStatus(const std::string& _publicNetStatus);

                    /**
                     * 判断参数 PublicNetStatus 是否已赋值
                     * @return PublicNetStatus 是否已赋值
                     * 
                     */
                    bool PublicNetStatusHasBeenSet() const;

                    /**
                     * 获取Eip配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EipConfig Eip配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    FunctionEipConfig GetEipConfig() const;

                    /**
                     * 设置Eip配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eipConfig Eip配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEipConfig(const FunctionEipConfig& _eipConfig);

                    /**
                     * 判断参数 EipConfig 是否已赋值
                     * @return EipConfig 是否已赋值
                     * 
                     */
                    bool EipConfigHasBeenSet() const;

                private:

                    /**
                     * 是否开启公网访问能力取值['DISABLE','ENABLE']
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_publicNetStatus;
                    bool m_publicNetStatusHasBeenSet;

                    /**
                     * Eip配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    FunctionEipConfig m_eipConfig;
                    bool m_eipConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_FUNCTIONPUBLICNETCONFIG_H_
