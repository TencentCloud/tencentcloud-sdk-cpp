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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTSYSTEMRULESREQUEST_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTSYSTEMRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * ListSystemRules请求参数结构体
                */
                class ListSystemRulesRequest : public AbstractModel
                {
                public:
                    ListSystemRulesRequest();
                    ~ListSystemRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取每页数量
                     * @return Limit 每页数量
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页数量
                     * @param _limit 每页数量
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取当前页
                     * @return Offset 当前页
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置当前页
                     * @param _offset 当前页
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取搜索关键字。支持标识/名称/标签/描述搜索
                     * @return Keyword 搜索关键字。支持标识/名称/标签/描述搜索
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置搜索关键字。支持标识/名称/标签/描述搜索
                     * @param _keyword 搜索关键字。支持标识/名称/标签/描述搜索
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取风险等级
                     * @return RiskLevel 风险等级
                     * 
                     */
                    uint64_t GetRiskLevel() const;

                    /**
                     * 设置风险等级
                     * @param _riskLevel 风险等级
                     * 
                     */
                    void SetRiskLevel(const uint64_t& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                private:

                    /**
                     * 每页数量
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 当前页
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 搜索关键字。支持标识/名称/标签/描述搜索
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 风险等级
                     */
                    uint64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_LISTSYSTEMRULESREQUEST_H_
