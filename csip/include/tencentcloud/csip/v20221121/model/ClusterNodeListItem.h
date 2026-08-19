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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CLUSTERNODELISTITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CLUSTERNODELISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 集群节点列表项
                */
                class ClusterNodeListItem : public AbstractModel
                {
                public:
                    ClusterNodeListItem();
                    ~ClusterNodeListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>资产 ID</p>
                     * @return AssetId <p>资产 ID</p>
                     * @deprecated
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置<p>资产 ID</p>
                     * @param _assetId <p>资产 ID</p>
                     * @deprecated
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * @deprecated
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取<p>appid</p>
                     * @return AppID <p>appid</p>
                     * 
                     */
                    uint64_t GetAppID() const;

                    /**
                     * 设置<p>appid</p>
                     * @param _appID <p>appid</p>
                     * 
                     */
                    void SetAppID(const uint64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取<p>节点id</p>
                     * @return NodeId <p>节点id</p>
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置<p>节点id</p>
                     * @param _nodeId <p>节点id</p>
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取<p>节点名称</p>
                     * @return NodeName <p>节点名称</p>
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置<p>节点名称</p>
                     * @param _nodeName <p>节点名称</p>
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取<p>公网ip</p>
                     * @return PublicIP <p>公网ip</p>
                     * 
                     */
                    std::string GetPublicIP() const;

                    /**
                     * 设置<p>公网ip</p>
                     * @param _publicIP <p>公网ip</p>
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
                     * 获取<p>内网ip</p>
                     * @return InternalIP <p>内网ip</p>
                     * 
                     */
                    std::string GetInternalIP() const;

                    /**
                     * 设置<p>内网ip</p>
                     * @param _internalIP <p>内网ip</p>
                     * 
                     */
                    void SetInternalIP(const std::string& _internalIP);

                    /**
                     * 判断参数 InternalIP 是否已赋值
                     * @return InternalIP 是否已赋值
                     * 
                     */
                    bool InternalIPHasBeenSet() const;

                    /**
                     * 获取<p>节点类型</p>
                     * @return NodeType <p>节点类型</p>
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置<p>节点类型</p>
                     * @param _nodeType <p>节点类型</p>
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
                     * 获取<p>核数</p>
                     * @return CoresCount <p>核数</p>
                     * 
                     */
                    int64_t GetCoresCount() const;

                    /**
                     * 设置<p>核数</p>
                     * @param _coresCount <p>核数</p>
                     * 
                     */
                    void SetCoresCount(const int64_t& _coresCount);

                    /**
                     * 判断参数 CoresCount 是否已赋值
                     * @return CoresCount 是否已赋值
                     * 
                     */
                    bool CoresCountHasBeenSet() const;

                    /**
                     * 获取<p>标签</p>
                     * @return Tags <p>标签</p>
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置<p>标签</p>
                     * @param _tags <p>标签</p>
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>运行状态</p>
                     * @return RunStatus <p>运行状态</p>
                     * 
                     */
                    std::string GetRunStatus() const;

                    /**
                     * 设置<p>运行状态</p>
                     * @param _runStatus <p>运行状态</p>
                     * 
                     */
                    void SetRunStatus(const std::string& _runStatus);

                    /**
                     * 判断参数 RunStatus 是否已赋值
                     * @return RunStatus 是否已赋值
                     * 
                     */
                    bool RunStatusHasBeenSet() const;

                    /**
                     * 获取<p>是否为新资产</p>
                     * @return IsNew <p>是否为新资产</p>
                     * 
                     */
                    bool GetIsNew() const;

                    /**
                     * 设置<p>是否为新资产</p>
                     * @param _isNew <p>是否为新资产</p>
                     * 
                     */
                    void SetIsNew(const bool& _isNew);

                    /**
                     * 判断参数 IsNew 是否已赋值
                     * @return IsNew 是否已赋值
                     * 
                     */
                    bool IsNewHasBeenSet() const;

                    /**
                     * 获取<p>节点唯一 ID</p>
                     * @return UniqueID <p>节点唯一 ID</p>
                     * 
                     */
                    std::string GetUniqueID() const;

                    /**
                     * 设置<p>节点唯一 ID</p>
                     * @param _uniqueID <p>节点唯一 ID</p>
                     * 
                     */
                    void SetUniqueID(const std::string& _uniqueID);

                    /**
                     * 判断参数 UniqueID 是否已赋值
                     * @return UniqueID 是否已赋值
                     * 
                     */
                    bool UniqueIDHasBeenSet() const;

                    /**
                     * 获取<p>客户端状态</p><p>枚举值：</p><ul><li>ONLINE： 在线</li><li>OFFLINE： 离线</li><li>UNINSTALL： 未安装</li></ul>
                     * @return ClientStatus <p>客户端状态</p><p>枚举值：</p><ul><li>ONLINE： 在线</li><li>OFFLINE： 离线</li><li>UNINSTALL： 未安装</li></ul>
                     * 
                     */
                    std::string GetClientStatus() const;

                    /**
                     * 设置<p>客户端状态</p><p>枚举值：</p><ul><li>ONLINE： 在线</li><li>OFFLINE： 离线</li><li>UNINSTALL： 未安装</li></ul>
                     * @param _clientStatus <p>客户端状态</p><p>枚举值：</p><ul><li>ONLINE： 在线</li><li>OFFLINE： 离线</li><li>UNINSTALL： 未安装</li></ul>
                     * 
                     */
                    void SetClientStatus(const std::string& _clientStatus);

                    /**
                     * 判断参数 ClientStatus 是否已赋值
                     * @return ClientStatus 是否已赋值
                     * 
                     */
                    bool ClientStatusHasBeenSet() const;

                    /**
                     * 获取<p>节点实例ID</p>
                     * @return InstanceId <p>节点实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>节点实例ID</p>
                     * @param _instanceId <p>节点实例ID</p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * <p>资产 ID</p>
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * <p>appid</p>
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>节点id</p>
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * <p>节点名称</p>
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * <p>公网ip</p>
                     */
                    std::string m_publicIP;
                    bool m_publicIPHasBeenSet;

                    /**
                     * <p>内网ip</p>
                     */
                    std::string m_internalIP;
                    bool m_internalIPHasBeenSet;

                    /**
                     * <p>节点类型</p>
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * <p>核数</p>
                     */
                    int64_t m_coresCount;
                    bool m_coresCountHasBeenSet;

                    /**
                     * <p>标签</p>
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>运行状态</p>
                     */
                    std::string m_runStatus;
                    bool m_runStatusHasBeenSet;

                    /**
                     * <p>是否为新资产</p>
                     */
                    bool m_isNew;
                    bool m_isNewHasBeenSet;

                    /**
                     * <p>节点唯一 ID</p>
                     */
                    std::string m_uniqueID;
                    bool m_uniqueIDHasBeenSet;

                    /**
                     * <p>客户端状态</p><p>枚举值：</p><ul><li>ONLINE： 在线</li><li>OFFLINE： 离线</li><li>UNINSTALL： 未安装</li></ul>
                     */
                    std::string m_clientStatus;
                    bool m_clientStatusHasBeenSet;

                    /**
                     * <p>节点实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CLUSTERNODELISTITEM_H_
