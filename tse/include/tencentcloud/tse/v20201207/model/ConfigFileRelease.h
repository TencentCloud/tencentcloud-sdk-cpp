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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CONFIGFILERELEASE_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CONFIGFILERELEASE_H_

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
                * 配置文件发布
                */
                class ConfigFileRelease : public AbstractModel
                {
                public:
                    ConfigFileRelease();
                    ~ConfigFileRelease() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置文件发布id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 配置文件发布id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置配置文件发布id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 配置文件发布id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取配置文件发布名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 配置文件发布名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置配置文件发布名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 配置文件发布名称
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
                     * 获取配置文件发布命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Namespace 配置文件发布命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置配置文件发布命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespace 配置文件发布命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取配置文件发布组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Group 配置文件发布组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroup() const;

                    /**
                     * 设置配置文件发布组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _group 配置文件发布组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroup(const std::string& _group);

                    /**
                     * 判断参数 Group 是否已赋值
                     * @return Group 是否已赋值
                     * 
                     */
                    bool GroupHasBeenSet() const;

                    /**
                     * 获取配置文件发布文件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileName 配置文件发布文件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置配置文件发布文件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileName 配置文件发布文件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取配置文件发布内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content 配置文件发布内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置配置文件发布内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _content 配置文件发布内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取配置文件发布注释
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Comment 配置文件发布注释
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置配置文件发布注释
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _comment 配置文件发布注释
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取配置文件发布Md5
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Md5 配置文件发布Md5
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置配置文件发布Md5
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _md5 配置文件发布Md5
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMd5(const std::string& _md5);

                    /**
                     * 判断参数 Md5 是否已赋值
                     * @return Md5 是否已赋值
                     * 
                     */
                    bool Md5HasBeenSet() const;

                    /**
                     * 获取配置文件发布版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version 配置文件发布版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetVersion() const;

                    /**
                     * 设置配置文件发布版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _version 配置文件发布版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersion(const uint64_t& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取配置文件发布创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 配置文件发布创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置配置文件发布创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 配置文件发布创建时间
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
                     * 获取配置文件发布创建者
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateBy 配置文件发布创建者
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateBy() const;

                    /**
                     * 设置配置文件发布创建者
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createBy 配置文件发布创建者
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateBy(const std::string& _createBy);

                    /**
                     * 判断参数 CreateBy 是否已赋值
                     * @return CreateBy 是否已赋值
                     * 
                     */
                    bool CreateByHasBeenSet() const;

                    /**
                     * 获取配置文件发布修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyTime 配置文件发布修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置配置文件发布修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifyTime 配置文件发布修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取配置文件发布修改者
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyBy 配置文件发布修改者
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifyBy() const;

                    /**
                     * 设置配置文件发布修改者
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifyBy 配置文件发布修改者
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifyBy(const std::string& _modifyBy);

                    /**
                     * 判断参数 ModifyBy 是否已赋值
                     * @return ModifyBy 是否已赋值
                     * 
                     */
                    bool ModifyByHasBeenSet() const;

                    /**
                     * 获取发布描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReleaseDescription 发布描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReleaseDescription() const;

                    /**
                     * 设置发布描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _releaseDescription 发布描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReleaseDescription(const std::string& _releaseDescription);

                    /**
                     * 判断参数 ReleaseDescription 是否已赋值
                     * @return ReleaseDescription 是否已赋值
                     * 
                     */
                    bool ReleaseDescriptionHasBeenSet() const;

                    /**
                     * 获取是否生效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Active 是否生效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetActive() const;

                    /**
                     * 设置是否生效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _active 是否生效
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetActive(const bool& _active);

                    /**
                     * 判断参数 Active 是否已赋值
                     * @return Active 是否已赋值
                     * 
                     */
                    bool ActiveHasBeenSet() const;

                    /**
                     * 获取格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Format 格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _format 格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                private:

                    /**
                     * 配置文件发布id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 配置文件发布名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 配置文件发布命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 配置文件发布组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * 配置文件发布文件名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 配置文件发布内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 配置文件发布注释
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 配置文件发布Md5
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                    /**
                     * 配置文件发布版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 配置文件发布创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 配置文件发布创建者
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createBy;
                    bool m_createByHasBeenSet;

                    /**
                     * 配置文件发布修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 配置文件发布修改者
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifyBy;
                    bool m_modifyByHasBeenSet;

                    /**
                     * 发布描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_releaseDescription;
                    bool m_releaseDescriptionHasBeenSet;

                    /**
                     * 是否生效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_active;
                    bool m_activeHasBeenSet;

                    /**
                     * 格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CONFIGFILERELEASE_H_
