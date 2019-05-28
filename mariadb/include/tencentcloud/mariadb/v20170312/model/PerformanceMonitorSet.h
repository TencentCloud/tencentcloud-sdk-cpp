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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_PERFORMANCEMONITORSET_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_PERFORMANCEMONITORSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mariadb/v20170312/model/MonitorData.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DB性能监控指标集合
                */
                class PerformanceMonitorSet : public AbstractModel
                {
                public:
                    PerformanceMonitorSet();
                    ~PerformanceMonitorSet() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取更新操作数UPDATE
                     * @return UpdateTotal 更新操作数UPDATE
                     */
                    MonitorData GetUpdateTotal() const;

                    /**
                     * 设置更新操作数UPDATE
                     * @param UpdateTotal 更新操作数UPDATE
                     */
                    void SetUpdateTotal(const MonitorData& _updateTotal);

                    /**
                     * 判断参数 UpdateTotal 是否已赋值
                     * @return UpdateTotal 是否已赋值
                     */
                    bool UpdateTotalHasBeenSet() const;

                    /**
                     * 获取磁盘每秒IO次数
                     * @return DiskIops 磁盘每秒IO次数
                     */
                    MonitorData GetDiskIops() const;

                    /**
                     * 设置磁盘每秒IO次数
                     * @param DiskIops 磁盘每秒IO次数
                     */
                    void SetDiskIops(const MonitorData& _diskIops);

                    /**
                     * 判断参数 DiskIops 是否已赋值
                     * @return DiskIops 是否已赋值
                     */
                    bool DiskIopsHasBeenSet() const;

                    /**
                     * 获取活跃连接数
                     * @return ConnActive 活跃连接数
                     */
                    MonitorData GetConnActive() const;

                    /**
                     * 设置活跃连接数
                     * @param ConnActive 活跃连接数
                     */
                    void SetConnActive(const MonitorData& _connActive);

                    /**
                     * 判断参数 ConnActive 是否已赋值
                     * @return ConnActive 是否已赋值
                     */
                    bool ConnActiveHasBeenSet() const;

                    /**
                     * 获取缓存命中率
                     * @return MemHitRate 缓存命中率
                     */
                    MonitorData GetMemHitRate() const;

                    /**
                     * 设置缓存命中率
                     * @param MemHitRate 缓存命中率
                     */
                    void SetMemHitRate(const MonitorData& _memHitRate);

                    /**
                     * 判断参数 MemHitRate 是否已赋值
                     * @return MemHitRate 是否已赋值
                     */
                    bool MemHitRateHasBeenSet() const;

                    /**
                     * 获取主备延迟
                     * @return SlaveDelay 主备延迟
                     */
                    MonitorData GetSlaveDelay() const;

                    /**
                     * 设置主备延迟
                     * @param SlaveDelay 主备延迟
                     */
                    void SetSlaveDelay(const MonitorData& _slaveDelay);

                    /**
                     * 判断参数 SlaveDelay 是否已赋值
                     * @return SlaveDelay 是否已赋值
                     */
                    bool SlaveDelayHasBeenSet() const;

                    /**
                     * 获取查询操作数SELECT
                     * @return SelectTotal 查询操作数SELECT
                     */
                    MonitorData GetSelectTotal() const;

                    /**
                     * 设置查询操作数SELECT
                     * @param SelectTotal 查询操作数SELECT
                     */
                    void SetSelectTotal(const MonitorData& _selectTotal);

                    /**
                     * 判断参数 SelectTotal 是否已赋值
                     * @return SelectTotal 是否已赋值
                     */
                    bool SelectTotalHasBeenSet() const;

                    /**
                     * 获取慢查询数
                     * @return LongQuery 慢查询数
                     */
                    MonitorData GetLongQuery() const;

                    /**
                     * 设置慢查询数
                     * @param LongQuery 慢查询数
                     */
                    void SetLongQuery(const MonitorData& _longQuery);

                    /**
                     * 判断参数 LongQuery 是否已赋值
                     * @return LongQuery 是否已赋值
                     */
                    bool LongQueryHasBeenSet() const;

                    /**
                     * 获取删除操作数DELETE
                     * @return DeleteTotal 删除操作数DELETE
                     */
                    MonitorData GetDeleteTotal() const;

                    /**
                     * 设置删除操作数DELETE
                     * @param DeleteTotal 删除操作数DELETE
                     */
                    void SetDeleteTotal(const MonitorData& _deleteTotal);

                    /**
                     * 判断参数 DeleteTotal 是否已赋值
                     * @return DeleteTotal 是否已赋值
                     */
                    bool DeleteTotalHasBeenSet() const;

                    /**
                     * 获取插入操作数INSERT
                     * @return InsertTotal 插入操作数INSERT
                     */
                    MonitorData GetInsertTotal() const;

                    /**
                     * 设置插入操作数INSERT
                     * @param InsertTotal 插入操作数INSERT
                     */
                    void SetInsertTotal(const MonitorData& _insertTotal);

                    /**
                     * 判断参数 InsertTotal 是否已赋值
                     * @return InsertTotal 是否已赋值
                     */
                    bool InsertTotalHasBeenSet() const;

                    /**
                     * 获取是否发生主备切换，1为发生，0否
                     * @return IsMasterSwitched 是否发生主备切换，1为发生，0否
                     */
                    MonitorData GetIsMasterSwitched() const;

                    /**
                     * 设置是否发生主备切换，1为发生，0否
                     * @param IsMasterSwitched 是否发生主备切换，1为发生，0否
                     */
                    void SetIsMasterSwitched(const MonitorData& _isMasterSwitched);

                    /**
                     * 判断参数 IsMasterSwitched 是否已赋值
                     * @return IsMasterSwitched 是否已赋值
                     */
                    bool IsMasterSwitchedHasBeenSet() const;

                private:

                    /**
                     * 更新操作数UPDATE
                     */
                    MonitorData m_updateTotal;
                    bool m_updateTotalHasBeenSet;

                    /**
                     * 磁盘每秒IO次数
                     */
                    MonitorData m_diskIops;
                    bool m_diskIopsHasBeenSet;

                    /**
                     * 活跃连接数
                     */
                    MonitorData m_connActive;
                    bool m_connActiveHasBeenSet;

                    /**
                     * 缓存命中率
                     */
                    MonitorData m_memHitRate;
                    bool m_memHitRateHasBeenSet;

                    /**
                     * 主备延迟
                     */
                    MonitorData m_slaveDelay;
                    bool m_slaveDelayHasBeenSet;

                    /**
                     * 查询操作数SELECT
                     */
                    MonitorData m_selectTotal;
                    bool m_selectTotalHasBeenSet;

                    /**
                     * 慢查询数
                     */
                    MonitorData m_longQuery;
                    bool m_longQueryHasBeenSet;

                    /**
                     * 删除操作数DELETE
                     */
                    MonitorData m_deleteTotal;
                    bool m_deleteTotalHasBeenSet;

                    /**
                     * 插入操作数INSERT
                     */
                    MonitorData m_insertTotal;
                    bool m_insertTotalHasBeenSet;

                    /**
                     * 是否发生主备切换，1为发生，0否
                     */
                    MonitorData m_isMasterSwitched;
                    bool m_isMasterSwitchedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_PERFORMANCEMONITORSET_H_
