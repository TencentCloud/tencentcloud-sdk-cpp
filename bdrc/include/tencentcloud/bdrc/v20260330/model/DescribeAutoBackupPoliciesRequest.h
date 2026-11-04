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
                     * 获取<p>过滤条件，支持以下Name：</p><ul><li>auto-backup-policy-id - 按定期备份策略ID过滤，如abp-xxx。</li><li>auto-backup-policy-state - 按定期备份策略状态过滤，如NORMAL。</li><li>auto-backup-policy-name - 按定期备份策略名称过滤，支持模糊匹配。</li><li>tag - 按标签键值对过滤，需包含Key和/或Value。</li><li>tag-key - 按标签键过滤。</li><li>tag-value - 按标签值过滤。</li><li>tag:tag-key - 按指定标签键的标签值过滤。</li><li>vault-id - 按备份库ID过滤。</li><li>storage-type - 按存储类型过滤：COMMON（普通模式）、VAULT（备份库模式）。</li></ul>
                     * @return Filters <p>过滤条件，支持以下Name：</p><ul><li>auto-backup-policy-id - 按定期备份策略ID过滤，如abp-xxx。</li><li>auto-backup-policy-state - 按定期备份策略状态过滤，如NORMAL。</li><li>auto-backup-policy-name - 按定期备份策略名称过滤，支持模糊匹配。</li><li>tag - 按标签键值对过滤，需包含Key和/或Value。</li><li>tag-key - 按标签键过滤。</li><li>tag-value - 按标签值过滤。</li><li>tag:tag-key - 按指定标签键的标签值过滤。</li><li>vault-id - 按备份库ID过滤。</li><li>storage-type - 按存储类型过滤：COMMON（普通模式）、VAULT（备份库模式）。</li></ul>
                     * 
                     */
                    std::vector<FilterModel> GetFilters() const;

                    /**
                     * 设置<p>过滤条件，支持以下Name：</p><ul><li>auto-backup-policy-id - 按定期备份策略ID过滤，如abp-xxx。</li><li>auto-backup-policy-state - 按定期备份策略状态过滤，如NORMAL。</li><li>auto-backup-policy-name - 按定期备份策略名称过滤，支持模糊匹配。</li><li>tag - 按标签键值对过滤，需包含Key和/或Value。</li><li>tag-key - 按标签键过滤。</li><li>tag-value - 按标签值过滤。</li><li>tag:tag-key - 按指定标签键的标签值过滤。</li><li>vault-id - 按备份库ID过滤。</li><li>storage-type - 按存储类型过滤：COMMON（普通模式）、VAULT（备份库模式）。</li></ul>
                     * @param _filters <p>过滤条件，支持以下Name：</p><ul><li>auto-backup-policy-id - 按定期备份策略ID过滤，如abp-xxx。</li><li>auto-backup-policy-state - 按定期备份策略状态过滤，如NORMAL。</li><li>auto-backup-policy-name - 按定期备份策略名称过滤，支持模糊匹配。</li><li>tag - 按标签键值对过滤，需包含Key和/或Value。</li><li>tag-key - 按标签键过滤。</li><li>tag-value - 按标签值过滤。</li><li>tag:tag-key - 按指定标签键的标签值过滤。</li><li>vault-id - 按备份库ID过滤。</li><li>storage-type - 按存储类型过滤：COMMON（普通模式）、VAULT（备份库模式）。</li></ul>
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
                     * 获取<p>偏移量，默认0</p>
                     * @return Offset <p>偏移量，默认0</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量，默认0</p>
                     * @param _offset <p>偏移量，默认0</p>
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
                     * 获取<p>返回数量，默认20，最大1000</p>
                     * @return Limit <p>返回数量，默认20，最大1000</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量，默认20，最大1000</p>
                     * @param _limit <p>返回数量，默认20，最大1000</p>
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
                     * 获取<p>排序方式</p><p>枚举值：</p><ul><li>ASC： 升序排序</li><li>DESC： 降序排序</li></ul><p>默认值：DESC</p>
                     * @return Order <p>排序方式</p><p>枚举值：</p><ul><li>ASC： 升序排序</li><li>DESC： 降序排序</li></ul><p>默认值：DESC</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>排序方式</p><p>枚举值：</p><ul><li>ASC： 升序排序</li><li>DESC： 降序排序</li></ul><p>默认值：DESC</p>
                     * @param _order <p>排序方式</p><p>枚举值：</p><ul><li>ASC： 升序排序</li><li>DESC： 降序排序</li></ul><p>默认值：DESC</p>
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
                     * 获取<p>排序字段</p><p>枚举值：</p><ul><li>CREATE_TIME： 创建时间</li></ul><p>默认值：CREATE_TIME</p>
                     * @return OrderField <p>排序字段</p><p>枚举值：</p><ul><li>CREATE_TIME： 创建时间</li></ul><p>默认值：CREATE_TIME</p>
                     * 
                     */
                    std::string GetOrderField() const;

                    /**
                     * 设置<p>排序字段</p><p>枚举值：</p><ul><li>CREATE_TIME： 创建时间</li></ul><p>默认值：CREATE_TIME</p>
                     * @param _orderField <p>排序字段</p><p>枚举值：</p><ul><li>CREATE_TIME： 创建时间</li></ul><p>默认值：CREATE_TIME</p>
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
                     * <p>过滤条件，支持以下Name：</p><ul><li>auto-backup-policy-id - 按定期备份策略ID过滤，如abp-xxx。</li><li>auto-backup-policy-state - 按定期备份策略状态过滤，如NORMAL。</li><li>auto-backup-policy-name - 按定期备份策略名称过滤，支持模糊匹配。</li><li>tag - 按标签键值对过滤，需包含Key和/或Value。</li><li>tag-key - 按标签键过滤。</li><li>tag-value - 按标签值过滤。</li><li>tag:tag-key - 按指定标签键的标签值过滤。</li><li>vault-id - 按备份库ID过滤。</li><li>storage-type - 按存储类型过滤：COMMON（普通模式）、VAULT（备份库模式）。</li></ul>
                     */
                    std::vector<FilterModel> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>偏移量，默认0</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>返回数量，默认20，最大1000</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>排序方式</p><p>枚举值：</p><ul><li>ASC： 升序排序</li><li>DESC： 降序排序</li></ul><p>默认值：DESC</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>排序字段</p><p>枚举值：</p><ul><li>CREATE_TIME： 创建时间</li></ul><p>默认值：CREATE_TIME</p>
                     */
                    std::string m_orderField;
                    bool m_orderFieldHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEAUTOBACKUPPOLICIESREQUEST_H_
