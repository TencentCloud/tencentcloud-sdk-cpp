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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIABNORMALTENDENCYITEM_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIABNORMALTENDENCYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/K8SAPIRuleTypeCountItem.h>


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
                     * 获取<p>日期</p>
                     * @return Date <p>日期</p>
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置<p>日期</p>
                     * @param _date <p>日期</p>
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
                     * 获取<p>异常UA请求事件数</p>
                     * @return ExceptionUARequestCount <p>异常UA请求事件数</p>
                     * 
                     */
                    uint64_t GetExceptionUARequestCount() const;

                    /**
                     * 设置<p>异常UA请求事件数</p>
                     * @param _exceptionUARequestCount <p>异常UA请求事件数</p>
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
                     * 获取<p>匿名用户权限事件数</p>
                     * @return AnonymousUserRightCount <p>匿名用户权限事件数</p>
                     * 
                     */
                    uint64_t GetAnonymousUserRightCount() const;

                    /**
                     * 设置<p>匿名用户权限事件数</p>
                     * @param _anonymousUserRightCount <p>匿名用户权限事件数</p>
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
                     * 获取<p>凭据信息获取事件数</p>
                     * @return CredentialInformationObtainCount <p>凭据信息获取事件数</p>
                     * 
                     */
                    uint64_t GetCredentialInformationObtainCount() const;

                    /**
                     * 设置<p>凭据信息获取事件数</p>
                     * @param _credentialInformationObtainCount <p>凭据信息获取事件数</p>
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
                     * 获取<p>敏感数据挂载事件数</p>
                     * @return SensitiveDataMountCount <p>敏感数据挂载事件数</p>
                     * 
                     */
                    uint64_t GetSensitiveDataMountCount() const;

                    /**
                     * 设置<p>敏感数据挂载事件数</p>
                     * @param _sensitiveDataMountCount <p>敏感数据挂载事件数</p>
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
                     * 获取<p>命令执行事件数</p>
                     * @return CmdExecCount <p>命令执行事件数</p>
                     * 
                     */
                    uint64_t GetCmdExecCount() const;

                    /**
                     * 设置<p>命令执行事件数</p>
                     * @param _cmdExecCount <p>命令执行事件数</p>
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
                     * 获取<p>异常定时任务事件数</p>
                     * @return AbnormalScheduledTaskCount <p>异常定时任务事件数</p>
                     * 
                     */
                    uint64_t GetAbnormalScheduledTaskCount() const;

                    /**
                     * 设置<p>异常定时任务事件数</p>
                     * @param _abnormalScheduledTaskCount <p>异常定时任务事件数</p>
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
                     * 获取<p>静态Pod创建数</p>
                     * @return StaticsPodCreateCount <p>静态Pod创建数</p>
                     * 
                     */
                    uint64_t GetStaticsPodCreateCount() const;

                    /**
                     * 设置<p>静态Pod创建数</p>
                     * @param _staticsPodCreateCount <p>静态Pod创建数</p>
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
                     * 获取<p>可疑容器创建数</p>
                     * @return DoubtfulContainerCreateCount <p>可疑容器创建数</p>
                     * 
                     */
                    uint64_t GetDoubtfulContainerCreateCount() const;

                    /**
                     * 设置<p>可疑容器创建数</p>
                     * @param _doubtfulContainerCreateCount <p>可疑容器创建数</p>
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
                     * 获取<p>自定义规则事件数</p>
                     * @return UserDefinedRuleCount <p>自定义规则事件数</p>
                     * 
                     */
                    uint64_t GetUserDefinedRuleCount() const;

                    /**
                     * 设置<p>自定义规则事件数</p>
                     * @param _userDefinedRuleCount <p>自定义规则事件数</p>
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
                     * 获取<p>匿名访问事件数</p>
                     * @return AnonymousAccessCount <p>匿名访问事件数</p>
                     * 
                     */
                    uint64_t GetAnonymousAccessCount() const;

                    /**
                     * 设置<p>匿名访问事件数</p>
                     * @param _anonymousAccessCount <p>匿名访问事件数</p>
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
                     * 获取<p>特权容器事件数</p>
                     * @return PrivilegeContainerCount <p>特权容器事件数</p>
                     * 
                     */
                    uint64_t GetPrivilegeContainerCount() const;

                    /**
                     * 设置<p>特权容器事件数</p>
                     * @param _privilegeContainerCount <p>特权容器事件数</p>
                     * 
                     */
                    void SetPrivilegeContainerCount(const uint64_t& _privilegeContainerCount);

                    /**
                     * 判断参数 PrivilegeContainerCount 是否已赋值
                     * @return PrivilegeContainerCount 是否已赋值
                     * 
                     */
                    bool PrivilegeContainerCountHasBeenSet() const;

                    /**
                     * 获取<p>规则类型对应告警数量</p>
                     * @return RuleTypeCountSet <p>规则类型对应告警数量</p>
                     * 
                     */
                    std::vector<K8SAPIRuleTypeCountItem> GetRuleTypeCountSet() const;

                    /**
                     * 设置<p>规则类型对应告警数量</p>
                     * @param _ruleTypeCountSet <p>规则类型对应告警数量</p>
                     * 
                     */
                    void SetRuleTypeCountSet(const std::vector<K8SAPIRuleTypeCountItem>& _ruleTypeCountSet);

                    /**
                     * 判断参数 RuleTypeCountSet 是否已赋值
                     * @return RuleTypeCountSet 是否已赋值
                     * 
                     */
                    bool RuleTypeCountSetHasBeenSet() const;

                private:

                    /**
                     * <p>日期</p>
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * <p>异常UA请求事件数</p>
                     */
                    uint64_t m_exceptionUARequestCount;
                    bool m_exceptionUARequestCountHasBeenSet;

                    /**
                     * <p>匿名用户权限事件数</p>
                     */
                    uint64_t m_anonymousUserRightCount;
                    bool m_anonymousUserRightCountHasBeenSet;

                    /**
                     * <p>凭据信息获取事件数</p>
                     */
                    uint64_t m_credentialInformationObtainCount;
                    bool m_credentialInformationObtainCountHasBeenSet;

                    /**
                     * <p>敏感数据挂载事件数</p>
                     */
                    uint64_t m_sensitiveDataMountCount;
                    bool m_sensitiveDataMountCountHasBeenSet;

                    /**
                     * <p>命令执行事件数</p>
                     */
                    uint64_t m_cmdExecCount;
                    bool m_cmdExecCountHasBeenSet;

                    /**
                     * <p>异常定时任务事件数</p>
                     */
                    uint64_t m_abnormalScheduledTaskCount;
                    bool m_abnormalScheduledTaskCountHasBeenSet;

                    /**
                     * <p>静态Pod创建数</p>
                     */
                    uint64_t m_staticsPodCreateCount;
                    bool m_staticsPodCreateCountHasBeenSet;

                    /**
                     * <p>可疑容器创建数</p>
                     */
                    uint64_t m_doubtfulContainerCreateCount;
                    bool m_doubtfulContainerCreateCountHasBeenSet;

                    /**
                     * <p>自定义规则事件数</p>
                     */
                    uint64_t m_userDefinedRuleCount;
                    bool m_userDefinedRuleCountHasBeenSet;

                    /**
                     * <p>匿名访问事件数</p>
                     */
                    uint64_t m_anonymousAccessCount;
                    bool m_anonymousAccessCountHasBeenSet;

                    /**
                     * <p>特权容器事件数</p>
                     */
                    uint64_t m_privilegeContainerCount;
                    bool m_privilegeContainerCountHasBeenSet;

                    /**
                     * <p>规则类型对应告警数量</p>
                     */
                    std::vector<K8SAPIRuleTypeCountItem> m_ruleTypeCountSet;
                    bool m_ruleTypeCountSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_K8SAPIABNORMALTENDENCYITEM_H_
