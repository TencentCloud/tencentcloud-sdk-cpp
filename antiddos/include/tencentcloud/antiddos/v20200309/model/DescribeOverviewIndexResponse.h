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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEOVERVIEWINDEXRESPONSE_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEOVERVIEWINDEXRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeOverviewIndex返回参数结构体
                */
                class DescribeOverviewIndexResponse : public AbstractModel
                {
                public:
                    DescribeOverviewIndexResponse();
                    ~DescribeOverviewIndexResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取IP总数
                     * @return AllIpCount IP总数
                     * 
                     */
                    uint64_t GetAllIpCount() const;

                    /**
                     * 判断参数 AllIpCount 是否已赋值
                     * @return AllIpCount 是否已赋值
                     * 
                     */
                    bool AllIpCountHasBeenSet() const;

                    /**
                     * 获取高防IP总数（包含高防包+高防IP）
                     * @return AntiddosIpCount 高防IP总数（包含高防包+高防IP）
                     * 
                     */
                    uint64_t GetAntiddosIpCount() const;

                    /**
                     * 判断参数 AntiddosIpCount 是否已赋值
                     * @return AntiddosIpCount 是否已赋值
                     * 
                     */
                    bool AntiddosIpCountHasBeenSet() const;

                    /**
                     * 获取攻击IP总数
                     * @return AttackIpCount 攻击IP总数
                     * 
                     */
                    uint64_t GetAttackIpCount() const;

                    /**
                     * 判断参数 AttackIpCount 是否已赋值
                     * @return AttackIpCount 是否已赋值
                     * 
                     */
                    bool AttackIpCountHasBeenSet() const;

                    /**
                     * 获取封堵IP总数
                     * @return BlockIpCount 封堵IP总数
                     * 
                     */
                    uint64_t GetBlockIpCount() const;

                    /**
                     * 判断参数 BlockIpCount 是否已赋值
                     * @return BlockIpCount 是否已赋值
                     * 
                     */
                    bool BlockIpCountHasBeenSet() const;

                    /**
                     * 获取高防域名总数
                     * @return AntiddosDomainCount 高防域名总数
                     * 
                     */
                    uint64_t GetAntiddosDomainCount() const;

                    /**
                     * 判断参数 AntiddosDomainCount 是否已赋值
                     * @return AntiddosDomainCount 是否已赋值
                     * 
                     */
                    bool AntiddosDomainCountHasBeenSet() const;

                    /**
                     * 获取攻击域名总数
                     * @return AttackDomainCount 攻击域名总数
                     * 
                     */
                    uint64_t GetAttackDomainCount() const;

                    /**
                     * 判断参数 AttackDomainCount 是否已赋值
                     * @return AttackDomainCount 是否已赋值
                     * 
                     */
                    bool AttackDomainCountHasBeenSet() const;

                    /**
                     * 获取攻击流量峰值
                     * @return MaxAttackFlow 攻击流量峰值
                     * 
                     */
                    uint64_t GetMaxAttackFlow() const;

                    /**
                     * 判断参数 MaxAttackFlow 是否已赋值
                     * @return MaxAttackFlow 是否已赋值
                     * 
                     */
                    bool MaxAttackFlowHasBeenSet() const;

                    /**
                     * 获取当前最近一条攻击中的起始时间
                     * @return NewAttackTime 当前最近一条攻击中的起始时间
                     * 
                     */
                    std::string GetNewAttackTime() const;

                    /**
                     * 判断参数 NewAttackTime 是否已赋值
                     * @return NewAttackTime 是否已赋值
                     * 
                     */
                    bool NewAttackTimeHasBeenSet() const;

                    /**
                     * 获取当前最近一条攻击中的IP
                     * @return NewAttackIp 当前最近一条攻击中的IP
                     * 
                     */
                    std::string GetNewAttackIp() const;

                    /**
                     * 判断参数 NewAttackIp 是否已赋值
                     * @return NewAttackIp 是否已赋值
                     * 
                     */
                    bool NewAttackIpHasBeenSet() const;

                    /**
                     * 获取当前最近一条攻击中的攻击类型
                     * @return NewAttackType 当前最近一条攻击中的攻击类型
                     * 
                     */
                    std::string GetNewAttackType() const;

                    /**
                     * 判断参数 NewAttackType 是否已赋值
                     * @return NewAttackType 是否已赋值
                     * 
                     */
                    bool NewAttackTypeHasBeenSet() const;

                private:

                    /**
                     * IP总数
                     */
                    uint64_t m_allIpCount;
                    bool m_allIpCountHasBeenSet;

                    /**
                     * 高防IP总数（包含高防包+高防IP）
                     */
                    uint64_t m_antiddosIpCount;
                    bool m_antiddosIpCountHasBeenSet;

                    /**
                     * 攻击IP总数
                     */
                    uint64_t m_attackIpCount;
                    bool m_attackIpCountHasBeenSet;

                    /**
                     * 封堵IP总数
                     */
                    uint64_t m_blockIpCount;
                    bool m_blockIpCountHasBeenSet;

                    /**
                     * 高防域名总数
                     */
                    uint64_t m_antiddosDomainCount;
                    bool m_antiddosDomainCountHasBeenSet;

                    /**
                     * 攻击域名总数
                     */
                    uint64_t m_attackDomainCount;
                    bool m_attackDomainCountHasBeenSet;

                    /**
                     * 攻击流量峰值
                     */
                    uint64_t m_maxAttackFlow;
                    bool m_maxAttackFlowHasBeenSet;

                    /**
                     * 当前最近一条攻击中的起始时间
                     */
                    std::string m_newAttackTime;
                    bool m_newAttackTimeHasBeenSet;

                    /**
                     * 当前最近一条攻击中的IP
                     */
                    std::string m_newAttackIp;
                    bool m_newAttackIpHasBeenSet;

                    /**
                     * 当前最近一条攻击中的攻击类型
                     */
                    std::string m_newAttackType;
                    bool m_newAttackTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEOVERVIEWINDEXRESPONSE_H_
