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
                     * 获取<p>配置文件id</p>
                     * @return Id <p>配置文件id</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>配置文件id</p>
                     * @param _id <p>配置文件id</p>
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
                     * 获取<p>配置文件名称</p>
                     * @return Name <p>配置文件名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>配置文件名称</p>
                     * @param _name <p>配置文件名称</p>
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
                     * 获取<p>配置文件命名空间</p>
                     * @return Namespace <p>配置文件命名空间</p>
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置<p>配置文件命名空间</p>
                     * @param _namespace <p>配置文件命名空间</p>
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
                     * 获取<p>配置文件组</p>
                     * @return Group <p>配置文件组</p>
                     * 
                     */
                    std::string GetGroup() const;

                    /**
                     * 设置<p>配置文件组</p>
                     * @param _group <p>配置文件组</p>
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
                     * 获取<p>配置文件内容</p>
                     * @return Content <p>配置文件内容</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>配置文件内容</p>
                     * @param _content <p>配置文件内容</p>
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
                     * 获取<p>配置文件格式</p>
                     * @return Format <p>配置文件格式</p>
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置<p>配置文件格式</p>
                     * @param _format <p>配置文件格式</p>
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
                     * 获取<p>配置文件注释</p>
                     * @return Comment <p>配置文件注释</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>配置文件注释</p>
                     * @param _comment <p>配置文件注释</p>
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
                     * 获取<p>配置文件状态</p>
                     * @return Status <p>配置文件状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>配置文件状态</p>
                     * @param _status <p>配置文件状态</p>
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
                     * 获取<p>配置文件标签数组</p>
                     * @return Tags <p>配置文件标签数组</p>
                     * 
                     */
                    std::vector<ConfigFileTag> GetTags() const;

                    /**
                     * 设置<p>配置文件标签数组</p>
                     * @param _tags <p>配置文件标签数组</p>
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
                     * 获取<p>配置文件创建时间</p>
                     * @return CreateTime <p>配置文件创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>配置文件创建时间</p>
                     * @param _createTime <p>配置文件创建时间</p>
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
                     * 获取<p>配置文件创建者</p>
                     * @return CreateBy <p>配置文件创建者</p>
                     * 
                     */
                    std::string GetCreateBy() const;

                    /**
                     * 设置<p>配置文件创建者</p>
                     * @param _createBy <p>配置文件创建者</p>
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
                     * 获取<p>配置文件修改时间</p>
                     * @return ModifyTime <p>配置文件修改时间</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>配置文件修改时间</p>
                     * @param _modifyTime <p>配置文件修改时间</p>
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
                     * 获取<p>配置文件修改者</p>
                     * @return ModifyBy <p>配置文件修改者</p>
                     * 
                     */
                    std::string GetModifyBy() const;

                    /**
                     * 设置<p>配置文件修改者</p>
                     * @param _modifyBy <p>配置文件修改者</p>
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
                     * 获取<p>配置文件发布时间</p>
                     * @return ReleaseTime <p>配置文件发布时间</p>
                     * 
                     */
                    std::string GetReleaseTime() const;

                    /**
                     * 设置<p>配置文件发布时间</p>
                     * @param _releaseTime <p>配置文件发布时间</p>
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
                     * 获取<p>配置文件发布者</p>
                     * @return ReleaseBy <p>配置文件发布者</p>
                     * 
                     */
                    std::string GetReleaseBy() const;

                    /**
                     * 设置<p>配置文件发布者</p>
                     * @param _releaseBy <p>配置文件发布者</p>
                     * 
                     */
                    void SetReleaseBy(const std::string& _releaseBy);

                    /**
                     * 判断参数 ReleaseBy 是否已赋值
                     * @return ReleaseBy 是否已赋值
                     * 
                     */
                    bool ReleaseByHasBeenSet() const;

                    /**
                     * 获取<p>配置文件类型</p>
                     * @return ConfigFileSupportedClient <p>配置文件类型</p>
                     * 
                     */
                    int64_t GetConfigFileSupportedClient() const;

                    /**
                     * 设置<p>配置文件类型</p>
                     * @param _configFileSupportedClient <p>配置文件类型</p>
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
                     * 获取<p>配置文件持久化</p>
                     * @return ConfigFilePersistent <p>配置文件持久化</p>
                     * 
                     */
                    ConfigFilePersistent GetConfigFilePersistent() const;

                    /**
                     * 设置<p>配置文件持久化</p>
                     * @param _configFilePersistent <p>配置文件持久化</p>
                     * 
                     */
                    void SetConfigFilePersistent(const ConfigFilePersistent& _configFilePersistent);

                    /**
                     * 判断参数 ConfigFilePersistent 是否已赋值
                     * @return ConfigFilePersistent 是否已赋值
                     * 
                     */
                    bool ConfigFilePersistentHasBeenSet() const;

                    /**
                     * 获取<p>是否开启加密算法</p>
                     * @return Encrypted <p>是否开启加密算法</p>
                     * 
                     */
                    bool GetEncrypted() const;

                    /**
                     * 设置<p>是否开启加密算法</p>
                     * @param _encrypted <p>是否开启加密算法</p>
                     * 
                     */
                    void SetEncrypted(const bool& _encrypted);

                    /**
                     * 判断参数 Encrypted 是否已赋值
                     * @return Encrypted 是否已赋值
                     * 
                     */
                    bool EncryptedHasBeenSet() const;

                    /**
                     * 获取<p>加密算法</p>
                     * @return EncryptAlgo <p>加密算法</p>
                     * 
                     */
                    std::string GetEncryptAlgo() const;

                    /**
                     * 设置<p>加密算法</p>
                     * @param _encryptAlgo <p>加密算法</p>
                     * 
                     */
                    void SetEncryptAlgo(const std::string& _encryptAlgo);

                    /**
                     * 判断参数 EncryptAlgo 是否已赋值
                     * @return EncryptAlgo 是否已赋值
                     * 
                     */
                    bool EncryptAlgoHasBeenSet() const;

                private:

                    /**
                     * <p>配置文件id</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>配置文件名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>配置文件命名空间</p>
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * <p>配置文件组</p>
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * <p>配置文件内容</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>配置文件格式</p>
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * <p>配置文件注释</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>配置文件状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>配置文件标签数组</p>
                     */
                    std::vector<ConfigFileTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>配置文件创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>配置文件创建者</p>
                     */
                    std::string m_createBy;
                    bool m_createByHasBeenSet;

                    /**
                     * <p>配置文件修改时间</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>配置文件修改者</p>
                     */
                    std::string m_modifyBy;
                    bool m_modifyByHasBeenSet;

                    /**
                     * <p>配置文件发布时间</p>
                     */
                    std::string m_releaseTime;
                    bool m_releaseTimeHasBeenSet;

                    /**
                     * <p>配置文件发布者</p>
                     */
                    std::string m_releaseBy;
                    bool m_releaseByHasBeenSet;

                    /**
                     * <p>配置文件类型</p>
                     */
                    int64_t m_configFileSupportedClient;
                    bool m_configFileSupportedClientHasBeenSet;

                    /**
                     * <p>配置文件持久化</p>
                     */
                    ConfigFilePersistent m_configFilePersistent;
                    bool m_configFilePersistentHasBeenSet;

                    /**
                     * <p>是否开启加密算法</p>
                     */
                    bool m_encrypted;
                    bool m_encryptedHasBeenSet;

                    /**
                     * <p>加密算法</p>
                     */
                    std::string m_encryptAlgo;
                    bool m_encryptAlgoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CONFIGFILE_H_
