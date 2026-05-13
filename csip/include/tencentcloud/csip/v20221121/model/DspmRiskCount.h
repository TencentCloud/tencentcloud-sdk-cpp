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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMRISKCOUNT_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMRISKCOUNT_H_

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
                * Dspm 风险统计数
                */
                class DspmRiskCount : public AbstractModel
                {
                public:
                    DspmRiskCount();
                    ~DspmRiskCount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取待处理风险个数
                     * @return UnprocessedRisk 待处理风险个数
                     * 
                     */
                    int64_t GetUnprocessedRisk() const;

                    /**
                     * 设置待处理风险个数
                     * @param _unprocessedRisk 待处理风险个数
                     * 
                     */
                    void SetUnprocessedRisk(const int64_t& _unprocessedRisk);

                    /**
                     * 判断参数 UnprocessedRisk 是否已赋值
                     * @return UnprocessedRisk 是否已赋值
                     * 
                     */
                    bool UnprocessedRiskHasBeenSet() const;

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
                     * @return BaselineDeviation 基线风险个数
                     * @deprecated
                     */
                    int64_t GetBaselineDeviation() const;

                    /**
                     * 设置基线风险个数
                     * @param _baselineDeviation 基线风险个数
                     * @deprecated
                     */
                    void SetBaselineDeviation(const int64_t& _baselineDeviation);

                    /**
                     * 判断参数 BaselineDeviation 是否已赋值
                     * @return BaselineDeviation 是否已赋值
                     * @deprecated
                     */
                    bool BaselineDeviationHasBeenSet() const;

                    /**
                     * 获取泄露风险个数
                     * @return LeakDetection 泄露风险个数
                     * @deprecated
                     */
                    int64_t GetLeakDetection() const;

                    /**
                     * 设置泄露风险个数
                     * @param _leakDetection 泄露风险个数
                     * @deprecated
                     */
                    void SetLeakDetection(const int64_t& _leakDetection);

                    /**
                     * 判断参数 LeakDetection 是否已赋值
                     * @return LeakDetection 是否已赋值
                     * @deprecated
                     */
                    bool LeakDetectionHasBeenSet() const;

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
                     * 获取攻击面风险个数
                     * @return AttackSurfaceRisk 攻击面风险个数
                     * 
                     */
                    int64_t GetAttackSurfaceRisk() const;

                    /**
                     * 设置攻击面风险个数
                     * @param _attackSurfaceRisk 攻击面风险个数
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

                    /**
                     * 获取待处理告警个数
                     * @return UnprocessedAlarm 待处理告警个数
                     * 
                     */
                    int64_t GetUnprocessedAlarm() const;

                    /**
                     * 设置待处理告警个数
                     * @param _unprocessedAlarm 待处理告警个数
                     * 
                     */
                    void SetUnprocessedAlarm(const int64_t& _unprocessedAlarm);

                    /**
                     * 判断参数 UnprocessedAlarm 是否已赋值
                     * @return UnprocessedAlarm 是否已赋值
                     * 
                     */
                    bool UnprocessedAlarmHasBeenSet() const;

                    /**
                     * 获取新增事件告警
                     * @return NumOfNewAlarmEvent 新增事件告警
                     * 
                     */
                    int64_t GetNumOfNewAlarmEvent() const;

                    /**
                     * 设置新增事件告警
                     * @param _numOfNewAlarmEvent 新增事件告警
                     * 
                     */
                    void SetNumOfNewAlarmEvent(const int64_t& _numOfNewAlarmEvent);

                    /**
                     * 判断参数 NumOfNewAlarmEvent 是否已赋值
                     * @return NumOfNewAlarmEvent 是否已赋值
                     * 
                     */
                    bool NumOfNewAlarmEventHasBeenSet() const;

                    /**
                     * 获取新增配置风险
                     * @return NumOfNewConfigRisk 新增配置风险
                     * 
                     */
                    int64_t GetNumOfNewConfigRisk() const;

                    /**
                     * 设置新增配置风险
                     * @param _numOfNewConfigRisk 新增配置风险
                     * 
                     */
                    void SetNumOfNewConfigRisk(const int64_t& _numOfNewConfigRisk);

                    /**
                     * 判断参数 NumOfNewConfigRisk 是否已赋值
                     * @return NumOfNewConfigRisk 是否已赋值
                     * 
                     */
                    bool NumOfNewConfigRiskHasBeenSet() const;

                private:

                    /**
                     * 待处理风险个数
                     */
                    int64_t m_unprocessedRisk;
                    bool m_unprocessedRiskHasBeenSet;

                    /**
                     * 配置风险个数
                     */
                    int64_t m_configurationRisk;
                    bool m_configurationRiskHasBeenSet;

                    /**
                     * 基线风险个数
                     */
                    int64_t m_baselineDeviation;
                    bool m_baselineDeviationHasBeenSet;

                    /**
                     * 泄露风险个数
                     */
                    int64_t m_leakDetection;
                    bool m_leakDetectionHasBeenSet;

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
                     * 攻击面风险个数
                     */
                    int64_t m_attackSurfaceRisk;
                    bool m_attackSurfaceRiskHasBeenSet;

                    /**
                     * 账号敏感操作个数
                     */
                    int64_t m_accountSensitiveOperation;
                    bool m_accountSensitiveOperationHasBeenSet;

                    /**
                     * 待处理告警个数
                     */
                    int64_t m_unprocessedAlarm;
                    bool m_unprocessedAlarmHasBeenSet;

                    /**
                     * 新增事件告警
                     */
                    int64_t m_numOfNewAlarmEvent;
                    bool m_numOfNewAlarmEventHasBeenSet;

                    /**
                     * 新增配置风险
                     */
                    int64_t m_numOfNewConfigRisk;
                    bool m_numOfNewConfigRiskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMRISKCOUNT_H_
