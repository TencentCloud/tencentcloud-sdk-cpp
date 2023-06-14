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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBELANERULESREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBELANERULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DescribeLaneRules请求参数结构体
                */
                class DescribeLaneRulesRequest : public AbstractModel
                {
                public:
                    DescribeLaneRulesRequest();
                    ~DescribeLaneRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取每页展示的条数
                     * @return Limit 每页展示的条数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页展示的条数
                     * @param _limit 每页展示的条数
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取翻页偏移量
                     * @return Offset 翻页偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置翻页偏移量
                     * @param _offset 翻页偏移量
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取搜索关键词
                     * @return SearchWord 搜索关键词
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置搜索关键词
                     * @param _searchWord 搜索关键词
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                    /**
                     * 获取泳道规则ID（用于精确搜索）
                     * @return RuleId 泳道规则ID（用于精确搜索）
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置泳道规则ID（用于精确搜索）
                     * @param _ruleId 泳道规则ID（用于精确搜索）
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取无
                     * @return RuleIdList 无
                     * 
                     */
                    std::vector<std::string> GetRuleIdList() const;

                    /**
                     * 设置无
                     * @param _ruleIdList 无
                     * 
                     */
                    void SetRuleIdList(const std::vector<std::string>& _ruleIdList);

                    /**
                     * 判断参数 RuleIdList 是否已赋值
                     * @return RuleIdList 是否已赋值
                     * 
                     */
                    bool RuleIdListHasBeenSet() const;

                private:

                    /**
                     * 每页展示的条数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 翻页偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 搜索关键词
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * 泳道规则ID（用于精确搜索）
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 无
                     */
                    std::vector<std::string> m_ruleIdList;
                    bool m_ruleIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBELANERULESREQUEST_H_
