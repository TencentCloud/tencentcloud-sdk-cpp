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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_OPENAUDITSERVICEREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_OPENAUDITSERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/LogFilter.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
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
                     * 获取实例 ID，格式如：cmgo-xfts****，与云数据库控制台页面中显示的实例 ID 相同。
                     * @return InstanceId 实例 ID，格式如：cmgo-xfts****，与云数据库控制台页面中显示的实例 ID 相同。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，格式如：cmgo-xfts****，与云数据库控制台页面中显示的实例 ID 相同。
                     * @param _instanceId 实例 ID，格式如：cmgo-xfts****，与云数据库控制台页面中显示的实例 ID 相同。
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
                     * 获取审计日志保存时长。单位为：天。当前支持的取值包括： 7： 一周。 30： 一个月。 90： 三个月。 180 ： 六个月。 365 ： 一年。 1095 ： 三年。 1825 ： 五年。
                     * @return LogExpireDay 审计日志保存时长。单位为：天。当前支持的取值包括： 7： 一周。 30： 一个月。 90： 三个月。 180 ： 六个月。 365 ： 一年。 1095 ： 三年。 1825 ： 五年。
                     * 
                     */
                    uint64_t GetLogExpireDay() const;

                    /**
                     * 设置审计日志保存时长。单位为：天。当前支持的取值包括： 7： 一周。 30： 一个月。 90： 三个月。 180 ： 六个月。 365 ： 一年。 1095 ： 三年。 1825 ： 五年。
                     * @param _logExpireDay 审计日志保存时长。单位为：天。当前支持的取值包括： 7： 一周。 30： 一个月。 90： 三个月。 180 ： 六个月。 365 ： 一年。 1095 ： 三年。 1825 ： 五年。
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
                     * 获取true-全审计，false-规则审计，注意：AuditAll=true 时，RuleFilters 无需填参
                     * @return AuditAll true-全审计，false-规则审计，注意：AuditAll=true 时，RuleFilters 无需填参
                     * 
                     */
                    bool GetAuditAll() const;

                    /**
                     * 设置true-全审计，false-规则审计，注意：AuditAll=true 时，RuleFilters 无需填参
                     * @param _auditAll true-全审计，false-规则审计，注意：AuditAll=true 时，RuleFilters 无需填参
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
                     * 获取审计过滤规则，Type的范围【SrcIp、DB、Collection、User、SqlType】，注意：Type=SqlType时，Value必须在这个范围 ["query", "insert", "update", "delete", "command"]
                     * @return RuleFilters 审计过滤规则，Type的范围【SrcIp、DB、Collection、User、SqlType】，注意：Type=SqlType时，Value必须在这个范围 ["query", "insert", "update", "delete", "command"]
                     * 
                     */
                    std::vector<LogFilter> GetRuleFilters() const;

                    /**
                     * 设置审计过滤规则，Type的范围【SrcIp、DB、Collection、User、SqlType】，注意：Type=SqlType时，Value必须在这个范围 ["query", "insert", "update", "delete", "command"]
                     * @param _ruleFilters 审计过滤规则，Type的范围【SrcIp、DB、Collection、User、SqlType】，注意：Type=SqlType时，Value必须在这个范围 ["query", "insert", "update", "delete", "command"]
                     * 
                     */
                    void SetRuleFilters(const std::vector<LogFilter>& _ruleFilters);

                    /**
                     * 判断参数 RuleFilters 是否已赋值
                     * @return RuleFilters 是否已赋值
                     * 
                     */
                    bool RuleFiltersHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，格式如：cmgo-xfts****，与云数据库控制台页面中显示的实例 ID 相同。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 审计日志保存时长。单位为：天。当前支持的取值包括： 7： 一周。 30： 一个月。 90： 三个月。 180 ： 六个月。 365 ： 一年。 1095 ： 三年。 1825 ： 五年。
                     */
                    uint64_t m_logExpireDay;
                    bool m_logExpireDayHasBeenSet;

                    /**
                     * true-全审计，false-规则审计，注意：AuditAll=true 时，RuleFilters 无需填参
                     */
                    bool m_auditAll;
                    bool m_auditAllHasBeenSet;

                    /**
                     * 审计过滤规则，Type的范围【SrcIp、DB、Collection、User、SqlType】，注意：Type=SqlType时，Value必须在这个范围 ["query", "insert", "update", "delete", "command"]
                     */
                    std::vector<LogFilter> m_ruleFilters;
                    bool m_ruleFiltersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_OPENAUDITSERVICEREQUEST_H_
