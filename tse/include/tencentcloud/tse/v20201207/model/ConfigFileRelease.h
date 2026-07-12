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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CONFIGFILERELEASE_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CONFIGFILERELEASE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/ConfigFilePersistent.h>
#include <tencentcloud/tse/v20201207/model/BetaLabel.h>


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
                     * 获取<p>配置文件发布id</p>
                     * @return Id <p>配置文件发布id</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>配置文件发布id</p>
                     * @param _id <p>配置文件发布id</p>
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
                     * 获取<p>配置文件发布名称</p>
                     * @return Name <p>配置文件发布名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>配置文件发布名称</p>
                     * @param _name <p>配置文件发布名称</p>
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
                     * 获取<p>配置文件发布命名空间</p>
                     * @return Namespace <p>配置文件发布命名空间</p>
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置<p>配置文件发布命名空间</p>
                     * @param _namespace <p>配置文件发布命名空间</p>
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
                     * 获取<p>配置文件发布组</p>
                     * @return Group <p>配置文件发布组</p>
                     * 
                     */
                    std::string GetGroup() const;

                    /**
                     * 设置<p>配置文件发布组</p>
                     * @param _group <p>配置文件发布组</p>
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
                     * 获取<p>配置文件发布文件名称</p>
                     * @return FileName <p>配置文件发布文件名称</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>配置文件发布文件名称</p>
                     * @param _fileName <p>配置文件发布文件名称</p>
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
                     * 获取<p>配置文件发布内容</p>
                     * @return Content <p>配置文件发布内容</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>配置文件发布内容</p>
                     * @param _content <p>配置文件发布内容</p>
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
                     * 获取<p>配置文件发布注释</p>
                     * @return Comment <p>配置文件发布注释</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>配置文件发布注释</p>
                     * @param _comment <p>配置文件发布注释</p>
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
                     * 获取<p>配置文件发布Md5</p>
                     * @return Md5 <p>配置文件发布Md5</p>
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置<p>配置文件发布Md5</p>
                     * @param _md5 <p>配置文件发布Md5</p>
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
                     * 获取<p>配置文件发布版本</p>
                     * @return Version <p>配置文件发布版本</p>
                     * 
                     */
                    uint64_t GetVersion() const;

                    /**
                     * 设置<p>配置文件发布版本</p>
                     * @param _version <p>配置文件发布版本</p>
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
                     * 获取<p>配置文件发布创建时间</p>
                     * @return CreateTime <p>配置文件发布创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>配置文件发布创建时间</p>
                     * @param _createTime <p>配置文件发布创建时间</p>
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
                     * 获取<p>配置文件发布创建者</p>
                     * @return CreateBy <p>配置文件发布创建者</p>
                     * 
                     */
                    std::string GetCreateBy() const;

                    /**
                     * 设置<p>配置文件发布创建者</p>
                     * @param _createBy <p>配置文件发布创建者</p>
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
                     * 获取<p>配置文件发布修改时间</p>
                     * @return ModifyTime <p>配置文件发布修改时间</p>
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置<p>配置文件发布修改时间</p>
                     * @param _modifyTime <p>配置文件发布修改时间</p>
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
                     * 获取<p>配置文件发布修改者</p>
                     * @return ModifyBy <p>配置文件发布修改者</p>
                     * 
                     */
                    std::string GetModifyBy() const;

                    /**
                     * 设置<p>配置文件发布修改者</p>
                     * @param _modifyBy <p>配置文件发布修改者</p>
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
                     * 获取<p>发布描述</p>
                     * @return ReleaseDescription <p>发布描述</p>
                     * 
                     */
                    std::string GetReleaseDescription() const;

                    /**
                     * 设置<p>发布描述</p>
                     * @param _releaseDescription <p>发布描述</p>
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
                     * 获取<p>是否生效</p>
                     * @return Active <p>是否生效</p>
                     * 
                     */
                    bool GetActive() const;

                    /**
                     * 设置<p>是否生效</p>
                     * @param _active <p>是否生效</p>
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
                     * 获取<p>格式</p>
                     * @return Format <p>格式</p>
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置<p>格式</p>
                     * @param _format <p>格式</p>
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
                     * 获取<p>配置文件ID</p>
                     * @return ConfigFileId <p>配置文件ID</p>
                     * 
                     */
                    std::string GetConfigFileId() const;

                    /**
                     * 设置<p>配置文件ID</p>
                     * @param _configFileId <p>配置文件ID</p>
                     * 
                     */
                    void SetConfigFileId(const std::string& _configFileId);

                    /**
                     * 判断参数 ConfigFileId 是否已赋值
                     * @return ConfigFileId 是否已赋值
                     * 
                     */
                    bool ConfigFileIdHasBeenSet() const;

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
                     * 获取<p>灰度标签</p>
                     * @return BetaLabels <p>灰度标签</p>
                     * 
                     */
                    std::vector<BetaLabel> GetBetaLabels() const;

                    /**
                     * 设置<p>灰度标签</p>
                     * @param _betaLabels <p>灰度标签</p>
                     * 
                     */
                    void SetBetaLabels(const std::vector<BetaLabel>& _betaLabels);

                    /**
                     * 判断参数 BetaLabels 是否已赋值
                     * @return BetaLabels 是否已赋值
                     * 
                     */
                    bool BetaLabelsHasBeenSet() const;

                    /**
                     * 获取<p>发布类型</p><p>枚举值：</p><ul><li>gary： 灰度发布</li></ul>
                     * @return ReleaseType <p>发布类型</p><p>枚举值：</p><ul><li>gary： 灰度发布</li></ul>
                     * 
                     */
                    std::string GetReleaseType() const;

                    /**
                     * 设置<p>发布类型</p><p>枚举值：</p><ul><li>gary： 灰度发布</li></ul>
                     * @param _releaseType <p>发布类型</p><p>枚举值：</p><ul><li>gary： 灰度发布</li></ul>
                     * 
                     */
                    void SetReleaseType(const std::string& _releaseType);

                    /**
                     * 判断参数 ReleaseType 是否已赋值
                     * @return ReleaseType 是否已赋值
                     * 
                     */
                    bool ReleaseTypeHasBeenSet() const;

                private:

                    /**
                     * <p>配置文件发布id</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>配置文件发布名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>配置文件发布命名空间</p>
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * <p>配置文件发布组</p>
                     */
                    std::string m_group;
                    bool m_groupHasBeenSet;

                    /**
                     * <p>配置文件发布文件名称</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>配置文件发布内容</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>配置文件发布注释</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>配置文件发布Md5</p>
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                    /**
                     * <p>配置文件发布版本</p>
                     */
                    uint64_t m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>配置文件发布创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>配置文件发布创建者</p>
                     */
                    std::string m_createBy;
                    bool m_createByHasBeenSet;

                    /**
                     * <p>配置文件发布修改时间</p>
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * <p>配置文件发布修改者</p>
                     */
                    std::string m_modifyBy;
                    bool m_modifyByHasBeenSet;

                    /**
                     * <p>发布描述</p>
                     */
                    std::string m_releaseDescription;
                    bool m_releaseDescriptionHasBeenSet;

                    /**
                     * <p>是否生效</p>
                     */
                    bool m_active;
                    bool m_activeHasBeenSet;

                    /**
                     * <p>格式</p>
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * <p>配置文件ID</p>
                     */
                    std::string m_configFileId;
                    bool m_configFileIdHasBeenSet;

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
                     * <p>灰度标签</p>
                     */
                    std::vector<BetaLabel> m_betaLabels;
                    bool m_betaLabelsHasBeenSet;

                    /**
                     * <p>发布类型</p><p>枚举值：</p><ul><li>gary： 灰度发布</li></ul>
                     */
                    std::string m_releaseType;
                    bool m_releaseTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CONFIGFILERELEASE_H_
