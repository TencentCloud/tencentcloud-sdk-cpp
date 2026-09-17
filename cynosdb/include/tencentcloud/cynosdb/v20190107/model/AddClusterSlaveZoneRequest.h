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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ADDCLUSTERSLAVEZONEREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ADDCLUSTERSLAVEZONEREQUEST_H_

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
                * AddClusterSlaveZone请求参数结构体
                */
                class AddClusterSlaveZoneRequest : public AbstractModel
                {
                public:
                    AddClusterSlaveZoneRequest();
                    ~AddClusterSlaveZoneRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群ID</p>
                     * @return ClusterId <p>集群ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群ID</p>
                     * @param _clusterId <p>集群ID</p>
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>备可用区</p>
                     * @return SlaveZone <p>备可用区</p>
                     * 
                     */
                    std::string GetSlaveZone() const;

                    /**
                     * 设置<p>备可用区</p>
                     * @param _slaveZone <p>备可用区</p>
                     * 
                     */
                    void SetSlaveZone(const std::string& _slaveZone);

                    /**
                     * 判断参数 SlaveZone 是否已赋值
                     * @return SlaveZone 是否已赋值
                     * 
                     */
                    bool SlaveZoneHasBeenSet() const;

                    /**
                     * 获取<p>binlog同步方式。默认值：async。可选值：sync、semisync、async</p>
                     * @return BinlogSyncWay <p>binlog同步方式。默认值：async。可选值：sync、semisync、async</p>
                     * 
                     */
                    std::string GetBinlogSyncWay() const;

                    /**
                     * 设置<p>binlog同步方式。默认值：async。可选值：sync、semisync、async</p>
                     * @param _binlogSyncWay <p>binlog同步方式。默认值：async。可选值：sync、semisync、async</p>
                     * 
                     */
                    void SetBinlogSyncWay(const std::string& _binlogSyncWay);

                    /**
                     * 判断参数 BinlogSyncWay 是否已赋值
                     * @return BinlogSyncWay 是否已赋值
                     * 
                     */
                    bool BinlogSyncWayHasBeenSet() const;

                    /**
                     * 获取<p>半同步超时时间，单位ms。为保证业务稳定性，半同步复制存在退化逻辑，当主可用区集群在等待备可用区集群确认事务时若超过该超时时间，复制方式将降为异步复制。最低设置为1000ms，最高支持4294967295ms，默认10000ms。</p>
                     * @return SemiSyncTimeout <p>半同步超时时间，单位ms。为保证业务稳定性，半同步复制存在退化逻辑，当主可用区集群在等待备可用区集群确认事务时若超过该超时时间，复制方式将降为异步复制。最低设置为1000ms，最高支持4294967295ms，默认10000ms。</p>
                     * 
                     */
                    int64_t GetSemiSyncTimeout() const;

                    /**
                     * 设置<p>半同步超时时间，单位ms。为保证业务稳定性，半同步复制存在退化逻辑，当主可用区集群在等待备可用区集群确认事务时若超过该超时时间，复制方式将降为异步复制。最低设置为1000ms，最高支持4294967295ms，默认10000ms。</p>
                     * @param _semiSyncTimeout <p>半同步超时时间，单位ms。为保证业务稳定性，半同步复制存在退化逻辑，当主可用区集群在等待备可用区集群确认事务时若超过该超时时间，复制方式将降为异步复制。最低设置为1000ms，最高支持4294967295ms，默认10000ms。</p>
                     * 
                     */
                    void SetSemiSyncTimeout(const int64_t& _semiSyncTimeout);

                    /**
                     * 判断参数 SemiSyncTimeout 是否已赋值
                     * @return SemiSyncTimeout 是否已赋值
                     * 
                     */
                    bool SemiSyncTimeoutHasBeenSet() const;

                private:

                    /**
                     * <p>集群ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>备可用区</p>
                     */
                    std::string m_slaveZone;
                    bool m_slaveZoneHasBeenSet;

                    /**
                     * <p>binlog同步方式。默认值：async。可选值：sync、semisync、async</p>
                     */
                    std::string m_binlogSyncWay;
                    bool m_binlogSyncWayHasBeenSet;

                    /**
                     * <p>半同步超时时间，单位ms。为保证业务稳定性，半同步复制存在退化逻辑，当主可用区集群在等待备可用区集群确认事务时若超过该超时时间，复制方式将降为异步复制。最低设置为1000ms，最高支持4294967295ms，默认10000ms。</p>
                     */
                    int64_t m_semiSyncTimeout;
                    bool m_semiSyncTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ADDCLUSTERSLAVEZONEREQUEST_H_
