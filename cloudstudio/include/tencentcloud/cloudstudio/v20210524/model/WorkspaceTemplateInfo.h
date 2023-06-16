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

#ifndef TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_WORKSPACETEMPLATEINFO_H_
#define TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_WORKSPACETEMPLATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudstudio
    {
        namespace V20210524
        {
            namespace Model
            {
                /**
                * 工作空间模板信息
                */
                class WorkspaceTemplateInfo : public AbstractModel
                {
                public:
                    WorkspaceTemplateInfo();
                    ~WorkspaceTemplateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模板ID
                     * @return Id 模板ID
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置模板ID
                     * @param _id 模板ID
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取模板分类
                     * @return Category 模板分类
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置模板分类
                     * @param _category 模板分类
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取模板名称
                     * @return Name 模板名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置模板名称
                     * @param _name 模板名称
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
                     * 获取模板描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 模板描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置模板描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 模板描述
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
                     * 获取中文描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DescriptionEN 中文描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescriptionEN() const;

                    /**
                     * 设置中文描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _descriptionEN 中文描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescriptionEN(const std::string& _descriptionEN);

                    /**
                     * 判断参数 DescriptionEN 是否已赋值
                     * @return DescriptionEN 是否已赋值
                     * 
                     */
                    bool DescriptionENHasBeenSet() const;

                    /**
                     * 获取模板标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 模板标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTags() const;

                    /**
                     * 设置模板标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 模板标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::string& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取模板图标地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Icon 模板图标地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIcon() const;

                    /**
                     * 设置模板图标地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _icon 模板图标地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIcon(const std::string& _icon);

                    /**
                     * 判断参数 Icon 是否已赋值
                     * @return Icon 是否已赋值
                     * 
                     */
                    bool IconHasBeenSet() const;

                    /**
                     * 获取默认仓库类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionControlType 默认仓库类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersionControlType() const;

                    /**
                     * 设置默认仓库类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _versionControlType 默认仓库类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersionControlType(const std::string& _versionControlType);

                    /**
                     * 判断参数 VersionControlType 是否已赋值
                     * @return VersionControlType 是否已赋值
                     * 
                     */
                    bool VersionControlTypeHasBeenSet() const;

                    /**
                     * 获取默认仓库地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionControlUrl 默认仓库地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersionControlUrl() const;

                    /**
                     * 设置默认仓库地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _versionControlUrl 默认仓库地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersionControlUrl(const std::string& _versionControlUrl);

                    /**
                     * 判断参数 VersionControlUrl 是否已赋值
                     * @return VersionControlUrl 是否已赋值
                     * 
                     */
                    bool VersionControlUrlHasBeenSet() const;

                    /**
                     * 获取默认仓库描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionControlDesc 默认仓库描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersionControlDesc() const;

                    /**
                     * 设置默认仓库描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _versionControlDesc 默认仓库描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersionControlDesc(const std::string& _versionControlDesc);

                    /**
                     * 判断参数 VersionControlDesc 是否已赋值
                     * @return VersionControlDesc 是否已赋值
                     * 
                     */
                    bool VersionControlDescHasBeenSet() const;

                    /**
                     * 获取默认仓库所属人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionControlOwner 默认仓库所属人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersionControlOwner() const;

                    /**
                     * 设置默认仓库所属人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _versionControlOwner 默认仓库所属人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersionControlOwner(const std::string& _versionControlOwner);

                    /**
                     * 判断参数 VersionControlOwner 是否已赋值
                     * @return VersionControlOwner 是否已赋值
                     * 
                     */
                    bool VersionControlOwnerHasBeenSet() const;

                    /**
                     * 获取默认仓库引用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionControlRef 默认仓库引用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersionControlRef() const;

                    /**
                     * 设置默认仓库引用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _versionControlRef 默认仓库引用地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersionControlRef(const std::string& _versionControlRef);

                    /**
                     * 判断参数 VersionControlRef 是否已赋值
                     * @return VersionControlRef 是否已赋值
                     * 
                     */
                    bool VersionControlRefHasBeenSet() const;

                    /**
                     * 获取默认仓库引用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionControlRefType 默认仓库引用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersionControlRefType() const;

                    /**
                     * 设置默认仓库引用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _versionControlRefType 默认仓库引用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersionControlRefType(const std::string& _versionControlRefType);

                    /**
                     * 判断参数 VersionControlRefType 是否已赋值
                     * @return VersionControlRefType 是否已赋值
                     * 
                     */
                    bool VersionControlRefTypeHasBeenSet() const;

                    /**
                     * 获取用户自定义仓库地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserVersionControlUrl 用户自定义仓库地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserVersionControlUrl() const;

                    /**
                     * 设置用户自定义仓库地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userVersionControlUrl 用户自定义仓库地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserVersionControlUrl(const std::string& _userVersionControlUrl);

                    /**
                     * 判断参数 UserVersionControlUrl 是否已赋值
                     * @return UserVersionControlUrl 是否已赋值
                     * 
                     */
                    bool UserVersionControlUrlHasBeenSet() const;

                    /**
                     * 获取用户自定义仓库类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserVersionControlType 用户自定义仓库类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserVersionControlType() const;

                    /**
                     * 设置用户自定义仓库类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userVersionControlType 用户自定义仓库类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserVersionControlType(const std::string& _userVersionControlType);

                    /**
                     * 判断参数 UserVersionControlType 是否已赋值
                     * @return UserVersionControlType 是否已赋值
                     * 
                     */
                    bool UserVersionControlTypeHasBeenSet() const;

                    /**
                     * 获取用户自定义仓库引用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserVersionControlRef 用户自定义仓库引用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserVersionControlRef() const;

                    /**
                     * 设置用户自定义仓库引用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userVersionControlRef 用户自定义仓库引用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserVersionControlRef(const std::string& _userVersionControlRef);

                    /**
                     * 判断参数 UserVersionControlRef 是否已赋值
                     * @return UserVersionControlRef 是否已赋值
                     * 
                     */
                    bool UserVersionControlRefHasBeenSet() const;

                    /**
                     * 获取用户自定义仓库引用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserVersionControlRefType 用户自定义仓库引用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserVersionControlRefType() const;

                    /**
                     * 设置用户自定义仓库引用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userVersionControlRefType 用户自定义仓库引用类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserVersionControlRefType(const std::string& _userVersionControlRefType);

                    /**
                     * 判断参数 UserVersionControlRefType 是否已赋值
                     * @return UserVersionControlRefType 是否已赋值
                     * 
                     */
                    bool UserVersionControlRefTypeHasBeenSet() const;

                    /**
                     * 获取xxx
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DevFile xxx
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDevFile() const;

                    /**
                     * 设置xxx
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _devFile xxx
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDevFile(const std::string& _devFile);

                    /**
                     * 判断参数 DevFile 是否已赋值
                     * @return DevFile 是否已赋值
                     * 
                     */
                    bool DevFileHasBeenSet() const;

                    /**
                     * 获取xxx
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PluginFile xxx
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPluginFile() const;

                    /**
                     * 设置xxx
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pluginFile xxx
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPluginFile(const std::string& _pluginFile);

                    /**
                     * 判断参数 PluginFile 是否已赋值
                     * @return PluginFile 是否已赋值
                     * 
                     */
                    bool PluginFileHasBeenSet() const;

                    /**
                     * 获取是否标记
                     * @return Marked 是否标记
                     * 
                     */
                    bool GetMarked() const;

                    /**
                     * 设置是否标记
                     * @param _marked 是否标记
                     * 
                     */
                    void SetMarked(const bool& _marked);

                    /**
                     * 判断参数 Marked 是否已赋值
                     * @return Marked 是否已赋值
                     * 
                     */
                    bool MarkedHasBeenSet() const;

                    /**
                     * 获取标记状态
                     * @return MarkAt 标记状态
                     * 
                     */
                    int64_t GetMarkAt() const;

                    /**
                     * 设置标记状态
                     * @param _markAt 标记状态
                     * 
                     */
                    void SetMarkAt(const int64_t& _markAt);

                    /**
                     * 判断参数 MarkAt 是否已赋值
                     * @return MarkAt 是否已赋值
                     * 
                     */
                    bool MarkAtHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateDate 创建时间
                     * 
                     */
                    std::string GetCreateDate() const;

                    /**
                     * 设置创建时间
                     * @param _createDate 创建时间
                     * 
                     */
                    void SetCreateDate(const std::string& _createDate);

                    /**
                     * 判断参数 CreateDate 是否已赋值
                     * @return CreateDate 是否已赋值
                     * 
                     */
                    bool CreateDateHasBeenSet() const;

                    /**
                     * 获取最后修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastModified 最后修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastModified() const;

                    /**
                     * 设置最后修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastModified 最后修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastModified(const std::string& _lastModified);

                    /**
                     * 判断参数 LastModified 是否已赋值
                     * @return LastModified 是否已赋值
                     * 
                     */
                    bool LastModifiedHasBeenSet() const;

                    /**
                     * 获取编号
                     * @return Sort 编号
                     * 
                     */
                    int64_t GetSort() const;

                    /**
                     * 设置编号
                     * @param _sort 编号
                     * 
                     */
                    void SetSort(const int64_t& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取xxx
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SnapshotUid xxx
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSnapshotUid() const;

                    /**
                     * 设置xxx
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _snapshotUid xxx
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSnapshotUid(const std::string& _snapshotUid);

                    /**
                     * 判断参数 SnapshotUid 是否已赋值
                     * @return SnapshotUid 是否已赋值
                     * 
                     */
                    bool SnapshotUidHasBeenSet() const;

                    /**
                     * 获取用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserId 用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUserId() const;

                    /**
                     * 设置用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userId 用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserId(const int64_t& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Author 用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAuthor() const;

                    /**
                     * 设置用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _author 用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAuthor(const std::string& _author);

                    /**
                     * 判断参数 Author 是否已赋值
                     * @return Author 是否已赋值
                     * 
                     */
                    bool AuthorHasBeenSet() const;

                    /**
                     * 获取是否属于当前用户
                     * @return Me 是否属于当前用户
                     * 
                     */
                    bool GetMe() const;

                    /**
                     * 设置是否属于当前用户
                     * @param _me 是否属于当前用户
                     * 
                     */
                    void SetMe(const bool& _me);

                    /**
                     * 判断参数 Me 是否已赋值
                     * @return Me 是否已赋值
                     * 
                     */
                    bool MeHasBeenSet() const;

                    /**
                     * 获取xxx
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthorAvatar xxx
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAuthorAvatar() const;

                    /**
                     * 设置xxx
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authorAvatar xxx
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAuthorAvatar(const std::string& _authorAvatar);

                    /**
                     * 判断参数 AuthorAvatar 是否已赋值
                     * @return AuthorAvatar 是否已赋值
                     * 
                     */
                    bool AuthorAvatarHasBeenSet() const;

                private:

                    /**
                     * 模板ID
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 模板分类
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * 模板名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 模板描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 中文描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_descriptionEN;
                    bool m_descriptionENHasBeenSet;

                    /**
                     * 模板标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 模板图标地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_icon;
                    bool m_iconHasBeenSet;

                    /**
                     * 默认仓库类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_versionControlType;
                    bool m_versionControlTypeHasBeenSet;

                    /**
                     * 默认仓库地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_versionControlUrl;
                    bool m_versionControlUrlHasBeenSet;

                    /**
                     * 默认仓库描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_versionControlDesc;
                    bool m_versionControlDescHasBeenSet;

                    /**
                     * 默认仓库所属人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_versionControlOwner;
                    bool m_versionControlOwnerHasBeenSet;

                    /**
                     * 默认仓库引用地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_versionControlRef;
                    bool m_versionControlRefHasBeenSet;

                    /**
                     * 默认仓库引用类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_versionControlRefType;
                    bool m_versionControlRefTypeHasBeenSet;

                    /**
                     * 用户自定义仓库地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userVersionControlUrl;
                    bool m_userVersionControlUrlHasBeenSet;

                    /**
                     * 用户自定义仓库类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userVersionControlType;
                    bool m_userVersionControlTypeHasBeenSet;

                    /**
                     * 用户自定义仓库引用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userVersionControlRef;
                    bool m_userVersionControlRefHasBeenSet;

                    /**
                     * 用户自定义仓库引用类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userVersionControlRefType;
                    bool m_userVersionControlRefTypeHasBeenSet;

                    /**
                     * xxx
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_devFile;
                    bool m_devFileHasBeenSet;

                    /**
                     * xxx
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pluginFile;
                    bool m_pluginFileHasBeenSet;

                    /**
                     * 是否标记
                     */
                    bool m_marked;
                    bool m_markedHasBeenSet;

                    /**
                     * 标记状态
                     */
                    int64_t m_markAt;
                    bool m_markAtHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createDate;
                    bool m_createDateHasBeenSet;

                    /**
                     * 最后修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastModified;
                    bool m_lastModifiedHasBeenSet;

                    /**
                     * 编号
                     */
                    int64_t m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * xxx
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_snapshotUid;
                    bool m_snapshotUidHasBeenSet;

                    /**
                     * 用户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 用户名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_author;
                    bool m_authorHasBeenSet;

                    /**
                     * 是否属于当前用户
                     */
                    bool m_me;
                    bool m_meHasBeenSet;

                    /**
                     * xxx
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_authorAvatar;
                    bool m_authorAvatarHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDSTUDIO_V20210524_MODEL_WORKSPACETEMPLATEINFO_H_
