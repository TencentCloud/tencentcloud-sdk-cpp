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
                     * 获取配置文件id
                     * @return Id 配置文件id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置配置文件id
                     * @param _id 配置文件id
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
                     * @return Name 配置文件名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置配置文件名称
                     * @param _name 配置文件名称
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
                     * @return Namespace 配置文件命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置配置文件命名空间
                     * @param _namespace 配置文件命名空间
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
                     * @return Group 配置文件组
                     * 
                     */
                    std::string GetGroup() const;

                    /**
                     * 设置配置文件组
                     * @param _group 配置文件组
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
                     * @return Content 配置文件内容
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置配置文件内容
                     * @param _content 配置文件内容
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
                     * @return Format 配置文件格式
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置配置文件格式
                     * @param _format 配置文件格式
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
                     * @return Comment 配置文件注释
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置配置文件注释
                     * @param _comment 配置文件注释
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
                     * @return Status 配置文件状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置配置文件状态
                     * @param _status 配置文件状态
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
                     * @return Tags 配置文件标签数组
                     * 
                     */
                    std::vector<ConfigFileTag> GetTags() const;

                    /**
                     * 设置配置文件标签数组
                     * @param _tags 配置文件标签数组
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
                     * @return CreateTime 配置文件创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置配置文件创建时间
                     * @param _createTime 配置文件创建时间
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
                     * @return CreateBy 配置文件创建者
                     * 
                     */
                    std::string GetCreateBy() const;

                    /**
                     * 设置配置文件创建者
                     * @param _createBy 配置文件创建者
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
                     * @return ModifyTime 配置文件修改时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置配置文件修改时间
                     * @param _modifyTime 配置文件修改时间
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
                     * @return ModifyBy 配置文件修改者
                     * 
                     */
                    std::string GetModifyBy() const;

                    /**
                     * 设置配置文件修改者
                     * @param _modifyBy 配置文件修改者
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
                     * @return ReleaseTime 配置文件发布时间
                     * 
                     */
                    std::string GetReleaseTime() const;

                    /**
                     * 设置配置文件发布时间
                     * @param _releaseTime 配置文件发布时间
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
                     * @return ReleaseBy 配置文件发布者
                     * 
                     */
                    std::string GetReleaseBy() const;

                    /**
                     * 设置配置文件发布者
                     * @param _releaseBy 配置文件发布者
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

                    /**
                     * 获取是否开启加密算法
                     * @return Encrypted 是否开启加密算法
                     * 
                     */
                    bool GetEncrypted() const;

                    /**
                     * 设置是否开启加密算法
                     * @param _encrypted 是否开启加密算法
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
                     * 获取加密算法
                     * @return EncryptAlgo 加密算法
                     * 
                     */
                    std::string GetEncryptAlgo() const;

                    /**
                     * 设置加密算法
                     * @param _encryptAlgo 加密算法
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
                     * 配置文件id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 配置文件名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 配置文件命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 配置文件组
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * 配置文件内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 配置文件格式
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * 配置文件注释
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 配置文件状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 配置文件标签数组
                     */
                    std::vector<ConfigFileTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 配置文件创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 配置文件创建者
                     */
                    std::string m_createBy;
                    bool m_createByHasBeenSet;

                    /**
                     * 配置文件修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 配置文件修改者
                     */
                    std::string m_modifyBy;
                    bool m_modifyByHasBeenSet;

                    /**
                     * 配置文件发布时间
                     */
                    std::string m_releaseTime;
                    bool m_releaseTimeHasBeenSet;

                    /**
                     * 配置文件发布者
                     */
                    std::string m_releaseBy;
                    bool m_releaseByHasBeenSet;

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

                    /**
                     * 是否开启加密算法
                     */
                    bool m_encrypted;
                    bool m_encryptedHasBeenSet;

                    /**
                     * 加密算法
                     */
                    std::string m_encryptAlgo;
                    bool m_encryptAlgoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CONFIGFILE_H_
