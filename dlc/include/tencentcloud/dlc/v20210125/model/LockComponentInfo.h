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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_LOCKCOMPONENTINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_LOCKCOMPONENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 元数据加锁内容
                */
                class LockComponentInfo : public AbstractModel
                {
                public:
                    LockComponentInfo();
                    ~LockComponentInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据库名称
                     * @return DbName 数据库名称
                     * 
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置数据库名称
                     * @param _dbName 数据库名称
                     * 
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     * 
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取表名称
                     * @return TableName 表名称
                     * 
                     */
                    std::string GetTableName() const;

                    /**
                     * 设置表名称
                     * @param _tableName 表名称
                     * 
                     */
                    void SetTableName(const std::string& _tableName);

                    /**
                     * 判断参数 TableName 是否已赋值
                     * @return TableName 是否已赋值
                     * 
                     */
                    bool TableNameHasBeenSet() const;

                    /**
                     * 获取分区
                     * @return Partition 分区
                     * 
                     */
                    std::string GetPartition() const;

                    /**
                     * 设置分区
                     * @param _partition 分区
                     * 
                     */
                    void SetPartition(const std::string& _partition);

                    /**
                     * 判断参数 Partition 是否已赋值
                     * @return Partition 是否已赋值
                     * 
                     */
                    bool PartitionHasBeenSet() const;

                    /**
                     * 获取锁类型：SHARED_READ、SHARED_WRITE、EXCLUSIVE
                     * @return LockType 锁类型：SHARED_READ、SHARED_WRITE、EXCLUSIVE
                     * 
                     */
                    std::string GetLockType() const;

                    /**
                     * 设置锁类型：SHARED_READ、SHARED_WRITE、EXCLUSIVE
                     * @param _lockType 锁类型：SHARED_READ、SHARED_WRITE、EXCLUSIVE
                     * 
                     */
                    void SetLockType(const std::string& _lockType);

                    /**
                     * 判断参数 LockType 是否已赋值
                     * @return LockType 是否已赋值
                     * 
                     */
                    bool LockTypeHasBeenSet() const;

                    /**
                     * 获取锁级别：DB、TABLE、PARTITION
                     * @return LockLevel 锁级别：DB、TABLE、PARTITION
                     * 
                     */
                    std::string GetLockLevel() const;

                    /**
                     * 设置锁级别：DB、TABLE、PARTITION
                     * @param _lockLevel 锁级别：DB、TABLE、PARTITION
                     * 
                     */
                    void SetLockLevel(const std::string& _lockLevel);

                    /**
                     * 判断参数 LockLevel 是否已赋值
                     * @return LockLevel 是否已赋值
                     * 
                     */
                    bool LockLevelHasBeenSet() const;

                    /**
                     * 获取锁操作：SELECT,INSERT,UPDATE,DELETE,UNSET,NO_TXN
                     * @return DataOperationType 锁操作：SELECT,INSERT,UPDATE,DELETE,UNSET,NO_TXN
                     * 
                     */
                    std::string GetDataOperationType() const;

                    /**
                     * 设置锁操作：SELECT,INSERT,UPDATE,DELETE,UNSET,NO_TXN
                     * @param _dataOperationType 锁操作：SELECT,INSERT,UPDATE,DELETE,UNSET,NO_TXN
                     * 
                     */
                    void SetDataOperationType(const std::string& _dataOperationType);

                    /**
                     * 判断参数 DataOperationType 是否已赋值
                     * @return DataOperationType 是否已赋值
                     * 
                     */
                    bool DataOperationTypeHasBeenSet() const;

                    /**
                     * 获取是否保持Acid
                     * @return IsAcid 是否保持Acid
                     * 
                     */
                    bool GetIsAcid() const;

                    /**
                     * 设置是否保持Acid
                     * @param _isAcid 是否保持Acid
                     * 
                     */
                    void SetIsAcid(const bool& _isAcid);

                    /**
                     * 判断参数 IsAcid 是否已赋值
                     * @return IsAcid 是否已赋值
                     * 
                     */
                    bool IsAcidHasBeenSet() const;

                    /**
                     * 获取是否动态分区写
                     * @return IsDynamicPartitionWrite 是否动态分区写
                     * 
                     */
                    bool GetIsDynamicPartitionWrite() const;

                    /**
                     * 设置是否动态分区写
                     * @param _isDynamicPartitionWrite 是否动态分区写
                     * 
                     */
                    void SetIsDynamicPartitionWrite(const bool& _isDynamicPartitionWrite);

                    /**
                     * 判断参数 IsDynamicPartitionWrite 是否已赋值
                     * @return IsDynamicPartitionWrite 是否已赋值
                     * 
                     */
                    bool IsDynamicPartitionWriteHasBeenSet() const;

                private:

                    /**
                     * 数据库名称
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * 表名称
                     */
                    std::string m_tableName;
                    bool m_tableNameHasBeenSet;

                    /**
                     * 分区
                     */
                    std::string m_partition;
                    bool m_partitionHasBeenSet;

                    /**
                     * 锁类型：SHARED_READ、SHARED_WRITE、EXCLUSIVE
                     */
                    std::string m_lockType;
                    bool m_lockTypeHasBeenSet;

                    /**
                     * 锁级别：DB、TABLE、PARTITION
                     */
                    std::string m_lockLevel;
                    bool m_lockLevelHasBeenSet;

                    /**
                     * 锁操作：SELECT,INSERT,UPDATE,DELETE,UNSET,NO_TXN
                     */
                    std::string m_dataOperationType;
                    bool m_dataOperationTypeHasBeenSet;

                    /**
                     * 是否保持Acid
                     */
                    bool m_isAcid;
                    bool m_isAcidHasBeenSet;

                    /**
                     * 是否动态分区写
                     */
                    bool m_isDynamicPartitionWrite;
                    bool m_isDynamicPartitionWriteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_LOCKCOMPONENTINFO_H_
