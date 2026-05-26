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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_USERDOMAININFO_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_USERDOMAININFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * saas和clb、四层域名信息
                */
                class UserDomainInfo : public AbstractModel
                {
                public:
                    UserDomainInfo();
                    ~UserDomainInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>用户id</p>
                     * @return Appid <p>用户id</p>
                     * 
                     */
                    uint64_t GetAppid() const;

                    /**
                     * 设置<p>用户id</p>
                     * @param _appid <p>用户id</p>
                     * 
                     */
                    void SetAppid(const uint64_t& _appid);

                    /**
                     * 判断参数 Appid 是否已赋值
                     * @return Appid 是否已赋值
                     * 
                     */
                    bool AppidHasBeenSet() const;

                    /**
                     * 获取<p>域名</p>
                     * @return Domain <p>域名</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>域名</p>
                     * @param _domain <p>域名</p>
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取<p>域名id</p>
                     * @return DomainId <p>域名id</p>
                     * 
                     */
                    std::string GetDomainId() const;

                    /**
                     * 设置<p>域名id</p>
                     * @param _domainId <p>域名id</p>
                     * 
                     */
                    void SetDomainId(const std::string& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取<p>实例id</p>
                     * @return InstanceId <p>实例id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例id</p>
                     * @param _instanceId <p>实例id</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>实例名</p>
                     * @return InstanceName <p>实例名</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名</p>
                     * @param _instanceName <p>实例名</p>
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>waf类型</p>
                     * @return Edition <p>waf类型</p>
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置<p>waf类型</p>
                     * @param _edition <p>waf类型</p>
                     * 
                     */
                    void SetEdition(const std::string& _edition);

                    /**
                     * 判断参数 Edition 是否已赋值
                     * @return Edition 是否已赋值
                     * 
                     */
                    bool EditionHasBeenSet() const;

                    /**
                     * 获取<p>版本</p>
                     * @return Level <p>版本</p>
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置<p>版本</p>
                     * @param _level <p>版本</p>
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取<p>指定域名访问日志字段的开关</p>
                     * @return WriteConfig <p>指定域名访问日志字段的开关</p>
                     * 
                     */
                    std::string GetWriteConfig() const;

                    /**
                     * 设置<p>指定域名访问日志字段的开关</p>
                     * @param _writeConfig <p>指定域名访问日志字段的开关</p>
                     * 
                     */
                    void SetWriteConfig(const std::string& _writeConfig);

                    /**
                     * 判断参数 WriteConfig 是否已赋值
                     * @return WriteConfig 是否已赋值
                     * 
                     */
                    bool WriteConfigHasBeenSet() const;

                    /**
                     * 获取<p>指定域名是否写cls的开关 1:写 0:不写</p>
                     * @return Cls <p>指定域名是否写cls的开关 1:写 0:不写</p>
                     * 
                     */
                    uint64_t GetCls() const;

                    /**
                     * 设置<p>指定域名是否写cls的开关 1:写 0:不写</p>
                     * @param _cls <p>指定域名是否写cls的开关 1:写 0:不写</p>
                     * 
                     */
                    void SetCls(const uint64_t& _cls);

                    /**
                     * 判断参数 Cls 是否已赋值
                     * @return Cls 是否已赋值
                     * 
                     */
                    bool ClsHasBeenSet() const;

                    /**
                     * 获取<p>标记是否是混合云接入。hybrid表示混合云接入域名</p>
                     * @return CloudType <p>标记是否是混合云接入。hybrid表示混合云接入域名</p>
                     * 
                     */
                    std::string GetCloudType() const;

                    /**
                     * 设置<p>标记是否是混合云接入。hybrid表示混合云接入域名</p>
                     * @param _cloudType <p>标记是否是混合云接入。hybrid表示混合云接入域名</p>
                     * 
                     */
                    void SetCloudType(const std::string& _cloudType);

                    /**
                     * 判断参数 CloudType 是否已赋值
                     * @return CloudType 是否已赋值
                     * 
                     */
                    bool CloudTypeHasBeenSet() const;

                    /**
                     * 获取<p>标记clbwaf类型</p>
                     * @return AlbType <p>标记clbwaf类型</p>
                     * 
                     */
                    std::string GetAlbType() const;

                    /**
                     * 设置<p>标记clbwaf类型</p>
                     * @param _albType <p>标记clbwaf类型</p>
                     * 
                     */
                    void SetAlbType(const std::string& _albType);

                    /**
                     * 判断参数 AlbType 是否已赋值
                     * @return AlbType 是否已赋值
                     * 
                     */
                    bool AlbTypeHasBeenSet() const;

                    /**
                     * 获取<p>BOT开关状态</p>
                     * @return BotStatus <p>BOT开关状态</p>
                     * 
                     */
                    int64_t GetBotStatus() const;

                    /**
                     * 设置<p>BOT开关状态</p>
                     * @param _botStatus <p>BOT开关状态</p>
                     * 
                     */
                    void SetBotStatus(const int64_t& _botStatus);

                    /**
                     * 判断参数 BotStatus 是否已赋值
                     * @return BotStatus 是否已赋值
                     * 
                     */
                    bool BotStatusHasBeenSet() const;

                    /**
                     * 获取<p>API开关状态</p>
                     * @return ApiStatus <p>API开关状态</p>
                     * 
                     */
                    int64_t GetApiStatus() const;

                    /**
                     * 设置<p>API开关状态</p>
                     * @param _apiStatus <p>API开关状态</p>
                     * 
                     */
                    void SetApiStatus(const int64_t& _apiStatus);

                    /**
                     * 判断参数 ApiStatus 是否已赋值
                     * @return ApiStatus 是否已赋值
                     * 
                     */
                    bool ApiStatusHasBeenSet() const;

                    /**
                     * 获取<p>是否是四层clbwaf域名</p>
                     * @return IsREIP <p>是否是四层clbwaf域名</p>
                     * 
                     */
                    int64_t GetIsREIP() const;

                    /**
                     * 设置<p>是否是四层clbwaf域名</p>
                     * @param _isREIP <p>是否是四层clbwaf域名</p>
                     * 
                     */
                    void SetIsREIP(const int64_t& _isREIP);

                    /**
                     * 判断参数 IsREIP 是否已赋值
                     * @return IsREIP 是否已赋值
                     * 
                     */
                    bool IsREIPHasBeenSet() const;

                private:

                    /**
                     * <p>用户id</p>
                     */
                    uint64_t m_appid;
                    bool m_appidHasBeenSet;

                    /**
                     * <p>域名</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>域名id</p>
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * <p>实例id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例名</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>waf类型</p>
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * <p>版本</p>
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>指定域名访问日志字段的开关</p>
                     */
                    std::string m_writeConfig;
                    bool m_writeConfigHasBeenSet;

                    /**
                     * <p>指定域名是否写cls的开关 1:写 0:不写</p>
                     */
                    uint64_t m_cls;
                    bool m_clsHasBeenSet;

                    /**
                     * <p>标记是否是混合云接入。hybrid表示混合云接入域名</p>
                     */
                    std::string m_cloudType;
                    bool m_cloudTypeHasBeenSet;

                    /**
                     * <p>标记clbwaf类型</p>
                     */
                    std::string m_albType;
                    bool m_albTypeHasBeenSet;

                    /**
                     * <p>BOT开关状态</p>
                     */
                    int64_t m_botStatus;
                    bool m_botStatusHasBeenSet;

                    /**
                     * <p>API开关状态</p>
                     */
                    int64_t m_apiStatus;
                    bool m_apiStatusHasBeenSet;

                    /**
                     * <p>是否是四层clbwaf域名</p>
                     */
                    int64_t m_isREIP;
                    bool m_isREIPHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_USERDOMAININFO_H_
