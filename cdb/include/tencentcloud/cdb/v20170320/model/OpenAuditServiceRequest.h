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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_OPENAUDITSERVICEREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_OPENAUDITSERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/AuditRuleFilters.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * OpenAuditService请求参数结构体
                */
                class OpenAuditServiceRequest : public AbstractModel
                {
                public:
                    OpenAuditServiceRequest();
                    ~OpenAuditServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>CDB 实例 ID。可通过 <a href="https://cloud.tencent.com/document/product/236/15872">DescribeDBInstances</a> 接口获取。</p>
                     * @return InstanceId <p>CDB 实例 ID。可通过 <a href="https://cloud.tencent.com/document/product/236/15872">DescribeDBInstances</a> 接口获取。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>CDB 实例 ID。可通过 <a href="https://cloud.tencent.com/document/product/236/15872">DescribeDBInstances</a> 接口获取。</p>
                     * @param _instanceId <p>CDB 实例 ID。可通过 <a href="https://cloud.tencent.com/document/product/236/15872">DescribeDBInstances</a> 接口获取。</p>
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
                     * 获取<p>审计日志保存时长。</p><p>枚举值：</p><ul><li>7： 一周</li><li>30： 一个月</li><li>90： 三个月</li><li>180： 六个月</li><li>365： 一年</li><li>1095： 三年</li><li>1825： 五年</li></ul>
                     * @return LogExpireDay <p>审计日志保存时长。</p><p>枚举值：</p><ul><li>7： 一周</li><li>30： 一个月</li><li>90： 三个月</li><li>180： 六个月</li><li>365： 一年</li><li>1095： 三年</li><li>1825： 五年</li></ul>
                     * 
                     */
                    uint64_t GetLogExpireDay() const;

                    /**
                     * 设置<p>审计日志保存时长。</p><p>枚举值：</p><ul><li>7： 一周</li><li>30： 一个月</li><li>90： 三个月</li><li>180： 六个月</li><li>365： 一年</li><li>1095： 三年</li><li>1825： 五年</li></ul>
                     * @param _logExpireDay <p>审计日志保存时长。</p><p>枚举值：</p><ul><li>7： 一周</li><li>30： 一个月</li><li>90： 三个月</li><li>180： 六个月</li><li>365： 一年</li><li>1095： 三年</li><li>1825： 五年</li></ul>
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
                     * 获取<p>高频审计日志保存时长。</p><p>枚举值：</p><ul><li>7： 一周</li><li>30： 一个月</li><li>90： 三个月</li><li>180： 六个月</li><li>365： 一年</li><li>1095： 三年</li><li>1825： 五年</li></ul><p>默认值：7</p><p>此项取值需小于等于 LogExpireDay。</p>
                     * @return HighLogExpireDay <p>高频审计日志保存时长。</p><p>枚举值：</p><ul><li>7： 一周</li><li>30： 一个月</li><li>90： 三个月</li><li>180： 六个月</li><li>365： 一年</li><li>1095： 三年</li><li>1825： 五年</li></ul><p>默认值：7</p><p>此项取值需小于等于 LogExpireDay。</p>
                     * 
                     */
                    uint64_t GetHighLogExpireDay() const;

                    /**
                     * 设置<p>高频审计日志保存时长。</p><p>枚举值：</p><ul><li>7： 一周</li><li>30： 一个月</li><li>90： 三个月</li><li>180： 六个月</li><li>365： 一年</li><li>1095： 三年</li><li>1825： 五年</li></ul><p>默认值：7</p><p>此项取值需小于等于 LogExpireDay。</p>
                     * @param _highLogExpireDay <p>高频审计日志保存时长。</p><p>枚举值：</p><ul><li>7： 一周</li><li>30： 一个月</li><li>90： 三个月</li><li>180： 六个月</li><li>365： 一年</li><li>1095： 三年</li><li>1825： 五年</li></ul><p>默认值：7</p><p>此项取值需小于等于 LogExpireDay。</p>
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
                     * 获取<p>审计规则（该参数已废弃，不再生效）。</p>
                     * @return AuditRuleFilters <p>审计规则（该参数已废弃，不再生效）。</p>
                     * @deprecated
                     */
                    std::vector<AuditRuleFilters> GetAuditRuleFilters() const;

                    /**
                     * 设置<p>审计规则（该参数已废弃，不再生效）。</p>
                     * @param _auditRuleFilters <p>审计规则（该参数已废弃，不再生效）。</p>
                     * @deprecated
                     */
                    void SetAuditRuleFilters(const std::vector<AuditRuleFilters>& _auditRuleFilters);

                    /**
                     * 判断参数 AuditRuleFilters 是否已赋值
                     * @return AuditRuleFilters 是否已赋值
                     * @deprecated
                     */
                    bool AuditRuleFiltersHasBeenSet() const;

                    /**
                     * 获取<p>规则模板 ID。</p>
                     * @return RuleTemplateIds <p>规则模板 ID。</p>
                     * 
                     */
                    std::vector<std::string> GetRuleTemplateIds() const;

                    /**
                     * 设置<p>规则模板 ID。</p>
                     * @param _ruleTemplateIds <p>规则模板 ID。</p>
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
                     * 获取<p>审计类型。true - 全审计；默认 false - 规则审计。</p>
                     * @return AuditAll <p>审计类型。true - 全审计；默认 false - 规则审计。</p>
                     * 
                     */
                    bool GetAuditAll() const;

                    /**
                     * 设置<p>审计类型。true - 全审计；默认 false - 规则审计。</p>
                     * @param _auditAll <p>审计类型。true - 全审计；默认 false - 规则审计。</p>
                     * 
                     */
                    void SetAuditAll(const bool& _auditAll);

                    /**
                     * 判断参数 AuditAll 是否已赋值
                     * @return AuditAll 是否已赋值
                     * 
                     */
                    bool AuditAllHasBeenSet() const;

                private:

                    /**
                     * <p>CDB 实例 ID。可通过 <a href="https://cloud.tencent.com/document/product/236/15872">DescribeDBInstances</a> 接口获取。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>审计日志保存时长。</p><p>枚举值：</p><ul><li>7： 一周</li><li>30： 一个月</li><li>90： 三个月</li><li>180： 六个月</li><li>365： 一年</li><li>1095： 三年</li><li>1825： 五年</li></ul>
                     */
                    uint64_t m_logExpireDay;
                    bool m_logExpireDayHasBeenSet;

                    /**
                     * <p>高频审计日志保存时长。</p><p>枚举值：</p><ul><li>7： 一周</li><li>30： 一个月</li><li>90： 三个月</li><li>180： 六个月</li><li>365： 一年</li><li>1095： 三年</li><li>1825： 五年</li></ul><p>默认值：7</p><p>此项取值需小于等于 LogExpireDay。</p>
                     */
                    uint64_t m_highLogExpireDay;
                    bool m_highLogExpireDayHasBeenSet;

                    /**
                     * <p>审计规则（该参数已废弃，不再生效）。</p>
                     */
                    std::vector<AuditRuleFilters> m_auditRuleFilters;
                    bool m_auditRuleFiltersHasBeenSet;

                    /**
                     * <p>规则模板 ID。</p>
                     */
                    std::vector<std::string> m_ruleTemplateIds;
                    bool m_ruleTemplateIdsHasBeenSet;

                    /**
                     * <p>审计类型。true - 全审计；默认 false - 规则审计。</p>
                     */
                    bool m_auditAll;
                    bool m_auditAllHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_OPENAUDITSERVICEREQUEST_H_
