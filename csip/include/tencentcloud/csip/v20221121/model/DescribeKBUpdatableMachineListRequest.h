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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEKBUPDATABLEMACHINELISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEKBUPDATABLEMACHINELISTREQUEST_H_

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
                * DescribeKBUpdatableMachineList请求参数结构体
                */
                class DescribeKBUpdatableMachineListRequest : public AbstractModel
                {
                public:
                    DescribeKBUpdatableMachineListRequest();
                    ~DescribeKBUpdatableMachineListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>KB补丁ID列表，最多支持100个</p>
                     * @return KBIds <p>KB补丁ID列表，最多支持100个</p>
                     * 
                     */
                    std::vector<int64_t> GetKBIds() const;

                    /**
                     * 设置<p>KB补丁ID列表，最多支持100个</p>
                     * @param _kBIds <p>KB补丁ID列表，最多支持100个</p>
                     * 
                     */
                    void SetKBIds(const std::vector<int64_t>& _kBIds);

                    /**
                     * 判断参数 KBIds 是否已赋值
                     * @return KBIds 是否已赋值
                     * 
                     */
                    bool KBIdsHasBeenSet() const;

                    /**
                     * 获取<p>分页偏移量<br>取值范围：[0, +∞)<br>默认值：0</p>
                     * @return Offset <p>分页偏移量<br>取值范围：[0, +∞)<br>默认值：0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量<br>取值范围：[0, +∞)<br>默认值：0</p>
                     * @param _offset <p>分页偏移量<br>取值范围：[0, +∞)<br>默认值：0</p>
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
                     * 获取<p>每页返回数量<br>取值范围：[1, 100]<br>默认值：10</p>
                     * @return Limit <p>每页返回数量<br>取值范围：[1, 100]<br>默认值：10</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>每页返回数量<br>取值范围：[1, 100]<br>默认值：10</p>
                     * @param _limit <p>每页返回数量<br>取值范围：[1, 100]<br>默认值：10</p>
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
                     * 获取<p>过滤条件<br>支持的Filter.Name：<br>InstanceId - 精确匹配，按主机实例ID筛选<br>MachineName - 模糊匹配，按主机名称搜索<br>MachineIp - 模糊匹配，按主机IP搜索<br>SupportAutoFix - 精确匹配，按是否支持自动修复筛选：0-不支持 1-支持</p>
                     * @return Filters <p>过滤条件<br>支持的Filter.Name：<br>InstanceId - 精确匹配，按主机实例ID筛选<br>MachineName - 模糊匹配，按主机名称搜索<br>MachineIp - 模糊匹配，按主机IP搜索<br>SupportAutoFix - 精确匹配，按是否支持自动修复筛选：0-不支持 1-支持</p>
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置<p>过滤条件<br>支持的Filter.Name：<br>InstanceId - 精确匹配，按主机实例ID筛选<br>MachineName - 模糊匹配，按主机名称搜索<br>MachineIp - 模糊匹配，按主机IP搜索<br>SupportAutoFix - 精确匹配，按是否支持自动修复筛选：0-不支持 1-支持</p>
                     * @param _filters <p>过滤条件<br>支持的Filter.Name：<br>InstanceId - 精确匹配，按主机实例ID筛选<br>MachineName - 模糊匹配，按主机名称搜索<br>MachineIp - 模糊匹配，按主机IP搜索<br>SupportAutoFix - 精确匹配，按是否支持自动修复筛选：0-不支持 1-支持</p>
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
                     * 获取集团账号的成员id
                     * @return MemberId 集团账号的成员id
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置集团账号的成员id
                     * @param _memberId 集团账号的成员id
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                private:

                    /**
                     * <p>KB补丁ID列表，最多支持100个</p>
                     */
                    std::vector<int64_t> m_kBIds;
                    bool m_kBIdsHasBeenSet;

                    /**
                     * <p>分页偏移量<br>取值范围：[0, +∞)<br>默认值：0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>每页返回数量<br>取值范围：[1, 100]<br>默认值：10</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>过滤条件<br>支持的Filter.Name：<br>InstanceId - 精确匹配，按主机实例ID筛选<br>MachineName - 模糊匹配，按主机名称搜索<br>MachineIp - 模糊匹配，按主机IP搜索<br>SupportAutoFix - 精确匹配，按是否支持自动修复筛选：0-不支持 1-支持</p>
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 集团账号的成员id
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEKBUPDATABLEMACHINELISTREQUEST_H_
