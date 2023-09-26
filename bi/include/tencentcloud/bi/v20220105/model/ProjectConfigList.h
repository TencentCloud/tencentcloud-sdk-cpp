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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_PROJECTCONFIGLIST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_PROJECTCONFIGLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/ProjectConfigResult.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * 定制化查询
                */
                class ProjectConfigList : public AbstractModel
                {
                public:
                    ProjectConfigList();
                    ~ProjectConfigList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模块组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModuleGroup 模块组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModuleGroup() const;

                    /**
                     * 设置模块组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _moduleGroup 模块组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModuleGroup(const std::string& _moduleGroup);

                    /**
                     * 判断参数 ModuleGroup 是否已赋值
                     * @return ModuleGroup 是否已赋值
                     * 
                     */
                    bool ModuleGroupHasBeenSet() const;

                    /**
                     * 获取内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Components 内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ProjectConfigResult> GetComponents() const;

                    /**
                     * 设置内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _components 内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComponents(const std::vector<ProjectConfigResult>& _components);

                    /**
                     * 判断参数 Components 是否已赋值
                     * @return Components 是否已赋值
                     * 
                     */
                    bool ComponentsHasBeenSet() const;

                private:

                    /**
                     * 模块组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_moduleGroup;
                    bool m_moduleGroupHasBeenSet;

                    /**
                     * 内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ProjectConfigResult> m_components;
                    bool m_componentsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_PROJECTCONFIGLIST_H_
