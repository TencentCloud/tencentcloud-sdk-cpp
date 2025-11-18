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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEAUDITINSTANCELISTREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEAUDITINSTANCELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/Filters.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeAuditInstanceList请求参数结构体
                */
                class DescribeAuditInstanceListRequest : public AbstractModel
                {
                public:
                    DescribeAuditInstanceListRequest();
                    ~DescribeAuditInstanceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取指明待查询的实例为已开通审计或未开通审计。<ul><li>1：已开通审计功能。</li><li>0：未开通审计功能。</li></ul>
                     * @return AuditSwitch 指明待查询的实例为已开通审计或未开通审计。<ul><li>1：已开通审计功能。</li><li>0：未开通审计功能。</li></ul>
                     * 
                     */
                    uint64_t GetAuditSwitch() const;

                    /**
                     * 设置指明待查询的实例为已开通审计或未开通审计。<ul><li>1：已开通审计功能。</li><li>0：未开通审计功能。</li></ul>
                     * @param _auditSwitch 指明待查询的实例为已开通审计或未开通审计。<ul><li>1：已开通审计功能。</li><li>0：未开通审计功能。</li></ul>
                     * 
                     */
                    void SetAuditSwitch(const uint64_t& _auditSwitch);

                    /**
                     * 判断参数 AuditSwitch 是否已赋值
                     * @return AuditSwitch 是否已赋值
                     * 
                     */
                    bool AuditSwitchHasBeenSet() const;

                    /**
                     * 获取筛选条件。
                     * @return Filters 筛选条件。
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置筛选条件。
                     * @param _filters 筛选条件。
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
                     * 获取审计类型，不传 默认全部，0 全审计，1 规则审计
                     * @return AuditMode 审计类型，不传 默认全部，0 全审计，1 规则审计
                     * 
                     */
                    uint64_t GetAuditMode() const;

                    /**
                     * 设置审计类型，不传 默认全部，0 全审计，1 规则审计
                     * @param _auditMode 审计类型，不传 默认全部，0 全审计，1 规则审计
                     * 
                     */
                    void SetAuditMode(const uint64_t& _auditMode);

                    /**
                     * 判断参数 AuditMode 是否已赋值
                     * @return AuditMode 是否已赋值
                     * 
                     */
                    bool AuditModeHasBeenSet() const;

                    /**
                     * 获取每页显示数量。
                     * @return Limit 每页显示数量。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页显示数量。
                     * @param _limit 每页显示数量。
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
                     * 获取分页偏移量。
                     * @return Offset 分页偏移量。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页偏移量。
                     * @param _offset 分页偏移量。
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
                     * 指明待查询的实例为已开通审计或未开通审计。<ul><li>1：已开通审计功能。</li><li>0：未开通审计功能。</li></ul>
                     */
                    uint64_t m_auditSwitch;
                    bool m_auditSwitchHasBeenSet;

                    /**
                     * 筛选条件。
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 审计类型，不传 默认全部，0 全审计，1 规则审计
                     */
                    uint64_t m_auditMode;
                    bool m_auditModeHasBeenSet;

                    /**
                     * 每页显示数量。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页偏移量。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEAUDITINSTANCELISTREQUEST_H_
