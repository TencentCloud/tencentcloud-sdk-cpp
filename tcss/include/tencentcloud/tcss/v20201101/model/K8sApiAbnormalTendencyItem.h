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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIABNORMALTENDENCYITEM_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIABNORMALTENDENCYITEM_H_

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
                * k8sapi异常请求趋势Item
                */
                class K8sApiAbnormalTendencyItem : public AbstractModel
                {
                public:
                    K8sApiAbnormalTendencyItem();
                    ~K8sApiAbnormalTendencyItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日期
                     * @return Date 日期
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置日期
                     * @param _date 日期
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取异常UA请求事件数
                     * @return ExceptionUARequestCount 异常UA请求事件数
                     * 
                     */
                    uint64_t GetExceptionUARequestCount() const;

                    /**
                     * 设置异常UA请求事件数
                     * @param _exceptionUARequestCount 异常UA请求事件数
                     * 
                     */
                    void SetExceptionUARequestCount(const uint64_t& _exceptionUARequestCount);

                    /**
                     * 判断参数 ExceptionUARequestCount 是否已赋值
                     * @return ExceptionUARequestCount 是否已赋值
                     * 
                     */
                    bool ExceptionUARequestCountHasBeenSet() const;

                    /**
                     * 获取匿名用户权限事件数
                     * @return AnonymousUserRightCount 匿名用户权限事件数
                     * 
                     */
                    uint64_t GetAnonymousUserRightCount() const;

                    /**
                     * 设置匿名用户权限事件数
                     * @param _anonymousUserRightCount 匿名用户权限事件数
                     * 
                     */
                    void SetAnonymousUserRightCount(const uint64_t& _anonymousUserRightCount);

                    /**
                     * 判断参数 AnonymousUserRightCount 是否已赋值
                     * @return AnonymousUserRightCount 是否已赋值
                     * 
                     */
                    bool AnonymousUserRightCountHasBeenSet() const;

                    /**
                     * 获取凭据信息获取事件数
                     * @return CredentialInformationObtainCount 凭据信息获取事件数
                     * 
                     */
                    uint64_t GetCredentialInformationObtainCount() const;

                    /**
                     * 设置凭据信息获取事件数
                     * @param _credentialInformationObtainCount 凭据信息获取事件数
                     * 
                     */
                    void SetCredentialInformationObtainCount(const uint64_t& _credentialInformationObtainCount);

                    /**
                     * 判断参数 CredentialInformationObtainCount 是否已赋值
                     * @return CredentialInformationObtainCount 是否已赋值
                     * 
                     */
                    bool CredentialInformationObtainCountHasBeenSet() const;

                    /**
                     * 获取敏感数据挂载事件数
                     * @return SensitiveDataMountCount 敏感数据挂载事件数
                     * 
                     */
                    uint64_t GetSensitiveDataMountCount() const;

                    /**
                     * 设置敏感数据挂载事件数
                     * @param _sensitiveDataMountCount 敏感数据挂载事件数
                     * 
                     */
                    void SetSensitiveDataMountCount(const uint64_t& _sensitiveDataMountCount);

                    /**
                     * 判断参数 SensitiveDataMountCount 是否已赋值
                     * @return SensitiveDataMountCount 是否已赋值
                     * 
                     */
                    bool SensitiveDataMountCountHasBeenSet() const;

                    /**
                     * 获取命令执行事件数
                     * @return CmdExecCount 命令执行事件数
                     * 
                     */
                    uint64_t GetCmdExecCount() const;

                    /**
                     * 设置命令执行事件数
                     * @param _cmdExecCount 命令执行事件数
                     * 
                     */
                    void SetCmdExecCount(const uint64_t& _cmdExecCount);

                    /**
                     * 判断参数 CmdExecCount 是否已赋值
                     * @return CmdExecCount 是否已赋值
                     * 
                     */
                    bool CmdExecCountHasBeenSet() const;

                    /**
                     * 获取异常定时任务事件数
                     * @return AbnormalScheduledTaskCount 异常定时任务事件数
                     * 
                     */
                    uint64_t GetAbnormalScheduledTaskCount() const;

                    /**
                     * 设置异常定时任务事件数
                     * @param _abnormalScheduledTaskCount 异常定时任务事件数
                     * 
                     */
                    void SetAbnormalScheduledTaskCount(const uint64_t& _abnormalScheduledTaskCount);

                    /**
                     * 判断参数 AbnormalScheduledTaskCount 是否已赋值
                     * @return AbnormalScheduledTaskCount 是否已赋值
                     * 
                     */
                    bool AbnormalScheduledTaskCountHasBeenSet() const;

                    /**
                     * 获取静态Pod创建数
                     * @return StaticsPodCreateCount 静态Pod创建数
                     * 
                     */
                    uint64_t GetStaticsPodCreateCount() const;

                    /**
                     * 设置静态Pod创建数
                     * @param _staticsPodCreateCount 静态Pod创建数
                     * 
                     */
                    void SetStaticsPodCreateCount(const uint64_t& _staticsPodCreateCount);

                    /**
                     * 判断参数 StaticsPodCreateCount 是否已赋值
                     * @return StaticsPodCreateCount 是否已赋值
                     * 
                     */
                    bool StaticsPodCreateCountHasBeenSet() const;

                    /**
                     * 获取可疑容器创建数
                     * @return DoubtfulContainerCreateCount 可疑容器创建数
                     * 
                     */
                    uint64_t GetDoubtfulContainerCreateCount() const;

                    /**
                     * 设置可疑容器创建数
                     * @param _doubtfulContainerCreateCount 可疑容器创建数
                     * 
                     */
                    void SetDoubtfulContainerCreateCount(const uint64_t& _doubtfulContainerCreateCount);

                    /**
                     * 判断参数 DoubtfulContainerCreateCount 是否已赋值
                     * @return DoubtfulContainerCreateCount 是否已赋值
                     * 
                     */
                    bool DoubtfulContainerCreateCountHasBeenSet() const;

                    /**
                     * 获取自定义规则事件数
                     * @return UserDefinedRuleCount 自定义规则事件数
                     * 
                     */
                    uint64_t GetUserDefinedRuleCount() const;

                    /**
                     * 设置自定义规则事件数
                     * @param _userDefinedRuleCount 自定义规则事件数
                     * 
                     */
                    void SetUserDefinedRuleCount(const uint64_t& _userDefinedRuleCount);

                    /**
                     * 判断参数 UserDefinedRuleCount 是否已赋值
                     * @return UserDefinedRuleCount 是否已赋值
                     * 
                     */
                    bool UserDefinedRuleCountHasBeenSet() const;

                    /**
                     * 获取匿名访问事件数
                     * @return AnonymousAccessCount 匿名访问事件数
                     * 
                     */
                    uint64_t GetAnonymousAccessCount() const;

                    /**
                     * 设置匿名访问事件数
                     * @param _anonymousAccessCount 匿名访问事件数
                     * 
                     */
                    void SetAnonymousAccessCount(const uint64_t& _anonymousAccessCount);

                    /**
                     * 判断参数 AnonymousAccessCount 是否已赋值
                     * @return AnonymousAccessCount 是否已赋值
                     * 
                     */
                    bool AnonymousAccessCountHasBeenSet() const;

                    /**
                     * 获取特权容器事件数
                     * @return PrivilegeContainerCount 特权容器事件数
                     * 
                     */
                    uint64_t GetPrivilegeContainerCount() const;

                    /**
                     * 设置特权容器事件数
                     * @param _privilegeContainerCount 特权容器事件数
                     * 
                     */
                    void SetPrivilegeContainerCount(const uint64_t& _privilegeContainerCount);

                    /**
                     * 判断参数 PrivilegeContainerCount 是否已赋值
                     * @return PrivilegeContainerCount 是否已赋值
                     * 
                     */
                    bool PrivilegeContainerCountHasBeenSet() const;

                private:

                    /**
                     * 日期
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 异常UA请求事件数
                     */
                    uint64_t m_exceptionUARequestCount;
                    bool m_exceptionUARequestCountHasBeenSet;

                    /**
                     * 匿名用户权限事件数
                     */
                    uint64_t m_anonymousUserRightCount;
                    bool m_anonymousUserRightCountHasBeenSet;

                    /**
                     * 凭据信息获取事件数
                     */
                    uint64_t m_credentialInformationObtainCount;
                    bool m_credentialInformationObtainCountHasBeenSet;

                    /**
                     * 敏感数据挂载事件数
                     */
                    uint64_t m_sensitiveDataMountCount;
                    bool m_sensitiveDataMountCountHasBeenSet;

                    /**
                     * 命令执行事件数
                     */
                    uint64_t m_cmdExecCount;
                    bool m_cmdExecCountHasBeenSet;

                    /**
                     * 异常定时任务事件数
                     */
                    uint64_t m_abnormalScheduledTaskCount;
                    bool m_abnormalScheduledTaskCountHasBeenSet;

                    /**
                     * 静态Pod创建数
                     */
                    uint64_t m_staticsPodCreateCount;
                    bool m_staticsPodCreateCountHasBeenSet;

                    /**
                     * 可疑容器创建数
                     */
                    uint64_t m_doubtfulContainerCreateCount;
                    bool m_doubtfulContainerCreateCountHasBeenSet;

                    /**
                     * 自定义规则事件数
                     */
                    uint64_t m_userDefinedRuleCount;
                    bool m_userDefinedRuleCountHasBeenSet;

                    /**
                     * 匿名访问事件数
                     */
                    uint64_t m_anonymousAccessCount;
                    bool m_anonymousAccessCountHasBeenSet;

                    /**
                     * 特权容器事件数
                     */
                    uint64_t m_privilegeContainerCount;
                    bool m_privilegeContainerCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIABNORMALTENDENCYITEM_H_
