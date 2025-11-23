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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYBOTIDRULEREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYBOTIDRULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/BotIdConfig.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * ModifyBotIdRule请求参数结构体
                */
                class ModifyBotIdRuleRequest : public AbstractModel
                {
                public:
                    ModifyBotIdRuleRequest();
                    ~ModifyBotIdRuleRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取场景ID
                     * @return SceneId 场景ID
                     * 
                     */
                    std::string GetSceneId() const;

                    /**
                     * 设置场景ID
                     * @param _sceneId 场景ID
                     * 
                     */
                    void SetSceneId(const std::string& _sceneId);

                    /**
                     * 判断参数 SceneId 是否已赋值
                     * @return SceneId 是否已赋值
                     * 
                     */
                    bool SceneIdHasBeenSet() const;

                    /**
                     * 获取配置信息，支持批量
                     * @return Data 配置信息，支持批量
                     * 
                     */
                    std::vector<BotIdConfig> GetData() const;

                    /**
                     * 设置配置信息，支持批量
                     * @param _data 配置信息，支持批量
                     * 
                     */
                    void SetData(const std::vector<BotIdConfig>& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取0-全局设置不生效 1-全局开关配置字段生效 2-全局动作配置字段生效 3-全局开关和动作字段都生效 4-只修改全局重定向路径 5-只修改全局防护等级
                     * @return GlobalSwitch 0-全局设置不生效 1-全局开关配置字段生效 2-全局动作配置字段生效 3-全局开关和动作字段都生效 4-只修改全局重定向路径 5-只修改全局防护等级
                     * 
                     */
                    int64_t GetGlobalSwitch() const;

                    /**
                     * 设置0-全局设置不生效 1-全局开关配置字段生效 2-全局动作配置字段生效 3-全局开关和动作字段都生效 4-只修改全局重定向路径 5-只修改全局防护等级
                     * @param _globalSwitch 0-全局设置不生效 1-全局开关配置字段生效 2-全局动作配置字段生效 3-全局开关和动作字段都生效 4-只修改全局重定向路径 5-只修改全局防护等级
                     * 
                     */
                    void SetGlobalSwitch(const int64_t& _globalSwitch);

                    /**
                     * 判断参数 GlobalSwitch 是否已赋值
                     * @return GlobalSwitch 是否已赋值
                     * 
                     */
                    bool GlobalSwitchHasBeenSet() const;

                    /**
                     * 获取全局开关
                     * @return Status 全局开关
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置全局开关
                     * @param _status 全局开关
                     * 
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取全局动作
                     * @return RuleAction 全局动作
                     * 
                     */
                    std::string GetRuleAction() const;

                    /**
                     * 设置全局动作
                     * @param _ruleAction 全局动作
                     * 
                     */
                    void SetRuleAction(const std::string& _ruleAction);

                    /**
                     * 判断参数 RuleAction 是否已赋值
                     * @return RuleAction 是否已赋值
                     * 
                     */
                    bool RuleActionHasBeenSet() const;

                    /**
                     * 获取全局重定向路径
                     * @return GlobalRedirect 全局重定向路径
                     * 
                     */
                    std::string GetGlobalRedirect() const;

                    /**
                     * 设置全局重定向路径
                     * @param _globalRedirect 全局重定向路径
                     * 
                     */
                    void SetGlobalRedirect(const std::string& _globalRedirect);

                    /**
                     * 判断参数 GlobalRedirect 是否已赋值
                     * @return GlobalRedirect 是否已赋值
                     * 
                     */
                    bool GlobalRedirectHasBeenSet() const;

                    /**
                     * 获取防护等级：normal-正常；strict-严格
                     * @return ProtectLevel 防护等级：normal-正常；strict-严格
                     * 
                     */
                    std::string GetProtectLevel() const;

                    /**
                     * 设置防护等级：normal-正常；strict-严格
                     * @param _protectLevel 防护等级：normal-正常；strict-严格
                     * 
                     */
                    void SetProtectLevel(const std::string& _protectLevel);

                    /**
                     * 判断参数 ProtectLevel 是否已赋值
                     * @return ProtectLevel 是否已赋值
                     * 
                     */
                    bool ProtectLevelHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 场景ID
                     */
                    std::string m_sceneId;
                    bool m_sceneIdHasBeenSet;

                    /**
                     * 配置信息，支持批量
                     */
                    std::vector<BotIdConfig> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 0-全局设置不生效 1-全局开关配置字段生效 2-全局动作配置字段生效 3-全局开关和动作字段都生效 4-只修改全局重定向路径 5-只修改全局防护等级
                     */
                    int64_t m_globalSwitch;
                    bool m_globalSwitchHasBeenSet;

                    /**
                     * 全局开关
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 全局动作
                     */
                    std::string m_ruleAction;
                    bool m_ruleActionHasBeenSet;

                    /**
                     * 全局重定向路径
                     */
                    std::string m_globalRedirect;
                    bool m_globalRedirectHasBeenSet;

                    /**
                     * 防护等级：normal-正常；strict-严格
                     */
                    std::string m_protectLevel;
                    bool m_protectLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYBOTIDRULEREQUEST_H_
