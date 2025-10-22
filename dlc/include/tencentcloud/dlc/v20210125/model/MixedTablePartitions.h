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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_MIXEDTABLEPARTITIONS_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_MIXEDTABLEPARTITIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/IcebergTablePartition.h>
#include <tencentcloud/dlc/v20210125/model/HiveTablePartition.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DLC分区信息查询返回数据结构
                */
                class MixedTablePartitions : public AbstractModel
                {
                public:
                    MixedTablePartitions();
                    ~MixedTablePartitions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据表格式
                     * @return TableFormat 数据表格式
                     * 
                     */
                    std::string GetTableFormat() const;

                    /**
                     * 设置数据表格式
                     * @param _tableFormat 数据表格式
                     * 
                     */
                    void SetTableFormat(const std::string& _tableFormat);

                    /**
                     * 判断参数 TableFormat 是否已赋值
                     * @return TableFormat 是否已赋值
                     * 
                     */
                    bool TableFormatHasBeenSet() const;

                    /**
                     * 获取分区总数
                     * @return TotalSize 分区总数
                     * 
                     */
                    int64_t GetTotalSize() const;

                    /**
                     * 设置分区总数
                     * @param _totalSize 分区总数
                     * 
                     */
                    void SetTotalSize(const int64_t& _totalSize);

                    /**
                     * 判断参数 TotalSize 是否已赋值
                     * @return TotalSize 是否已赋值
                     * 
                     */
                    bool TotalSizeHasBeenSet() const;

                    /**
                     * 获取分页查询的游标信息，在获取下一页信息时需要回传到服务端
                     * @return NextCursor 分页查询的游标信息，在获取下一页信息时需要回传到服务端
                     * 
                     */
                    std::string GetNextCursor() const;

                    /**
                     * 设置分页查询的游标信息，在获取下一页信息时需要回传到服务端
                     * @param _nextCursor 分页查询的游标信息，在获取下一页信息时需要回传到服务端
                     * 
                     */
                    void SetNextCursor(const std::string& _nextCursor);

                    /**
                     * 判断参数 NextCursor 是否已赋值
                     * @return NextCursor 是否已赋值
                     * 
                     */
                    bool NextCursorHasBeenSet() const;

                    /**
                     * 获取iceberg表分区信息
                     * @return IcebergPartitions iceberg表分区信息
                     * 
                     */
                    std::vector<IcebergTablePartition> GetIcebergPartitions() const;

                    /**
                     * 设置iceberg表分区信息
                     * @param _icebergPartitions iceberg表分区信息
                     * 
                     */
                    void SetIcebergPartitions(const std::vector<IcebergTablePartition>& _icebergPartitions);

                    /**
                     * 判断参数 IcebergPartitions 是否已赋值
                     * @return IcebergPartitions 是否已赋值
                     * 
                     */
                    bool IcebergPartitionsHasBeenSet() const;

                    /**
                     * 获取hive表分区信息
                     * @return HivePartitions hive表分区信息
                     * 
                     */
                    std::vector<HiveTablePartition> GetHivePartitions() const;

                    /**
                     * 设置hive表分区信息
                     * @param _hivePartitions hive表分区信息
                     * 
                     */
                    void SetHivePartitions(const std::vector<HiveTablePartition>& _hivePartitions);

                    /**
                     * 判断参数 HivePartitions 是否已赋值
                     * @return HivePartitions 是否已赋值
                     * 
                     */
                    bool HivePartitionsHasBeenSet() const;

                private:

                    /**
                     * 数据表格式
                     */
                    std::string m_tableFormat;
                    bool m_tableFormatHasBeenSet;

                    /**
                     * 分区总数
                     */
                    int64_t m_totalSize;
                    bool m_totalSizeHasBeenSet;

                    /**
                     * 分页查询的游标信息，在获取下一页信息时需要回传到服务端
                     */
                    std::string m_nextCursor;
                    bool m_nextCursorHasBeenSet;

                    /**
                     * iceberg表分区信息
                     */
                    std::vector<IcebergTablePartition> m_icebergPartitions;
                    bool m_icebergPartitionsHasBeenSet;

                    /**
                     * hive表分区信息
                     */
                    std::vector<HiveTablePartition> m_hivePartitions;
                    bool m_hivePartitionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_MIXEDTABLEPARTITIONS_H_
