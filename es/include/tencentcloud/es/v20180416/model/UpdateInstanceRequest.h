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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_UPDATEINSTANCEREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_UPDATEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/EsAcl.h>
#include <tencentcloud/es/v20180416/model/CosBackup.h>
#include <tencentcloud/es/v20180416/model/NodeInfo.h>
#include <tencentcloud/es/v20180416/model/EsPublicAcl.h>
#include <tencentcloud/es/v20180416/model/ZoneDetail.h>
#include <tencentcloud/es/v20180416/model/WebNodeTypeInfo.h>
#include <tencentcloud/es/v20180416/model/EsConfigSetInfo.h>
#include <tencentcloud/es/v20180416/model/OperationDurationUpdated.h>
#include <tencentcloud/es/v20180416/model/OutboundPublicAcl.h>
#include <tencentcloud/es/v20180416/model/EnableScheduleOperationDuration.h>
#include <tencentcloud/es/v20180416/model/AutoScaleDiskInfo.h>
#include <tencentcloud/es/v20180416/model/OtherConfig.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * UpdateInstance请求参数结构体
                */
                class UpdateInstanceRequest : public AbstractModel
                {
                public:
                    UpdateInstanceRequest();
                    ~UpdateInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
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
                     * 获取<p>实例名称（1-50 个英文、汉字、数字、连接线-或下划线_）</p>
                     * @return InstanceName <p>实例名称（1-50 个英文、汉字、数字、连接线-或下划线_）</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名称（1-50 个英文、汉字、数字、连接线-或下划线_）</p>
                     * @param _instanceName <p>实例名称（1-50 个英文、汉字、数字、连接线-或下划线_）</p>
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取<p>已废弃请使用NodeInfoList<br>节点个数（2-50个）</p>
                     * @return NodeNum <p>已废弃请使用NodeInfoList<br>节点个数（2-50个）</p>
                     * 
                     */
                    uint64_t GetNodeNum() const;

                    /**
                     * 设置<p>已废弃请使用NodeInfoList<br>节点个数（2-50个）</p>
                     * @param _nodeNum <p>已废弃请使用NodeInfoList<br>节点个数（2-50个）</p>
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
                     * 获取<p>ES配置项（JSON格式字符串）</p>
                     * @return EsConfig <p>ES配置项（JSON格式字符串）</p>
                     * 
                     */
                    std::string GetEsConfig() const;

                    /**
                     * 设置<p>ES配置项（JSON格式字符串）</p>
                     * @param _esConfig <p>ES配置项（JSON格式字符串）</p>
                     * 
                     */
                    void SetEsConfig(const std::string& _esConfig);

                    /**
                     * 判断参数 EsConfig 是否已赋值
                     * @return EsConfig 是否已赋值
                     * 
                     */
                    bool EsConfigHasBeenSet() const;

                    /**
                     * 获取<p>默认用户elastic的密码（8到16位，至少包括两项（[a-z,A-Z],[0-9]和[-!@#$%&amp;^*+=_:;,.?]的特殊符号）</p>
                     * @return Password <p>默认用户elastic的密码（8到16位，至少包括两项（[a-z,A-Z],[0-9]和[-!@#$%&amp;^*+=_:;,.?]的特殊符号）</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置<p>默认用户elastic的密码（8到16位，至少包括两项（[a-z,A-Z],[0-9]和[-!@#$%&amp;^*+=_:;,.?]的特殊符号）</p>
                     * @param _password <p>默认用户elastic的密码（8到16位，至少包括两项（[a-z,A-Z],[0-9]和[-!@#$%&amp;^*+=_:;,.?]的特殊符号）</p>
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取<p>可视化组件（Kibana、Cerebro）的公网访问策略</p>
                     * @return EsAcl <p>可视化组件（Kibana、Cerebro）的公网访问策略</p>
                     * 
                     */
                    EsAcl GetEsAcl() const;

                    /**
                     * 设置<p>可视化组件（Kibana、Cerebro）的公网访问策略</p>
                     * @param _esAcl <p>可视化组件（Kibana、Cerebro）的公网访问策略</p>
                     * 
                     */
                    void SetEsAcl(const EsAcl& _esAcl);

                    /**
                     * 判断参数 EsAcl 是否已赋值
                     * @return EsAcl 是否已赋值
                     * 
                     */
                    bool EsAclHasBeenSet() const;

                    /**
                     * 获取<p>已废弃请使用NodeInfoList<br>磁盘大小（单位GB）</p>
                     * @return DiskSize <p>已废弃请使用NodeInfoList<br>磁盘大小（单位GB）</p>
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置<p>已废弃请使用NodeInfoList<br>磁盘大小（单位GB）</p>
                     * @param _diskSize <p>已废弃请使用NodeInfoList<br>磁盘大小（单位GB）</p>
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
                     * 获取<p>已废弃请使用NodeInfoList<br>节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li></p>
                     * @return NodeType <p>已废弃请使用NodeInfoList<br>节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li></p>
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置<p>已废弃请使用NodeInfoList<br>节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li></p>
                     * @param _nodeType <p>已废弃请使用NodeInfoList<br>节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li></p>
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
                     * 获取<p>已废弃请使用NodeInfoList<br>专用主节点个数（只支持3个或5个）</p>
                     * @return MasterNodeNum <p>已废弃请使用NodeInfoList<br>专用主节点个数（只支持3个或5个）</p>
                     * 
                     */
                    uint64_t GetMasterNodeNum() const;

                    /**
                     * 设置<p>已废弃请使用NodeInfoList<br>专用主节点个数（只支持3个或5个）</p>
                     * @param _masterNodeNum <p>已废弃请使用NodeInfoList<br>专用主节点个数（只支持3个或5个）</p>
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
                     * 获取<p>已废弃请使用NodeInfoList<br>专用主节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li></p>
                     * @return MasterNodeType <p>已废弃请使用NodeInfoList<br>专用主节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li></p>
                     * 
                     */
                    std::string GetMasterNodeType() const;

                    /**
                     * 设置<p>已废弃请使用NodeInfoList<br>专用主节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li></p>
                     * @param _masterNodeType <p>已废弃请使用NodeInfoList<br>专用主节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li></p>
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
                     * 获取<p>已废弃请使用NodeInfoList<br>专用主节点磁盘大小（单位GB系统默认配置为50GB,暂不支持自定义）</p>
                     * @return MasterNodeDiskSize <p>已废弃请使用NodeInfoList<br>专用主节点磁盘大小（单位GB系统默认配置为50GB,暂不支持自定义）</p>
                     * 
                     */
                    uint64_t GetMasterNodeDiskSize() const;

                    /**
                     * 设置<p>已废弃请使用NodeInfoList<br>专用主节点磁盘大小（单位GB系统默认配置为50GB,暂不支持自定义）</p>
                     * @param _masterNodeDiskSize <p>已废弃请使用NodeInfoList<br>专用主节点磁盘大小（单位GB系统默认配置为50GB,暂不支持自定义）</p>
                     * 
                     */
                    void SetMasterNodeDiskSize(const uint64_t& _masterNodeDiskSize);

                    /**
                     * 判断参数 MasterNodeDiskSize 是否已赋值
                     * @return MasterNodeDiskSize 是否已赋值
                     * 
                     */
                    bool MasterNodeDiskSizeHasBeenSet() const;

                    /**
                     * 获取<p>更新配置时是否强制重启<li>true强制重启</li><li>false不强制重启</li>当前仅更新EsConfig时需要设置，默认值为false</p>
                     * @return ForceRestart <p>更新配置时是否强制重启<li>true强制重启</li><li>false不强制重启</li>当前仅更新EsConfig时需要设置，默认值为false</p>
                     * 
                     */
                    bool GetForceRestart() const;

                    /**
                     * 设置<p>更新配置时是否强制重启<li>true强制重启</li><li>false不强制重启</li>当前仅更新EsConfig时需要设置，默认值为false</p>
                     * @param _forceRestart <p>更新配置时是否强制重启<li>true强制重启</li><li>false不强制重启</li>当前仅更新EsConfig时需要设置，默认值为false</p>
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
                     * 获取<p>COS自动备份信息</p>
                     * @return CosBackup <p>COS自动备份信息</p>
                     * 
                     */
                    CosBackup GetCosBackup() const;

                    /**
                     * 设置<p>COS自动备份信息</p>
                     * @param _cosBackup <p>COS自动备份信息</p>
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
                     * 获取<p>节点信息列表，可以只传递要更新的节点及其对应的规格信息。支持的操作包括<li>修改一种节点的个数</li><li>修改一种节点的节点规格及磁盘大小</li><li>增加一种节点类型（需要同时指定该节点的类型，个数，规格，磁盘等信息）</li>上述操作一次只能进行一种，且磁盘类型不支持修改</p>
                     * @return NodeInfoList <p>节点信息列表，可以只传递要更新的节点及其对应的规格信息。支持的操作包括<li>修改一种节点的个数</li><li>修改一种节点的节点规格及磁盘大小</li><li>增加一种节点类型（需要同时指定该节点的类型，个数，规格，磁盘等信息）</li>上述操作一次只能进行一种，且磁盘类型不支持修改</p>
                     * 
                     */
                    std::vector<NodeInfo> GetNodeInfoList() const;

                    /**
                     * 设置<p>节点信息列表，可以只传递要更新的节点及其对应的规格信息。支持的操作包括<li>修改一种节点的个数</li><li>修改一种节点的节点规格及磁盘大小</li><li>增加一种节点类型（需要同时指定该节点的类型，个数，规格，磁盘等信息）</li>上述操作一次只能进行一种，且磁盘类型不支持修改</p>
                     * @param _nodeInfoList <p>节点信息列表，可以只传递要更新的节点及其对应的规格信息。支持的操作包括<li>修改一种节点的个数</li><li>修改一种节点的节点规格及磁盘大小</li><li>增加一种节点类型（需要同时指定该节点的类型，个数，规格，磁盘等信息）</li>上述操作一次只能进行一种，且磁盘类型不支持修改</p>
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
                     * 获取<p>ES集群公网访问状态<br>OPEN 开启<br>CLOSE 关闭</p>
                     * @return PublicAccess <p>ES集群公网访问状态<br>OPEN 开启<br>CLOSE 关闭</p>
                     * 
                     */
                    std::string GetPublicAccess() const;

                    /**
                     * 设置<p>ES集群公网访问状态<br>OPEN 开启<br>CLOSE 关闭</p>
                     * @param _publicAccess <p>ES集群公网访问状态<br>OPEN 开启<br>CLOSE 关闭</p>
                     * 
                     */
                    void SetPublicAccess(const std::string& _publicAccess);

                    /**
                     * 判断参数 PublicAccess 是否已赋值
                     * @return PublicAccess 是否已赋值
                     * 
                     */
                    bool PublicAccessHasBeenSet() const;

                    /**
                     * 获取<p>公网访问控制列表</p>
                     * @return EsPublicAcl <p>公网访问控制列表</p>
                     * 
                     */
                    EsPublicAcl GetEsPublicAcl() const;

                    /**
                     * 设置<p>公网访问控制列表</p>
                     * @param _esPublicAcl <p>公网访问控制列表</p>
                     * 
                     */
                    void SetEsPublicAcl(const EsPublicAcl& _esPublicAcl);

                    /**
                     * 判断参数 EsPublicAcl 是否已赋值
                     * @return EsPublicAcl 是否已赋值
                     * 
                     */
                    bool EsPublicAclHasBeenSet() const;

                    /**
                     * 获取<p>Kibana公网访问状态<br>OPEN 开启<br>CLOSE 关闭</p>
                     * @return KibanaPublicAccess <p>Kibana公网访问状态<br>OPEN 开启<br>CLOSE 关闭</p>
                     * 
                     */
                    std::string GetKibanaPublicAccess() const;

                    /**
                     * 设置<p>Kibana公网访问状态<br>OPEN 开启<br>CLOSE 关闭</p>
                     * @param _kibanaPublicAccess <p>Kibana公网访问状态<br>OPEN 开启<br>CLOSE 关闭</p>
                     * 
                     */
                    void SetKibanaPublicAccess(const std::string& _kibanaPublicAccess);

                    /**
                     * 判断参数 KibanaPublicAccess 是否已赋值
                     * @return KibanaPublicAccess 是否已赋值
                     * 
                     */
                    bool KibanaPublicAccessHasBeenSet() const;

                    /**
                     * 获取<p>Kibana内网访问状态<br>OPEN 开启<br>CLOSE 关闭</p>
                     * @return KibanaPrivateAccess <p>Kibana内网访问状态<br>OPEN 开启<br>CLOSE 关闭</p>
                     * 
                     */
                    std::string GetKibanaPrivateAccess() const;

                    /**
                     * 设置<p>Kibana内网访问状态<br>OPEN 开启<br>CLOSE 关闭</p>
                     * @param _kibanaPrivateAccess <p>Kibana内网访问状态<br>OPEN 开启<br>CLOSE 关闭</p>
                     * 
                     */
                    void SetKibanaPrivateAccess(const std::string& _kibanaPrivateAccess);

                    /**
                     * 判断参数 KibanaPrivateAccess 是否已赋值
                     * @return KibanaPrivateAccess 是否已赋值
                     * 
                     */
                    bool KibanaPrivateAccessHasBeenSet() const;

                    /**
                     * 获取<p>ES 6.8及以上版本基础版开启或关闭用户认证</p>
                     * @return BasicSecurityType <p>ES 6.8及以上版本基础版开启或关闭用户认证</p>
                     * 
                     */
                    int64_t GetBasicSecurityType() const;

                    /**
                     * 设置<p>ES 6.8及以上版本基础版开启或关闭用户认证</p>
                     * @param _basicSecurityType <p>ES 6.8及以上版本基础版开启或关闭用户认证</p>
                     * 
                     */
                    void SetBasicSecurityType(const int64_t& _basicSecurityType);

                    /**
                     * 判断参数 BasicSecurityType 是否已赋值
                     * @return BasicSecurityType 是否已赋值
                     * 
                     */
                    bool BasicSecurityTypeHasBeenSet() const;

                    /**
                     * 获取<p>Kibana内网端口</p>
                     * @return KibanaPrivatePort <p>Kibana内网端口</p>
                     * 
                     */
                    uint64_t GetKibanaPrivatePort() const;

                    /**
                     * 设置<p>Kibana内网端口</p>
                     * @param _kibanaPrivatePort <p>Kibana内网端口</p>
                     * 
                     */
                    void SetKibanaPrivatePort(const uint64_t& _kibanaPrivatePort);

                    /**
                     * 判断参数 KibanaPrivatePort 是否已赋值
                     * @return KibanaPrivatePort 是否已赋值
                     * 
                     */
                    bool KibanaPrivatePortHasBeenSet() const;

                    /**
                     * 获取<p>0: 蓝绿变更方式扩容，集群不重启 （默认） 1: 磁盘解挂载扩容，集群滚动重启</p>
                     * @return ScaleType <p>0: 蓝绿变更方式扩容，集群不重启 （默认） 1: 磁盘解挂载扩容，集群滚动重启</p>
                     * 
                     */
                    int64_t GetScaleType() const;

                    /**
                     * 设置<p>0: 蓝绿变更方式扩容，集群不重启 （默认） 1: 磁盘解挂载扩容，集群滚动重启</p>
                     * @param _scaleType <p>0: 蓝绿变更方式扩容，集群不重启 （默认） 1: 磁盘解挂载扩容，集群滚动重启</p>
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
                     * 获取<p>多可用区部署</p>
                     * @return MultiZoneInfo <p>多可用区部署</p>
                     * 
                     */
                    std::vector<ZoneDetail> GetMultiZoneInfo() const;

                    /**
                     * 设置<p>多可用区部署</p>
                     * @param _multiZoneInfo <p>多可用区部署</p>
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
                     * 获取<p>场景化模板类型 -1：不启用 1：通用 2：日志 3：搜索</p>
                     * @return SceneType <p>场景化模板类型 -1：不启用 1：通用 2：日志 3：搜索</p>
                     * 
                     */
                    int64_t GetSceneType() const;

                    /**
                     * 设置<p>场景化模板类型 -1：不启用 1：通用 2：日志 3：搜索</p>
                     * @param _sceneType <p>场景化模板类型 -1：不启用 1：通用 2：日志 3：搜索</p>
                     * 
                     */
                    void SetSceneType(const int64_t& _sceneType);

                    /**
                     * 判断参数 SceneType 是否已赋值
                     * @return SceneType 是否已赋值
                     * 
                     */
                    bool SceneTypeHasBeenSet() const;

                    /**
                     * 获取<p>Kibana配置项（JSON格式字符串）</p>
                     * @return KibanaConfig <p>Kibana配置项（JSON格式字符串）</p>
                     * 
                     */
                    std::string GetKibanaConfig() const;

                    /**
                     * 设置<p>Kibana配置项（JSON格式字符串）</p>
                     * @param _kibanaConfig <p>Kibana配置项（JSON格式字符串）</p>
                     * 
                     */
                    void SetKibanaConfig(const std::string& _kibanaConfig);

                    /**
                     * 判断参数 KibanaConfig 是否已赋值
                     * @return KibanaConfig 是否已赋值
                     * 
                     */
                    bool KibanaConfigHasBeenSet() const;

                    /**
                     * 获取<p>可视化节点配置</p>
                     * @return WebNodeTypeInfo <p>可视化节点配置</p>
                     * 
                     */
                    WebNodeTypeInfo GetWebNodeTypeInfo() const;

                    /**
                     * 设置<p>可视化节点配置</p>
                     * @param _webNodeTypeInfo <p>可视化节点配置</p>
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
                     * 获取<p>切换到新网络架构</p>
                     * @return SwitchPrivateLink <p>切换到新网络架构</p>
                     * 
                     */
                    std::string GetSwitchPrivateLink() const;

                    /**
                     * 设置<p>切换到新网络架构</p>
                     * @param _switchPrivateLink <p>切换到新网络架构</p>
                     * 
                     */
                    void SetSwitchPrivateLink(const std::string& _switchPrivateLink);

                    /**
                     * 判断参数 SwitchPrivateLink 是否已赋值
                     * @return SwitchPrivateLink 是否已赋值
                     * 
                     */
                    bool SwitchPrivateLinkHasBeenSet() const;

                    /**
                     * 获取<p>启用Cerebro</p>
                     * @return EnableCerebro <p>启用Cerebro</p>
                     * 
                     */
                    bool GetEnableCerebro() const;

                    /**
                     * 设置<p>启用Cerebro</p>
                     * @param _enableCerebro <p>启用Cerebro</p>
                     * 
                     */
                    void SetEnableCerebro(const bool& _enableCerebro);

                    /**
                     * 判断参数 EnableCerebro 是否已赋值
                     * @return EnableCerebro 是否已赋值
                     * 
                     */
                    bool EnableCerebroHasBeenSet() const;

                    /**
                     * 获取<p>Cerebro公网访问状态<br>OPEN 开启<br>CLOSE 关闭</p>
                     * @return CerebroPublicAccess <p>Cerebro公网访问状态<br>OPEN 开启<br>CLOSE 关闭</p>
                     * 
                     */
                    std::string GetCerebroPublicAccess() const;

                    /**
                     * 设置<p>Cerebro公网访问状态<br>OPEN 开启<br>CLOSE 关闭</p>
                     * @param _cerebroPublicAccess <p>Cerebro公网访问状态<br>OPEN 开启<br>CLOSE 关闭</p>
                     * 
                     */
                    void SetCerebroPublicAccess(const std::string& _cerebroPublicAccess);

                    /**
                     * 判断参数 CerebroPublicAccess 是否已赋值
                     * @return CerebroPublicAccess 是否已赋值
                     * 
                     */
                    bool CerebroPublicAccessHasBeenSet() const;

                    /**
                     * 获取<p>Cerebro内网访问状态<br>OPEN 开启<br>CLOSE 关闭</p>
                     * @return CerebroPrivateAccess <p>Cerebro内网访问状态<br>OPEN 开启<br>CLOSE 关闭</p>
                     * 
                     */
                    std::string GetCerebroPrivateAccess() const;

                    /**
                     * 设置<p>Cerebro内网访问状态<br>OPEN 开启<br>CLOSE 关闭</p>
                     * @param _cerebroPrivateAccess <p>Cerebro内网访问状态<br>OPEN 开启<br>CLOSE 关闭</p>
                     * 
                     */
                    void SetCerebroPrivateAccess(const std::string& _cerebroPrivateAccess);

                    /**
                     * 判断参数 CerebroPrivateAccess 是否已赋值
                     * @return CerebroPrivateAccess 是否已赋值
                     * 
                     */
                    bool CerebroPrivateAccessHasBeenSet() const;

                    /**
                     * 获取<p>新增或修改的配置组信息</p>
                     * @return EsConfigSet <p>新增或修改的配置组信息</p>
                     * 
                     */
                    EsConfigSetInfo GetEsConfigSet() const;

                    /**
                     * 设置<p>新增或修改的配置组信息</p>
                     * @param _esConfigSet <p>新增或修改的配置组信息</p>
                     * 
                     */
                    void SetEsConfigSet(const EsConfigSetInfo& _esConfigSet);

                    /**
                     * 判断参数 EsConfigSet 是否已赋值
                     * @return EsConfigSet 是否已赋值
                     * 
                     */
                    bool EsConfigSetHasBeenSet() const;

                    /**
                     * 获取<p>可维护时间段</p>
                     * @return OperationDuration <p>可维护时间段</p>
                     * 
                     */
                    OperationDurationUpdated GetOperationDuration() const;

                    /**
                     * 设置<p>可维护时间段</p>
                     * @param _operationDuration <p>可维护时间段</p>
                     * 
                     */
                    void SetOperationDuration(const OperationDurationUpdated& _operationDuration);

                    /**
                     * 判断参数 OperationDuration 是否已赋值
                     * @return OperationDuration 是否已赋值
                     * 
                     */
                    bool OperationDurationHasBeenSet() const;

                    /**
                     * 获取<p>是否开启Alerting 外网告警输出：<br>OPEN 开启<br>CLOSE 关闭</p>
                     * @return KibanaAlteringPublicAccess <p>是否开启Alerting 外网告警输出：<br>OPEN 开启<br>CLOSE 关闭</p>
                     * 
                     */
                    std::string GetKibanaAlteringPublicAccess() const;

                    /**
                     * 设置<p>是否开启Alerting 外网告警输出：<br>OPEN 开启<br>CLOSE 关闭</p>
                     * @param _kibanaAlteringPublicAccess <p>是否开启Alerting 外网告警输出：<br>OPEN 开启<br>CLOSE 关闭</p>
                     * 
                     */
                    void SetKibanaAlteringPublicAccess(const std::string& _kibanaAlteringPublicAccess);

                    /**
                     * 判断参数 KibanaAlteringPublicAccess 是否已赋值
                     * @return KibanaAlteringPublicAccess 是否已赋值
                     * 
                     */
                    bool KibanaAlteringPublicAccessHasBeenSet() const;

                    /**
                     * 获取<p>kibana内网自定义域名</p>
                     * @return KibanaPrivateDomain <p>kibana内网自定义域名</p>
                     * 
                     */
                    std::string GetKibanaPrivateDomain() const;

                    /**
                     * 设置<p>kibana内网自定义域名</p>
                     * @param _kibanaPrivateDomain <p>kibana内网自定义域名</p>
                     * 
                     */
                    void SetKibanaPrivateDomain(const std::string& _kibanaPrivateDomain);

                    /**
                     * 判断参数 KibanaPrivateDomain 是否已赋值
                     * @return KibanaPrivateDomain 是否已赋值
                     * 
                     */
                    bool KibanaPrivateDomainHasBeenSet() const;

                    /**
                     * 获取<p>cerebro内网自定义域名</p>
                     * @return CerebroPrivateDomain <p>cerebro内网自定义域名</p>
                     * 
                     */
                    std::string GetCerebroPrivateDomain() const;

                    /**
                     * 设置<p>cerebro内网自定义域名</p>
                     * @param _cerebroPrivateDomain <p>cerebro内网自定义域名</p>
                     * 
                     */
                    void SetCerebroPrivateDomain(const std::string& _cerebroPrivateDomain);

                    /**
                     * 判断参数 CerebroPrivateDomain 是否已赋值
                     * @return CerebroPrivateDomain 是否已赋值
                     * 
                     */
                    bool CerebroPrivateDomainHasBeenSet() const;

                    /**
                     * 获取<p>变更为https集群，默认是http</p>
                     * @return Protocol <p>变更为https集群，默认是http</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>变更为https集群，默认是http</p>
                     * @param _protocol <p>变更为https集群，默认是http</p>
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取<p>节点出站访问详细信息</p>
                     * @return OutboundPublicAcls <p>节点出站访问详细信息</p>
                     * 
                     */
                    std::vector<OutboundPublicAcl> GetOutboundPublicAcls() const;

                    /**
                     * 设置<p>节点出站访问详细信息</p>
                     * @param _outboundPublicAcls <p>节点出站访问详细信息</p>
                     * 
                     */
                    void SetOutboundPublicAcls(const std::vector<OutboundPublicAcl>& _outboundPublicAcls);

                    /**
                     * 判断参数 OutboundPublicAcls 是否已赋值
                     * @return OutboundPublicAcls 是否已赋值
                     * 
                     */
                    bool OutboundPublicAclsHasBeenSet() const;

                    /**
                     * 获取<p>节点出站访问操作<br>OPEN 开启<br>CLOSE 关闭</p>
                     * @return OutboundPublicAccess <p>节点出站访问操作<br>OPEN 开启<br>CLOSE 关闭</p>
                     * 
                     */
                    std::string GetOutboundPublicAccess() const;

                    /**
                     * 设置<p>节点出站访问操作<br>OPEN 开启<br>CLOSE 关闭</p>
                     * @param _outboundPublicAccess <p>节点出站访问操作<br>OPEN 开启<br>CLOSE 关闭</p>
                     * 
                     */
                    void SetOutboundPublicAccess(const std::string& _outboundPublicAccess);

                    /**
                     * 判断参数 OutboundPublicAccess 是否已赋值
                     * @return OutboundPublicAccess 是否已赋值
                     * 
                     */
                    bool OutboundPublicAccessHasBeenSet() const;

                    /**
                     * 获取<p>cvm延迟上架参数</p>
                     * @return CvmDelayOnlineTime <p>cvm延迟上架参数</p>
                     * 
                     */
                    uint64_t GetCvmDelayOnlineTime() const;

                    /**
                     * 设置<p>cvm延迟上架参数</p>
                     * @param _cvmDelayOnlineTime <p>cvm延迟上架参数</p>
                     * 
                     */
                    void SetCvmDelayOnlineTime(const uint64_t& _cvmDelayOnlineTime);

                    /**
                     * 判断参数 CvmDelayOnlineTime 是否已赋值
                     * @return CvmDelayOnlineTime 是否已赋值
                     * 
                     */
                    bool CvmDelayOnlineTimeHasBeenSet() const;

                    /**
                     * 获取<p>分片迁移并发数</p>
                     * @return ShardAllocationConcurrents <p>分片迁移并发数</p>
                     * 
                     */
                    uint64_t GetShardAllocationConcurrents() const;

                    /**
                     * 设置<p>分片迁移并发数</p>
                     * @param _shardAllocationConcurrents <p>分片迁移并发数</p>
                     * 
                     */
                    void SetShardAllocationConcurrents(const uint64_t& _shardAllocationConcurrents);

                    /**
                     * 判断参数 ShardAllocationConcurrents 是否已赋值
                     * @return ShardAllocationConcurrents 是否已赋值
                     * 
                     */
                    bool ShardAllocationConcurrentsHasBeenSet() const;

                    /**
                     * 获取<p>分片迁移并发速度</p>
                     * @return ShardAllocationBytes <p>分片迁移并发速度</p>
                     * 
                     */
                    uint64_t GetShardAllocationBytes() const;

                    /**
                     * 设置<p>分片迁移并发速度</p>
                     * @param _shardAllocationBytes <p>分片迁移并发速度</p>
                     * 
                     */
                    void SetShardAllocationBytes(const uint64_t& _shardAllocationBytes);

                    /**
                     * 判断参数 ShardAllocationBytes 是否已赋值
                     * @return ShardAllocationBytes 是否已赋值
                     * 
                     */
                    bool ShardAllocationBytesHasBeenSet() const;

                    /**
                     * 获取<p>读写分离模式：-1-不开启，1-本地读写分离，2-远端读写分离</p>
                     * @return ReadWriteMode <p>读写分离模式：-1-不开启，1-本地读写分离，2-远端读写分离</p>
                     * 
                     */
                    int64_t GetReadWriteMode() const;

                    /**
                     * 设置<p>读写分离模式：-1-不开启，1-本地读写分离，2-远端读写分离</p>
                     * @param _readWriteMode <p>读写分离模式：-1-不开启，1-本地读写分离，2-远端读写分离</p>
                     * 
                     */
                    void SetReadWriteMode(const int64_t& _readWriteMode);

                    /**
                     * 判断参数 ReadWriteMode 是否已赋值
                     * @return ReadWriteMode 是否已赋值
                     * 
                     */
                    bool ReadWriteModeHasBeenSet() const;

                    /**
                     * 获取<p>是否开启置放群组异步任务</p>
                     * @return EnableScheduleRecoverGroup <p>是否开启置放群组异步任务</p>
                     * 
                     */
                    bool GetEnableScheduleRecoverGroup() const;

                    /**
                     * 设置<p>是否开启置放群组异步任务</p>
                     * @param _enableScheduleRecoverGroup <p>是否开启置放群组异步任务</p>
                     * 
                     */
                    void SetEnableScheduleRecoverGroup(const bool& _enableScheduleRecoverGroup);

                    /**
                     * 判断参数 EnableScheduleRecoverGroup 是否已赋值
                     * @return EnableScheduleRecoverGroup 是否已赋值
                     * 
                     */
                    bool EnableScheduleRecoverGroupHasBeenSet() const;

                    /**
                     * 获取<p>置放群组异步任务可维护时间段</p>
                     * @return EnableScheduleOperationDuration <p>置放群组异步任务可维护时间段</p>
                     * 
                     */
                    EnableScheduleOperationDuration GetEnableScheduleOperationDuration() const;

                    /**
                     * 设置<p>置放群组异步任务可维护时间段</p>
                     * @param _enableScheduleOperationDuration <p>置放群组异步任务可维护时间段</p>
                     * 
                     */
                    void SetEnableScheduleOperationDuration(const EnableScheduleOperationDuration& _enableScheduleOperationDuration);

                    /**
                     * 判断参数 EnableScheduleOperationDuration 是否已赋值
                     * @return EnableScheduleOperationDuration 是否已赋值
                     * 
                     */
                    bool EnableScheduleOperationDurationHasBeenSet() const;

                    /**
                     * 获取<p>开启集群保护：OPEN-开启，CLOSE-关闭</p>
                     * @return EnableDestroyProtection <p>开启集群保护：OPEN-开启，CLOSE-关闭</p>
                     * 
                     */
                    std::string GetEnableDestroyProtection() const;

                    /**
                     * 设置<p>开启集群保护：OPEN-开启，CLOSE-关闭</p>
                     * @param _enableDestroyProtection <p>开启集群保护：OPEN-开启，CLOSE-关闭</p>
                     * 
                     */
                    void SetEnableDestroyProtection(const std::string& _enableDestroyProtection);

                    /**
                     * 判断参数 EnableDestroyProtection 是否已赋值
                     * @return EnableDestroyProtection 是否已赋值
                     * 
                     */
                    bool EnableDestroyProtectionHasBeenSet() const;

                    /**
                     * 获取<p>自动扩盘参数</p>
                     * @return AutoScaleDiskInfoList <p>自动扩盘参数</p>
                     * 
                     */
                    std::vector<AutoScaleDiskInfo> GetAutoScaleDiskInfoList() const;

                    /**
                     * 设置<p>自动扩盘参数</p>
                     * @param _autoScaleDiskInfoList <p>自动扩盘参数</p>
                     * 
                     */
                    void SetAutoScaleDiskInfoList(const std::vector<AutoScaleDiskInfo>& _autoScaleDiskInfoList);

                    /**
                     * 判断参数 AutoScaleDiskInfoList 是否已赋值
                     * @return AutoScaleDiskInfoList 是否已赋值
                     * 
                     */
                    bool AutoScaleDiskInfoListHasBeenSet() const;

                    /**
                     * 获取<p>自动扩盘删除参数</p>
                     * @return AutoScaleDiskDeleteNodeTypeList <p>自动扩盘删除参数</p>
                     * 
                     */
                    std::vector<std::string> GetAutoScaleDiskDeleteNodeTypeList() const;

                    /**
                     * 设置<p>自动扩盘删除参数</p>
                     * @param _autoScaleDiskDeleteNodeTypeList <p>自动扩盘删除参数</p>
                     * 
                     */
                    void SetAutoScaleDiskDeleteNodeTypeList(const std::vector<std::string>& _autoScaleDiskDeleteNodeTypeList);

                    /**
                     * 判断参数 AutoScaleDiskDeleteNodeTypeList 是否已赋值
                     * @return AutoScaleDiskDeleteNodeTypeList 是否已赋值
                     * 
                     */
                    bool AutoScaleDiskDeleteNodeTypeListHasBeenSet() const;

                    /**
                     * 获取<p>其他附加配置，jvm或者yml</p>
                     * @return OtherConfig <p>其他附加配置，jvm或者yml</p>
                     * 
                     */
                    OtherConfig GetOtherConfig() const;

                    /**
                     * 设置<p>其他附加配置，jvm或者yml</p>
                     * @param _otherConfig <p>其他附加配置，jvm或者yml</p>
                     * 
                     */
                    void SetOtherConfig(const OtherConfig& _otherConfig);

                    /**
                     * 判断参数 OtherConfig 是否已赋值
                     * @return OtherConfig 是否已赋值
                     * 
                     */
                    bool OtherConfigHasBeenSet() const;

                    /**
                     * 获取<p>滚动升降配时是否等待集群恢复Green再滚动下一个节点</p>
                     * @return WaitGreen <p>滚动升降配时是否等待集群恢复Green再滚动下一个节点</p>
                     * 
                     */
                    std::string GetWaitGreen() const;

                    /**
                     * 设置<p>滚动升降配时是否等待集群恢复Green再滚动下一个节点</p>
                     * @param _waitGreen <p>滚动升降配时是否等待集群恢复Green再滚动下一个节点</p>
                     * 
                     */
                    void SetWaitGreen(const std::string& _waitGreen);

                    /**
                     * 判断参数 WaitGreen 是否已赋值
                     * @return WaitGreen 是否已赋值
                     * 
                     */
                    bool WaitGreenHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>实例名称（1-50 个英文、汉字、数字、连接线-或下划线_）</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>已废弃请使用NodeInfoList<br>节点个数（2-50个）</p>
                     */
                    uint64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * <p>ES配置项（JSON格式字符串）</p>
                     */
                    std::string m_esConfig;
                    bool m_esConfigHasBeenSet;

                    /**
                     * <p>默认用户elastic的密码（8到16位，至少包括两项（[a-z,A-Z],[0-9]和[-!@#$%&amp;^*+=_:;,.?]的特殊符号）</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>可视化组件（Kibana、Cerebro）的公网访问策略</p>
                     */
                    EsAcl m_esAcl;
                    bool m_esAclHasBeenSet;

                    /**
                     * <p>已废弃请使用NodeInfoList<br>磁盘大小（单位GB）</p>
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * <p>已废弃请使用NodeInfoList<br>节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li></p>
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * <p>已废弃请使用NodeInfoList<br>专用主节点个数（只支持3个或5个）</p>
                     */
                    uint64_t m_masterNodeNum;
                    bool m_masterNodeNumHasBeenSet;

                    /**
                     * <p>已废弃请使用NodeInfoList<br>专用主节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li></p>
                     */
                    std::string m_masterNodeType;
                    bool m_masterNodeTypeHasBeenSet;

                    /**
                     * <p>已废弃请使用NodeInfoList<br>专用主节点磁盘大小（单位GB系统默认配置为50GB,暂不支持自定义）</p>
                     */
                    uint64_t m_masterNodeDiskSize;
                    bool m_masterNodeDiskSizeHasBeenSet;

                    /**
                     * <p>更新配置时是否强制重启<li>true强制重启</li><li>false不强制重启</li>当前仅更新EsConfig时需要设置，默认值为false</p>
                     */
                    bool m_forceRestart;
                    bool m_forceRestartHasBeenSet;

                    /**
                     * <p>COS自动备份信息</p>
                     */
                    CosBackup m_cosBackup;
                    bool m_cosBackupHasBeenSet;

                    /**
                     * <p>节点信息列表，可以只传递要更新的节点及其对应的规格信息。支持的操作包括<li>修改一种节点的个数</li><li>修改一种节点的节点规格及磁盘大小</li><li>增加一种节点类型（需要同时指定该节点的类型，个数，规格，磁盘等信息）</li>上述操作一次只能进行一种，且磁盘类型不支持修改</p>
                     */
                    std::vector<NodeInfo> m_nodeInfoList;
                    bool m_nodeInfoListHasBeenSet;

                    /**
                     * <p>ES集群公网访问状态<br>OPEN 开启<br>CLOSE 关闭</p>
                     */
                    std::string m_publicAccess;
                    bool m_publicAccessHasBeenSet;

                    /**
                     * <p>公网访问控制列表</p>
                     */
                    EsPublicAcl m_esPublicAcl;
                    bool m_esPublicAclHasBeenSet;

                    /**
                     * <p>Kibana公网访问状态<br>OPEN 开启<br>CLOSE 关闭</p>
                     */
                    std::string m_kibanaPublicAccess;
                    bool m_kibanaPublicAccessHasBeenSet;

                    /**
                     * <p>Kibana内网访问状态<br>OPEN 开启<br>CLOSE 关闭</p>
                     */
                    std::string m_kibanaPrivateAccess;
                    bool m_kibanaPrivateAccessHasBeenSet;

                    /**
                     * <p>ES 6.8及以上版本基础版开启或关闭用户认证</p>
                     */
                    int64_t m_basicSecurityType;
                    bool m_basicSecurityTypeHasBeenSet;

                    /**
                     * <p>Kibana内网端口</p>
                     */
                    uint64_t m_kibanaPrivatePort;
                    bool m_kibanaPrivatePortHasBeenSet;

                    /**
                     * <p>0: 蓝绿变更方式扩容，集群不重启 （默认） 1: 磁盘解挂载扩容，集群滚动重启</p>
                     */
                    int64_t m_scaleType;
                    bool m_scaleTypeHasBeenSet;

                    /**
                     * <p>多可用区部署</p>
                     */
                    std::vector<ZoneDetail> m_multiZoneInfo;
                    bool m_multiZoneInfoHasBeenSet;

                    /**
                     * <p>场景化模板类型 -1：不启用 1：通用 2：日志 3：搜索</p>
                     */
                    int64_t m_sceneType;
                    bool m_sceneTypeHasBeenSet;

                    /**
                     * <p>Kibana配置项（JSON格式字符串）</p>
                     */
                    std::string m_kibanaConfig;
                    bool m_kibanaConfigHasBeenSet;

                    /**
                     * <p>可视化节点配置</p>
                     */
                    WebNodeTypeInfo m_webNodeTypeInfo;
                    bool m_webNodeTypeInfoHasBeenSet;

                    /**
                     * <p>切换到新网络架构</p>
                     */
                    std::string m_switchPrivateLink;
                    bool m_switchPrivateLinkHasBeenSet;

                    /**
                     * <p>启用Cerebro</p>
                     */
                    bool m_enableCerebro;
                    bool m_enableCerebroHasBeenSet;

                    /**
                     * <p>Cerebro公网访问状态<br>OPEN 开启<br>CLOSE 关闭</p>
                     */
                    std::string m_cerebroPublicAccess;
                    bool m_cerebroPublicAccessHasBeenSet;

                    /**
                     * <p>Cerebro内网访问状态<br>OPEN 开启<br>CLOSE 关闭</p>
                     */
                    std::string m_cerebroPrivateAccess;
                    bool m_cerebroPrivateAccessHasBeenSet;

                    /**
                     * <p>新增或修改的配置组信息</p>
                     */
                    EsConfigSetInfo m_esConfigSet;
                    bool m_esConfigSetHasBeenSet;

                    /**
                     * <p>可维护时间段</p>
                     */
                    OperationDurationUpdated m_operationDuration;
                    bool m_operationDurationHasBeenSet;

                    /**
                     * <p>是否开启Alerting 外网告警输出：<br>OPEN 开启<br>CLOSE 关闭</p>
                     */
                    std::string m_kibanaAlteringPublicAccess;
                    bool m_kibanaAlteringPublicAccessHasBeenSet;

                    /**
                     * <p>kibana内网自定义域名</p>
                     */
                    std::string m_kibanaPrivateDomain;
                    bool m_kibanaPrivateDomainHasBeenSet;

                    /**
                     * <p>cerebro内网自定义域名</p>
                     */
                    std::string m_cerebroPrivateDomain;
                    bool m_cerebroPrivateDomainHasBeenSet;

                    /**
                     * <p>变更为https集群，默认是http</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>节点出站访问详细信息</p>
                     */
                    std::vector<OutboundPublicAcl> m_outboundPublicAcls;
                    bool m_outboundPublicAclsHasBeenSet;

                    /**
                     * <p>节点出站访问操作<br>OPEN 开启<br>CLOSE 关闭</p>
                     */
                    std::string m_outboundPublicAccess;
                    bool m_outboundPublicAccessHasBeenSet;

                    /**
                     * <p>cvm延迟上架参数</p>
                     */
                    uint64_t m_cvmDelayOnlineTime;
                    bool m_cvmDelayOnlineTimeHasBeenSet;

                    /**
                     * <p>分片迁移并发数</p>
                     */
                    uint64_t m_shardAllocationConcurrents;
                    bool m_shardAllocationConcurrentsHasBeenSet;

                    /**
                     * <p>分片迁移并发速度</p>
                     */
                    uint64_t m_shardAllocationBytes;
                    bool m_shardAllocationBytesHasBeenSet;

                    /**
                     * <p>读写分离模式：-1-不开启，1-本地读写分离，2-远端读写分离</p>
                     */
                    int64_t m_readWriteMode;
                    bool m_readWriteModeHasBeenSet;

                    /**
                     * <p>是否开启置放群组异步任务</p>
                     */
                    bool m_enableScheduleRecoverGroup;
                    bool m_enableScheduleRecoverGroupHasBeenSet;

                    /**
                     * <p>置放群组异步任务可维护时间段</p>
                     */
                    EnableScheduleOperationDuration m_enableScheduleOperationDuration;
                    bool m_enableScheduleOperationDurationHasBeenSet;

                    /**
                     * <p>开启集群保护：OPEN-开启，CLOSE-关闭</p>
                     */
                    std::string m_enableDestroyProtection;
                    bool m_enableDestroyProtectionHasBeenSet;

                    /**
                     * <p>自动扩盘参数</p>
                     */
                    std::vector<AutoScaleDiskInfo> m_autoScaleDiskInfoList;
                    bool m_autoScaleDiskInfoListHasBeenSet;

                    /**
                     * <p>自动扩盘删除参数</p>
                     */
                    std::vector<std::string> m_autoScaleDiskDeleteNodeTypeList;
                    bool m_autoScaleDiskDeleteNodeTypeListHasBeenSet;

                    /**
                     * <p>其他附加配置，jvm或者yml</p>
                     */
                    OtherConfig m_otherConfig;
                    bool m_otherConfigHasBeenSet;

                    /**
                     * <p>滚动升降配时是否等待集群恢复Green再滚动下一个节点</p>
                     */
                    std::string m_waitGreen;
                    bool m_waitGreenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_UPDATEINSTANCEREQUEST_H_
