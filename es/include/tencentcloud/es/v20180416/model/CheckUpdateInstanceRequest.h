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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_CHECKUPDATEINSTANCEREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_CHECKUPDATEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/NodeInfo.h>
#include <tencentcloud/es/v20180416/model/ZoneDetail.h>
#include <tencentcloud/es/v20180416/model/WebNodeTypeInfo.h>
#include <tencentcloud/es/v20180416/model/CosBackup.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * CheckUpdateInstance请求参数结构体
                */
                class CheckUpdateInstanceRequest : public AbstractModel
                {
                public:
                    CheckUpdateInstanceRequest();
                    ~CheckUpdateInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取已废弃，请使用NodeInfoList
变配后的节点个数（2-50个）
                     * @return NodeNum 已废弃，请使用NodeInfoList
变配后的节点个数（2-50个）
                     * 
                     */
                    uint64_t GetNodeNum() const;

                    /**
                     * 设置已废弃，请使用NodeInfoList
变配后的节点个数（2-50个）
                     * @param _nodeNum 已废弃，请使用NodeInfoList
变配后的节点个数（2-50个）
                     * 
                     */
                    void SetNodeNum(const uint64_t& _nodeNum);

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     * 
                     */
                    bool NodeNumHasBeenSet() const;

                    /**
                     * 获取已废弃，请使用NodeInfoList
变配后的节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
                     * @return NodeType 已废弃，请使用NodeInfoList
变配后的节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置已废弃，请使用NodeInfoList
变配后的节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
                     * @param _nodeType 已废弃，请使用NodeInfoList
变配后的节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
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
                     * 获取已废弃，请使用NodeInfoList
变配后的磁盘大小（单位GB）
                     * @return DiskSize 已废弃，请使用NodeInfoList
变配后的磁盘大小（单位GB）
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置已废弃，请使用NodeInfoList
变配后的磁盘大小（单位GB）
                     * @param _diskSize 已废弃，请使用NodeInfoList
变配后的磁盘大小（单位GB）
                     * 
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取已废弃，请使用NodeInfoList
变配后的专用主节点个数（仅支持3个和5个）
                     * @return MasterNodeNum 已废弃，请使用NodeInfoList
变配后的专用主节点个数（仅支持3个和5个）
                     * 
                     */
                    uint64_t GetMasterNodeNum() const;

                    /**
                     * 设置已废弃，请使用NodeInfoList
变配后的专用主节点个数（仅支持3个和5个）
                     * @param _masterNodeNum 已废弃，请使用NodeInfoList
变配后的专用主节点个数（仅支持3个和5个）
                     * 
                     */
                    void SetMasterNodeNum(const uint64_t& _masterNodeNum);

                    /**
                     * 判断参数 MasterNodeNum 是否已赋值
                     * @return MasterNodeNum 是否已赋值
                     * 
                     */
                    bool MasterNodeNumHasBeenSet() const;

                    /**
                     * 获取已废弃，请使用NodeInfoList
变配后的专用主节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
                     * @return MasterNodeType 已废弃，请使用NodeInfoList
变配后的专用主节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
                     * 
                     */
                    std::string GetMasterNodeType() const;

                    /**
                     * 设置已废弃，请使用NodeInfoList
变配后的专用主节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
                     * @param _masterNodeType 已废弃，请使用NodeInfoList
变配后的专用主节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
                     * 
                     */
                    void SetMasterNodeType(const std::string& _masterNodeType);

                    /**
                     * 判断参数 MasterNodeType 是否已赋值
                     * @return MasterNodeType 是否已赋值
                     * 
                     */
                    bool MasterNodeTypeHasBeenSet() const;

                    /**
                     * 获取节点信息列表，可以只传递要更新的节点及其对应的规格信息。支持的操作包括<li>修改一种节点的个数</li><li>修改一种节点的节点规格及磁盘大小</li><li>增加一种节点类型（需要同时指定该节点的类型，个数，规格，磁盘等信息）</li>上述操作一次只能进行一种，且磁盘类型不支持修改
                     * @return NodeInfoList 节点信息列表，可以只传递要更新的节点及其对应的规格信息。支持的操作包括<li>修改一种节点的个数</li><li>修改一种节点的节点规格及磁盘大小</li><li>增加一种节点类型（需要同时指定该节点的类型，个数，规格，磁盘等信息）</li>上述操作一次只能进行一种，且磁盘类型不支持修改
                     * 
                     */
                    std::vector<NodeInfo> GetNodeInfoList() const;

                    /**
                     * 设置节点信息列表，可以只传递要更新的节点及其对应的规格信息。支持的操作包括<li>修改一种节点的个数</li><li>修改一种节点的节点规格及磁盘大小</li><li>增加一种节点类型（需要同时指定该节点的类型，个数，规格，磁盘等信息）</li>上述操作一次只能进行一种，且磁盘类型不支持修改
                     * @param _nodeInfoList 节点信息列表，可以只传递要更新的节点及其对应的规格信息。支持的操作包括<li>修改一种节点的个数</li><li>修改一种节点的节点规格及磁盘大小</li><li>增加一种节点类型（需要同时指定该节点的类型，个数，规格，磁盘等信息）</li>上述操作一次只能进行一种，且磁盘类型不支持修改
                     * 
                     */
                    void SetNodeInfoList(const std::vector<NodeInfo>& _nodeInfoList);

                    /**
                     * 判断参数 NodeInfoList 是否已赋值
                     * @return NodeInfoList 是否已赋值
                     * 
                     */
                    bool NodeInfoListHasBeenSet() const;

                    /**
                     * 获取更新配置时是否强制重启<li>true强制重启</li><li>false不强制重启</li>默认值为false
                     * @return ForceRestart 更新配置时是否强制重启<li>true强制重启</li><li>false不强制重启</li>默认值为false
                     * 
                     */
                    bool GetForceRestart() const;

                    /**
                     * 设置更新配置时是否强制重启<li>true强制重启</li><li>false不强制重启</li>默认值为false
                     * @param _forceRestart 更新配置时是否强制重启<li>true强制重启</li><li>false不强制重启</li>默认值为false
                     * 
                     */
                    void SetForceRestart(const bool& _forceRestart);

                    /**
                     * 判断参数 ForceRestart 是否已赋值
                     * @return ForceRestart 是否已赋值
                     * 
                     */
                    bool ForceRestartHasBeenSet() const;

                    /**
                     * 获取0: 蓝绿变更方式扩容，集群不重启 （默认） 1: 磁盘解挂载扩容，集群滚动重启
                     * @return ScaleType 0: 蓝绿变更方式扩容，集群不重启 （默认） 1: 磁盘解挂载扩容，集群滚动重启
                     * 
                     */
                    int64_t GetScaleType() const;

                    /**
                     * 设置0: 蓝绿变更方式扩容，集群不重启 （默认） 1: 磁盘解挂载扩容，集群滚动重启
                     * @param _scaleType 0: 蓝绿变更方式扩容，集群不重启 （默认） 1: 磁盘解挂载扩容，集群滚动重启
                     * 
                     */
                    void SetScaleType(const int64_t& _scaleType);

                    /**
                     * 判断参数 ScaleType 是否已赋值
                     * @return ScaleType 是否已赋值
                     * 
                     */
                    bool ScaleTypeHasBeenSet() const;

                    /**
                     * 获取多可用区部署
                     * @return MultiZoneInfo 多可用区部署
                     * 
                     */
                    std::vector<ZoneDetail> GetMultiZoneInfo() const;

                    /**
                     * 设置多可用区部署
                     * @param _multiZoneInfo 多可用区部署
                     * 
                     */
                    void SetMultiZoneInfo(const std::vector<ZoneDetail>& _multiZoneInfo);

                    /**
                     * 判断参数 MultiZoneInfo 是否已赋值
                     * @return MultiZoneInfo 是否已赋值
                     * 
                     */
                    bool MultiZoneInfoHasBeenSet() const;

                    /**
                     * 获取可视化节点配置
                     * @return WebNodeTypeInfo 可视化节点配置
                     * 
                     */
                    WebNodeTypeInfo GetWebNodeTypeInfo() const;

                    /**
                     * 设置可视化节点配置
                     * @param _webNodeTypeInfo 可视化节点配置
                     * 
                     */
                    void SetWebNodeTypeInfo(const WebNodeTypeInfo& _webNodeTypeInfo);

                    /**
                     * 判断参数 WebNodeTypeInfo 是否已赋值
                     * @return WebNodeTypeInfo 是否已赋值
                     * 
                     */
                    bool WebNodeTypeInfoHasBeenSet() const;

                    /**
                     * 获取COS自动备份信息
                     * @return CosBackup COS自动备份信息
                     * 
                     */
                    CosBackup GetCosBackup() const;

                    /**
                     * 设置COS自动备份信息
                     * @param _cosBackup COS自动备份信息
                     * 
                     */
                    void SetCosBackup(const CosBackup& _cosBackup);

                    /**
                     * 判断参数 CosBackup 是否已赋值
                     * @return CosBackup 是否已赋值
                     * 
                     */
                    bool CosBackupHasBeenSet() const;

                    /**
                     * 获取读写分离模式：-1-不开启，1-本地读写分离，2-远端读写分离
                     * @return ReadWriteMode 读写分离模式：-1-不开启，1-本地读写分离，2-远端读写分离
                     * 
                     */
                    int64_t GetReadWriteMode() const;

                    /**
                     * 设置读写分离模式：-1-不开启，1-本地读写分离，2-远端读写分离
                     * @param _readWriteMode 读写分离模式：-1-不开启，1-本地读写分离，2-远端读写分离
                     * 
                     */
                    void SetReadWriteMode(const int64_t& _readWriteMode);

                    /**
                     * 判断参数 ReadWriteMode 是否已赋值
                     * @return ReadWriteMode 是否已赋值
                     * 
                     */
                    bool ReadWriteModeHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 已废弃，请使用NodeInfoList
变配后的节点个数（2-50个）
                     */
                    uint64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * 已废弃，请使用NodeInfoList
变配后的节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * 已废弃，请使用NodeInfoList
变配后的磁盘大小（单位GB）
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 已废弃，请使用NodeInfoList
变配后的专用主节点个数（仅支持3个和5个）
                     */
                    uint64_t m_masterNodeNum;
                    bool m_masterNodeNumHasBeenSet;

                    /**
                     * 已废弃，请使用NodeInfoList
变配后的专用主节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
                     */
                    std::string m_masterNodeType;
                    bool m_masterNodeTypeHasBeenSet;

                    /**
                     * 节点信息列表，可以只传递要更新的节点及其对应的规格信息。支持的操作包括<li>修改一种节点的个数</li><li>修改一种节点的节点规格及磁盘大小</li><li>增加一种节点类型（需要同时指定该节点的类型，个数，规格，磁盘等信息）</li>上述操作一次只能进行一种，且磁盘类型不支持修改
                     */
                    std::vector<NodeInfo> m_nodeInfoList;
                    bool m_nodeInfoListHasBeenSet;

                    /**
                     * 更新配置时是否强制重启<li>true强制重启</li><li>false不强制重启</li>默认值为false
                     */
                    bool m_forceRestart;
                    bool m_forceRestartHasBeenSet;

                    /**
                     * 0: 蓝绿变更方式扩容，集群不重启 （默认） 1: 磁盘解挂载扩容，集群滚动重启
                     */
                    int64_t m_scaleType;
                    bool m_scaleTypeHasBeenSet;

                    /**
                     * 多可用区部署
                     */
                    std::vector<ZoneDetail> m_multiZoneInfo;
                    bool m_multiZoneInfoHasBeenSet;

                    /**
                     * 可视化节点配置
                     */
                    WebNodeTypeInfo m_webNodeTypeInfo;
                    bool m_webNodeTypeInfoHasBeenSet;

                    /**
                     * COS自动备份信息
                     */
                    CosBackup m_cosBackup;
                    bool m_cosBackupHasBeenSet;

                    /**
                     * 读写分离模式：-1-不开启，1-本地读写分离，2-远端读写分离
                     */
                    int64_t m_readWriteMode;
                    bool m_readWriteModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_CHECKUPDATEINSTANCEREQUEST_H_
