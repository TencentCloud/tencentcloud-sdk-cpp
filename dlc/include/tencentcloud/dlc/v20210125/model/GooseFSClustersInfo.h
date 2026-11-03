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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_GOOSEFSCLUSTERSINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_GOOSEFSCLUSTERSINFO_H_

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
                * goosefs返回参数
                */
                class GooseFSClustersInfo : public AbstractModel
                {
                public:
                    GooseFSClustersInfo();
                    ~GooseFSClustersInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>集群 ID，形如 g_cvm_xxx</p>
                     * @return ClusterId <p>集群 ID，形如 g_cvm_xxx</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群 ID，形如 g_cvm_xxx</p>
                     * @param _clusterId <p>集群 ID，形如 g_cvm_xxx</p>
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
                     * 获取<p>集群名称</p>
                     * @return Name <p>集群名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>集群名称</p>
                     * @param _name <p>集群名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>所属子网 ID</p>
                     * @return SubnetId <p>所属子网 ID</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>所属子网 ID</p>
                     * @param _subnetId <p>所属子网 ID</p>
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>可用区</p>
                     * @return Zone <p>可用区</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区</p>
                     * @param _zone <p>可用区</p>
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
                     * 获取<p>Master RPC 地址，多个地址用英文逗号拼接，例如 &quot;10.0.1.10:19998,10.0.1.11:19998&quot;，供 CSI 驱动连接用</p>
                     * @return MasterRPCAddress <p>Master RPC 地址，多个地址用英文逗号拼接，例如 &quot;10.0.1.10:19998,10.0.1.11:19998&quot;，供 CSI 驱动连接用</p>
                     * 
                     */
                    std::string GetMasterRPCAddress() const;

                    /**
                     * 设置<p>Master RPC 地址，多个地址用英文逗号拼接，例如 &quot;10.0.1.10:19998,10.0.1.11:19998&quot;，供 CSI 驱动连接用</p>
                     * @param _masterRPCAddress <p>Master RPC 地址，多个地址用英文逗号拼接，例如 &quot;10.0.1.10:19998,10.0.1.11:19998&quot;，供 CSI 驱动连接用</p>
                     * 
                     */
                    void SetMasterRPCAddress(const std::string& _masterRPCAddress);

                    /**
                     * 判断参数 MasterRPCAddress 是否已赋值
                     * @return MasterRPCAddress 是否已赋值
                     * 
                     */
                    bool MasterRPCAddressHasBeenSet() const;

                private:

                    /**
                     * <p>集群 ID，形如 g_cvm_xxx</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>集群名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>所属子网 ID</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>可用区</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>Master RPC 地址，多个地址用英文逗号拼接，例如 &quot;10.0.1.10:19998,10.0.1.11:19998&quot;，供 CSI 驱动连接用</p>
                     */
                    std::string m_masterRPCAddress;
                    bool m_masterRPCAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_GOOSEFSCLUSTERSINFO_H_
