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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_APPLICATIONVERSION_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_APPLICATIONVERSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/omics/v20221128/model/GitInfo.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * 应用版本。
                */
                class ApplicationVersion : public AbstractModel
                {
                public:
                    ApplicationVersion();
                    ~ApplicationVersion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取版本类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 版本类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置版本类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 版本类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取版本ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationVersionId 版本ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApplicationVersionId() const;

                    /**
                     * 设置版本ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _applicationVersionId 版本ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApplicationVersionId(const std::string& _applicationVersionId);

                    /**
                     * 判断参数 ApplicationVersionId 是否已赋值
                     * @return ApplicationVersionId 是否已赋值
                     * 
                     */
                    bool ApplicationVersionIdHasBeenSet() const;

                    /**
                     * 获取发布名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 发布名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置发布名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 发布名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取发布描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 发布描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置发布描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 发布描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取入口文件。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Entrypoint 入口文件。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEntrypoint() const;

                    /**
                     * 设置入口文件。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _entrypoint 入口文件。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEntrypoint(const std::string& _entrypoint);

                    /**
                     * 判断参数 Entrypoint 是否已赋值
                     * @return Entrypoint 是否已赋值
                     * 
                     */
                    bool EntrypointHasBeenSet() const;

                    /**
                     * 获取创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取创建者名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatorName 创建者名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatorName() const;

                    /**
                     * 设置创建者名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creatorName 创建者名称。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatorName(const std::string& _creatorName);

                    /**
                     * 判断参数 CreatorName 是否已赋值
                     * @return CreatorName 是否已赋值
                     * 
                     */
                    bool CreatorNameHasBeenSet() const;

                    /**
                     * 获取创建者ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatorId 创建者ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatorId() const;

                    /**
                     * 设置创建者ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creatorId 创建者ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatorId(const std::string& _creatorId);

                    /**
                     * 判断参数 CreatorId 是否已赋值
                     * @return CreatorId 是否已赋值
                     * 
                     */
                    bool CreatorIdHasBeenSet() const;

                    /**
                     * 获取Git信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GitInfo Git信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetGitInfo() const;

                    /**
                     * 设置Git信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gitInfo Git信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetGitInfo(const std::string& _gitInfo);

                    /**
                     * 判断参数 GitInfo 是否已赋值
                     * @return GitInfo 是否已赋值
                     * @deprecated
                     */
                    bool GitInfoHasBeenSet() const;

                    /**
                     * 获取Git信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GitSource Git信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    GitInfo GetGitSource() const;

                    /**
                     * 设置Git信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gitSource Git信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGitSource(const GitInfo& _gitSource);

                    /**
                     * 判断参数 GitSource 是否已赋值
                     * @return GitSource 是否已赋值
                     * 
                     */
                    bool GitSourceHasBeenSet() const;

                private:

                    /**
                     * 版本类型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 版本ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_applicationVersionId;
                    bool m_applicationVersionIdHasBeenSet;

                    /**
                     * 发布名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 发布描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 入口文件。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_entrypoint;
                    bool m_entrypointHasBeenSet;

                    /**
                     * 创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 创建者名称。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creatorName;
                    bool m_creatorNameHasBeenSet;

                    /**
                     * 创建者ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creatorId;
                    bool m_creatorIdHasBeenSet;

                    /**
                     * Git信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_gitInfo;
                    bool m_gitInfoHasBeenSet;

                    /**
                     * Git信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    GitInfo m_gitSource;
                    bool m_gitSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_APPLICATIONVERSION_H_
