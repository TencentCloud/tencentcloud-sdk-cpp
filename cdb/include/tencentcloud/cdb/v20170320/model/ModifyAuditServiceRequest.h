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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYAUDITSERVICEREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYAUDITSERVICEREQUEST_H_

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
                * ModifyAuditService请求参数结构体
                */
                class ModifyAuditServiceRequest : public AbstractModel
                {
                public:
                    ModifyAuditServiceRequest();
                    ~ModifyAuditServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID。可通过 [DescribeDBInstances](https://cloud.tencent.com/document/product/236/15872) 接口获取。
                     * @return InstanceId 实例 ID。可通过 [DescribeDBInstances](https://cloud.tencent.com/document/product/236/15872) 接口获取。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID。可通过 [DescribeDBInstances](https://cloud.tencent.com/document/product/236/15872) 接口获取。
                     * @param _instanceId 实例 ID。可通过 [DescribeDBInstances](https://cloud.tencent.com/document/product/236/15872) 接口获取。
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
                     * 获取日志保留时长。支持值包括：
7 - 一周；
30 - 一个月；
90 - 三个月；
180 - 六个月；
365 - 一年；
1095 - 三年；
1825 - 五年。
                     * @return LogExpireDay 日志保留时长。支持值包括：
7 - 一周；
30 - 一个月；
90 - 三个月；
180 - 六个月；
365 - 一年；
1095 - 三年；
1825 - 五年。
                     * 
                     */
                    uint64_t GetLogExpireDay() const;

                    /**
                     * 设置日志保留时长。支持值包括：
7 - 一周；
30 - 一个月；
90 - 三个月；
180 - 六个月；
365 - 一年；
1095 - 三年；
1825 - 五年。
                     * @param _logExpireDay 日志保留时长。支持值包括：
7 - 一周；
30 - 一个月；
90 - 三个月；
180 - 六个月；
365 - 一年；
1095 - 三年；
1825 - 五年。
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
                     * 获取高频日志保留时长。默认值为7，此项取值需小于等于 LogExpireDay，支持值包括：
3 - 3天；
7 - 一周；
30 - 一个月；
90 - 三个月；
180 - 六个月；
365 - 一年；
1095 - 三年；
1825 - 五年。
                     * @return HighLogExpireDay 高频日志保留时长。默认值为7，此项取值需小于等于 LogExpireDay，支持值包括：
3 - 3天；
7 - 一周；
30 - 一个月；
90 - 三个月；
180 - 六个月；
365 - 一年；
1095 - 三年；
1825 - 五年。
                     * 
                     */
                    uint64_t GetHighLogExpireDay() const;

                    /**
                     * 设置高频日志保留时长。默认值为7，此项取值需小于等于 LogExpireDay，支持值包括：
3 - 3天；
7 - 一周；
30 - 一个月；
90 - 三个月；
180 - 六个月；
365 - 一年；
1095 - 三年；
1825 - 五年。
                     * @param _highLogExpireDay 高频日志保留时长。默认值为7，此项取值需小于等于 LogExpireDay，支持值包括：
3 - 3天；
7 - 一周；
30 - 一个月；
90 - 三个月；
180 - 六个月；
365 - 一年；
1095 - 三年；
1825 - 五年。
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
                     * 获取修改实例审计规则为全审计。
                     * @return AuditAll 修改实例审计规则为全审计。
                     * 
                     */
                    bool GetAuditAll() const;

                    /**
                     * 设置修改实例审计规则为全审计。
                     * @param _auditAll 修改实例审计规则为全审计。
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
                     * 获取废弃。
                     * @return AuditRuleFilters 废弃。
                     * @deprecated
                     */
                    std::vector<AuditRuleFilters> GetAuditRuleFilters() const;

                    /**
                     * 设置废弃。
                     * @param _auditRuleFilters 废弃。
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
                     * 获取规则模板 ID。可通过 [DescribeAuditRuleTemplates](https://cloud.tencent.com/document/api/236/101811) 接口获取。
                     * @return RuleTemplateIds 规则模板 ID。可通过 [DescribeAuditRuleTemplates](https://cloud.tencent.com/document/api/236/101811) 接口获取。
                     * 
                     */
                    std::vector<std::string> GetRuleTemplateIds() const;

                    /**
                     * 设置规则模板 ID。可通过 [DescribeAuditRuleTemplates](https://cloud.tencent.com/document/api/236/101811) 接口获取。
                     * @param _ruleTemplateIds 规则模板 ID。可通过 [DescribeAuditRuleTemplates](https://cloud.tencent.com/document/api/236/101811) 接口获取。
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
                     * 实例 ID。可通过 [DescribeDBInstances](https://cloud.tencent.com/document/product/236/15872) 接口获取。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 日志保留时长。支持值包括：
7 - 一周；
30 - 一个月；
90 - 三个月；
180 - 六个月；
365 - 一年；
1095 - 三年；
1825 - 五年。
                     */
                    uint64_t m_logExpireDay;
                    bool m_logExpireDayHasBeenSet;

                    /**
                     * 高频日志保留时长。默认值为7，此项取值需小于等于 LogExpireDay，支持值包括：
3 - 3天；
7 - 一周；
30 - 一个月；
90 - 三个月；
180 - 六个月；
365 - 一年；
1095 - 三年；
1825 - 五年。
                     */
                    uint64_t m_highLogExpireDay;
                    bool m_highLogExpireDayHasBeenSet;

                    /**
                     * 修改实例审计规则为全审计。
                     */
                    bool m_auditAll;
                    bool m_auditAllHasBeenSet;

                    /**
                     * 废弃。
                     */
                    std::vector<AuditRuleFilters> m_auditRuleFilters;
                    bool m_auditRuleFiltersHasBeenSet;

                    /**
                     * 规则模板 ID。可通过 [DescribeAuditRuleTemplates](https://cloud.tencent.com/document/api/236/101811) 接口获取。
                     */
                    std::vector<std::string> m_ruleTemplateIds;
                    bool m_ruleTemplateIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_MODIFYAUDITSERVICEREQUEST_H_
