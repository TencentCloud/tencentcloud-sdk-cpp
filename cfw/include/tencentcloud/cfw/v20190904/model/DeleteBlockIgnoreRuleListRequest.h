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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DELETEBLOCKIGNORERULELISTREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DELETEBLOCKIGNORERULELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/IocListData.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DeleteBlockIgnoreRuleList请求参数结构体
                */
                class DeleteBlockIgnoreRuleListRequest : public AbstractModel
                {
                public:
                    DeleteBlockIgnoreRuleListRequest();
                    ~DeleteBlockIgnoreRuleListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取规则列表
                     * @return Rules 规则列表
                     * 
                     */
                    std::vector<IocListData> GetRules() const;

                    /**
                     * 设置规则列表
                     * @param _rules 规则列表
                     * 
                     */
                    void SetRules(const std::vector<IocListData>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取规则类型，1封禁，2放通，不支持域名封禁
                     * @return RuleType 规则类型，1封禁，2放通，不支持域名封禁
                     * 
                     */
                    int64_t GetRuleType() const;

                    /**
                     * 设置规则类型，1封禁，2放通，不支持域名封禁
                     * @param _ruleType 规则类型，1封禁，2放通，不支持域名封禁
                     * 
                     */
                    void SetRuleType(const int64_t& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                private:

                    /**
                     * 规则列表
                     */
                    std::vector<IocListData> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * 规则类型，1封禁，2放通，不支持域名封禁
                     */
                    int64_t m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DELETEBLOCKIGNORERULELISTREQUEST_H_
