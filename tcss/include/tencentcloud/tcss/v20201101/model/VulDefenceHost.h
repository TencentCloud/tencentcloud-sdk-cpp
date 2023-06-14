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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_VULDEFENCEHOST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_VULDEFENCEHOST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 漏洞防御的主机信息
                */
                class VulDefenceHost : public AbstractModel
                {
                public:
                    VulDefenceHost();
                    ~VulDefenceHost() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主机名称/超级节点名称
                     * @return HostName 主机名称/超级节点名称
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置主机名称/超级节点名称
                     * @param _hostName 主机名称/超级节点名称
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取主机ip即内网ip
                     * @return HostIP 主机ip即内网ip
                     * 
                     */
                    std::string GetHostIP() const;

                    /**
                     * 设置主机ip即内网ip
                     * @param _hostIP 主机ip即内网ip
                     * 
                     */
                    void SetHostIP(const std::string& _hostIP);

                    /**
                     * 判断参数 HostIP 是否已赋值
                     * @return HostIP 是否已赋值
                     * 
                     */
                    bool HostIPHasBeenSet() const;

                    /**
                     * 获取主机QUUID/超级节点ID
                     * @return HostID 主机QUUID/超级节点ID
                     * 
                     */
                    std::string GetHostID() const;

                    /**
                     * 设置主机QUUID/超级节点ID
                     * @param _hostID 主机QUUID/超级节点ID
                     * 
                     */
                    void SetHostID(const std::string& _hostID);

                    /**
                     * 判断参数 HostID 是否已赋值
                     * @return HostID 是否已赋值
                     * 
                     */
                    bool HostIDHasBeenSet() const;

                    /**
                     * 获取插件状态，正常：SUCCESS，异常：FAIL， NO_DEFENDED:未防御
                     * @return Status 插件状态，正常：SUCCESS，异常：FAIL， NO_DEFENDED:未防御
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置插件状态，正常：SUCCESS，异常：FAIL， NO_DEFENDED:未防御
                     * @param _status 插件状态，正常：SUCCESS，异常：FAIL， NO_DEFENDED:未防御
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取外网ip
                     * @return PublicIP 外网ip
                     * 
                     */
                    std::string GetPublicIP() const;

                    /**
                     * 设置外网ip
                     * @param _publicIP 外网ip
                     * 
                     */
                    void SetPublicIP(const std::string& _publicIP);

                    /**
                     * 判断参数 PublicIP 是否已赋值
                     * @return PublicIP 是否已赋值
                     * 
                     */
                    bool PublicIPHasBeenSet() const;

                    /**
                     * 获取首次开启时间
                     * @return CreateTime 首次开启时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置首次开启时间
                     * @param _createTime 首次开启时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return ModifyTime 更新时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置更新时间
                     * @param _modifyTime 更新时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取节点类型[NORMAL:普通节点|SUPER:超级节点]
                     * @return NodeType 节点类型[NORMAL:普通节点|SUPER:超级节点]
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置节点类型[NORMAL:普通节点|SUPER:超级节点]
                     * @param _nodeType 节点类型[NORMAL:普通节点|SUPER:超级节点]
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取超级节点子网名称
                     * @return NodeSubNetName 超级节点子网名称
                     * 
                     */
                    std::string GetNodeSubNetName() const;

                    /**
                     * 设置超级节点子网名称
                     * @param _nodeSubNetName 超级节点子网名称
                     * 
                     */
                    void SetNodeSubNetName(const std::string& _nodeSubNetName);

                    /**
                     * 判断参数 NodeSubNetName 是否已赋值
                     * @return NodeSubNetName 是否已赋值
                     * 
                     */
                    bool NodeSubNetNameHasBeenSet() const;

                    /**
                     * 获取超级节点子网网段
                     * @return NodeSubNetCIDR 超级节点子网网段
                     * 
                     */
                    std::string GetNodeSubNetCIDR() const;

                    /**
                     * 设置超级节点子网网段
                     * @param _nodeSubNetCIDR 超级节点子网网段
                     * 
                     */
                    void SetNodeSubNetCIDR(const std::string& _nodeSubNetCIDR);

                    /**
                     * 判断参数 NodeSubNetCIDR 是否已赋值
                     * @return NodeSubNetCIDR 是否已赋值
                     * 
                     */
                    bool NodeSubNetCIDRHasBeenSet() const;

                    /**
                     * 获取超级节点子网ID
                     * @return NodeSubNetID 超级节点子网ID
                     * 
                     */
                    std::string GetNodeSubNetID() const;

                    /**
                     * 设置超级节点子网ID
                     * @param _nodeSubNetID 超级节点子网ID
                     * 
                     */
                    void SetNodeSubNetID(const std::string& _nodeSubNetID);

                    /**
                     * 判断参数 NodeSubNetID 是否已赋值
                     * @return NodeSubNetID 是否已赋值
                     * 
                     */
                    bool NodeSubNetIDHasBeenSet() const;

                    /**
                     * 获取超级节点唯一ID
                     * @return NodeUniqueID 超级节点唯一ID
                     * 
                     */
                    std::string GetNodeUniqueID() const;

                    /**
                     * 设置超级节点唯一ID
                     * @param _nodeUniqueID 超级节点唯一ID
                     * 
                     */
                    void SetNodeUniqueID(const std::string& _nodeUniqueID);

                    /**
                     * 判断参数 NodeUniqueID 是否已赋值
                     * @return NodeUniqueID 是否已赋值
                     * 
                     */
                    bool NodeUniqueIDHasBeenSet() const;

                    /**
                     * 获取超级节点ID
                     * @return NodeID 超级节点ID
                     * 
                     */
                    std::string GetNodeID() const;

                    /**
                     * 设置超级节点ID
                     * @param _nodeID 超级节点ID
                     * 
                     */
                    void SetNodeID(const std::string& _nodeID);

                    /**
                     * 判断参数 NodeID 是否已赋值
                     * @return NodeID 是否已赋值
                     * 
                     */
                    bool NodeIDHasBeenSet() const;

                    /**
                     * 获取Pod Ip
                     * @return PodIP Pod Ip
                     * 
                     */
                    std::string GetPodIP() const;

                    /**
                     * 设置Pod Ip
                     * @param _podIP Pod Ip
                     * 
                     */
                    void SetPodIP(const std::string& _podIP);

                    /**
                     * 判断参数 PodIP 是否已赋值
                     * @return PodIP 是否已赋值
                     * 
                     */
                    bool PodIPHasBeenSet() const;

                    /**
                     * 获取Pod 名称
                     * @return PodName Pod 名称
                     * 
                     */
                    std::string GetPodName() const;

                    /**
                     * 设置Pod 名称
                     * @param _podName Pod 名称
                     * 
                     */
                    void SetPodName(const std::string& _podName);

                    /**
                     * 判断参数 PodName 是否已赋值
                     * @return PodName 是否已赋值
                     * 
                     */
                    bool PodNameHasBeenSet() const;

                private:

                    /**
                     * 主机名称/超级节点名称
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 主机ip即内网ip
                     */
                    std::string m_hostIP;
                    bool m_hostIPHasBeenSet;

                    /**
                     * 主机QUUID/超级节点ID
                     */
                    std::string m_hostID;
                    bool m_hostIDHasBeenSet;

                    /**
                     * 插件状态，正常：SUCCESS，异常：FAIL， NO_DEFENDED:未防御
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 外网ip
                     */
                    std::string m_publicIP;
                    bool m_publicIPHasBeenSet;

                    /**
                     * 首次开启时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 节点类型[NORMAL:普通节点|SUPER:超级节点]
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * 超级节点子网名称
                     */
                    std::string m_nodeSubNetName;
                    bool m_nodeSubNetNameHasBeenSet;

                    /**
                     * 超级节点子网网段
                     */
                    std::string m_nodeSubNetCIDR;
                    bool m_nodeSubNetCIDRHasBeenSet;

                    /**
                     * 超级节点子网ID
                     */
                    std::string m_nodeSubNetID;
                    bool m_nodeSubNetIDHasBeenSet;

                    /**
                     * 超级节点唯一ID
                     */
                    std::string m_nodeUniqueID;
                    bool m_nodeUniqueIDHasBeenSet;

                    /**
                     * 超级节点ID
                     */
                    std::string m_nodeID;
                    bool m_nodeIDHasBeenSet;

                    /**
                     * Pod Ip
                     */
                    std::string m_podIP;
                    bool m_podIPHasBeenSet;

                    /**
                     * Pod 名称
                     */
                    std::string m_podName;
                    bool m_podNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_VULDEFENCEHOST_H_
