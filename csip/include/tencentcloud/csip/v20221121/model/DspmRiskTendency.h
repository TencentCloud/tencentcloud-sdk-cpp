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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMRISKTENDENCY_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMRISKTENDENCY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * Dspm风险趋势
                */
                class DspmRiskTendency : public AbstractModel
                {
                public:
                    DspmRiskTendency();
                    ~DspmRiskTendency() = default;
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
                     * 获取未管控账号个数
                     * @return UncontrolledAccount 未管控账号个数
                     * 
                     */
                    int64_t GetUncontrolledAccount() const;

                    /**
                     * 设置未管控账号个数
                     * @param _uncontrolledAccount 未管控账号个数
                     * 
                     */
                    void SetUncontrolledAccount(const int64_t& _uncontrolledAccount);

                    /**
                     * 判断参数 UncontrolledAccount 是否已赋值
                     * @return UncontrolledAccount 是否已赋值
                     * 
                     */
                    bool UncontrolledAccountHasBeenSet() const;

                    /**
                     * 获取配置风险个数
                     * @return ConfigurationRisk 配置风险个数
                     * @deprecated
                     */
                    int64_t GetConfigurationRisk() const;

                    /**
                     * 设置配置风险个数
                     * @param _configurationRisk 配置风险个数
                     * @deprecated
                     */
                    void SetConfigurationRisk(const int64_t& _configurationRisk);

                    /**
                     * 判断参数 ConfigurationRisk 是否已赋值
                     * @return ConfigurationRisk 是否已赋值
                     * @deprecated
                     */
                    bool ConfigurationRiskHasBeenSet() const;

                    /**
                     * 获取基线风险个数
                     * @return BaselineRisk 基线风险个数
                     * @deprecated
                     */
                    int64_t GetBaselineRisk() const;

                    /**
                     * 设置基线风险个数
                     * @param _baselineRisk 基线风险个数
                     * @deprecated
                     */
                    void SetBaselineRisk(const int64_t& _baselineRisk);

                    /**
                     * 判断参数 BaselineRisk 是否已赋值
                     * @return BaselineRisk 是否已赋值
                     * @deprecated
                     */
                    bool BaselineRiskHasBeenSet() const;

                    /**
                     * 获取泄露风险个数
                     * @return LeakDetectionRisk 泄露风险个数
                     * @deprecated
                     */
                    int64_t GetLeakDetectionRisk() const;

                    /**
                     * 设置泄露风险个数
                     * @param _leakDetectionRisk 泄露风险个数
                     * @deprecated
                     */
                    void SetLeakDetectionRisk(const int64_t& _leakDetectionRisk);

                    /**
                     * 判断参数 LeakDetectionRisk 是否已赋值
                     * @return LeakDetectionRisk 是否已赋值
                     * @deprecated
                     */
                    bool LeakDetectionRiskHasBeenSet() const;

                    /**
                     * 获取SQL行为异常风险个数
                     * @return SQLBehaviorAnomaly SQL行为异常风险个数
                     * 
                     */
                    int64_t GetSQLBehaviorAnomaly() const;

                    /**
                     * 设置SQL行为异常风险个数
                     * @param _sQLBehaviorAnomaly SQL行为异常风险个数
                     * 
                     */
                    void SetSQLBehaviorAnomaly(const int64_t& _sQLBehaviorAnomaly);

                    /**
                     * 判断参数 SQLBehaviorAnomaly 是否已赋值
                     * @return SQLBehaviorAnomaly 是否已赋值
                     * 
                     */
                    bool SQLBehaviorAnomalyHasBeenSet() const;

                    /**
                     * 获取权限异常风险个数
                     * @return PermissionAnomaly 权限异常风险个数
                     * 
                     */
                    int64_t GetPermissionAnomaly() const;

                    /**
                     * 设置权限异常风险个数
                     * @param _permissionAnomaly 权限异常风险个数
                     * 
                     */
                    void SetPermissionAnomaly(const int64_t& _permissionAnomaly);

                    /**
                     * 判断参数 PermissionAnomaly 是否已赋值
                     * @return PermissionAnomaly 是否已赋值
                     * 
                     */
                    bool PermissionAnomalyHasBeenSet() const;

                    /**
                     * 获取登录行为异常风险个数
                     * @return LoginBehaviorAnomaly 登录行为异常风险个数
                     * 
                     */
                    int64_t GetLoginBehaviorAnomaly() const;

                    /**
                     * 设置登录行为异常风险个数
                     * @param _loginBehaviorAnomaly 登录行为异常风险个数
                     * 
                     */
                    void SetLoginBehaviorAnomaly(const int64_t& _loginBehaviorAnomaly);

                    /**
                     * 判断参数 LoginBehaviorAnomaly 是否已赋值
                     * @return LoginBehaviorAnomaly 是否已赋值
                     * 
                     */
                    bool LoginBehaviorAnomalyHasBeenSet() const;

                    /**
                     * 获取攻击面风险风险个数
                     * @return AttackSurfaceRisk 攻击面风险风险个数
                     * 
                     */
                    int64_t GetAttackSurfaceRisk() const;

                    /**
                     * 设置攻击面风险风险个数
                     * @param _attackSurfaceRisk 攻击面风险风险个数
                     * 
                     */
                    void SetAttackSurfaceRisk(const int64_t& _attackSurfaceRisk);

                    /**
                     * 判断参数 AttackSurfaceRisk 是否已赋值
                     * @return AttackSurfaceRisk 是否已赋值
                     * 
                     */
                    bool AttackSurfaceRiskHasBeenSet() const;

                    /**
                     * 获取账号敏感操作个数
                     * @return AccountSensitiveOperation 账号敏感操作个数
                     * 
                     */
                    int64_t GetAccountSensitiveOperation() const;

                    /**
                     * 设置账号敏感操作个数
                     * @param _accountSensitiveOperation 账号敏感操作个数
                     * 
                     */
                    void SetAccountSensitiveOperation(const int64_t& _accountSensitiveOperation);

                    /**
                     * 判断参数 AccountSensitiveOperation 是否已赋值
                     * @return AccountSensitiveOperation 是否已赋值
                     * 
                     */
                    bool AccountSensitiveOperationHasBeenSet() const;

                private:

                    /**
                     * 日期
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 未管控账号个数
                     */
                    int64_t m_uncontrolledAccount;
                    bool m_uncontrolledAccountHasBeenSet;

                    /**
                     * 配置风险个数
                     */
                    int64_t m_configurationRisk;
                    bool m_configurationRiskHasBeenSet;

                    /**
                     * 基线风险个数
                     */
                    int64_t m_baselineRisk;
                    bool m_baselineRiskHasBeenSet;

                    /**
                     * 泄露风险个数
                     */
                    int64_t m_leakDetectionRisk;
                    bool m_leakDetectionRiskHasBeenSet;

                    /**
                     * SQL行为异常风险个数
                     */
                    int64_t m_sQLBehaviorAnomaly;
                    bool m_sQLBehaviorAnomalyHasBeenSet;

                    /**
                     * 权限异常风险个数
                     */
                    int64_t m_permissionAnomaly;
                    bool m_permissionAnomalyHasBeenSet;

                    /**
                     * 登录行为异常风险个数
                     */
                    int64_t m_loginBehaviorAnomaly;
                    bool m_loginBehaviorAnomalyHasBeenSet;

                    /**
                     * 攻击面风险风险个数
                     */
                    int64_t m_attackSurfaceRisk;
                    bool m_attackSurfaceRiskHasBeenSet;

                    /**
                     * 账号敏感操作个数
                     */
                    int64_t m_accountSensitiveOperation;
                    bool m_accountSensitiveOperationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMRISKTENDENCY_H_
