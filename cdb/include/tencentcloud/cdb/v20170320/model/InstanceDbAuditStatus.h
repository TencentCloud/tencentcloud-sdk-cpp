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
                     * 获取实例ID。
                     * @return InstanceId 实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID。
                     * @param _instanceId 实例ID。
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
                     * 获取审计状态。ON-表示审计已开启，OFF-表示审计关闭
                     * @return AuditStatus 审计状态。ON-表示审计已开启，OFF-表示审计关闭
                     * 
                     */
                    std::string GetAuditStatus() const;

                    /**
                     * 设置审计状态。ON-表示审计已开启，OFF-表示审计关闭
                     * @param _auditStatus 审计状态。ON-表示审计已开启，OFF-表示审计关闭
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
                     * 获取任务状态。0-无任务；1-审计开启中，2-审计关闭中。
                     * @return AuditTask 任务状态。0-无任务；1-审计开启中，2-审计关闭中。
                     * 
                     */
                    uint64_t GetAuditTask() const;

                    /**
                     * 设置任务状态。0-无任务；1-审计开启中，2-审计关闭中。
                     * @param _auditTask 任务状态。0-无任务；1-审计开启中，2-审计关闭中。
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
                     * 获取日志保留时长。
                     * @return LogExpireDay 日志保留时长。
                     * 
                     */
                    uint64_t GetLogExpireDay() const;

                    /**
                     * 设置日志保留时长。
                     * @param _logExpireDay 日志保留时长。
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
                     * 获取高频存储时长。
                     * @return HighLogExpireDay 高频存储时长。
                     * 
                     */
                    uint64_t GetHighLogExpireDay() const;

                    /**
                     * 设置高频存储时长。
                     * @param _highLogExpireDay 高频存储时长。
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
                     * 获取低频存储时长。
                     * @return LowLogExpireDay 低频存储时长。
                     * 
                     */
                    uint64_t GetLowLogExpireDay() const;

                    /**
                     * 设置低频存储时长。
                     * @param _lowLogExpireDay 低频存储时长。
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
                     * 获取日志存储量。
                     * @return BillingAmount 日志存储量。
                     * 
                     */
                    double GetBillingAmount() const;

                    /**
                     * 设置日志存储量。
                     * @param _billingAmount 日志存储量。
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
                     * 获取高频存储量。
                     * @return HighRealStorage 高频存储量。
                     * 
                     */
                    double GetHighRealStorage() const;

                    /**
                     * 设置高频存储量。
                     * @param _highRealStorage 高频存储量。
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
                     * 获取低频存储量。
                     * @return LowRealStorage 低频存储量。
                     * 
                     */
                    double GetLowRealStorage() const;

                    /**
                     * 设置低频存储量。
                     * @param _lowRealStorage 低频存储量。
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
                     * 获取是否为全审计。true-表示全审计。
                     * @return AuditAll 是否为全审计。true-表示全审计。
                     * 
                     */
                    bool GetAuditAll() const;

                    /**
                     * 设置是否为全审计。true-表示全审计。
                     * @param _auditAll 是否为全审计。true-表示全审计。
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
                     * 获取审计开通时间。
                     * @return CreateAt 审计开通时间。
                     * 
                     */
                    std::string GetCreateAt() const;

                    /**
                     * 设置审计开通时间。
                     * @param _createAt 审计开通时间。
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
                     * 获取实例相关信息
                     * @return InstanceInfo 实例相关信息
                     * 
                     */
                    AuditInstanceInfo GetInstanceInfo() const;

                    /**
                     * 设置实例相关信息
                     * @param _instanceInfo 实例相关信息
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
                     * 获取总存储量。
                     * @return RealStorage 总存储量。
                     * 
                     */
                    double GetRealStorage() const;

                    /**
                     * 设置总存储量。
                     * @param _realStorage 总存储量。
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
                     * 获取是否包含审计策略
                     * @return OldRule 是否包含审计策略
                     * 
                     */
                    bool GetOldRule() const;

                    /**
                     * 设置是否包含审计策略
                     * @param _oldRule 是否包含审计策略
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
                     * 获取实例所应用的规则模板。
                     * @return RuleTemplateIds 实例所应用的规则模板。
                     * 
                     */
                    std::vector<std::string> GetRuleTemplateIds() const;

                    /**
                     * 设置实例所应用的规则模板。
                     * @param _ruleTemplateIds 实例所应用的规则模板。
                     * 
                     */
                    void SetRuleTemplateIds(const std::vector<std::string>& _ruleTemplateIds);

                    /**
                     * 判断参数 RuleTemplateIds 是否已赋值
                     * @return RuleTemplateIds 是否已赋值
                     * 
                     */
                    bool RuleTemplateIdsHasBeenSet() const;

                private:

                    /**
                     * 实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 审计状态。ON-表示审计已开启，OFF-表示审计关闭
                     */
                    std::string m_auditStatus;
                    bool m_auditStatusHasBeenSet;

                    /**
                     * 任务状态。0-无任务；1-审计开启中，2-审计关闭中。
                     */
                    uint64_t m_auditTask;
                    bool m_auditTaskHasBeenSet;

                    /**
                     * 日志保留时长。
                     */
                    uint64_t m_logExpireDay;
                    bool m_logExpireDayHasBeenSet;

                    /**
                     * 高频存储时长。
                     */
                    uint64_t m_highLogExpireDay;
                    bool m_highLogExpireDayHasBeenSet;

                    /**
                     * 低频存储时长。
                     */
                    uint64_t m_lowLogExpireDay;
                    bool m_lowLogExpireDayHasBeenSet;

                    /**
                     * 日志存储量。
                     */
                    double m_billingAmount;
                    bool m_billingAmountHasBeenSet;

                    /**
                     * 高频存储量。
                     */
                    double m_highRealStorage;
                    bool m_highRealStorageHasBeenSet;

                    /**
                     * 低频存储量。
                     */
                    double m_lowRealStorage;
                    bool m_lowRealStorageHasBeenSet;

                    /**
                     * 是否为全审计。true-表示全审计。
                     */
                    bool m_auditAll;
                    bool m_auditAllHasBeenSet;

                    /**
                     * 审计开通时间。
                     */
                    std::string m_createAt;
                    bool m_createAtHasBeenSet;

                    /**
                     * 实例相关信息
                     */
                    AuditInstanceInfo m_instanceInfo;
                    bool m_instanceInfoHasBeenSet;

                    /**
                     * 总存储量。
                     */
                    double m_realStorage;
                    bool m_realStorageHasBeenSet;

                    /**
                     * 是否包含审计策略
                     */
                    bool m_oldRule;
                    bool m_oldRuleHasBeenSet;

                    /**
                     * 实例所应用的规则模板。
                     */
                    std::vector<std::string> m_ruleTemplateIds;
                    bool m_ruleTemplateIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_INSTANCEDBAUDITSTATUS_H_
