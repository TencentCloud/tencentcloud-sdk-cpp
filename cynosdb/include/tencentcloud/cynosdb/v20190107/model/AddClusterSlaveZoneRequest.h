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
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
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
                     * 获取从可用区
                     * @return SlaveZone 从可用区
                     * 
                     */
                    std::string GetSlaveZone() const;

                    /**
                     * 设置从可用区
                     * @param _slaveZone 从可用区
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

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 从可用区
                     */
                    std::string m_slaveZone;
                    bool m_slaveZoneHasBeenSet;

                    /**
                     * binlog同步方式。默认值：async。可选值：sync、semisync、async
                     */
                    std::string m_binlogSyncWay;
                    bool m_binlogSyncWayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_ADDCLUSTERSLAVEZONEREQUEST_H_
