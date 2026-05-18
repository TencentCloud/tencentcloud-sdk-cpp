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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DIRECTORYCONFIGDATA_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DIRECTORYCONFIGDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 企业目录的配置数据
                */
                class DirectoryConfigData : public AbstractModel
                {
                public:
                    DirectoryConfigData();
                    ~DirectoryConfigData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>企业目录 ID</p>
                     * @return Id <p>企业目录 ID</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>企业目录 ID</p>
                     * @param _id <p>企业目录 ID</p>
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
                     * 获取<p>目录对应身份源类型</p><p>枚举值：</p><ul><li>WeCom： 企业微信</li><li>Lark： 飞书</li><li>DingTalk： 钉钉</li><li>MicrosoftEntraID： 微软 AAD</li></ul>
                     * @return Type <p>目录对应身份源类型</p><p>枚举值：</p><ul><li>WeCom： 企业微信</li><li>Lark： 飞书</li><li>DingTalk： 钉钉</li><li>MicrosoftEntraID： 微软 AAD</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>目录对应身份源类型</p><p>枚举值：</p><ul><li>WeCom： 企业微信</li><li>Lark： 飞书</li><li>DingTalk： 钉钉</li><li>MicrosoftEntraID： 微软 AAD</li></ul>
                     * @param _type <p>目录对应身份源类型</p><p>枚举值：</p><ul><li>WeCom： 企业微信</li><li>Lark： 飞书</li><li>DingTalk： 钉钉</li><li>MicrosoftEntraID： 微软 AAD</li></ul>
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
                     * 获取<p>企业目录名称</p>
                     * @return Name <p>企业目录名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>企业目录名称</p>
                     * @param _name <p>企业目录名称</p>
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
                     * 获取<p>使用 JSON 字符串表示的配置信息</p>
                     * @return Config <p>使用 JSON 字符串表示的配置信息</p>
                     * 
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置<p>使用 JSON 字符串表示的配置信息</p>
                     * @param _config <p>使用 JSON 字符串表示的配置信息</p>
                     * 
                     */
                    void SetConfig(const std::string& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取<p>是否开启了定时同步</p>
                     * @return SyncEnable <p>是否开启了定时同步</p>
                     * 
                     */
                    bool GetSyncEnable() const;

                    /**
                     * 设置<p>是否开启了定时同步</p>
                     * @param _syncEnable <p>是否开启了定时同步</p>
                     * 
                     */
                    void SetSyncEnable(const bool& _syncEnable);

                    /**
                     * 判断参数 SyncEnable 是否已赋值
                     * @return SyncEnable 是否已赋值
                     * 
                     */
                    bool SyncEnableHasBeenSet() const;

                    /**
                     * 获取<p>定时同步的策略</p><p>枚举值：</p><ul><li>4hours： 按创建时间开始的每 4 小时</li><li>daily： 每日</li><li>weekly： 每周</li></ul>
                     * @return SyncPolicy <p>定时同步的策略</p><p>枚举值：</p><ul><li>4hours： 按创建时间开始的每 4 小时</li><li>daily： 每日</li><li>weekly： 每周</li></ul>
                     * 
                     */
                    std::string GetSyncPolicy() const;

                    /**
                     * 设置<p>定时同步的策略</p><p>枚举值：</p><ul><li>4hours： 按创建时间开始的每 4 小时</li><li>daily： 每日</li><li>weekly： 每周</li></ul>
                     * @param _syncPolicy <p>定时同步的策略</p><p>枚举值：</p><ul><li>4hours： 按创建时间开始的每 4 小时</li><li>daily： 每日</li><li>weekly： 每周</li></ul>
                     * 
                     */
                    void SetSyncPolicy(const std::string& _syncPolicy);

                    /**
                     * 判断参数 SyncPolicy 是否已赋值
                     * @return SyncPolicy 是否已赋值
                     * 
                     */
                    bool SyncPolicyHasBeenSet() const;

                    /**
                     * 获取<p>JSON 字符串，针对不同类型的同步策略，提取对应不同的值</p>
                     * @return SyncPolicyParams <p>JSON 字符串，针对不同类型的同步策略，提取对应不同的值</p>
                     * 
                     */
                    std::string GetSyncPolicyParams() const;

                    /**
                     * 设置<p>JSON 字符串，针对不同类型的同步策略，提取对应不同的值</p>
                     * @param _syncPolicyParams <p>JSON 字符串，针对不同类型的同步策略，提取对应不同的值</p>
                     * 
                     */
                    void SetSyncPolicyParams(const std::string& _syncPolicyParams);

                    /**
                     * 判断参数 SyncPolicyParams 是否已赋值
                     * @return SyncPolicyParams 是否已赋值
                     * 
                     */
                    bool SyncPolicyParamsHasBeenSet() const;

                    /**
                     * 获取<p>是否配置了同步创建认证配置</p>
                     * @return CreateAuthConfig <p>是否配置了同步创建认证配置</p>
                     * 
                     */
                    bool GetCreateAuthConfig() const;

                    /**
                     * 设置<p>是否配置了同步创建认证配置</p>
                     * @param _createAuthConfig <p>是否配置了同步创建认证配置</p>
                     * 
                     */
                    void SetCreateAuthConfig(const bool& _createAuthConfig);

                    /**
                     * 判断参数 CreateAuthConfig 是否已赋值
                     * @return CreateAuthConfig 是否已赋值
                     * 
                     */
                    bool CreateAuthConfigHasBeenSet() const;

                    /**
                     * 获取<p>描述</p>
                     * @return Description <p>描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _description <p>描述</p>
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
                     * 获取<p>对应 Config 的配置 ID</p>
                     * @return SourceId <p>对应 Config 的配置 ID</p>
                     * 
                     */
                    std::string GetSourceId() const;

                    /**
                     * 设置<p>对应 Config 的配置 ID</p>
                     * @param _sourceId <p>对应 Config 的配置 ID</p>
                     * 
                     */
                    void SetSourceId(const std::string& _sourceId);

                    /**
                     * 判断参数 SourceId 是否已赋值
                     * @return SourceId 是否已赋值
                     * 
                     */
                    bool SourceIdHasBeenSet() const;

                    /**
                     * 获取<p>是否在登录页展示</p>
                     * @return DisplayOnLoginPage <p>是否在登录页展示</p>
                     * 
                     */
                    bool GetDisplayOnLoginPage() const;

                    /**
                     * 设置<p>是否在登录页展示</p>
                     * @param _displayOnLoginPage <p>是否在登录页展示</p>
                     * 
                     */
                    void SetDisplayOnLoginPage(const bool& _displayOnLoginPage);

                    /**
                     * 判断参数 DisplayOnLoginPage 是否已赋值
                     * @return DisplayOnLoginPage 是否已赋值
                     * 
                     */
                    bool DisplayOnLoginPageHasBeenSet() const;

                private:

                    /**
                     * <p>企业目录 ID</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>目录对应身份源类型</p><p>枚举值：</p><ul><li>WeCom： 企业微信</li><li>Lark： 飞书</li><li>DingTalk： 钉钉</li><li>MicrosoftEntraID： 微软 AAD</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>企业目录名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>使用 JSON 字符串表示的配置信息</p>
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                    /**
                     * <p>是否开启了定时同步</p>
                     */
                    bool m_syncEnable;
                    bool m_syncEnableHasBeenSet;

                    /**
                     * <p>定时同步的策略</p><p>枚举值：</p><ul><li>4hours： 按创建时间开始的每 4 小时</li><li>daily： 每日</li><li>weekly： 每周</li></ul>
                     */
                    std::string m_syncPolicy;
                    bool m_syncPolicyHasBeenSet;

                    /**
                     * <p>JSON 字符串，针对不同类型的同步策略，提取对应不同的值</p>
                     */
                    std::string m_syncPolicyParams;
                    bool m_syncPolicyParamsHasBeenSet;

                    /**
                     * <p>是否配置了同步创建认证配置</p>
                     */
                    bool m_createAuthConfig;
                    bool m_createAuthConfigHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>对应 Config 的配置 ID</p>
                     */
                    std::string m_sourceId;
                    bool m_sourceIdHasBeenSet;

                    /**
                     * <p>是否在登录页展示</p>
                     */
                    bool m_displayOnLoginPage;
                    bool m_displayOnLoginPageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DIRECTORYCONFIGDATA_H_
