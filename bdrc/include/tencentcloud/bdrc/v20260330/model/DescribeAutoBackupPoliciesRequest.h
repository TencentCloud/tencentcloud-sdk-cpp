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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEAUTOBACKUPPOLICIESREQUEST_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEAUTOBACKUPPOLICIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bdrc/v20260330/model/FilterModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * DescribeAutoBackupPolicies请求参数结构体
                */
                class DescribeAutoBackupPoliciesRequest : public AbstractModel
                {
                public:
                    DescribeAutoBackupPoliciesRequest();
                    ~DescribeAutoBackupPoliciesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件。支持以下过滤条件：\n"              "auto-backup-policy-id - 定期快照策略ID，如asp-xxx。\n"              "auto-backup-policy-state - 定期快照策略状态。\n"              "auto-backup-policy-name - 定期快照策略名称，支持模糊匹配。\n"              "tag - 按标签键值对过滤，需包含Key和/或Value。\n"              "tag-key - 按标签键过滤。\n"              "tag-value - 按标签值过滤。\n"              "tag:tag-key - 按指定标签键的标签值过滤。\n"              "vault-id - 备份库ID过滤。\n"              "storage-type - 存储类型过滤"              "（COMMON：普通模式，VAULT：备份库模式）。
                     * @return Filters 过滤条件。支持以下过滤条件：\n"              "auto-backup-policy-id - 定期快照策略ID，如asp-xxx。\n"              "auto-backup-policy-state - 定期快照策略状态。\n"              "auto-backup-policy-name - 定期快照策略名称，支持模糊匹配。\n"              "tag - 按标签键值对过滤，需包含Key和/或Value。\n"              "tag-key - 按标签键过滤。\n"              "tag-value - 按标签值过滤。\n"              "tag:tag-key - 按指定标签键的标签值过滤。\n"              "vault-id - 备份库ID过滤。\n"              "storage-type - 存储类型过滤"              "（COMMON：普通模式，VAULT：备份库模式）。
                     * 
                     */
                    std::vector<FilterModel> GetFilters() const;

                    /**
                     * 设置过滤条件。支持以下过滤条件：\n"              "auto-backup-policy-id - 定期快照策略ID，如asp-xxx。\n"              "auto-backup-policy-state - 定期快照策略状态。\n"              "auto-backup-policy-name - 定期快照策略名称，支持模糊匹配。\n"              "tag - 按标签键值对过滤，需包含Key和/或Value。\n"              "tag-key - 按标签键过滤。\n"              "tag-value - 按标签值过滤。\n"              "tag:tag-key - 按指定标签键的标签值过滤。\n"              "vault-id - 备份库ID过滤。\n"              "storage-type - 存储类型过滤"              "（COMMON：普通模式，VAULT：备份库模式）。
                     * @param _filters 过滤条件。支持以下过滤条件：\n"              "auto-backup-policy-id - 定期快照策略ID，如asp-xxx。\n"              "auto-backup-policy-state - 定期快照策略状态。\n"              "auto-backup-policy-name - 定期快照策略名称，支持模糊匹配。\n"              "tag - 按标签键值对过滤，需包含Key和/或Value。\n"              "tag-key - 按标签键过滤。\n"              "tag-value - 按标签值过滤。\n"              "tag:tag-key - 按指定标签键的标签值过滤。\n"              "vault-id - 备份库ID过滤。\n"              "storage-type - 存储类型过滤"              "（COMMON：普通模式，VAULT：备份库模式）。
                     * 
                     */
                    void SetFilters(const std::vector<FilterModel>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取偏移量，默认0
                     * @return Offset 偏移量，默认0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认0
                     * @param _offset 偏移量，默认0
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
                     * 获取返回数量，默认20，最大1000
                     * @return Limit 返回数量，默认20，最大1000
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认20，最大1000
                     * @param _limit 返回数量，默认20，最大1000
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
                     * 获取排序方式
                     * @return Order 排序方式
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置排序方式
                     * @param _order 排序方式
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取排序字段
                     * @return OrderField 排序字段
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置排序字段
                     * @param _orderField 排序字段
                     * 
                     */
                    void SetOrderField(const std::string& _orderField);

                    /**
                     * 判断参数 OrderField 是否已赋值
                     * @return OrderField 是否已赋值
                     * 
                     */
                    bool OrderFieldHasBeenSet() const;

                private:

                    /**
                     * 过滤条件。支持以下过滤条件：\n"              "auto-backup-policy-id - 定期快照策略ID，如asp-xxx。\n"              "auto-backup-policy-state - 定期快照策略状态。\n"              "auto-backup-policy-name - 定期快照策略名称，支持模糊匹配。\n"              "tag - 按标签键值对过滤，需包含Key和/或Value。\n"              "tag-key - 按标签键过滤。\n"              "tag-value - 按标签值过滤。\n"              "tag:tag-key - 按指定标签键的标签值过滤。\n"              "vault-id - 备份库ID过滤。\n"              "storage-type - 存储类型过滤"              "（COMMON：普通模式，VAULT：备份库模式）。
                     */
                    std::vector<FilterModel> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 偏移量，默认0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认20，最大1000
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 排序方式
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 排序字段
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEAUTOBACKUPPOLICIESREQUEST_H_
