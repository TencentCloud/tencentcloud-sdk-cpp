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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_INSTANCEDBAUDITSTATUS_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_INSTANCEDBAUDITSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/AuditInstanceInfo.h>
#include <tencentcloud/cdb/v20170320/model/DeliverSummary.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 实例审计详情信息
                */
                class InstanceDbAuditStatus : public AbstractModel
                {
                public:
                    InstanceDbAuditStatus();
                    ~InstanceDbAuditStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实例ID。</p>
                     * @return InstanceId <p>实例ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID。</p>
                     * @param _instanceId <p>实例ID。</p>
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
                     * 获取<p>审计状态。ON-表示审计已开启，OFF-表示审计关闭</p>
                     * @return AuditStatus <p>审计状态。ON-表示审计已开启，OFF-表示审计关闭</p>
                     * 
                     */
                    std::string GetAuditStatus() const;

                    /**
                     * 设置<p>审计状态。ON-表示审计已开启，OFF-表示审计关闭</p>
                     * @param _auditStatus <p>审计状态。ON-表示审计已开启，OFF-表示审计关闭</p>
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
                     * 获取<p>任务状态。0-无任务；1-审计开启中，2-审计关闭中。</p>
                     * @return AuditTask <p>任务状态。0-无任务；1-审计开启中，2-审计关闭中。</p>
                     * 
                     */
                    uint64_t GetAuditTask() const;

                    /**
                     * 设置<p>任务状态。0-无任务；1-审计开启中，2-审计关闭中。</p>
                     * @param _auditTask <p>任务状态。0-无任务；1-审计开启中，2-审计关闭中。</p>
                     * 
                     */
                    void SetAuditTask(const uint64_t& _auditTask);

                    /**
                     * 判断参数 AuditTask 是否已赋值
                     * @return AuditTask 是否已赋值
                     * 
                     */
                    bool AuditTaskHasBeenSet() const;

                    /**
                     * 获取<p>日志保留时长。支持值包括：<br>7 - 一周；<br>30 - 一个月；<br>90 - 三个月；<br>180 - 六个月；<br>365 - 一年；<br>1095 - 三年；<br>1825 - 五年。</p>
                     * @return LogExpireDay <p>日志保留时长。支持值包括：<br>7 - 一周；<br>30 - 一个月；<br>90 - 三个月；<br>180 - 六个月；<br>365 - 一年；<br>1095 - 三年；<br>1825 - 五年。</p>
                     * 
                     */
                    uint64_t GetLogExpireDay() const;

                    /**
                     * 设置<p>日志保留时长。支持值包括：<br>7 - 一周；<br>30 - 一个月；<br>90 - 三个月；<br>180 - 六个月；<br>365 - 一年；<br>1095 - 三年；<br>1825 - 五年。</p>
                     * @param _logExpireDay <p>日志保留时长。支持值包括：<br>7 - 一周；<br>30 - 一个月；<br>90 - 三个月；<br>180 - 六个月；<br>365 - 一年；<br>1095 - 三年；<br>1825 - 五年。</p>
                     * 
                     */
                    void SetLogExpireDay(const uint64_t& _logExpireDay);

                    /**
                     * 判断参数 LogExpireDay 是否已赋值
                     * @return LogExpireDay 是否已赋值
                     * 
                     */
                    bool LogExpireDayHasBeenSet() const;

                    /**
                     * 获取<p>高频存储时长。支持值包括：<br>3 - 3天；<br>7 - 一周；<br>30 - 一个月；<br>90 - 三个月；<br>180 - 六个月；<br>365 - 一年；<br>1095 - 三年；<br>1825 - 五年。</p>
                     * @return HighLogExpireDay <p>高频存储时长。支持值包括：<br>3 - 3天；<br>7 - 一周；<br>30 - 一个月；<br>90 - 三个月；<br>180 - 六个月；<br>365 - 一年；<br>1095 - 三年；<br>1825 - 五年。</p>
                     * 
                     */
                    uint64_t GetHighLogExpireDay() const;

                    /**
                     * 设置<p>高频存储时长。支持值包括：<br>3 - 3天；<br>7 - 一周；<br>30 - 一个月；<br>90 - 三个月；<br>180 - 六个月；<br>365 - 一年；<br>1095 - 三年；<br>1825 - 五年。</p>
                     * @param _highLogExpireDay <p>高频存储时长。支持值包括：<br>3 - 3天；<br>7 - 一周；<br>30 - 一个月；<br>90 - 三个月；<br>180 - 六个月；<br>365 - 一年；<br>1095 - 三年；<br>1825 - 五年。</p>
                     * 
                     */
                    void SetHighLogExpireDay(const uint64_t& _highLogExpireDay);

                    /**
                     * 判断参数 HighLogExpireDay 是否已赋值
                     * @return HighLogExpireDay 是否已赋值
                     * 
                     */
                    bool HighLogExpireDayHasBeenSet() const;

                    /**
                     * 获取<p>低频存储时长。单位：天，等于日志保存时长减去高频存储时长。</p>
                     * @return LowLogExpireDay <p>低频存储时长。单位：天，等于日志保存时长减去高频存储时长。</p>
                     * 
                     */
                    uint64_t GetLowLogExpireDay() const;

                    /**
                     * 设置<p>低频存储时长。单位：天，等于日志保存时长减去高频存储时长。</p>
                     * @param _lowLogExpireDay <p>低频存储时长。单位：天，等于日志保存时长减去高频存储时长。</p>
                     * 
                     */
                    void SetLowLogExpireDay(const uint64_t& _lowLogExpireDay);

                    /**
                     * 判断参数 LowLogExpireDay 是否已赋值
                     * @return LowLogExpireDay 是否已赋值
                     * 
                     */
                    bool LowLogExpireDayHasBeenSet() const;

                    /**
                     * 获取<p>日志存储量(单位：GB)。</p>
                     * @return BillingAmount <p>日志存储量(单位：GB)。</p>
                     * 
                     */
                    double GetBillingAmount() const;

                    /**
                     * 设置<p>日志存储量(单位：GB)。</p>
                     * @param _billingAmount <p>日志存储量(单位：GB)。</p>
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
                     * 获取<p>高频存储量(单位：GB)。</p>
                     * @return HighRealStorage <p>高频存储量(单位：GB)。</p>
                     * 
                     */
                    double GetHighRealStorage() const;

                    /**
                     * 设置<p>高频存储量(单位：GB)。</p>
                     * @param _highRealStorage <p>高频存储量(单位：GB)。</p>
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
                     * 获取<p>低频存储量(单位：GB)。</p>
                     * @return LowRealStorage <p>低频存储量(单位：GB)。</p>
                     * 
                     */
                    double GetLowRealStorage() const;

                    /**
                     * 设置<p>低频存储量(单位：GB)。</p>
                     * @param _lowRealStorage <p>低频存储量(单位：GB)。</p>
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
                     * 获取<p>是否为全审计（true-表示全审计）</p>
                     * @return AuditAll <p>是否为全审计（true-表示全审计）</p>
                     * 
                     */
                    bool GetAuditAll() const;

                    /**
                     * 设置<p>是否为全审计（true-表示全审计）</p>
                     * @param _auditAll <p>是否为全审计（true-表示全审计）</p>
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
                     * 获取<p>审计开通时间。</p>
                     * @return CreateAt <p>审计开通时间。</p>
                     * 
                     */
                    std::string GetCreateAt() const;

                    /**
                     * 设置<p>审计开通时间。</p>
                     * @param _createAt <p>审计开通时间。</p>
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
                     * 获取<p>实例相关信息</p>
                     * @return InstanceInfo <p>实例相关信息</p>
                     * 
                     */
                    AuditInstanceInfo GetInstanceInfo() const;

                    /**
                     * 设置<p>实例相关信息</p>
                     * @param _instanceInfo <p>实例相关信息</p>
                     * 
                     */
                    void SetInstanceInfo(const AuditInstanceInfo& _instanceInfo);

                    /**
                     * 判断参数 InstanceInfo 是否已赋值
                     * @return InstanceInfo 是否已赋值
                     * 
                     */
                    bool InstanceInfoHasBeenSet() const;

                    /**
                     * 获取<p>总存储量(单位：GB)。</p>
                     * @return RealStorage <p>总存储量(单位：GB)。</p>
                     * 
                     */
                    double GetRealStorage() const;

                    /**
                     * 设置<p>总存储量(单位：GB)。</p>
                     * @param _realStorage <p>总存储量(单位：GB)。</p>
                     * 
                     */
                    void SetRealStorage(const double& _realStorage);

                    /**
                     * 判断参数 RealStorage 是否已赋值
                     * @return RealStorage 是否已赋值
                     * 
                     */
                    bool RealStorageHasBeenSet() const;

                    /**
                     * 获取<p>是否包含审计策略</p>
                     * @return OldRule <p>是否包含审计策略</p>
                     * 
                     */
                    bool GetOldRule() const;

                    /**
                     * 设置<p>是否包含审计策略</p>
                     * @param _oldRule <p>是否包含审计策略</p>
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
                     * 获取<p>实例所应用的规则模板。</p>
                     * @return RuleTemplateIds <p>实例所应用的规则模板。</p>
                     * 
                     */
                    std::vector<std::string> GetRuleTemplateIds() const;

                    /**
                     * 设置<p>实例所应用的规则模板。</p>
                     * @param _ruleTemplateIds <p>实例所应用的规则模板。</p>
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
                     * 获取<p>限免状态</p>
                     * @return TrialStatus <p>限免状态</p>
                     * 
                     */
                    std::string GetTrialStatus() const;

                    /**
                     * 设置<p>限免状态</p>
                     * @param _trialStatus <p>限免状态</p>
                     * 
                     */
                    void SetTrialStatus(const std::string& _trialStatus);

                    /**
                     * 判断参数 TrialStatus 是否已赋值
                     * @return TrialStatus 是否已赋值
                     * 
                     */
                    bool TrialStatusHasBeenSet() const;

                    /**
                     * 获取<p>限免开启时间</p>
                     * @return TrialStartTime <p>限免开启时间</p>
                     * 
                     */
                    int64_t GetTrialStartTime() const;

                    /**
                     * 设置<p>限免开启时间</p>
                     * @param _trialStartTime <p>限免开启时间</p>
                     * 
                     */
                    void SetTrialStartTime(const int64_t& _trialStartTime);

                    /**
                     * 判断参数 TrialStartTime 是否已赋值
                     * @return TrialStartTime 是否已赋值
                     * 
                     */
                    bool TrialStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>限免持续时间</p>
                     * @return TrialDuration <p>限免持续时间</p>
                     * 
                     */
                    int64_t GetTrialDuration() const;

                    /**
                     * 设置<p>限免持续时间</p>
                     * @param _trialDuration <p>限免持续时间</p>
                     * 
                     */
                    void SetTrialDuration(const int64_t& _trialDuration);

                    /**
                     * 判断参数 TrialDuration 是否已赋值
                     * @return TrialDuration 是否已赋值
                     * 
                     */
                    bool TrialDurationHasBeenSet() const;

                    /**
                     * 获取<p>限免关闭时间</p>
                     * @return TrialCloseTime <p>限免关闭时间</p>
                     * 
                     */
                    int64_t GetTrialCloseTime() const;

                    /**
                     * 设置<p>限免关闭时间</p>
                     * @param _trialCloseTime <p>限免关闭时间</p>
                     * 
                     */
                    void SetTrialCloseTime(const int64_t& _trialCloseTime);

                    /**
                     * 判断参数 TrialCloseTime 是否已赋值
                     * @return TrialCloseTime 是否已赋值
                     * 
                     */
                    bool TrialCloseTimeHasBeenSet() const;

                    /**
                     * 获取<p>限免期查询日志时长</p>
                     * @return TrialDescribeLogHours <p>限免期查询日志时长</p>
                     * 
                     */
                    int64_t GetTrialDescribeLogHours() const;

                    /**
                     * 设置<p>限免期查询日志时长</p>
                     * @param _trialDescribeLogHours <p>限免期查询日志时长</p>
                     * 
                     */
                    void SetTrialDescribeLogHours(const int64_t& _trialDescribeLogHours);

                    /**
                     * 判断参数 TrialDescribeLogHours 是否已赋值
                     * @return TrialDescribeLogHours 是否已赋值
                     * 
                     */
                    bool TrialDescribeLogHoursHasBeenSet() const;

                    /**
                     * 获取<p>投递信息</p>
                     * @return DeliverSummary <p>投递信息</p>
                     * 
                     */
                    std::vector<DeliverSummary> GetDeliverSummary() const;

                    /**
                     * 设置<p>投递信息</p>
                     * @param _deliverSummary <p>投递信息</p>
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
                     * 获取<p>是否开启了投递，ON：开启，OFF：关闭</p>
                     * @return Deliver <p>是否开启了投递，ON：开启，OFF：关闭</p>
                     * 
                     */
                    std::string GetDeliver() const;

                    /**
                     * 设置<p>是否开启了投递，ON：开启，OFF：关闭</p>
                     * @param _deliver <p>是否开启了投递，ON：开启，OFF：关闭</p>
                     * 
                     */
                    void SetDeliver(const std::string& _deliver);

                    /**
                     * 判断参数 Deliver 是否已赋值
                     * @return Deliver 是否已赋值
                     * 
                     */
                    bool DeliverHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>审计状态。ON-表示审计已开启，OFF-表示审计关闭</p>
                     */
                    std::string m_auditStatus;
                    bool m_auditStatusHasBeenSet;

                    /**
                     * <p>任务状态。0-无任务；1-审计开启中，2-审计关闭中。</p>
                     */
                    uint64_t m_auditTask;
                    bool m_auditTaskHasBeenSet;

                    /**
                     * <p>日志保留时长。支持值包括：<br>7 - 一周；<br>30 - 一个月；<br>90 - 三个月；<br>180 - 六个月；<br>365 - 一年；<br>1095 - 三年；<br>1825 - 五年。</p>
                     */
                    uint64_t m_logExpireDay;
                    bool m_logExpireDayHasBeenSet;

                    /**
                     * <p>高频存储时长。支持值包括：<br>3 - 3天；<br>7 - 一周；<br>30 - 一个月；<br>90 - 三个月；<br>180 - 六个月；<br>365 - 一年；<br>1095 - 三年；<br>1825 - 五年。</p>
                     */
                    uint64_t m_highLogExpireDay;
                    bool m_highLogExpireDayHasBeenSet;

                    /**
                     * <p>低频存储时长。单位：天，等于日志保存时长减去高频存储时长。</p>
                     */
                    uint64_t m_lowLogExpireDay;
                    bool m_lowLogExpireDayHasBeenSet;

                    /**
                     * <p>日志存储量(单位：GB)。</p>
                     */
                    double m_billingAmount;
                    bool m_billingAmountHasBeenSet;

                    /**
                     * <p>高频存储量(单位：GB)。</p>
                     */
                    double m_highRealStorage;
                    bool m_highRealStorageHasBeenSet;

                    /**
                     * <p>低频存储量(单位：GB)。</p>
                     */
                    double m_lowRealStorage;
                    bool m_lowRealStorageHasBeenSet;

                    /**
                     * <p>是否为全审计（true-表示全审计）</p>
                     */
                    bool m_auditAll;
                    bool m_auditAllHasBeenSet;

                    /**
                     * <p>审计开通时间。</p>
                     */
                    std::string m_createAt;
                    bool m_createAtHasBeenSet;

                    /**
                     * <p>实例相关信息</p>
                     */
                    AuditInstanceInfo m_instanceInfo;
                    bool m_instanceInfoHasBeenSet;

                    /**
                     * <p>总存储量(单位：GB)。</p>
                     */
                    double m_realStorage;
                    bool m_realStorageHasBeenSet;

                    /**
                     * <p>是否包含审计策略</p>
                     */
                    bool m_oldRule;
                    bool m_oldRuleHasBeenSet;

                    /**
                     * <p>实例所应用的规则模板。</p>
                     */
                    std::vector<std::string> m_ruleTemplateIds;
                    bool m_ruleTemplateIdsHasBeenSet;

                    /**
                     * <p>限免状态</p>
                     */
                    std::string m_trialStatus;
                    bool m_trialStatusHasBeenSet;

                    /**
                     * <p>限免开启时间</p>
                     */
                    int64_t m_trialStartTime;
                    bool m_trialStartTimeHasBeenSet;

                    /**
                     * <p>限免持续时间</p>
                     */
                    int64_t m_trialDuration;
                    bool m_trialDurationHasBeenSet;

                    /**
                     * <p>限免关闭时间</p>
                     */
                    int64_t m_trialCloseTime;
                    bool m_trialCloseTimeHasBeenSet;

                    /**
                     * <p>限免期查询日志时长</p>
                     */
                    int64_t m_trialDescribeLogHours;
                    bool m_trialDescribeLogHoursHasBeenSet;

                    /**
                     * <p>投递信息</p>
                     */
                    std::vector<DeliverSummary> m_deliverSummary;
                    bool m_deliverSummaryHasBeenSet;

                    /**
                     * <p>是否开启了投递，ON：开启，OFF：关闭</p>
                     */
                    std::string m_deliver;
                    bool m_deliverHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_INSTANCEDBAUDITSTATUS_H_
