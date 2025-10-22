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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_PROJECT_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_PROJECT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 项目信息
                */
                class Project : public AbstractModel
                {
                public:
                    Project();
                    ~Project() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取项目标识，英文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectName 项目标识，英文名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置项目标识，英文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectName 项目标识，英文名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取项目显示名称，可以为中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DisplayName 项目显示名称，可以为中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置项目显示名称，可以为中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _displayName 项目显示名称，可以为中文名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 备注
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
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
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
                     * 获取项目创建人id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatorUin 项目创建人id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatorUin() const;

                    /**
                     * 设置项目创建人id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creatorUin 项目创建人id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatorUin(const std::string& _creatorUin);

                    /**
                     * 判断参数 CreatorUin 是否已赋值
                     * @return CreatorUin 是否已赋值
                     * 
                     */
                    bool CreatorUinHasBeenSet() const;

                    /**
                     * 获取项目责任人id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectOwnerUin 项目责任人id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectOwnerUin() const;

                    /**
                     * 设置项目责任人id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectOwnerUin 项目责任人id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectOwnerUin(const std::string& _projectOwnerUin);

                    /**
                     * 判断参数 ProjectOwnerUin 是否已赋值
                     * @return ProjectOwnerUin 是否已赋值
                     * 
                     */
                    bool ProjectOwnerUinHasBeenSet() const;

                    /**
                     * 获取项目状态：0：禁用，1：启用，-3:禁用中，2：启用中
                     * @return Status 项目状态：0：禁用，1：启用，-3:禁用中，2：启用中
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置项目状态：0：禁用，1：启用，-3:禁用中，2：启用中
                     * @param _status 项目状态：0：禁用，1：启用，-3:禁用中，2：启用中
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取项目模式，SIMPLE：简单模式 STANDARD：标准模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectModel 项目模式，SIMPLE：简单模式 STANDARD：标准模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectModel() const;

                    /**
                     * 设置项目模式，SIMPLE：简单模式 STANDARD：标准模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectModel 项目模式，SIMPLE：简单模式 STANDARD：标准模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectModel(const std::string& _projectModel);

                    /**
                     * 判断参数 ProjectModel 是否已赋值
                     * @return ProjectModel 是否已赋值
                     * 
                     */
                    bool ProjectModelHasBeenSet() const;

                private:

                    /**
                     * 项目id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 项目标识，英文名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 项目显示名称，可以为中文名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * 备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 项目创建人id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * 项目责任人id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectOwnerUin;
                    bool m_projectOwnerUinHasBeenSet;

                    /**
                     * 项目状态：0：禁用，1：启用，-3:禁用中，2：启用中
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 项目模式，SIMPLE：简单模式 STANDARD：标准模式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectModel;
                    bool m_projectModelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_PROJECT_H_
