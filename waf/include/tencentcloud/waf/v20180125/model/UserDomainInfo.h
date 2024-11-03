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
                * saas和clb信息
                */
                class UserDomainInfo : public AbstractModel
                {
                public:
                    UserDomainInfo();
                    ~UserDomainInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户id
                     * @return Appid 用户id
                     * 
                     */
                    uint64_t GetAppid() const;

                    /**
                     * 设置用户id
                     * @param _appid 用户id
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
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
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
                     * 获取域名id
                     * @return DomainId 域名id
                     * 
                     */
                    std::string GetDomainId() const;

                    /**
                     * 设置域名id
                     * @param _domainId 域名id
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
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
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
                     * 获取实例名
                     * @return InstanceName 实例名
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名
                     * @param _instanceName 实例名
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
                     * 获取waf类型
                     * @return Edition waf类型
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置waf类型
                     * @param _edition waf类型
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
                     * 获取版本
                     * @return Level 版本
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置版本
                     * @param _level 版本
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
                     * 获取指定域名访问日志字段的开关
                     * @return WriteConfig 指定域名访问日志字段的开关
                     * 
                     */
                    std::string GetWriteConfig() const;

                    /**
                     * 设置指定域名访问日志字段的开关
                     * @param _writeConfig 指定域名访问日志字段的开关
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
                     * 获取指定域名是否写cls的开关 1:写 0:不写
                     * @return Cls 指定域名是否写cls的开关 1:写 0:不写
                     * 
                     */
                    uint64_t GetCls() const;

                    /**
                     * 设置指定域名是否写cls的开关 1:写 0:不写
                     * @param _cls 指定域名是否写cls的开关 1:写 0:不写
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
                     * 获取标记是否是混合云接入。hybrid表示混合云接入域名
                     * @return CloudType 标记是否是混合云接入。hybrid表示混合云接入域名
                     * 
                     */
                    std::string GetCloudType() const;

                    /**
                     * 设置标记是否是混合云接入。hybrid表示混合云接入域名
                     * @param _cloudType 标记是否是混合云接入。hybrid表示混合云接入域名
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
                     * 获取标记clbwaf类型
                     * @return AlbType 标记clbwaf类型
                     * 
                     */
                    std::string GetAlbType() const;

                    /**
                     * 设置标记clbwaf类型
                     * @param _albType 标记clbwaf类型
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
                     * 获取BOT开关状态
                     * @return BotStatus BOT开关状态
                     * 
                     */
                    int64_t GetBotStatus() const;

                    /**
                     * 设置BOT开关状态
                     * @param _botStatus BOT开关状态
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
                     * 获取API开关状态
                     * @return ApiStatus API开关状态
                     * 
                     */
                    int64_t GetApiStatus() const;

                    /**
                     * 设置API开关状态
                     * @param _apiStatus API开关状态
                     * 
                     */
                    void SetApiStatus(const int64_t& _apiStatus);

                    /**
                     * 判断参数 ApiStatus 是否已赋值
                     * @return ApiStatus 是否已赋值
                     * 
                     */
                    bool ApiStatusHasBeenSet() const;

                private:

                    /**
                     * 用户id
                     */
                    uint64_t m_appid;
                    bool m_appidHasBeenSet;

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 域名id
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * waf类型
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * 版本
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 指定域名访问日志字段的开关
                     */
                    std::string m_writeConfig;
                    bool m_writeConfigHasBeenSet;

                    /**
                     * 指定域名是否写cls的开关 1:写 0:不写
                     */
                    uint64_t m_cls;
                    bool m_clsHasBeenSet;

                    /**
                     * 标记是否是混合云接入。hybrid表示混合云接入域名
                     */
                    std::string m_cloudType;
                    bool m_cloudTypeHasBeenSet;

                    /**
                     * 标记clbwaf类型
                     */
                    std::string m_albType;
                    bool m_albTypeHasBeenSet;

                    /**
                     * BOT开关状态
                     */
                    int64_t m_botStatus;
                    bool m_botStatusHasBeenSet;

                    /**
                     * API开关状态
                     */
                    int64_t m_apiStatus;
                    bool m_apiStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_USERDOMAININFO_H_
