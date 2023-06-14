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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPSUMMARIESREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPSUMMARIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeBackupSummaries请求参数结构体
                */
                class DescribeBackupSummariesRequest : public AbstractModel
                {
                public:
                    DescribeBackupSummariesRequest();
                    ~DescribeBackupSummariesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要查询的云数据库产品类型，目前仅支持 "mysql"。
                     * @return Product 需要查询的云数据库产品类型，目前仅支持 "mysql"。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置需要查询的云数据库产品类型，目前仅支持 "mysql"。
                     * @param _product 需要查询的云数据库产品类型，目前仅支持 "mysql"。
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取分页查询数据的偏移量，默认为0。
                     * @return Offset 分页查询数据的偏移量，默认为0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页查询数据的偏移量，默认为0。
                     * @param _offset 分页查询数据的偏移量，默认为0。
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
                     * 获取分页查询数据的条目限制，默认值为20。最小值为1，最大值为100。
                     * @return Limit 分页查询数据的条目限制，默认值为20。最小值为1，最大值为100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页查询数据的条目限制，默认值为20。最小值为1，最大值为100。
                     * @param _limit 分页查询数据的条目限制，默认值为20。最小值为1，最大值为100。
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
                     * 获取指定按某一项排序，可选值包括： BackupVolume: 备份容量， DataBackupVolume: 数据备份容量， BinlogBackupVolume: 日志备份容量， AutoBackupVolume: 自动备份容量， ManualBackupVolume: 手动备份容量。默认按照BackupVolume排序。
                     * @return OrderBy 指定按某一项排序，可选值包括： BackupVolume: 备份容量， DataBackupVolume: 数据备份容量， BinlogBackupVolume: 日志备份容量， AutoBackupVolume: 自动备份容量， ManualBackupVolume: 手动备份容量。默认按照BackupVolume排序。
                     * 
                     */
                    std::string GetOrderBy() const;

                    /**
                     * 设置指定按某一项排序，可选值包括： BackupVolume: 备份容量， DataBackupVolume: 数据备份容量， BinlogBackupVolume: 日志备份容量， AutoBackupVolume: 自动备份容量， ManualBackupVolume: 手动备份容量。默认按照BackupVolume排序。
                     * @param _orderBy 指定按某一项排序，可选值包括： BackupVolume: 备份容量， DataBackupVolume: 数据备份容量， BinlogBackupVolume: 日志备份容量， AutoBackupVolume: 自动备份容量， ManualBackupVolume: 手动备份容量。默认按照BackupVolume排序。
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
                     * 获取指定排序方向，可选值包括： ASC: 正序， DESC: 逆序。默认值为 ASC。
                     * @return OrderDirection 指定排序方向，可选值包括： ASC: 正序， DESC: 逆序。默认值为 ASC。
                     * 
                     */
                    std::string GetOrderDirection() const;

                    /**
                     * 设置指定排序方向，可选值包括： ASC: 正序， DESC: 逆序。默认值为 ASC。
                     * @param _orderDirection 指定排序方向，可选值包括： ASC: 正序， DESC: 逆序。默认值为 ASC。
                     * 
                     */
                    void SetOrderDirection(const std::string& _orderDirection);

                    /**
                     * 判断参数 OrderDirection 是否已赋值
                     * @return OrderDirection 是否已赋值
                     * 
                     */
                    bool OrderDirectionHasBeenSet() const;

                private:

                    /**
                     * 需要查询的云数据库产品类型，目前仅支持 "mysql"。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 分页查询数据的偏移量，默认为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页查询数据的条目限制，默认值为20。最小值为1，最大值为100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 指定按某一项排序，可选值包括： BackupVolume: 备份容量， DataBackupVolume: 数据备份容量， BinlogBackupVolume: 日志备份容量， AutoBackupVolume: 自动备份容量， ManualBackupVolume: 手动备份容量。默认按照BackupVolume排序。
                     */
                    std::string m_orderBy;
                    bool m_orderByHasBeenSet;

                    /**
                     * 指定排序方向，可选值包括： ASC: 正序， DESC: 逆序。默认值为 ASC。
                     */
                    std::string m_orderDirection;
                    bool m_orderDirectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEBACKUPSUMMARIESREQUEST_H_
