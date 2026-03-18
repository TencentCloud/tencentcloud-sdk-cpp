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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_TRANSFERCLUSTERZONEREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_TRANSFERCLUSTERZONEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ProxyZone.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * TransferClusterZone请求参数结构体
                */
                class TransferClusterZoneRequest : public AbstractModel
                {
                public:
                    TransferClusterZoneRequest();
                    ~TransferClusterZoneRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取源集群Id
                     * @return ClusterId 源集群Id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置源集群Id
                     * @param _clusterId 源集群Id
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
                     * 获取目标可用区
                     * @return DstZone 目标可用区
                     * 
                     */
                    std::string GetDstZone() const;

                    /**
                     * 设置目标可用区
                     * @param _dstZone 目标可用区
                     * 
                     */
                    void SetDstZone(const std::string& _dstZone);

                    /**
                     * 判断参数 DstZone 是否已赋值
                     * @return DstZone 是否已赋值
                     * 
                     */
                    bool DstZoneHasBeenSet() const;

                    /**
                     * 获取跨可用区迁移主从数据延迟校验阈值，单位毫秒(ms)
                     * @return MaxLag 跨可用区迁移主从数据延迟校验阈值，单位毫秒(ms)
                     * 
                     */
                    int64_t GetMaxLag() const;

                    /**
                     * 设置跨可用区迁移主从数据延迟校验阈值，单位毫秒(ms)
                     * @param _maxLag 跨可用区迁移主从数据延迟校验阈值，单位毫秒(ms)
                     * 
                     */
                    void SetMaxLag(const int64_t& _maxLag);

                    /**
                     * 判断参数 MaxLag 是否已赋值
                     * @return MaxLag 是否已赋值
                     * 
                     */
                    bool MaxLagHasBeenSet() const;

                    /**
                     * 获取Immediate:立即执行，InMaintain:时间窗口执行
                     * @return TransferType Immediate:立即执行，InMaintain:时间窗口执行
                     * 
                     */
                    std::string GetTransferType() const;

                    /**
                     * 设置Immediate:立即执行，InMaintain:时间窗口执行
                     * @param _transferType Immediate:立即执行，InMaintain:时间窗口执行
                     * 
                     */
                    void SetTransferType(const std::string& _transferType);

                    /**
                     * 判断参数 TransferType 是否已赋值
                     * @return TransferType 是否已赋值
                     * 
                     */
                    bool TransferTypeHasBeenSet() const;

                    /**
                     * 获取多可用区备区
                     * @return DstSlaveZone 多可用区备区
                     * 
                     */
                    std::string GetDstSlaveZone() const;

                    /**
                     * 设置多可用区备区
                     * @param _dstSlaveZone 多可用区备区
                     * 
                     */
                    void SetDstSlaveZone(const std::string& _dstSlaveZone);

                    /**
                     * 判断参数 DstSlaveZone 是否已赋值
                     * @return DstSlaveZone 是否已赋值
                     * 
                     */
                    bool DstSlaveZoneHasBeenSet() const;

                    /**
                     * 获取proxy迁移的目标可用区信息
                     * @return ProxyZones proxy迁移的目标可用区信息
                     * 
                     */
                    std::vector<ProxyZone> GetProxyZones() const;

                    /**
                     * 设置proxy迁移的目标可用区信息
                     * @param _proxyZones proxy迁移的目标可用区信息
                     * 
                     */
                    void SetProxyZones(const std::vector<ProxyZone>& _proxyZones);

                    /**
                     * 判断参数 ProxyZones 是否已赋值
                     * @return ProxyZones 是否已赋值
                     * 
                     */
                    bool ProxyZonesHasBeenSet() const;

                private:

                    /**
                     * 源集群Id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 目标可用区
                     */
                    std::string m_dstZone;
                    bool m_dstZoneHasBeenSet;

                    /**
                     * 跨可用区迁移主从数据延迟校验阈值，单位毫秒(ms)
                     */
                    int64_t m_maxLag;
                    bool m_maxLagHasBeenSet;

                    /**
                     * Immediate:立即执行，InMaintain:时间窗口执行
                     */
                    std::string m_transferType;
                    bool m_transferTypeHasBeenSet;

                    /**
                     * 多可用区备区
                     */
                    std::string m_dstSlaveZone;
                    bool m_dstSlaveZoneHasBeenSet;

                    /**
                     * proxy迁移的目标可用区信息
                     */
                    std::vector<ProxyZone> m_proxyZones;
                    bool m_proxyZonesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_TRANSFERCLUSTERZONEREQUEST_H_
