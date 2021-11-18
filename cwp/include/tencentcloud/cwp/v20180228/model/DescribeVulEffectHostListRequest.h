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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULEFFECTHOSTLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULEFFECTHOSTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filter.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeVulEffectHostList请求参数结构体
                */
                class DescribeVulEffectHostListRequest : public AbstractModel
                {
                public:
                    DescribeVulEffectHostListRequest();
                    ~DescribeVulEffectHostListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页limit 最大100
                     * @return Limit 分页limit 最大100
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页limit 最大100
                     * @param Limit 分页limit 最大100
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页Offset
                     * @return Offset 分页Offset
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页Offset
                     * @param Offset 分页Offset
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取漏洞id
                     * @return VulId 漏洞id
                     */
                    uint64_t GetVulId() const;

                    /**
                     * 设置漏洞id
                     * @param VulId 漏洞id
                     */
                    void SetVulId(const uint64_t& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取过滤条件。
<li>AliasName - String - 主机名筛选</li>
<li>TagIds - String - 主机标签id串，多个用英文逗号分隔</li>
<li>Status - String - 状态,0: 待处理 1:忽略  3:已修复  5:检测中  6:修复中  8=:修复失败.</li>
<li>Uuid - String数组 - Uuid串数组</li>
                     * @return Filters 过滤条件。
<li>AliasName - String - 主机名筛选</li>
<li>TagIds - String - 主机标签id串，多个用英文逗号分隔</li>
<li>Status - String - 状态,0: 待处理 1:忽略  3:已修复  5:检测中  6:修复中  8=:修复失败.</li>
<li>Uuid - String数组 - Uuid串数组</li>
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置过滤条件。
<li>AliasName - String - 主机名筛选</li>
<li>TagIds - String - 主机标签id串，多个用英文逗号分隔</li>
<li>Status - String - 状态,0: 待处理 1:忽略  3:已修复  5:检测中  6:修复中  8=:修复失败.</li>
<li>Uuid - String数组 - Uuid串数组</li>
                     * @param Filters 过滤条件。
<li>AliasName - String - 主机名筛选</li>
<li>TagIds - String - 主机标签id串，多个用英文逗号分隔</li>
<li>Status - String - 状态,0: 待处理 1:忽略  3:已修复  5:检测中  6:修复中  8=:修复失败.</li>
<li>Uuid - String数组 - Uuid串数组</li>
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 分页limit 最大100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页Offset
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 漏洞id
                     */
                    uint64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * 过滤条件。
<li>AliasName - String - 主机名筛选</li>
<li>TagIds - String - 主机标签id串，多个用英文逗号分隔</li>
<li>Status - String - 状态,0: 待处理 1:忽略  3:已修复  5:检测中  6:修复中  8=:修复失败.</li>
<li>Uuid - String数组 - Uuid串数组</li>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEVULEFFECTHOSTLISTREQUEST_H_
