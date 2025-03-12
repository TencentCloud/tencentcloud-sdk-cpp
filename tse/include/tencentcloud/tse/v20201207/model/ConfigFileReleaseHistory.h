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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CONFIGFILERELEASEHISTORY_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CONFIGFILERELEASEHISTORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/ConfigFileTag.h>
#include <tencentcloud/tse/v20201207/model/ConfigFilePersistent.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 配置文件发布历史
                */
                class ConfigFileReleaseHistory : public AbstractModel
                {
                public:
                    ConfigFileReleaseHistory();
                    ~ConfigFileReleaseHistory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置文件发布历史记录id
                     * @return Id 配置文件发布历史记录id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置配置文件发布历史记录id
                     * @param _id 配置文件发布历史记录id
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
                     * 获取配置文件发布历史名称
                     * @return Name 配置文件发布历史名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置配置文件发布历史名称
                     * @param _name 配置文件发布历史名称
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
                     * 获取配置文件发布历史命名空间
                     * @return Namespace 配置文件发布历史命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置配置文件发布历史命名空间
                     * @param _namespace 配置文件发布历史命名空间
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
                     * 获取配置文件发布历史组
                     * @return Group 配置文件发布历史组
                     * 
                     */
                    std::string GetGroup() const;

                    /**
                     * 设置配置文件发布历史组
                     * @param _group 配置文件发布历史组
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
                     * 获取配置文件发布历史名称
                     * @return FileName 配置文件发布历史名称
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置配置文件发布历史名称
                     * @param _fileName 配置文件发布历史名称
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
                     * 获取配置文件发布历史内容
                     * @return Content 配置文件发布历史内容
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置配置文件发布历史内容
                     * @param _content 配置文件发布历史内容
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
                     * 获取配置文件发布历史格式
                     * @return Format 配置文件发布历史格式
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置配置文件发布历史格式
                     * @param _format 配置文件发布历史格式
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
                     * 获取配置文件发布历史注释
                     * @return Comment 配置文件发布历史注释
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置配置文件发布历史注释
                     * @param _comment 配置文件发布历史注释
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
                     * 获取配置文件发布历史Md5
                     * @return Md5 配置文件发布历史Md5
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置配置文件发布历史Md5
                     * @param _md5 配置文件发布历史Md5
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
                     * 获取配置文件发布历史类型
                     * @return Type 配置文件发布历史类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置配置文件发布历史类型
                     * @param _type 配置文件发布历史类型
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
                     * 获取配置文件发布历史状态
                     * @return Status 配置文件发布历史状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置配置文件发布历史状态
                     * @param _status 配置文件发布历史状态
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
                     * 获取配置文件发布历史标签组
                     * @return Tags 配置文件发布历史标签组
                     * 
                     */
                    std::vector<ConfigFileTag> GetTags() const;

                    /**
                     * 设置配置文件发布历史标签组
                     * @param _tags 配置文件发布历史标签组
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
                     * 获取配置文件发布创建时间
                     * @return CreateTime 配置文件发布创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置配置文件发布创建时间
                     * @param _createTime 配置文件发布创建时间
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
                     * @return CreateBy 配置文件发布创建者
                     * 
                     */
                    std::string GetCreateBy() const;

                    /**
                     * 设置配置文件发布创建者
                     * @param _createBy 配置文件发布创建者
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
                     * @return ModifyTime 配置文件发布修改时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置配置文件发布修改时间
                     * @param _modifyTime 配置文件发布修改时间
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
                     * @return ModifyBy 配置文件发布修改者
                     * 
                     */
                    std::string GetModifyBy() const;

                    /**
                     * 设置配置文件发布修改者
                     * @param _modifyBy 配置文件发布修改者
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
                     * @return ReleaseDescription 发布描述
                     * 
                     */
                    std::string GetReleaseDescription() const;

                    /**
                     * 设置发布描述
                     * @param _releaseDescription 发布描述
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
                     * 获取原因，用于失败时原因展示
                     * @return ReleaseReason 原因，用于失败时原因展示
                     * 
                     */
                    std::string GetReleaseReason() const;

                    /**
                     * 设置原因，用于失败时原因展示
                     * @param _releaseReason 原因，用于失败时原因展示
                     * 
                     */
                    void SetReleaseReason(const std::string& _releaseReason);

                    /**
                     * 判断参数 ReleaseReason 是否已赋值
                     * @return ReleaseReason 是否已赋值
                     * 
                     */
                    bool ReleaseReasonHasBeenSet() const;

                    /**
                     * 获取配置文件类型

                     * @return ConfigFileSupportedClient 配置文件类型

                     * 
                     */
                    int64_t GetConfigFileSupportedClient() const;

                    /**
                     * 设置配置文件类型

                     * @param _configFileSupportedClient 配置文件类型

                     * 
                     */
                    void SetConfigFileSupportedClient(const int64_t& _configFileSupportedClient);

                    /**
                     * 判断参数 ConfigFileSupportedClient 是否已赋值
                     * @return ConfigFileSupportedClient 是否已赋值
                     * 
                     */
                    bool ConfigFileSupportedClientHasBeenSet() const;

                    /**
                     * 获取配置文件持久化
                     * @return ConfigFilePersistent 配置文件持久化
                     * 
                     */
                    ConfigFilePersistent GetConfigFilePersistent() const;

                    /**
                     * 设置配置文件持久化
                     * @param _configFilePersistent 配置文件持久化
                     * 
                     */
                    void SetConfigFilePersistent(const ConfigFilePersistent& _configFilePersistent);

                    /**
                     * 判断参数 ConfigFilePersistent 是否已赋值
                     * @return ConfigFilePersistent 是否已赋值
                     * 
                     */
                    bool ConfigFilePersistentHasBeenSet() const;

                private:

                    /**
                     * 配置文件发布历史记录id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 配置文件发布历史名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 配置文件发布历史命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 配置文件发布历史组
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * 配置文件发布历史名称
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 配置文件发布历史内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 配置文件发布历史格式
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * 配置文件发布历史注释
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 配置文件发布历史Md5
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                    /**
                     * 配置文件发布历史类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 配置文件发布历史状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 配置文件发布历史标签组
                     */
                    std::vector<ConfigFileTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 配置文件发布创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 配置文件发布创建者
                     */
                    std::string m_createBy;
                    bool m_createByHasBeenSet;

                    /**
                     * 配置文件发布修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 配置文件发布修改者
                     */
                    std::string m_modifyBy;
                    bool m_modifyByHasBeenSet;

                    /**
                     * 发布描述
                     */
                    std::string m_releaseDescription;
                    bool m_releaseDescriptionHasBeenSet;

                    /**
                     * 原因，用于失败时原因展示
                     */
                    std::string m_releaseReason;
                    bool m_releaseReasonHasBeenSet;

                    /**
                     * 配置文件类型

                     */
                    int64_t m_configFileSupportedClient;
                    bool m_configFileSupportedClientHasBeenSet;

                    /**
                     * 配置文件持久化
                     */
                    ConfigFilePersistent m_configFilePersistent;
                    bool m_configFilePersistentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CONFIGFILERELEASEHISTORY_H_
