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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEAUDITINSTANCELISTREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEAUDITINSTANCELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/AuditInstanceFilters.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
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
                     * 获取<p>实例审计开启的状态。1-已开启审计；0-未开启审计。</p>
                     * @return AuditSwitch <p>实例审计开启的状态。1-已开启审计；0-未开启审计。</p>
                     * 
                     */
                    int64_t GetAuditSwitch() const;

                    /**
                     * 设置<p>实例审计开启的状态。1-已开启审计；0-未开启审计。</p>
                     * @param _auditSwitch <p>实例审计开启的状态。1-已开启审计；0-未开启审计。</p>
                     * 
                     */
                    void SetAuditSwitch(const int64_t& _auditSwitch);

                    /**
                     * 判断参数 AuditSwitch 是否已赋值
                     * @return AuditSwitch 是否已赋值
                     * 
                     */
                    bool AuditSwitchHasBeenSet() const;

                    /**
                     * 获取<p>查询实例列表的过滤条件。</p>
                     * @return Filters <p>查询实例列表的过滤条件。</p>
                     * 
                     */
                    std::vector<AuditInstanceFilters> GetFilters() const;

                    /**
                     * 设置<p>查询实例列表的过滤条件。</p>
                     * @param _filters <p>查询实例列表的过滤条件。</p>
                     * 
                     */
                    void SetFilters(const std::vector<AuditInstanceFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>实例的审计规则模式。1-规则审计；0-全审计。</p>
                     * @return AuditMode <p>实例的审计规则模式。1-规则审计；0-全审计。</p>
                     * 
                     */
                    int64_t GetAuditMode() const;

                    /**
                     * 设置<p>实例的审计规则模式。1-规则审计；0-全审计。</p>
                     * @param _auditMode <p>实例的审计规则模式。1-规则审计；0-全审计。</p>
                     * 
                     */
                    void SetAuditMode(const int64_t& _auditMode);

                    /**
                     * 判断参数 AuditMode 是否已赋值
                     * @return AuditMode 是否已赋值
                     * 
                     */
                    bool AuditModeHasBeenSet() const;

                    /**
                     * 获取<p>单次请求返回的数量。默认值为30，最大值为 20000。</p>
                     * @return Limit <p>单次请求返回的数量。默认值为30，最大值为 20000。</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>单次请求返回的数量。默认值为30，最大值为 20000。</p>
                     * @param _limit <p>单次请求返回的数量。默认值为30，最大值为 20000。</p>
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
                     * 获取<p>偏移量，默认值为 0。</p>
                     * @return Offset <p>偏移量，默认值为 0。</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，默认值为 0。</p>
                     * @param _offset <p>偏移量，默认值为 0。</p>
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
                     * <p>实例审计开启的状态。1-已开启审计；0-未开启审计。</p>
                     */
                    int64_t m_auditSwitch;
                    bool m_auditSwitchHasBeenSet;

                    /**
                     * <p>查询实例列表的过滤条件。</p>
                     */
                    std::vector<AuditInstanceFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>实例的审计规则模式。1-规则审计；0-全审计。</p>
                     */
                    int64_t m_auditMode;
                    bool m_auditModeHasBeenSet;

                    /**
                     * <p>单次请求返回的数量。默认值为30，最大值为 20000。</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>偏移量，默认值为 0。</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEAUDITINSTANCELISTREQUEST_H_
