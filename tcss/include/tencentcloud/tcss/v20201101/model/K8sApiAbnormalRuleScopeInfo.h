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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIABNORMALRULESCOPEINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIABNORMALRULESCOPEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * k8s api 异常事件规则配置范围
                */
                class K8sApiAbnormalRuleScopeInfo : public AbstractModel
                {
                public:
                    K8sApiAbnormalRuleScopeInfo();
                    ~K8sApiAbnormalRuleScopeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>范围<br>系统事件:<br>ANONYMOUS_ACCESS: 匿名访问<br>ABNORMAL_UA_REQ: 异常UA请求<br>ANONYMOUS_ABNORMAL_PERMISSION: 匿名用户权限异动<br>GET_CREDENTIALS: 凭据信息获取<br>MOUNT_SENSITIVE_PATH: 敏感路径挂载<br>COMMAND_RUN: 命令执行<br>PRIVILEGE_CONTAINER: 特权容器<br>EXCEPTION_CRONTAB_TASK: 异常定时任务<br>STATICS_POD: 静态pod创建<br>ABNORMAL_CREATE_POD: 异常pod创建<br>USER_DEFINED: 用户自定义</p>
                     * @return Scope <p>范围<br>系统事件:<br>ANONYMOUS_ACCESS: 匿名访问<br>ABNORMAL_UA_REQ: 异常UA请求<br>ANONYMOUS_ABNORMAL_PERMISSION: 匿名用户权限异动<br>GET_CREDENTIALS: 凭据信息获取<br>MOUNT_SENSITIVE_PATH: 敏感路径挂载<br>COMMAND_RUN: 命令执行<br>PRIVILEGE_CONTAINER: 特权容器<br>EXCEPTION_CRONTAB_TASK: 异常定时任务<br>STATICS_POD: 静态pod创建<br>ABNORMAL_CREATE_POD: 异常pod创建<br>USER_DEFINED: 用户自定义</p>
                     * 
                     */
                    std::string GetScope() const;

                    /**
                     * 设置<p>范围<br>系统事件:<br>ANONYMOUS_ACCESS: 匿名访问<br>ABNORMAL_UA_REQ: 异常UA请求<br>ANONYMOUS_ABNORMAL_PERMISSION: 匿名用户权限异动<br>GET_CREDENTIALS: 凭据信息获取<br>MOUNT_SENSITIVE_PATH: 敏感路径挂载<br>COMMAND_RUN: 命令执行<br>PRIVILEGE_CONTAINER: 特权容器<br>EXCEPTION_CRONTAB_TASK: 异常定时任务<br>STATICS_POD: 静态pod创建<br>ABNORMAL_CREATE_POD: 异常pod创建<br>USER_DEFINED: 用户自定义</p>
                     * @param _scope <p>范围<br>系统事件:<br>ANONYMOUS_ACCESS: 匿名访问<br>ABNORMAL_UA_REQ: 异常UA请求<br>ANONYMOUS_ABNORMAL_PERMISSION: 匿名用户权限异动<br>GET_CREDENTIALS: 凭据信息获取<br>MOUNT_SENSITIVE_PATH: 敏感路径挂载<br>COMMAND_RUN: 命令执行<br>PRIVILEGE_CONTAINER: 特权容器<br>EXCEPTION_CRONTAB_TASK: 异常定时任务<br>STATICS_POD: 静态pod创建<br>ABNORMAL_CREATE_POD: 异常pod创建<br>USER_DEFINED: 用户自定义</p>
                     * 
                     */
                    void SetScope(const std::string& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取<p>动作(RULE_MODE_ALERT: 告警 RULE_MODE_RELEASE:放行)</p>
                     * @return Action <p>动作(RULE_MODE_ALERT: 告警 RULE_MODE_RELEASE:放行)</p>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置<p>动作(RULE_MODE_ALERT: 告警 RULE_MODE_RELEASE:放行)</p>
                     * @param _action <p>动作(RULE_MODE_ALERT: 告警 RULE_MODE_RELEASE:放行)</p>
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取<p>威胁等级 HIGH:高级 MIDDLE: 中级 LOW:低级 NOTICE:提示</p>
                     * @return RiskLevel <p>威胁等级 HIGH:高级 MIDDLE: 中级 LOW:低级 NOTICE:提示</p>
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置<p>威胁等级 HIGH:高级 MIDDLE: 中级 LOW:低级 NOTICE:提示</p>
                     * @param _riskLevel <p>威胁等级 HIGH:高级 MIDDLE: 中级 LOW:低级 NOTICE:提示</p>
                     * 
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取<p>开关状态(true:开 false:关) 适用于系统规则</p>
                     * @return Status <p>开关状态(true:开 false:关) 适用于系统规则</p>
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置<p>开关状态(true:开 false:关) 适用于系统规则</p>
                     * @param _status <p>开关状态(true:开 false:关) 适用于系统规则</p>
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
                     * 获取<p>是否被删除 适用于自定义规则入参</p>
                     * @return IsDelete <p>是否被删除 适用于自定义规则入参</p>
                     * 
                     */
                    bool GetIsDelete() const;

                    /**
                     * 设置<p>是否被删除 适用于自定义规则入参</p>
                     * @param _isDelete <p>是否被删除 适用于自定义规则入参</p>
                     * 
                     */
                    void SetIsDelete(const bool& _isDelete);

                    /**
                     * 判断参数 IsDelete 是否已赋值
                     * @return IsDelete 是否已赋值
                     * 
                     */
                    bool IsDeleteHasBeenSet() const;

                    /**
                     * 获取<p>规则类型对应中文</p>
                     * @return RuleTypeZH <p>规则类型对应中文</p>
                     * 
                     */
                    std::string GetRuleTypeZH() const;

                    /**
                     * 设置<p>规则类型对应中文</p>
                     * @param _ruleTypeZH <p>规则类型对应中文</p>
                     * 
                     */
                    void SetRuleTypeZH(const std::string& _ruleTypeZH);

                    /**
                     * 判断参数 RuleTypeZH 是否已赋值
                     * @return RuleTypeZH 是否已赋值
                     * 
                     */
                    bool RuleTypeZHHasBeenSet() const;

                private:

                    /**
                     * <p>范围<br>系统事件:<br>ANONYMOUS_ACCESS: 匿名访问<br>ABNORMAL_UA_REQ: 异常UA请求<br>ANONYMOUS_ABNORMAL_PERMISSION: 匿名用户权限异动<br>GET_CREDENTIALS: 凭据信息获取<br>MOUNT_SENSITIVE_PATH: 敏感路径挂载<br>COMMAND_RUN: 命令执行<br>PRIVILEGE_CONTAINER: 特权容器<br>EXCEPTION_CRONTAB_TASK: 异常定时任务<br>STATICS_POD: 静态pod创建<br>ABNORMAL_CREATE_POD: 异常pod创建<br>USER_DEFINED: 用户自定义</p>
                     */
                    std::string m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * <p>动作(RULE_MODE_ALERT: 告警 RULE_MODE_RELEASE:放行)</p>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * <p>威胁等级 HIGH:高级 MIDDLE: 中级 LOW:低级 NOTICE:提示</p>
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>开关状态(true:开 false:关) 适用于系统规则</p>
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>是否被删除 适用于自定义规则入参</p>
                     */
                    bool m_isDelete;
                    bool m_isDeleteHasBeenSet;

                    /**
                     * <p>规则类型对应中文</p>
                     */
                    std::string m_ruleTypeZH;
                    bool m_ruleTypeZHHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIABNORMALRULESCOPEINFO_H_
