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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEVAULTSREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEVAULTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeVaults请求参数结构体
                */
                class DescribeVaultsRequest : public AbstractModel
                {
                public:
                    DescribeVaultsRequest();
                    ~DescribeVaultsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取保险箱ID列表，用于精确筛选
                     * @return VaultIds 保险箱ID列表，用于精确筛选
                     * 
                     */
                    std::vector<std::string> GetVaultIds() const;

                    /**
                     * 设置保险箱ID列表，用于精确筛选
                     * @param _vaultIds 保险箱ID列表，用于精确筛选
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
                     * 获取保险箱名称，用于模糊筛选
                     * @return VaultName 保险箱名称，用于模糊筛选
                     * 
                     */
                    std::string GetVaultName() const;

                    /**
                     * 设置保险箱名称，用于模糊筛选
                     * @param _vaultName 保险箱名称，用于模糊筛选
                     * 
                     */
                    void SetVaultName(const std::string& _vaultName);

                    /**
                     * 判断参数 VaultName 是否已赋值
                     * @return VaultName 是否已赋值
                     * 
                     */
                    bool VaultNameHasBeenSet() const;

                    /**
                     * 获取保险箱状态列表，用于筛选
                     * @return Status 保险箱状态列表，用于筛选
                     * 
                     */
                    std::vector<std::string> GetStatus() const;

                    /**
                     * 设置保险箱状态列表，用于筛选
                     * @param _status 保险箱状态列表，用于筛选
                     * 
                     */
                    void SetStatus(const std::vector<std::string>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取每页数量，范围(0,100]，默认100
                     * @return Limit 每页数量，范围(0,100]，默认100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页数量，范围(0,100]，默认100
                     * @param _limit 每页数量，范围(0,100]，默认100
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
                     * 获取偏移量，范围[0,+∞)，默认0
                     * @return Offset 偏移量，范围[0,+∞)，默认0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，范围[0,+∞)，默认0
                     * @param _offset 偏移量，范围[0,+∞)，默认0
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
                     * 获取排序字段，可选值：VaultId, VaultName, BackupSaveSeconds, LockedTime, CreateTime, UpdateTime
                     * @return OrderBy 排序字段，可选值：VaultId, VaultName, BackupSaveSeconds, LockedTime, CreateTime, UpdateTime
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置排序字段，可选值：VaultId, VaultName, BackupSaveSeconds, LockedTime, CreateTime, UpdateTime
                     * @param _orderBy 排序字段，可选值：VaultId, VaultName, BackupSaveSeconds, LockedTime, CreateTime, UpdateTime
                     * 
                     */
                    void SetOrderBy(const std::string& _orderBy);

                    /**
                     * 判断参数 OrderBy 是否已赋值
                     * @return OrderBy 是否已赋值
                     * 
                     */
                    bool OrderByHasBeenSet() const;

                    /**
                     * 获取排序方式，可选值：desc, asc, DESC, ASC
                     * @return OrderByType 排序方式，可选值：desc, asc, DESC, ASC
                     * 
                     */
                    std::string GetOrderByType() const;

                    /**
                     * 设置排序方式，可选值：desc, asc, DESC, ASC
                     * @param _orderByType 排序方式，可选值：desc, asc, DESC, ASC
                     * 
                     */
                    void SetOrderByType(const std::string& _orderByType);

                    /**
                     * 判断参数 OrderByType 是否已赋值
                     * @return OrderByType 是否已赋值
                     * 
                     */
                    bool OrderByTypeHasBeenSet() const;

                private:

                    /**
                     * 保险箱ID列表，用于精确筛选
                     */
                    std::vector<std::string> m_vaultIds;
                    bool m_vaultIdsHasBeenSet;

                    /**
                     * 保险箱名称，用于模糊筛选
                     */
                    std::string m_vaultName;
                    bool m_vaultNameHasBeenSet;

                    /**
                     * 保险箱状态列表，用于筛选
                     */
                    std::vector<std::string> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 每页数量，范围(0,100]，默认100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，范围[0,+∞)，默认0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 排序字段，可选值：VaultId, VaultName, BackupSaveSeconds, LockedTime, CreateTime, UpdateTime
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 排序方式，可选值：desc, asc, DESC, ASC
                     */
                    std::string m_orderByType;
                    bool m_orderByTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEVAULTSREQUEST_H_
