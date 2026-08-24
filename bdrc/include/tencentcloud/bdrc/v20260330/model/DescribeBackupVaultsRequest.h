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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEBACKUPVAULTSREQUEST_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEBACKUPVAULTSREQUEST_H_

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
                * DescribeBackupVaults请求参数结构体
                */
                class DescribeBackupVaultsRequest : public AbstractModel
                {
                public:
                    DescribeBackupVaultsRequest();
                    ~DescribeBackupVaultsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取备份库ID列表
                     * @return VaultIds 备份库ID列表
                     * 
                     */
                    std::vector<std::string> GetVaultIds() const;

                    /**
                     * 设置备份库ID列表
                     * @param _vaultIds 备份库ID列表
                     * 
                     */
                    void SetVaultIds(const std::vector<std::string>& _vaultIds);

                    /**
                     * 判断参数 VaultIds 是否已赋值
                     * @return VaultIds 是否已赋值
                     * 
                     */
                    bool VaultIdsHasBeenSet() const;

                    /**
                     * 获取过滤条件，支持instance-id和auto-backup-policy-id
                     * @return Filters 过滤条件，支持instance-id和auto-backup-policy-id
                     * 
                     */
                    std::vector<FilterModel> GetFilters() const;

                    /**
                     * 设置过滤条件，支持instance-id和auto-backup-policy-id
                     * @param _filters 过滤条件，支持instance-id和auto-backup-policy-id
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
                     * 备份库ID列表
                     */
                    std::vector<std::string> m_vaultIds;
                    bool m_vaultIdsHasBeenSet;

                    /**
                     * 过滤条件，支持instance-id和auto-backup-policy-id
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

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEBACKUPVAULTSREQUEST_H_
