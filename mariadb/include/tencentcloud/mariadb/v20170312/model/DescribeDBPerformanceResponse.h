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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDBPERFORMANCERESPONSE_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDBPERFORMANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeDBPerformance返回参数结构体
                */
                class DescribeDBPerformanceResponse : public AbstractModel
                {
                public:
                    DescribeDBPerformanceResponse();
                    ~DescribeDBPerformanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取慢查询数
                     * @return LongQuery 慢查询数
                     */
                    MonitorData GetLongQuery() const;

                    /**
                     * 判断参数 LongQuery 是否已赋值
                     * @return LongQuery 是否已赋值
                     */
                    bool LongQueryHasBeenSet() const;

                    /**
                     * 获取查询操作数SELECT
                     * @return SelectTotal 查询操作数SELECT
                     */
                    MonitorData GetSelectTotal() const;

                    /**
                     * 判断参数 SelectTotal 是否已赋值
                     * @return SelectTotal 是否已赋值
                     */
                    bool SelectTotalHasBeenSet() const;

                    /**
                     * 获取更新操作数UPDATE
                     * @return UpdateTotal 更新操作数UPDATE
                     */
                    MonitorData GetUpdateTotal() const;

                    /**
                     * 判断参数 UpdateTotal 是否已赋值
                     * @return UpdateTotal 是否已赋值
                     */
                    bool UpdateTotalHasBeenSet() const;

                    /**
                     * 获取插入操作数INSERT
                     * @return InsertTotal 插入操作数INSERT
                     */
                    MonitorData GetInsertTotal() const;

                    /**
                     * 判断参数 InsertTotal 是否已赋值
                     * @return InsertTotal 是否已赋值
                     */
                    bool InsertTotalHasBeenSet() const;

                    /**
                     * 获取删除操作数DELETE
                     * @return DeleteTotal 删除操作数DELETE
                     */
                    MonitorData GetDeleteTotal() const;

                    /**
                     * 判断参数 DeleteTotal 是否已赋值
                     * @return DeleteTotal 是否已赋值
                     */
                    bool DeleteTotalHasBeenSet() const;

                    /**
                     * 获取缓存命中率
                     * @return MemHitRate 缓存命中率
                     */
                    MonitorData GetMemHitRate() const;

                    /**
                     * 判断参数 MemHitRate 是否已赋值
                     * @return MemHitRate 是否已赋值
                     */
                    bool MemHitRateHasBeenSet() const;

                    /**
                     * 获取磁盘每秒IO次数
                     * @return DiskIops 磁盘每秒IO次数
                     */
                    MonitorData GetDiskIops() const;

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
                     * 判断参数 ConnActive 是否已赋值
                     * @return ConnActive 是否已赋值
                     */
                    bool ConnActiveHasBeenSet() const;

                    /**
                     * 获取是否发生主备切换，1为发生，0否
                     * @return IsMasterSwitched 是否发生主备切换，1为发生，0否
                     */
                    MonitorData GetIsMasterSwitched() const;

                    /**
                     * 判断参数 IsMasterSwitched 是否已赋值
                     * @return IsMasterSwitched 是否已赋值
                     */
                    bool IsMasterSwitchedHasBeenSet() const;

                    /**
                     * 获取主备延迟
                     * @return SlaveDelay 主备延迟
                     */
                    MonitorData GetSlaveDelay() const;

                    /**
                     * 判断参数 SlaveDelay 是否已赋值
                     * @return SlaveDelay 是否已赋值
                     */
                    bool SlaveDelayHasBeenSet() const;

                private:

                    /**
                     * 慢查询数
                     */
                    MonitorData m_longQuery;
                    bool m_longQueryHasBeenSet;

                    /**
                     * 查询操作数SELECT
                     */
                    MonitorData m_selectTotal;
                    bool m_selectTotalHasBeenSet;

                    /**
                     * 更新操作数UPDATE
                     */
                    MonitorData m_updateTotal;
                    bool m_updateTotalHasBeenSet;

                    /**
                     * 插入操作数INSERT
                     */
                    MonitorData m_insertTotal;
                    bool m_insertTotalHasBeenSet;

                    /**
                     * 删除操作数DELETE
                     */
                    MonitorData m_deleteTotal;
                    bool m_deleteTotalHasBeenSet;

                    /**
                     * 缓存命中率
                     */
                    MonitorData m_memHitRate;
                    bool m_memHitRateHasBeenSet;

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
                     * 是否发生主备切换，1为发生，0否
                     */
                    MonitorData m_isMasterSwitched;
                    bool m_isMasterSwitchedHasBeenSet;

                    /**
                     * 主备延迟
                     */
                    MonitorData m_slaveDelay;
                    bool m_slaveDelayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEDBPERFORMANCERESPONSE_H_
