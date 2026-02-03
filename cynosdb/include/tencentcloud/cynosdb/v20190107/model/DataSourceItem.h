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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DATASOURCEITEM_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DATASOURCEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 数据源项
                */
                class DataSourceItem : public AbstractModel
                {
                public:
                    DataSourceItem();
                    ~DataSourceItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取源端实例ID
                     * @return InstanceId 源端实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置源端实例ID
                     * @param _instanceId 源端实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取源端集群ID
                     * @return ClusterId 源端集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置源端集群ID
                     * @param _clusterId 源端集群ID
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
                     * 获取源端数据库类型
                     * @return DBType 源端数据库类型
                     * 
                     */
                    std::string GetDBType() const;

                    /**
                     * 设置源端数据库类型
                     * @param _dBType 源端数据库类型
                     * 
                     */
                    void SetDBType(const std::string& _dBType);

                    /**
                     * 判断参数 DBType 是否已赋值
                     * @return DBType 是否已赋值
                     * 
                     */
                    bool DBTypeHasBeenSet() const;

                    /**
                     * 获取源端数据库IP
                     * @return IP 源端数据库IP
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置源端数据库IP
                     * @param _iP 源端数据库IP
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取源端数据库端口
                     * @return Port 源端数据库端口
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置源端数据库端口
                     * @param _port 源端数据库端口
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取源实例地域
                     * @return Region 源实例地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置源实例地域
                     * @param _region 源实例地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取源端实例可用区
                     * @return Zone 源端实例可用区
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置源端实例可用区
                     * @param _zone 源端实例可用区
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取源端主账号uin
                     * @return SrcUin 源端主账号uin
                     * 
                     */
                    std::string GetSrcUin() const;

                    /**
                     * 设置源端主账号uin
                     * @param _srcUin 源端主账号uin
                     * 
                     */
                    void SetSrcUin(const std::string& _srcUin);

                    /**
                     * 判断参数 SrcUin 是否已赋值
                     * @return SrcUin 是否已赋值
                     * 
                     */
                    bool SrcUinHasBeenSet() const;

                    /**
                     * 获取账号类型
                     * @return AccountMode 账号类型
                     * 
                     */
                    std::string GetAccountMode() const;

                    /**
                     * 设置账号类型
                     * @param _accountMode 账号类型
                     * 
                     */
                    void SetAccountMode(const std::string& _accountMode);

                    /**
                     * 判断参数 AccountMode 是否已赋值
                     * @return AccountMode 是否已赋值
                     * 
                     */
                    bool AccountModeHasBeenSet() const;

                    /**
                     * 获取同步任务状态
                     * @return ReplicationJobStatus 同步任务状态
                     * 
                     */
                    std::string GetReplicationJobStatus() const;

                    /**
                     * 设置同步任务状态
                     * @param _replicationJobStatus 同步任务状态
                     * 
                     */
                    void SetReplicationJobStatus(const std::string& _replicationJobStatus);

                    /**
                     * 判断参数 ReplicationJobStatus 是否已赋值
                     * @return ReplicationJobStatus 是否已赋值
                     * 
                     */
                    bool ReplicationJobStatusHasBeenSet() const;

                private:

                    /**
                     * 源端实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 源端集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 源端数据库类型
                     */
                    std::string m_dBType;
                    bool m_dBTypeHasBeenSet;

                    /**
                     * 源端数据库IP
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * 源端数据库端口
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 源实例地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 源端实例可用区
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 源端主账号uin
                     */
                    std::string m_srcUin;
                    bool m_srcUinHasBeenSet;

                    /**
                     * 账号类型
                     */
                    std::string m_accountMode;
                    bool m_accountModeHasBeenSet;

                    /**
                     * 同步任务状态
                     */
                    std::string m_replicationJobStatus;
                    bool m_replicationJobStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DATASOURCEITEM_H_
