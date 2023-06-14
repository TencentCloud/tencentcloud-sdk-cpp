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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_INFERTEMPLATEGROUP_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_INFERTEMPLATEGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/InferTemplate.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 推理镜像组
                */
                class InferTemplateGroup : public AbstractModel
                {
                public:
                    InferTemplateGroup();
                    ~InferTemplateGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取算法框架
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Framework 算法框架
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFramework() const;

                    /**
                     * 设置算法框架
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _framework 算法框架
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFramework(const std::string& _framework);

                    /**
                     * 判断参数 Framework 是否已赋值
                     * @return Framework 是否已赋值
                     * 
                     */
                    bool FrameworkHasBeenSet() const;

                    /**
                     * 获取版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrameworkVersion 版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFrameworkVersion() const;

                    /**
                     * 设置版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _frameworkVersion 版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFrameworkVersion(const std::string& _frameworkVersion);

                    /**
                     * 判断参数 FrameworkVersion 是否已赋值
                     * @return FrameworkVersion 是否已赋值
                     * 
                     */
                    bool FrameworkVersionHasBeenSet() const;

                    /**
                     * 获取支持的训练框架集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Groups 支持的训练框架集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetGroups() const;

                    /**
                     * 设置支持的训练框架集合
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groups 支持的训练框架集合
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroups(const std::vector<std::string>& _groups);

                    /**
                     * 判断参数 Groups 是否已赋值
                     * @return Groups 是否已赋值
                     * 
                     */
                    bool GroupsHasBeenSet() const;

                    /**
                     * 获取镜像模板参数列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InferTemplates 镜像模板参数列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<InferTemplate> GetInferTemplates() const;

                    /**
                     * 设置镜像模板参数列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inferTemplates 镜像模板参数列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInferTemplates(const std::vector<InferTemplate>& _inferTemplates);

                    /**
                     * 判断参数 InferTemplates 是否已赋值
                     * @return InferTemplates 是否已赋值
                     * 
                     */
                    bool InferTemplatesHasBeenSet() const;

                private:

                    /**
                     * 算法框架
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_framework;
                    bool m_frameworkHasBeenSet;

                    /**
                     * 版本号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_frameworkVersion;
                    bool m_frameworkVersionHasBeenSet;

                    /**
                     * 支持的训练框架集合
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_groups;
                    bool m_groupsHasBeenSet;

                    /**
                     * 镜像模板参数列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<InferTemplate> m_inferTemplates;
                    bool m_inferTemplatesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_INFERTEMPLATEGROUP_H_
