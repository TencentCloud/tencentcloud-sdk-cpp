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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBENEWL4RULESRESPONSE_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBENEWL4RULESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/NewL4RuleEntry.h>
#include <tencentcloud/dayu/v20180709/model/L4RuleHealth.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeNewL4Rules返回参数结构体
                */
                class DescribeNewL4RulesResponse : public AbstractModel
                {
                public:
                    DescribeNewL4RulesResponse();
                    ~DescribeNewL4RulesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取转发规则列表
                     * @return Rules 转发规则列表
                     * 
                     */
                    std::vector<NewL4RuleEntry> GetRules() const;

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取总规则数
                     * @return Total 总规则数
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取四层健康检查配置列表
                     * @return Healths 四层健康检查配置列表
                     * 
                     */
                    std::vector<L4RuleHealth> GetHealths() const;

                    /**
                     * 判断参数 Healths 是否已赋值
                     * @return Healths 是否已赋值
                     * 
                     */
                    bool HealthsHasBeenSet() const;

                private:

                    /**
                     * 转发规则列表
                     */
                    std::vector<NewL4RuleEntry> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * 总规则数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 四层健康检查配置列表
                     */
                    std::vector<L4RuleHealth> m_healths;
                    bool m_healthsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBENEWL4RULESRESPONSE_H_
