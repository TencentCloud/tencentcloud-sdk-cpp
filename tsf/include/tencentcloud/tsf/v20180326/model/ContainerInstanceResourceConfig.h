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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_CONTAINERINSTANCERESOURCECONFIG_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_CONTAINERINSTANCERESOURCECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 容器实例相关的参数配置
                */
                class ContainerInstanceResourceConfig : public AbstractModel
                {
                public:
                    ContainerInstanceResourceConfig();
                    ~ContainerInstanceResourceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例导入方式，可多个，公有云为 ["R"]，独立版的取值有 "M" 脚本模式、"S" SSH 模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImportMode 实例导入方式，可多个，公有云为 ["R"]，独立版的取值有 "M" 脚本模式、"S" SSH 模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetImportMode() const;

                    /**
                     * 设置实例导入方式，可多个，公有云为 ["R"]，独立版的取值有 "M" 脚本模式、"S" SSH 模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _importMode 实例导入方式，可多个，公有云为 ["R"]，独立版的取值有 "M" 脚本模式、"S" SSH 模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImportMode(const std::vector<std::string>& _importMode);

                    /**
                     * 判断参数 ImportMode 是否已赋值
                     * @return ImportMode 是否已赋值
                     * 
                     */
                    bool ImportModeHasBeenSet() const;

                    /**
                     * 获取SSH 模式时，前端应该限制用户填这个数量的 master 主机信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MasterNumLimit SSH 模式时，前端应该限制用户填这个数量的 master 主机信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMasterNumLimit() const;

                    /**
                     * 设置SSH 模式时，前端应该限制用户填这个数量的 master 主机信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _masterNumLimit SSH 模式时，前端应该限制用户填这个数量的 master 主机信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMasterNumLimit(const int64_t& _masterNumLimit);

                    /**
                     * 判断参数 MasterNumLimit 是否已赋值
                     * @return MasterNumLimit 是否已赋值
                     * 
                     */
                    bool MasterNumLimitHasBeenSet() const;

                    /**
                     * 获取SSH 模式时，前端应该限制用户填的最高数量的 node 主机信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeNumLimitPerSetup SSH 模式时，前端应该限制用户填的最高数量的 node 主机信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetNodeNumLimitPerSetup() const;

                    /**
                     * 设置SSH 模式时，前端应该限制用户填的最高数量的 node 主机信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeNumLimitPerSetup SSH 模式时，前端应该限制用户填的最高数量的 node 主机信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeNumLimitPerSetup(const int64_t& _nodeNumLimitPerSetup);

                    /**
                     * 判断参数 NodeNumLimitPerSetup 是否已赋值
                     * @return NodeNumLimitPerSetup 是否已赋值
                     * 
                     */
                    bool NodeNumLimitPerSetupHasBeenSet() const;

                private:

                    /**
                     * 实例导入方式，可多个，公有云为 ["R"]，独立版的取值有 "M" 脚本模式、"S" SSH 模式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_importMode;
                    bool m_importModeHasBeenSet;

                    /**
                     * SSH 模式时，前端应该限制用户填这个数量的 master 主机信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_masterNumLimit;
                    bool m_masterNumLimitHasBeenSet;

                    /**
                     * SSH 模式时，前端应该限制用户填的最高数量的 node 主机信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_nodeNumLimitPerSetup;
                    bool m_nodeNumLimitPerSetupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CONTAINERINSTANCERESOURCECONFIG_H_
