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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEAIGWCUSTOMGUARDRAILPOLICYLISTREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEAIGWCUSTOMGUARDRAILPOLICYLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/CustomGuardrailPolicyFilter.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * DescribeAIGWCustomGuardrailPolicyList请求参数结构体
                */
                class DescribeAIGWCustomGuardrailPolicyListRequest : public AbstractModel
                {
                public:
                    DescribeAIGWCustomGuardrailPolicyListRequest();
                    ~DescribeAIGWCustomGuardrailPolicyListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>网关实例 ID</p>
                     * @return GatewayId <p>网关实例 ID</p>
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置<p>网关实例 ID</p>
                     * @param _gatewayId <p>网关实例 ID</p>
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取<p>单页数量，范围 1～100</p>
                     * @return Limit <p>单页数量，范围 1～100</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>单页数量，范围 1～100</p>
                     * @param _limit <p>单页数量，范围 1～100</p>
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
                     * 获取<p>按策略名称或描述模糊搜索</p>
                     * @return Keyword <p>按策略名称或描述模糊搜索</p>
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置<p>按策略名称或描述模糊搜索</p>
                     * @param _keyword <p>按策略名称或描述模糊搜索</p>
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
                     * 获取<p>策略过滤条件</p>
                     * @return Filters <p>策略过滤条件</p>
                     * 
                     */
                    std::vector<CustomGuardrailPolicyFilter> GetFilters() const;

                    /**
                     * 设置<p>策略过滤条件</p>
                     * @param _filters <p>策略过滤条件</p>
                     * 
                     */
                    void SetFilters(const std::vector<CustomGuardrailPolicyFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>分页偏移量，最小 0</p>
                     * @return Offset <p>分页偏移量，最小 0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量，最小 0</p>
                     * @param _offset <p>分页偏移量，最小 0</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * <p>网关实例 ID</p>
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * <p>单页数量，范围 1～100</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>按策略名称或描述模糊搜索</p>
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * <p>策略过滤条件</p>
                     */
                    std::vector<CustomGuardrailPolicyFilter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>分页偏移量，最小 0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEAIGWCUSTOMGUARDRAILPOLICYLISTREQUEST_H_
