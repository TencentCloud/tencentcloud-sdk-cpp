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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYCLUSTERSLAVEZONEREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYCLUSTERSLAVEZONEREQUEST_H_

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
                * ModifyClusterSlaveZone请求参数结构体
                */
                class ModifyClusterSlaveZoneRequest : public AbstractModel
                {
                public:
                    ModifyClusterSlaveZoneRequest();
                    ~ModifyClusterSlaveZoneRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群Id
                     * @return ClusterId 集群Id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群Id
                     * @param _clusterId 集群Id
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
                     * 获取旧从可用区
                     * @return OldSlaveZone 旧从可用区
                     * 
                     */
                    std::string GetOldSlaveZone() const;

                    /**
                     * 设置旧从可用区
                     * @param _oldSlaveZone 旧从可用区
                     * 
                     */
                    void SetOldSlaveZone(const std::string& _oldSlaveZone);

                    /**
                     * 判断参数 OldSlaveZone 是否已赋值
                     * @return OldSlaveZone 是否已赋值
                     * 
                     */
                    bool OldSlaveZoneHasBeenSet() const;

                    /**
                     * 获取新从可用区
                     * @return NewSlaveZone 新从可用区
                     * 
                     */
                    std::string GetNewSlaveZone() const;

                    /**
                     * 设置新从可用区
                     * @param _newSlaveZone 新从可用区
                     * 
                     */
                    void SetNewSlaveZone(const std::string& _newSlaveZone);

                    /**
                     * 判断参数 NewSlaveZone 是否已赋值
                     * @return NewSlaveZone 是否已赋值
                     * 
                     */
                    bool NewSlaveZoneHasBeenSet() const;

                    /**
                     * 获取binlog同步方式。默认值：async。可选值：sync、semisync、async
                     * @return BinlogSyncWay binlog同步方式。默认值：async。可选值：sync、semisync、async
                     * 
                     */
                    std::string GetBinlogSyncWay() const;

                    /**
                     * 设置binlog同步方式。默认值：async。可选值：sync、semisync、async
                     * @param _binlogSyncWay binlog同步方式。默认值：async。可选值：sync、semisync、async
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
                     * 获取半同步超时时间，单位ms。为保证业务稳定性，半同步复制存在退化逻辑，当主可用区集群在等待备可用区集群确认事务时若超过该超时时间，复制方式将降为异步复制。最低设置为1000ms，最高支持4294967295ms，默认10000ms。
                     * @return SemiSyncTimeout 半同步超时时间，单位ms。为保证业务稳定性，半同步复制存在退化逻辑，当主可用区集群在等待备可用区集群确认事务时若超过该超时时间，复制方式将降为异步复制。最低设置为1000ms，最高支持4294967295ms，默认10000ms。
                     * 
                     */
                    int64_t GetSemiSyncTimeout() const;

                    /**
                     * 设置半同步超时时间，单位ms。为保证业务稳定性，半同步复制存在退化逻辑，当主可用区集群在等待备可用区集群确认事务时若超过该超时时间，复制方式将降为异步复制。最低设置为1000ms，最高支持4294967295ms，默认10000ms。
                     * @param _semiSyncTimeout 半同步超时时间，单位ms。为保证业务稳定性，半同步复制存在退化逻辑，当主可用区集群在等待备可用区集群确认事务时若超过该超时时间，复制方式将降为异步复制。最低设置为1000ms，最高支持4294967295ms，默认10000ms。
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
                     * 集群Id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 旧从可用区
                     */
                    std::string m_oldSlaveZone;
                    bool m_oldSlaveZoneHasBeenSet;

                    /**
                     * 新从可用区
                     */
                    std::string m_newSlaveZone;
                    bool m_newSlaveZoneHasBeenSet;

                    /**
                     * binlog同步方式。默认值：async。可选值：sync、semisync、async
                     */
                    std::string m_binlogSyncWay;
                    bool m_binlogSyncWayHasBeenSet;

                    /**
                     * 半同步超时时间，单位ms。为保证业务稳定性，半同步复制存在退化逻辑，当主可用区集群在等待备可用区集群确认事务时若超过该超时时间，复制方式将降为异步复制。最低设置为1000ms，最高支持4294967295ms，默认10000ms。
                     */
                    int64_t m_semiSyncTimeout;
                    bool m_semiSyncTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYCLUSTERSLAVEZONEREQUEST_H_
