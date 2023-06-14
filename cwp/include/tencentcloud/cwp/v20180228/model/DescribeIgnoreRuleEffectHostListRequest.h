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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEIGNORERULEEFFECTHOSTLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEIGNORERULEEFFECTHOSTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filters.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeIgnoreRuleEffectHostList请求参数结构体
                */
                class DescribeIgnoreRuleEffectHostListRequest : public AbstractModel
                {
                public:
                    DescribeIgnoreRuleEffectHostListRequest();
                    ~DescribeIgnoreRuleEffectHostListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页参数 最大100条
                     * @return Limit 分页参数 最大100条
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页参数 最大100条
                     * @param _limit 分页参数 最大100条
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
                     * 获取分页参数
                     * @return Offset 分页参数
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页参数
                     * @param _offset 分页参数
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
                     * 获取检测项id
                     * @return RuleId 检测项id
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置检测项id
                     * @param _ruleId 检测项id
                     * 
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取过滤条件。
<li>AliasName- String- 主机别名</li>
                     * @return Filters 过滤条件。
<li>AliasName- String- 主机别名</li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置过滤条件。
<li>AliasName- String- 主机别名</li>
                     * @param _filters 过滤条件。
<li>AliasName- String- 主机别名</li>
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取主机标签名
                     * @return TagNames 主机标签名
                     * 
                     */
                    std::vector<std::string> GetTagNames() const;

                    /**
                     * 设置主机标签名
                     * @param _tagNames 主机标签名
                     * 
                     */
                    void SetTagNames(const std::vector<std::string>& _tagNames);

                    /**
                     * 判断参数 TagNames 是否已赋值
                     * @return TagNames 是否已赋值
                     * 
                     */
                    bool TagNamesHasBeenSet() const;

                private:

                    /**
                     * 分页参数 最大100条
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页参数
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 检测项id
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * 过滤条件。
<li>AliasName- String- 主机别名</li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 主机标签名
                     */
                    std::vector<std::string> m_tagNames;
                    bool m_tagNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEIGNORERULEEFFECTHOSTLISTREQUEST_H_
