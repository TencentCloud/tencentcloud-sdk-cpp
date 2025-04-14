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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBEACCESSWHITELISTRULESRESPONSE_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBEACCESSWHITELISTRULESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bh/v20230418/model/AccessWhiteListRule.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DescribeAccessWhiteListRules返回参数结构体
                */
                class DescribeAccessWhiteListRulesResponse : public AbstractModel
                {
                public:
                    DescribeAccessWhiteListRulesResponse();
                    ~DescribeAccessWhiteListRulesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取记录总数
                     * @return TotalCount 记录总数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取访问白名单规则列表
                     * @return AccessWhiteListRuleSet 访问白名单规则列表
                     * 
                     */
                    std::vector<AccessWhiteListRule> GetAccessWhiteListRuleSet() const;

                    /**
                     * 判断参数 AccessWhiteListRuleSet 是否已赋值
                     * @return AccessWhiteListRuleSet 是否已赋值
                     * 
                     */
                    bool AccessWhiteListRuleSetHasBeenSet() const;

                    /**
                     * 获取是否放开全部来源IP，如果为true，TotalCount为0，AccessWhiteListRuleSet为空
                     * @return AllowAny 是否放开全部来源IP，如果为true，TotalCount为0，AccessWhiteListRuleSet为空
                     * 
                     */
                    bool GetAllowAny() const;

                    /**
                     * 判断参数 AllowAny 是否已赋值
                     * @return AllowAny 是否已赋值
                     * 
                     */
                    bool AllowAnyHasBeenSet() const;

                    /**
                     * 获取是否开启自动添加来源IP, 如果为true, 在开启访问白名单的情况下将自动添加来源IP
                     * @return AllowAuto 是否开启自动添加来源IP, 如果为true, 在开启访问白名单的情况下将自动添加来源IP
                     * 
                     */
                    bool GetAllowAuto() const;

                    /**
                     * 判断参数 AllowAuto 是否已赋值
                     * @return AllowAuto 是否已赋值
                     * 
                     */
                    bool AllowAutoHasBeenSet() const;

                private:

                    /**
                     * 记录总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 访问白名单规则列表
                     */
                    std::vector<AccessWhiteListRule> m_accessWhiteListRuleSet;
                    bool m_accessWhiteListRuleSetHasBeenSet;

                    /**
                     * 是否放开全部来源IP，如果为true，TotalCount为0，AccessWhiteListRuleSet为空
                     */
                    bool m_allowAny;
                    bool m_allowAnyHasBeenSet;

                    /**
                     * 是否开启自动添加来源IP, 如果为true, 在开启访问白名单的情况下将自动添加来源IP
                     */
                    bool m_allowAuto;
                    bool m_allowAutoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBEACCESSWHITELISTRULESRESPONSE_H_
