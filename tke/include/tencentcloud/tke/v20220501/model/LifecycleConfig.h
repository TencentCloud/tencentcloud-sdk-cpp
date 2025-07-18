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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_LIFECYCLECONFIG_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_LIFECYCLECONFIG_H_

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
        namespace V20220501
        {
            namespace Model
            {
                /**
                * 节点池自定义脚本
                */
                class LifecycleConfig : public AbstractModel
                {
                public:
                    LifecycleConfig();
                    ~LifecycleConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点初始化前自定义脚本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PreInit 节点初始化前自定义脚本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPreInit() const;

                    /**
                     * 设置节点初始化前自定义脚本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _preInit 节点初始化前自定义脚本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPreInit(const std::string& _preInit);

                    /**
                     * 判断参数 PreInit 是否已赋值
                     * @return PreInit 是否已赋值
                     * 
                     */
                    bool PreInitHasBeenSet() const;

                    /**
                     * 获取节点初始化后自定义脚本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PostInit 节点初始化后自定义脚本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPostInit() const;

                    /**
                     * 设置节点初始化后自定义脚本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _postInit 节点初始化后自定义脚本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPostInit(const std::string& _postInit);

                    /**
                     * 判断参数 PostInit 是否已赋值
                     * @return PostInit 是否已赋值
                     * 
                     */
                    bool PostInitHasBeenSet() const;

                private:

                    /**
                     * 节点初始化前自定义脚本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_preInit;
                    bool m_preInitHasBeenSet;

                    /**
                     * 节点初始化后自定义脚本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_postInit;
                    bool m_postInitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_LIFECYCLECONFIG_H_
