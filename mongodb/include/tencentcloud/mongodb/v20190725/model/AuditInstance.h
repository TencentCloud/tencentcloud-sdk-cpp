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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_AUDITINSTANCE_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_AUDITINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/InstanceInfo.h>
#include <tencentcloud/mongodb/v20190725/model/DeliverSummary.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * 审计实例信息
                */
                class AuditInstance : public AbstractModel
                {
                public:
                    AuditInstance();
                    ~AuditInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例 ID。
                     * @return InstanceId 实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID。
                     * @param _instanceId 实例 ID。
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
                     * 获取审计状态。
                     * @return AuditStatus 审计状态。
                     * 
                     */
                    std::string GetAuditStatus() const;

                    /**
                     * 设置审计状态。
                     * @param _auditStatus 审计状态。
                     * 
                     */
                    void SetAuditStatus(const std::string& _auditStatus);

                    /**
                     * 判断参数 AuditStatus 是否已赋值
                     * @return AuditStatus 是否已赋值
                     * 
                     */
                    bool AuditStatusHasBeenSet() const;

                    /**
                     * 获取是否存在审计任务，0：无任务，1：创建中，2：关闭中
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuditTask 是否存在审计任务，0：无任务，1：创建中，2：关闭中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAuditTask() const;

                    /**
                     * 设置是否存在审计任务，0：无任务，1：创建中，2：关闭中
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _auditTask 是否存在审计任务，0：无任务，1：创建中，2：关闭中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAuditTask(const int64_t& _auditTask);

                    /**
                     * 判断参数 AuditTask 是否已赋值
                     * @return AuditTask 是否已赋值
                     * 
                     */
                    bool AuditTaskHasBeenSet() const;

                    /**
                     * 获取审计日志过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogExpireDay 审计日志过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLogExpireDay() const;

                    /**
                     * 设置审计日志过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logExpireDay 审计日志过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogExpireDay(const int64_t& _logExpireDay);

                    /**
                     * 判断参数 LogExpireDay 是否已赋值
                     * @return LogExpireDay 是否已赋值
                     * 
                     */
                    bool LogExpireDayHasBeenSet() const;

                    /**
                     * 获取高频日志过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HighLogExpireDay 高频日志过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetHighLogExpireDay() const;

                    /**
                     * 设置高频日志过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _highLogExpireDay 高频日志过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHighLogExpireDay(const int64_t& _highLogExpireDay);

                    /**
                     * 判断参数 HighLogExpireDay 是否已赋值
                     * @return HighLogExpireDay 是否已赋值
                     * 
                     */
                    bool HighLogExpireDayHasBeenSet() const;

                    /**
                     * 获取低频日志过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LowLogExpireDay 低频日志过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLowLogExpireDay() const;

                    /**
                     * 设置低频日志过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lowLogExpireDay 低频日志过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLowLogExpireDay(const int64_t& _lowLogExpireDay);

                    /**
                     * 判断参数 LowLogExpireDay 是否已赋值
                     * @return LowLogExpireDay 是否已赋值
                     * 
                     */
                    bool LowLogExpireDayHasBeenSet() const;

                    /**
                     * 获取费用信息。
                     * @return BillingAmount 费用信息。
                     * 
                     */
                    double GetBillingAmount() const;

                    /**
                     * 设置费用信息。
                     * @param _billingAmount 费用信息。
                     * 
                     */
                    void SetBillingAmount(const double& _billingAmount);

                    /**
                     * 判断参数 BillingAmount 是否已赋值
                     * @return BillingAmount 是否已赋值
                     * 
                     */
                    bool BillingAmountHasBeenSet() const;

                    /**
                     * 获取高频存储容量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HighRealStorage 高频存储容量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetHighRealStorage() const;

                    /**
                     * 设置高频存储容量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _highRealStorage 高频存储容量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHighRealStorage(const double& _highRealStorage);

                    /**
                     * 判断参数 HighRealStorage 是否已赋值
                     * @return HighRealStorage 是否已赋值
                     * 
                     */
                    bool HighRealStorageHasBeenSet() const;

                    /**
                     * 获取低频存储容量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LowRealStorage 低频存储容量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetLowRealStorage() const;

                    /**
                     * 设置低频存储容量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lowRealStorage 低频存储容量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLowRealStorage(const double& _lowRealStorage);

                    /**
                     * 判断参数 LowRealStorage 是否已赋值
                     * @return LowRealStorage 是否已赋值
                     * 
                     */
                    bool LowRealStorageHasBeenSet() const;

                    /**
                     * 获取实例详情。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceInfo 实例详情。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    InstanceInfo GetInstanceInfo() const;

                    /**
                     * 设置实例详情。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceInfo 实例详情。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceInfo(const InstanceInfo& _instanceInfo);

                    /**
                     * 判断参数 InstanceInfo 是否已赋值
                     * @return InstanceInfo 是否已赋值
                     * 
                     */
                    bool InstanceInfoHasBeenSet() const;

                    /**
                     * 获取性能分析
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PerformancesAnalyse 性能分析
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPerformancesAnalyse() const;

                    /**
                     * 设置性能分析
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _performancesAnalyse 性能分析
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPerformancesAnalyse(const int64_t& _performancesAnalyse);

                    /**
                     * 判断参数 PerformancesAnalyse 是否已赋值
                     * @return PerformancesAnalyse 是否已赋值
                     * 
                     */
                    bool PerformancesAnalyseHasBeenSet() const;

                    /**
                     * 获取true表示全审计，false表示规则审计
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuditAll true表示全审计，false表示规则审计
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetAuditAll() const;

                    /**
                     * 设置true表示全审计，false表示规则审计
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _auditAll true表示全审计，false表示规则审计
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAuditAll(const bool& _auditAll);

                    /**
                     * 判断参数 AuditAll 是否已赋值
                     * @return AuditAll 是否已赋值
                     * 
                     */
                    bool AuditAllHasBeenSet() const;

                    /**
                     * 获取实例审计最近一次的开通时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateAt 实例审计最近一次的开通时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateAt() const;

                    /**
                     * 设置实例审计最近一次的开通时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createAt 实例审计最近一次的开通时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateAt(const std::string& _createAt);

                    /**
                     * 判断参数 CreateAt 是否已赋值
                     * @return CreateAt 是否已赋值
                     * 
                     */
                    bool CreateAtHasBeenSet() const;

                    /**
                     * 获取实例绑定的规则模版ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RuleTemplateIds 实例绑定的规则模版ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetRuleTemplateIds() const;

                    /**
                     * 设置实例绑定的规则模版ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ruleTemplateIds 实例绑定的规则模版ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRuleTemplateIds(const std::vector<std::string>& _ruleTemplateIds);

                    /**
                     * 判断参数 RuleTemplateIds 是否已赋值
                     * @return RuleTemplateIds 是否已赋值
                     * 
                     */
                    bool RuleTemplateIdsHasBeenSet() const;

                    /**
                     * 获取是否开启投递：ON，OFF
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Deliver 是否开启投递：ON，OFF
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeliver() const;

                    /**
                     * 设置是否开启投递：ON，OFF
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deliver 是否开启投递：ON，OFF
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeliver(const std::string& _deliver);

                    /**
                     * 判断参数 Deliver 是否已赋值
                     * @return Deliver 是否已赋值
                     * 
                     */
                    bool DeliverHasBeenSet() const;

                    /**
                     * 获取日志投递信息
                     * @return DeliverSummary 日志投递信息
                     * 
                     */
                    std::vector<DeliverSummary> GetDeliverSummary() const;

                    /**
                     * 设置日志投递信息
                     * @param _deliverSummary 日志投递信息
                     * 
                     */
                    void SetDeliverSummary(const std::vector<DeliverSummary>& _deliverSummary);

                    /**
                     * 判断参数 DeliverSummary 是否已赋值
                     * @return DeliverSummary 是否已赋值
                     * 
                     */
                    bool DeliverSummaryHasBeenSet() const;

                    /**
                     * 获取旧规则
                     * @return OldRule 旧规则
                     * 
                     */
                    bool GetOldRule() const;

                    /**
                     * 设置旧规则
                     * @param _oldRule 旧规则
                     * 
                     */
                    void SetOldRule(const bool& _oldRule);

                    /**
                     * 判断参数 OldRule 是否已赋值
                     * @return OldRule 是否已赋值
                     * 
                     */
                    bool OldRuleHasBeenSet() const;

                    /**
                     * 获取实际存储容量
                     * @return RealStorage 实际存储容量
                     * 
                     */
                    double GetRealStorage() const;

                    /**
                     * 设置实际存储容量
                     * @param _realStorage 实际存储容量
                     * 
                     */
                    void SetRealStorage(const double& _realStorage);

                    /**
                     * 判断参数 RealStorage 是否已赋值
                     * @return RealStorage 是否已赋值
                     * 
                     */
                    bool RealStorageHasBeenSet() const;

                private:

                    /**
                     * 实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 审计状态。
                     */
                    std::string m_auditStatus;
                    bool m_auditStatusHasBeenSet;

                    /**
                     * 是否存在审计任务，0：无任务，1：创建中，2：关闭中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_auditTask;
                    bool m_auditTaskHasBeenSet;

                    /**
                     * 审计日志过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_logExpireDay;
                    bool m_logExpireDayHasBeenSet;

                    /**
                     * 高频日志过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_highLogExpireDay;
                    bool m_highLogExpireDayHasBeenSet;

                    /**
                     * 低频日志过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_lowLogExpireDay;
                    bool m_lowLogExpireDayHasBeenSet;

                    /**
                     * 费用信息。
                     */
                    double m_billingAmount;
                    bool m_billingAmountHasBeenSet;

                    /**
                     * 高频存储容量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_highRealStorage;
                    bool m_highRealStorageHasBeenSet;

                    /**
                     * 低频存储容量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_lowRealStorage;
                    bool m_lowRealStorageHasBeenSet;

                    /**
                     * 实例详情。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    InstanceInfo m_instanceInfo;
                    bool m_instanceInfoHasBeenSet;

                    /**
                     * 性能分析
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_performancesAnalyse;
                    bool m_performancesAnalyseHasBeenSet;

                    /**
                     * true表示全审计，false表示规则审计
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_auditAll;
                    bool m_auditAllHasBeenSet;

                    /**
                     * 实例审计最近一次的开通时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createAt;
                    bool m_createAtHasBeenSet;

                    /**
                     * 实例绑定的规则模版ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_ruleTemplateIds;
                    bool m_ruleTemplateIdsHasBeenSet;

                    /**
                     * 是否开启投递：ON，OFF
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deliver;
                    bool m_deliverHasBeenSet;

                    /**
                     * 日志投递信息
                     */
                    std::vector<DeliverSummary> m_deliverSummary;
                    bool m_deliverSummaryHasBeenSet;

                    /**
                     * 旧规则
                     */
                    bool m_oldRule;
                    bool m_oldRuleHasBeenSet;

                    /**
                     * 实际存储容量
                     */
                    double m_realStorage;
                    bool m_realStorageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_AUDITINSTANCE_H_
