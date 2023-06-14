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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_BGPIPINSTANCEUSAGES_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_BGPIPINSTANCEUSAGES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * 高防IP资产实例的使用信息统计
                */
                class BGPIPInstanceUsages : public AbstractModel
                {
                public:
                    BGPIPInstanceUsages();
                    ~BGPIPInstanceUsages() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取已使用的端口规则数，单位条
                     * @return PortRulesUsage 已使用的端口规则数，单位条
                     * 
                     */
                    uint64_t GetPortRulesUsage() const;

                    /**
                     * 设置已使用的端口规则数，单位条
                     * @param _portRulesUsage 已使用的端口规则数，单位条
                     * 
                     */
                    void SetPortRulesUsage(const uint64_t& _portRulesUsage);

                    /**
                     * 判断参数 PortRulesUsage 是否已赋值
                     * @return PortRulesUsage 是否已赋值
                     * 
                     */
                    bool PortRulesUsageHasBeenSet() const;

                    /**
                     * 获取已使用的域名规则数，单位条
                     * @return DomainRulesUsage 已使用的域名规则数，单位条
                     * 
                     */
                    uint64_t GetDomainRulesUsage() const;

                    /**
                     * 设置已使用的域名规则数，单位条
                     * @param _domainRulesUsage 已使用的域名规则数，单位条
                     * 
                     */
                    void SetDomainRulesUsage(const uint64_t& _domainRulesUsage);

                    /**
                     * 判断参数 DomainRulesUsage 是否已赋值
                     * @return DomainRulesUsage 是否已赋值
                     * 
                     */
                    bool DomainRulesUsageHasBeenSet() const;

                    /**
                     * 获取最近7天的攻击次数，单位次
                     * @return Last7DayAttackCount 最近7天的攻击次数，单位次
                     * 
                     */
                    uint64_t GetLast7DayAttackCount() const;

                    /**
                     * 设置最近7天的攻击次数，单位次
                     * @param _last7DayAttackCount 最近7天的攻击次数，单位次
                     * 
                     */
                    void SetLast7DayAttackCount(const uint64_t& _last7DayAttackCount);

                    /**
                     * 判断参数 Last7DayAttackCount 是否已赋值
                     * @return Last7DayAttackCount 是否已赋值
                     * 
                     */
                    bool Last7DayAttackCountHasBeenSet() const;

                private:

                    /**
                     * 已使用的端口规则数，单位条
                     */
                    uint64_t m_portRulesUsage;
                    bool m_portRulesUsageHasBeenSet;

                    /**
                     * 已使用的域名规则数，单位条
                     */
                    uint64_t m_domainRulesUsage;
                    bool m_domainRulesUsageHasBeenSet;

                    /**
                     * 最近7天的攻击次数，单位次
                     */
                    uint64_t m_last7DayAttackCount;
                    bool m_last7DayAttackCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_BGPIPINSTANCEUSAGES_H_
