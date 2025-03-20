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
                     * 获取范围
系统事件:
ANONYMOUS_ACCESS: 匿名访问
ABNORMAL_UA_REQ: 异常UA请求
ANONYMOUS_ABNORMAL_PERMISSION: 匿名用户权限异动
GET_CREDENTIALS: 凭据信息获取
MOUNT_SENSITIVE_PATH: 敏感路径挂载
COMMAND_RUN: 命令执行
PRIVILEGE_CONTAINER: 特权容器
EXCEPTION_CRONTAB_TASK: 异常定时任务
STATICS_POD: 静态pod创建
ABNORMAL_CREATE_POD: 异常pod创建
USER_DEFINED: 用户自定义
                     * @return Scope 范围
系统事件:
ANONYMOUS_ACCESS: 匿名访问
ABNORMAL_UA_REQ: 异常UA请求
ANONYMOUS_ABNORMAL_PERMISSION: 匿名用户权限异动
GET_CREDENTIALS: 凭据信息获取
MOUNT_SENSITIVE_PATH: 敏感路径挂载
COMMAND_RUN: 命令执行
PRIVILEGE_CONTAINER: 特权容器
EXCEPTION_CRONTAB_TASK: 异常定时任务
STATICS_POD: 静态pod创建
ABNORMAL_CREATE_POD: 异常pod创建
USER_DEFINED: 用户自定义
                     * 
                     */
                    std::string GetScope() const;

                    /**
                     * 设置范围
系统事件:
ANONYMOUS_ACCESS: 匿名访问
ABNORMAL_UA_REQ: 异常UA请求
ANONYMOUS_ABNORMAL_PERMISSION: 匿名用户权限异动
GET_CREDENTIALS: 凭据信息获取
MOUNT_SENSITIVE_PATH: 敏感路径挂载
COMMAND_RUN: 命令执行
PRIVILEGE_CONTAINER: 特权容器
EXCEPTION_CRONTAB_TASK: 异常定时任务
STATICS_POD: 静态pod创建
ABNORMAL_CREATE_POD: 异常pod创建
USER_DEFINED: 用户自定义
                     * @param _scope 范围
系统事件:
ANONYMOUS_ACCESS: 匿名访问
ABNORMAL_UA_REQ: 异常UA请求
ANONYMOUS_ABNORMAL_PERMISSION: 匿名用户权限异动
GET_CREDENTIALS: 凭据信息获取
MOUNT_SENSITIVE_PATH: 敏感路径挂载
COMMAND_RUN: 命令执行
PRIVILEGE_CONTAINER: 特权容器
EXCEPTION_CRONTAB_TASK: 异常定时任务
STATICS_POD: 静态pod创建
ABNORMAL_CREATE_POD: 异常pod创建
USER_DEFINED: 用户自定义
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
                     * 获取动作(RULE_MODE_ALERT: 告警 RULE_MODE_RELEASE:放行)
                     * @return Action 动作(RULE_MODE_ALERT: 告警 RULE_MODE_RELEASE:放行)
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置动作(RULE_MODE_ALERT: 告警 RULE_MODE_RELEASE:放行)
                     * @param _action 动作(RULE_MODE_ALERT: 告警 RULE_MODE_RELEASE:放行)
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
                     * 获取威胁等级 HIGH:高级 MIDDLE: 中级 LOW:低级 NOTICE:提示
                     * @return RiskLevel 威胁等级 HIGH:高级 MIDDLE: 中级 LOW:低级 NOTICE:提示
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置威胁等级 HIGH:高级 MIDDLE: 中级 LOW:低级 NOTICE:提示
                     * @param _riskLevel 威胁等级 HIGH:高级 MIDDLE: 中级 LOW:低级 NOTICE:提示
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
                     * 获取开关状态(true:开 false:关) 适用于系统规则
                     * @return Status 开关状态(true:开 false:关) 适用于系统规则
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置开关状态(true:开 false:关) 适用于系统规则
                     * @param _status 开关状态(true:开 false:关) 适用于系统规则
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
                     * 获取是否被删除 适用于自定义规则入参
                     * @return IsDelete 是否被删除 适用于自定义规则入参
                     * 
                     */
                    bool GetIsDelete() const;

                    /**
                     * 设置是否被删除 适用于自定义规则入参
                     * @param _isDelete 是否被删除 适用于自定义规则入参
                     * 
                     */
                    void SetIsDelete(const bool& _isDelete);

                    /**
                     * 判断参数 IsDelete 是否已赋值
                     * @return IsDelete 是否已赋值
                     * 
                     */
                    bool IsDeleteHasBeenSet() const;

                private:

                    /**
                     * 范围
系统事件:
ANONYMOUS_ACCESS: 匿名访问
ABNORMAL_UA_REQ: 异常UA请求
ANONYMOUS_ABNORMAL_PERMISSION: 匿名用户权限异动
GET_CREDENTIALS: 凭据信息获取
MOUNT_SENSITIVE_PATH: 敏感路径挂载
COMMAND_RUN: 命令执行
PRIVILEGE_CONTAINER: 特权容器
EXCEPTION_CRONTAB_TASK: 异常定时任务
STATICS_POD: 静态pod创建
ABNORMAL_CREATE_POD: 异常pod创建
USER_DEFINED: 用户自定义
                     */
                    std::string m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * 动作(RULE_MODE_ALERT: 告警 RULE_MODE_RELEASE:放行)
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 威胁等级 HIGH:高级 MIDDLE: 中级 LOW:低级 NOTICE:提示
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 开关状态(true:开 false:关) 适用于系统规则
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 是否被删除 适用于自定义规则入参
                     */
                    bool m_isDelete;
                    bool m_isDeleteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIABNORMALRULESCOPEINFO_H_
