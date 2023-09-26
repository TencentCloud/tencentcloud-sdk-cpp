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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_PROJECTCONFIGRESULT_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_PROJECTCONFIGRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


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
                class ProjectConfigResult : public AbstractModel
                {
                public:
                    ProjectConfigResult();
                    ~ProjectConfigResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModuleId 配置名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModuleId() const;

                    /**
                     * 设置配置名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _moduleId 配置名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModuleId(const std::string& _moduleId);

                    /**
                     * 判断参数 ModuleId 是否已赋值
                     * @return ModuleId 是否已赋值
                     * 
                     */
                    bool ModuleIdHasBeenSet() const;

                    /**
                     * 获取配置方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IncludeType 配置方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIncludeType() const;

                    /**
                     * 设置配置方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _includeType 配置方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIncludeType(const std::string& _includeType);

                    /**
                     * 判断参数 IncludeType 是否已赋值
                     * @return IncludeType 是否已赋值
                     * 
                     */
                    bool IncludeTypeHasBeenSet() const;

                    /**
                     * 获取额外参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Params 额外参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParams() const;

                    /**
                     * 设置额外参数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _params 额外参数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParams(const std::string& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                private:

                    /**
                     * 配置名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_moduleId;
                    bool m_moduleIdHasBeenSet;

                    /**
                     * 配置方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_includeType;
                    bool m_includeTypeHasBeenSet;

                    /**
                     * 额外参数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_params;
                    bool m_paramsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_PROJECTCONFIGRESULT_H_
