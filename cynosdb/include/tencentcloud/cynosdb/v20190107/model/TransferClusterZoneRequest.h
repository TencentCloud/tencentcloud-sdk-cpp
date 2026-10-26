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
                     * 获取<p>源集群Id</p>
                     * @return ClusterId <p>源集群Id</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>源集群Id</p>
                     * @param _clusterId <p>源集群Id</p>
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
                     * 获取<p>目标可用区</p>
                     * @return DstZone <p>目标可用区</p>
                     * 
                     */
                    std::string GetDstZone() const;

                    /**
                     * 设置<p>目标可用区</p>
                     * @param _dstZone <p>目标可用区</p>
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
                     * 获取<p>跨可用区迁移主从数据延迟校验阈值，单位毫秒(ms)</p>
                     * @return MaxLag <p>跨可用区迁移主从数据延迟校验阈值，单位毫秒(ms)</p>
                     * 
                     */
                    int64_t GetMaxLag() const;

                    /**
                     * 设置<p>跨可用区迁移主从数据延迟校验阈值，单位毫秒(ms)</p>
                     * @param _maxLag <p>跨可用区迁移主从数据延迟校验阈值，单位毫秒(ms)</p>
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
                     * 获取<p>Immediate:立即执行，InMaintain:时间窗口执行</p>
                     * @return TransferType <p>Immediate:立即执行，InMaintain:时间窗口执行</p>
                     * 
                     */
                    std::string GetTransferType() const;

                    /**
                     * 设置<p>Immediate:立即执行，InMaintain:时间窗口执行</p>
                     * @param _transferType <p>Immediate:立即执行，InMaintain:时间窗口执行</p>
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
                     * 获取<p>多可用区备区</p>
                     * @return DstSlaveZone <p>多可用区备区</p>
                     * 
                     */
                    std::string GetDstSlaveZone() const;

                    /**
                     * 设置<p>多可用区备区</p>
                     * @param _dstSlaveZone <p>多可用区备区</p>
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
                     * 获取<p>proxy迁移的目标可用区信息</p>
                     * @return ProxyZones <p>proxy迁移的目标可用区信息</p>
                     * 
                     */
                    std::vector<ProxyZone> GetProxyZones() const;

                    /**
                     * 设置<p>proxy迁移的目标可用区信息</p>
                     * @param _proxyZones <p>proxy迁移的目标可用区信息</p>
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
                     * <p>源集群Id</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>目标可用区</p>
                     */
                    std::string m_dstZone;
                    bool m_dstZoneHasBeenSet;

                    /**
                     * <p>跨可用区迁移主从数据延迟校验阈值，单位毫秒(ms)</p>
                     */
                    int64_t m_maxLag;
                    bool m_maxLagHasBeenSet;

                    /**
                     * <p>Immediate:立即执行，InMaintain:时间窗口执行</p>
                     */
                    std::string m_transferType;
                    bool m_transferTypeHasBeenSet;

                    /**
                     * <p>多可用区备区</p>
                     */
                    std::string m_dstSlaveZone;
                    bool m_dstSlaveZoneHasBeenSet;

                    /**
                     * <p>proxy迁移的目标可用区信息</p>
                     */
                    std::vector<ProxyZone> m_proxyZones;
                    bool m_proxyZonesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_TRANSFERCLUSTERZONEREQUEST_H_
