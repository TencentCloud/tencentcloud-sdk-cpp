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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEAUDITINSTANCELISTREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEAUDITINSTANCELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/AuditInstanceFilters.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
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
                     * 获取实例审计开启的状态。1-已开启审计；0-未开启审计。
                     * @return AuditSwitch 实例审计开启的状态。1-已开启审计；0-未开启审计。
                     * 
                     */
                    int64_t GetAuditSwitch() const;

                    /**
                     * 设置实例审计开启的状态。1-已开启审计；0-未开启审计。
                     * @param _auditSwitch 实例审计开启的状态。1-已开启审计；0-未开启审计。
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
                     * 获取查询实例列表的过滤条件。
                     * @return Filters 查询实例列表的过滤条件。
                     * 
                     */
                    std::vector<AuditInstanceFilters> GetFilters() const;

                    /**
                     * 设置查询实例列表的过滤条件。
                     * @param _filters 查询实例列表的过滤条件。
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
                     * 获取实例的审计规则模式。1-规则审计；0-全审计。
                     * @return AuditMode 实例的审计规则模式。1-规则审计；0-全审计。
                     * 
                     */
                    int64_t GetAuditMode() const;

                    /**
                     * 设置实例的审计规则模式。1-规则审计；0-全审计。
                     * @param _auditMode 实例的审计规则模式。1-规则审计；0-全审计。
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
                     * 获取单次请求返回的数量。默认值为30，最大值为 100。
                     * @return Limit 单次请求返回的数量。默认值为30，最大值为 100。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置单次请求返回的数量。默认值为30，最大值为 100。
                     * @param _limit 单次请求返回的数量。默认值为30，最大值为 100。
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
                     * 获取偏移量，默认值为 0。
                     * @return Offset 偏移量，默认值为 0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认值为 0。
                     * @param _offset 偏移量，默认值为 0。
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
                     * 实例审计开启的状态。1-已开启审计；0-未开启审计。
                     */
                    int64_t m_auditSwitch;
                    bool m_auditSwitchHasBeenSet;

                    /**
                     * 查询实例列表的过滤条件。
                     */
                    std::vector<AuditInstanceFilters> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 实例的审计规则模式。1-规则审计；0-全审计。
                     */
                    int64_t m_auditMode;
                    bool m_auditModeHasBeenSet;

                    /**
                     * 单次请求返回的数量。默认值为30，最大值为 100。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认值为 0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEAUDITINSTANCELISTREQUEST_H_
