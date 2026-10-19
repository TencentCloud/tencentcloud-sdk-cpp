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
                     * 获取<p>待处理风险个数</p>
                     * @return UnprocessedRisk <p>待处理风险个数</p>
                     * 
                     */
                    int64_t GetUnprocessedRisk() const;

                    /**
                     * 设置<p>待处理风险个数</p>
                     * @param _unprocessedRisk <p>待处理风险个数</p>
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
                     * 获取<p>配置风险个数</p>
                     * @return ConfigurationRisk <p>配置风险个数</p>
                     * @deprecated
                     */
                    int64_t GetConfigurationRisk() const;

                    /**
                     * 设置<p>配置风险个数</p>
                     * @param _configurationRisk <p>配置风险个数</p>
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
                     * 获取<p>基线风险个数</p>
                     * @return BaselineDeviation <p>基线风险个数</p>
                     * @deprecated
                     */
                    int64_t GetBaselineDeviation() const;

                    /**
                     * 设置<p>基线风险个数</p>
                     * @param _baselineDeviation <p>基线风险个数</p>
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
                     * 获取<p>泄露风险个数</p>
                     * @return LeakDetection <p>泄露风险个数</p>
                     * @deprecated
                     */
                    int64_t GetLeakDetection() const;

                    /**
                     * 设置<p>泄露风险个数</p>
                     * @param _leakDetection <p>泄露风险个数</p>
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
                     * 获取<p>SQL行为异常风险个数</p>
                     * @return SQLBehaviorAnomaly <p>SQL行为异常风险个数</p>
                     * 
                     */
                    int64_t GetSQLBehaviorAnomaly() const;

                    /**
                     * 设置<p>SQL行为异常风险个数</p>
                     * @param _sQLBehaviorAnomaly <p>SQL行为异常风险个数</p>
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
                     * 获取<p>权限异常风险个数</p>
                     * @return PermissionAnomaly <p>权限异常风险个数</p>
                     * 
                     */
                    int64_t GetPermissionAnomaly() const;

                    /**
                     * 设置<p>权限异常风险个数</p>
                     * @param _permissionAnomaly <p>权限异常风险个数</p>
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
                     * 获取<p>登录行为异常风险个数</p>
                     * @return LoginBehaviorAnomaly <p>登录行为异常风险个数</p>
                     * 
                     */
                    int64_t GetLoginBehaviorAnomaly() const;

                    /**
                     * 设置<p>登录行为异常风险个数</p>
                     * @param _loginBehaviorAnomaly <p>登录行为异常风险个数</p>
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
                     * 获取<p>攻击面风险个数</p>
                     * @return AttackSurfaceRisk <p>攻击面风险个数</p>
                     * 
                     */
                    int64_t GetAttackSurfaceRisk() const;

                    /**
                     * 设置<p>攻击面风险个数</p>
                     * @param _attackSurfaceRisk <p>攻击面风险个数</p>
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
                     * 获取<p>账号敏感操作个数</p>
                     * @return AccountSensitiveOperation <p>账号敏感操作个数</p>
                     * 
                     */
                    int64_t GetAccountSensitiveOperation() const;

                    /**
                     * 设置<p>账号敏感操作个数</p>
                     * @param _accountSensitiveOperation <p>账号敏感操作个数</p>
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
                     * 获取<p>待处理告警个数</p>
                     * @return UnprocessedAlarm <p>待处理告警个数</p>
                     * 
                     */
                    int64_t GetUnprocessedAlarm() const;

                    /**
                     * 设置<p>待处理告警个数</p>
                     * @param _unprocessedAlarm <p>待处理告警个数</p>
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
                     * 获取<p>新增事件告警</p>
                     * @return NumOfNewAlarmEvent <p>新增事件告警</p>
                     * 
                     */
                    int64_t GetNumOfNewAlarmEvent() const;

                    /**
                     * 设置<p>新增事件告警</p>
                     * @param _numOfNewAlarmEvent <p>新增事件告警</p>
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
                     * 获取<p>新增配置风险</p>
                     * @return NumOfNewConfigRisk <p>新增配置风险</p>
                     * 
                     */
                    int64_t GetNumOfNewConfigRisk() const;

                    /**
                     * 设置<p>新增配置风险</p>
                     * @param _numOfNewConfigRisk <p>新增配置风险</p>
                     * 
                     */
                    void SetNumOfNewConfigRisk(const int64_t& _numOfNewConfigRisk);

                    /**
                     * 判断参数 NumOfNewConfigRisk 是否已赋值
                     * @return NumOfNewConfigRisk 是否已赋值
                     * 
                     */
                    bool NumOfNewConfigRiskHasBeenSet() const;

                    /**
                     * 获取<p>账号风险条数</p>
                     * @return AccountRisk <p>账号风险条数</p>
                     * 
                     */
                    int64_t GetAccountRisk() const;

                    /**
                     * 设置<p>账号风险条数</p>
                     * @param _accountRisk <p>账号风险条数</p>
                     * 
                     */
                    void SetAccountRisk(const int64_t& _accountRisk);

                    /**
                     * 判断参数 AccountRisk 是否已赋值
                     * @return AccountRisk 是否已赋值
                     * 
                     */
                    bool AccountRiskHasBeenSet() const;

                    /**
                     * 获取<p>配置风险条数</p>
                     * @return ConfigRisk <p>配置风险条数</p>
                     * 
                     */
                    int64_t GetConfigRisk() const;

                    /**
                     * 设置<p>配置风险条数</p>
                     * @param _configRisk <p>配置风险条数</p>
                     * 
                     */
                    void SetConfigRisk(const int64_t& _configRisk);

                    /**
                     * 判断参数 ConfigRisk 是否已赋值
                     * @return ConfigRisk 是否已赋值
                     * 
                     */
                    bool ConfigRiskHasBeenSet() const;

                private:

                    /**
                     * <p>待处理风险个数</p>
                     */
                    int64_t m_unprocessedRisk;
                    bool m_unprocessedRiskHasBeenSet;

                    /**
                     * <p>配置风险个数</p>
                     */
                    int64_t m_configurationRisk;
                    bool m_configurationRiskHasBeenSet;

                    /**
                     * <p>基线风险个数</p>
                     */
                    int64_t m_baselineDeviation;
                    bool m_baselineDeviationHasBeenSet;

                    /**
                     * <p>泄露风险个数</p>
                     */
                    int64_t m_leakDetection;
                    bool m_leakDetectionHasBeenSet;

                    /**
                     * <p>SQL行为异常风险个数</p>
                     */
                    int64_t m_sQLBehaviorAnomaly;
                    bool m_sQLBehaviorAnomalyHasBeenSet;

                    /**
                     * <p>权限异常风险个数</p>
                     */
                    int64_t m_permissionAnomaly;
                    bool m_permissionAnomalyHasBeenSet;

                    /**
                     * <p>登录行为异常风险个数</p>
                     */
                    int64_t m_loginBehaviorAnomaly;
                    bool m_loginBehaviorAnomalyHasBeenSet;

                    /**
                     * <p>攻击面风险个数</p>
                     */
                    int64_t m_attackSurfaceRisk;
                    bool m_attackSurfaceRiskHasBeenSet;

                    /**
                     * <p>账号敏感操作个数</p>
                     */
                    int64_t m_accountSensitiveOperation;
                    bool m_accountSensitiveOperationHasBeenSet;

                    /**
                     * <p>待处理告警个数</p>
                     */
                    int64_t m_unprocessedAlarm;
                    bool m_unprocessedAlarmHasBeenSet;

                    /**
                     * <p>新增事件告警</p>
                     */
                    int64_t m_numOfNewAlarmEvent;
                    bool m_numOfNewAlarmEventHasBeenSet;

                    /**
                     * <p>新增配置风险</p>
                     */
                    int64_t m_numOfNewConfigRisk;
                    bool m_numOfNewConfigRiskHasBeenSet;

                    /**
                     * <p>账号风险条数</p>
                     */
                    int64_t m_accountRisk;
                    bool m_accountRiskHasBeenSet;

                    /**
                     * <p>配置风险条数</p>
                     */
                    int64_t m_configRisk;
                    bool m_configRiskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DSPMRISKCOUNT_H_
