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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINEPOLICYLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINEPOLICYLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filters.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeBaselinePolicyList请求参数结构体
                */
                class DescribeBaselinePolicyListRequest : public AbstractModel
                {
                public:
                    DescribeBaselinePolicyListRequest();
                    ~DescribeBaselinePolicyListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>基线策略类型。取值：</p><ul><li>SYSTEM：系统策略（CSIP 内置）</li><li>SELF：用户自定义策略</li></ul>
                     * @return PolicyType <p>基线策略类型。取值：</p><ul><li>SYSTEM：系统策略（CSIP 内置）</li><li>SELF：用户自定义策略</li></ul>
                     * 
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置<p>基线策略类型。取值：</p><ul><li>SYSTEM：系统策略（CSIP 内置）</li><li>SELF：用户自定义策略</li></ul>
                     * @param _policyType <p>基线策略类型。取值：</p><ul><li>SYSTEM：系统策略（CSIP 内置）</li><li>SELF：用户自定义策略</li></ul>
                     * 
                     */
                    void SetPolicyType(const std::string& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     * 
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>通用过滤条件，支持的过滤字段如下：</p><li>Name - 策略名称（模糊匹配）</li><li>Enable - 是否开启</li><li>CycleScanEnable - 周期扫描是否开启</li>
                     * @return Filters <p>通用过滤条件，支持的过滤字段如下：</p><li>Name - 策略名称（模糊匹配）</li><li>Enable - 是否开启</li><li>CycleScanEnable - 周期扫描是否开启</li>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置<p>通用过滤条件，支持的过滤字段如下：</p><li>Name - 策略名称（模糊匹配）</li><li>Enable - 是否开启</li><li>CycleScanEnable - 周期扫描是否开启</li>
                     * @param _filters <p>通用过滤条件，支持的过滤字段如下：</p><li>Name - 策略名称（模糊匹配）</li><li>Enable - 是否开启</li><li>CycleScanEnable - 周期扫描是否开启</li>
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
                     * 获取<p>分页查询每页数量，最大值 100；超过时服务端将自动回退为默认值 10。</p>
                     * @return Limit <p>分页查询每页数量，最大值 100；超过时服务端将自动回退为默认值 10。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>分页查询每页数量，最大值 100；超过时服务端将自动回退为默认值 10。</p>
                     * @param _limit <p>分页查询每页数量，最大值 100；超过时服务端将自动回退为默认值 10。</p>
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
                     * 获取<p>分页查询起始偏移量，从 0 开始。</p>
                     * @return Offset <p>分页查询起始偏移量，从 0 开始。</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>分页查询起始偏移量，从 0 开始。</p>
                     * @param _offset <p>分页查询起始偏移量，从 0 开始。</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * <p>基线策略类型。取值：</p><ul><li>SYSTEM：系统策略（CSIP 内置）</li><li>SELF：用户自定义策略</li></ul>
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>通用过滤条件，支持的过滤字段如下：</p><li>Name - 策略名称（模糊匹配）</li><li>Enable - 是否开启</li><li>CycleScanEnable - 周期扫描是否开启</li>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>分页查询每页数量，最大值 100；超过时服务端将自动回退为默认值 10。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页查询起始偏移量，从 0 开始。</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEBASELINEPOLICYLISTREQUEST_H_
