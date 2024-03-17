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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CONFIGFILE_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CONFIGFILE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/ConfigFileTag.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 配置文件
                */
                class ConfigFile : public AbstractModel
                {
                public:
                    ConfigFile();
                    ~ConfigFile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置文件id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 配置文件id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置配置文件id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 配置文件id
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
                     * 获取配置文件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 配置文件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置配置文件名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 配置文件名称
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
                     * 获取配置文件命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Namespace 配置文件命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置配置文件命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespace 配置文件命名空间
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
                     * 获取配置文件组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Group 配置文件组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroup() const;

                    /**
                     * 设置配置文件组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _group 配置文件组
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
                     * 获取配置文件内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content 配置文件内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置配置文件内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _content 配置文件内容
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
                     * 获取配置文件格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Format 配置文件格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置配置文件格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _format 配置文件格式
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

                    /**
                     * 获取配置文件注释
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Comment 配置文件注释
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置配置文件注释
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _comment 配置文件注释
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
                     * 获取配置文件状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 配置文件状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置配置文件状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 配置文件状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取配置文件标签数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 配置文件标签数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ConfigFileTag> GetTags() const;

                    /**
                     * 设置配置文件标签数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 配置文件标签数组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<ConfigFileTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取配置文件创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 配置文件创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置配置文件创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 配置文件创建时间
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
                     * 获取配置文件创建者
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateBy 配置文件创建者
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateBy() const;

                    /**
                     * 设置配置文件创建者
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createBy 配置文件创建者
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
                     * 获取配置文件修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyTime 配置文件修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置配置文件修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifyTime 配置文件修改时间
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
                     * 获取配置文件修改者
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyBy 配置文件修改者
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifyBy() const;

                    /**
                     * 设置配置文件修改者
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifyBy 配置文件修改者
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
                     * 获取配置文件发布时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReleaseTime 配置文件发布时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReleaseTime() const;

                    /**
                     * 设置配置文件发布时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _releaseTime 配置文件发布时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReleaseTime(const std::string& _releaseTime);

                    /**
                     * 判断参数 ReleaseTime 是否已赋值
                     * @return ReleaseTime 是否已赋值
                     * 
                     */
                    bool ReleaseTimeHasBeenSet() const;

                    /**
                     * 获取配置文件发布者
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReleaseBy 配置文件发布者
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReleaseBy() const;

                    /**
                     * 设置配置文件发布者
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _releaseBy 配置文件发布者
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReleaseBy(const std::string& _releaseBy);

                    /**
                     * 判断参数 ReleaseBy 是否已赋值
                     * @return ReleaseBy 是否已赋值
                     * 
                     */
                    bool ReleaseByHasBeenSet() const;

                private:

                    /**
                     * 配置文件id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 配置文件名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 配置文件命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 配置文件组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * 配置文件内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 配置文件格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * 配置文件注释
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 配置文件状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 配置文件标签数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ConfigFileTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 配置文件创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 配置文件创建者
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createBy;
                    bool m_createByHasBeenSet;

                    /**
                     * 配置文件修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 配置文件修改者
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifyBy;
                    bool m_modifyByHasBeenSet;

                    /**
                     * 配置文件发布时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_releaseTime;
                    bool m_releaseTimeHasBeenSet;

                    /**
                     * 配置文件发布者
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_releaseBy;
                    bool m_releaseByHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CONFIGFILE_H_
