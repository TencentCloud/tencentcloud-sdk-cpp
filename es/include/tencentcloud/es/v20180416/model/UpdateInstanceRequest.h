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
                     * 获取实例名称（1-50 个英文、汉字、数字、连接线-或下划线_）
                     * @return InstanceName 实例名称（1-50 个英文、汉字、数字、连接线-或下划线_）
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称（1-50 个英文、汉字、数字、连接线-或下划线_）
                     * @param _instanceName 实例名称（1-50 个英文、汉字、数字、连接线-或下划线_）
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
                     * 获取已废弃请使用NodeInfoList
节点个数（2-50个）
                     * @return NodeNum 已废弃请使用NodeInfoList
节点个数（2-50个）
                     * 
                     */
                    uint64_t GetNodeNum() const;

                    /**
                     * 设置已废弃请使用NodeInfoList
节点个数（2-50个）
                     * @param _nodeNum 已废弃请使用NodeInfoList
节点个数（2-50个）
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
                     * 获取ES配置项（JSON格式字符串）
                     * @return EsConfig ES配置项（JSON格式字符串）
                     * 
                     */
                    std::string GetEsConfig() const;

                    /**
                     * 设置ES配置项（JSON格式字符串）
                     * @param _esConfig ES配置项（JSON格式字符串）
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
                     * 获取默认用户elastic的密码（8到16位，至少包括两项（[a-z,A-Z],[0-9]和[-!@#$%&^*+=_:;,.?]的特殊符号）
                     * @return Password 默认用户elastic的密码（8到16位，至少包括两项（[a-z,A-Z],[0-9]和[-!@#$%&^*+=_:;,.?]的特殊符号）
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置默认用户elastic的密码（8到16位，至少包括两项（[a-z,A-Z],[0-9]和[-!@#$%&^*+=_:;,.?]的特殊符号）
                     * @param _password 默认用户elastic的密码（8到16位，至少包括两项（[a-z,A-Z],[0-9]和[-!@#$%&^*+=_:;,.?]的特殊符号）
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
                     * 获取可视化组件（Kibana、Cerebro）的公网访问策略
                     * @return EsAcl 可视化组件（Kibana、Cerebro）的公网访问策略
                     * 
                     */
                    EsAcl GetEsAcl() const;

                    /**
                     * 设置可视化组件（Kibana、Cerebro）的公网访问策略
                     * @param _esAcl 可视化组件（Kibana、Cerebro）的公网访问策略
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
                     * 获取已废弃请使用NodeInfoList
磁盘大小（单位GB）
                     * @return DiskSize 已废弃请使用NodeInfoList
磁盘大小（单位GB）
                     * 
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置已废弃请使用NodeInfoList
磁盘大小（单位GB）
                     * @param _diskSize 已废弃请使用NodeInfoList
磁盘大小（单位GB）
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
                     * 获取已废弃请使用NodeInfoList
节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
                     * @return NodeType 已废弃请使用NodeInfoList
节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置已废弃请使用NodeInfoList
节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
                     * @param _nodeType 已废弃请使用NodeInfoList
节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
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
                     * 获取已废弃请使用NodeInfoList
专用主节点个数（只支持3个或5个）
                     * @return MasterNodeNum 已废弃请使用NodeInfoList
专用主节点个数（只支持3个或5个）
                     * 
                     */
                    uint64_t GetMasterNodeNum() const;

                    /**
                     * 设置已废弃请使用NodeInfoList
专用主节点个数（只支持3个或5个）
                     * @param _masterNodeNum 已废弃请使用NodeInfoList
专用主节点个数（只支持3个或5个）
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
                     * 获取已废弃请使用NodeInfoList
专用主节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
                     * @return MasterNodeType 已废弃请使用NodeInfoList
专用主节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
                     * 
                     */
                    std::string GetMasterNodeType() const;

                    /**
                     * 设置已废弃请使用NodeInfoList
专用主节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
                     * @param _masterNodeType 已废弃请使用NodeInfoList
专用主节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
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
                     * 获取已废弃请使用NodeInfoList
专用主节点磁盘大小（单位GB系统默认配置为50GB,暂不支持自定义）
                     * @return MasterNodeDiskSize 已废弃请使用NodeInfoList
专用主节点磁盘大小（单位GB系统默认配置为50GB,暂不支持自定义）
                     * 
                     */
                    uint64_t GetMasterNodeDiskSize() const;

                    /**
                     * 设置已废弃请使用NodeInfoList
专用主节点磁盘大小（单位GB系统默认配置为50GB,暂不支持自定义）
                     * @param _masterNodeDiskSize 已废弃请使用NodeInfoList
专用主节点磁盘大小（单位GB系统默认配置为50GB,暂不支持自定义）
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
                     * 获取更新配置时是否强制重启<li>true强制重启</li><li>false不强制重启</li>当前仅更新EsConfig时需要设置，默认值为false
                     * @return ForceRestart 更新配置时是否强制重启<li>true强制重启</li><li>false不强制重启</li>当前仅更新EsConfig时需要设置，默认值为false
                     * 
                     */
                    bool GetForceRestart() const;

                    /**
                     * 设置更新配置时是否强制重启<li>true强制重启</li><li>false不强制重启</li>当前仅更新EsConfig时需要设置，默认值为false
                     * @param _forceRestart 更新配置时是否强制重启<li>true强制重启</li><li>false不强制重启</li>当前仅更新EsConfig时需要设置，默认值为false
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
                     * 获取ES集群公网访问状态
OPEN 开启
CLOSE 关闭
                     * @return PublicAccess ES集群公网访问状态
OPEN 开启
CLOSE 关闭
                     * 
                     */
                    std::string GetPublicAccess() const;

                    /**
                     * 设置ES集群公网访问状态
OPEN 开启
CLOSE 关闭
                     * @param _publicAccess ES集群公网访问状态
OPEN 开启
CLOSE 关闭
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
                     * 获取公网访问控制列表
                     * @return EsPublicAcl 公网访问控制列表
                     * 
                     */
                    EsPublicAcl GetEsPublicAcl() const;

                    /**
                     * 设置公网访问控制列表
                     * @param _esPublicAcl 公网访问控制列表
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
                     * 获取Kibana公网访问状态
OPEN 开启
CLOSE 关闭
                     * @return KibanaPublicAccess Kibana公网访问状态
OPEN 开启
CLOSE 关闭
                     * 
                     */
                    std::string GetKibanaPublicAccess() const;

                    /**
                     * 设置Kibana公网访问状态
OPEN 开启
CLOSE 关闭
                     * @param _kibanaPublicAccess Kibana公网访问状态
OPEN 开启
CLOSE 关闭
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
                     * 获取Kibana内网访问状态
OPEN 开启
CLOSE 关闭
                     * @return KibanaPrivateAccess Kibana内网访问状态
OPEN 开启
CLOSE 关闭
                     * 
                     */
                    std::string GetKibanaPrivateAccess() const;

                    /**
                     * 设置Kibana内网访问状态
OPEN 开启
CLOSE 关闭
                     * @param _kibanaPrivateAccess Kibana内网访问状态
OPEN 开启
CLOSE 关闭
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
                     * 获取ES 6.8及以上版本基础版开启或关闭用户认证
                     * @return BasicSecurityType ES 6.8及以上版本基础版开启或关闭用户认证
                     * 
                     */
                    int64_t GetBasicSecurityType() const;

                    /**
                     * 设置ES 6.8及以上版本基础版开启或关闭用户认证
                     * @param _basicSecurityType ES 6.8及以上版本基础版开启或关闭用户认证
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
                     * 获取Kibana内网端口
                     * @return KibanaPrivatePort Kibana内网端口
                     * 
                     */
                    uint64_t GetKibanaPrivatePort() const;

                    /**
                     * 设置Kibana内网端口
                     * @param _kibanaPrivatePort Kibana内网端口
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
                     * 获取场景化模板类型 -1：不启用 1：通用 2：日志 3：搜索
                     * @return SceneType 场景化模板类型 -1：不启用 1：通用 2：日志 3：搜索
                     * 
                     */
                    int64_t GetSceneType() const;

                    /**
                     * 设置场景化模板类型 -1：不启用 1：通用 2：日志 3：搜索
                     * @param _sceneType 场景化模板类型 -1：不启用 1：通用 2：日志 3：搜索
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
                     * 获取Kibana配置项（JSON格式字符串）
                     * @return KibanaConfig Kibana配置项（JSON格式字符串）
                     * 
                     */
                    std::string GetKibanaConfig() const;

                    /**
                     * 设置Kibana配置项（JSON格式字符串）
                     * @param _kibanaConfig Kibana配置项（JSON格式字符串）
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
                     * 获取切换到新网络架构
                     * @return SwitchPrivateLink 切换到新网络架构
                     * 
                     */
                    std::string GetSwitchPrivateLink() const;

                    /**
                     * 设置切换到新网络架构
                     * @param _switchPrivateLink 切换到新网络架构
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
                     * 获取启用Cerebro
                     * @return EnableCerebro 启用Cerebro
                     * 
                     */
                    bool GetEnableCerebro() const;

                    /**
                     * 设置启用Cerebro
                     * @param _enableCerebro 启用Cerebro
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
                     * 获取Cerebro公网访问状态
OPEN 开启
CLOSE 关闭
                     * @return CerebroPublicAccess Cerebro公网访问状态
OPEN 开启
CLOSE 关闭
                     * 
                     */
                    std::string GetCerebroPublicAccess() const;

                    /**
                     * 设置Cerebro公网访问状态
OPEN 开启
CLOSE 关闭
                     * @param _cerebroPublicAccess Cerebro公网访问状态
OPEN 开启
CLOSE 关闭
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
                     * 获取Cerebro内网访问状态
OPEN 开启
CLOSE 关闭
                     * @return CerebroPrivateAccess Cerebro内网访问状态
OPEN 开启
CLOSE 关闭
                     * 
                     */
                    std::string GetCerebroPrivateAccess() const;

                    /**
                     * 设置Cerebro内网访问状态
OPEN 开启
CLOSE 关闭
                     * @param _cerebroPrivateAccess Cerebro内网访问状态
OPEN 开启
CLOSE 关闭
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
                     * 获取新增或修改的配置组信息
                     * @return EsConfigSet 新增或修改的配置组信息
                     * 
                     */
                    EsConfigSetInfo GetEsConfigSet() const;

                    /**
                     * 设置新增或修改的配置组信息
                     * @param _esConfigSet 新增或修改的配置组信息
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
                     * 获取可维护时间段
                     * @return OperationDuration 可维护时间段
                     * 
                     */
                    OperationDurationUpdated GetOperationDuration() const;

                    /**
                     * 设置可维护时间段
                     * @param _operationDuration 可维护时间段
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
                     * 获取是否开启Alerting 外网告警输出：
OPEN 开启
CLOSE 关闭
                     * @return KibanaAlteringPublicAccess 是否开启Alerting 外网告警输出：
OPEN 开启
CLOSE 关闭
                     * 
                     */
                    std::string GetKibanaAlteringPublicAccess() const;

                    /**
                     * 设置是否开启Alerting 外网告警输出：
OPEN 开启
CLOSE 关闭
                     * @param _kibanaAlteringPublicAccess 是否开启Alerting 外网告警输出：
OPEN 开启
CLOSE 关闭
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
                     * 获取kibana内网自定义域名
                     * @return KibanaPrivateDomain kibana内网自定义域名
                     * 
                     */
                    std::string GetKibanaPrivateDomain() const;

                    /**
                     * 设置kibana内网自定义域名
                     * @param _kibanaPrivateDomain kibana内网自定义域名
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
                     * 获取cerebro内网自定义域名
                     * @return CerebroPrivateDomain cerebro内网自定义域名
                     * 
                     */
                    std::string GetCerebroPrivateDomain() const;

                    /**
                     * 设置cerebro内网自定义域名
                     * @param _cerebroPrivateDomain cerebro内网自定义域名
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
                     * 获取变更为https集群，默认是http
                     * @return Protocol 变更为https集群，默认是http
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置变更为https集群，默认是http
                     * @param _protocol 变更为https集群，默认是http
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
                     * 获取节点出站访问详细信息

                     * @return OutboundPublicAcls 节点出站访问详细信息

                     * 
                     */
                    std::vector<OutboundPublicAcl> GetOutboundPublicAcls() const;

                    /**
                     * 设置节点出站访问详细信息

                     * @param _outboundPublicAcls 节点出站访问详细信息

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
                     * 获取节点出站访问操作
OPEN 开启
CLOSE 关闭
                     * @return OutboundPublicAccess 节点出站访问操作
OPEN 开启
CLOSE 关闭
                     * 
                     */
                    std::string GetOutboundPublicAccess() const;

                    /**
                     * 设置节点出站访问操作
OPEN 开启
CLOSE 关闭
                     * @param _outboundPublicAccess 节点出站访问操作
OPEN 开启
CLOSE 关闭
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
                     * 获取cvm延迟上架参数
                     * @return CvmDelayOnlineTime cvm延迟上架参数
                     * 
                     */
                    uint64_t GetCvmDelayOnlineTime() const;

                    /**
                     * 设置cvm延迟上架参数
                     * @param _cvmDelayOnlineTime cvm延迟上架参数
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
                     * 获取分片迁移并发数
                     * @return ShardAllocationConcurrents 分片迁移并发数
                     * 
                     */
                    uint64_t GetShardAllocationConcurrents() const;

                    /**
                     * 设置分片迁移并发数
                     * @param _shardAllocationConcurrents 分片迁移并发数
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
                     * 获取分片迁移并发速度
                     * @return ShardAllocationBytes 分片迁移并发速度
                     * 
                     */
                    uint64_t GetShardAllocationBytes() const;

                    /**
                     * 设置分片迁移并发速度
                     * @param _shardAllocationBytes 分片迁移并发速度
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

                    /**
                     * 获取是否开启置放群组异步任务
                     * @return EnableScheduleRecoverGroup 是否开启置放群组异步任务
                     * 
                     */
                    bool GetEnableScheduleRecoverGroup() const;

                    /**
                     * 设置是否开启置放群组异步任务
                     * @param _enableScheduleRecoverGroup 是否开启置放群组异步任务
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
                     * 获取置放群组异步任务可维护时间段
                     * @return EnableScheduleOperationDuration 置放群组异步任务可维护时间段
                     * 
                     */
                    EnableScheduleOperationDuration GetEnableScheduleOperationDuration() const;

                    /**
                     * 设置置放群组异步任务可维护时间段
                     * @param _enableScheduleOperationDuration 置放群组异步任务可维护时间段
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
                     * 获取开启集群保护：OPEN-开启，CLOSE-关闭
                     * @return EnableDestroyProtection 开启集群保护：OPEN-开启，CLOSE-关闭
                     * 
                     */
                    std::string GetEnableDestroyProtection() const;

                    /**
                     * 设置开启集群保护：OPEN-开启，CLOSE-关闭
                     * @param _enableDestroyProtection 开启集群保护：OPEN-开启，CLOSE-关闭
                     * 
                     */
                    void SetEnableDestroyProtection(const std::string& _enableDestroyProtection);

                    /**
                     * 判断参数 EnableDestroyProtection 是否已赋值
                     * @return EnableDestroyProtection 是否已赋值
                     * 
                     */
                    bool EnableDestroyProtectionHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称（1-50 个英文、汉字、数字、连接线-或下划线_）
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 已废弃请使用NodeInfoList
节点个数（2-50个）
                     */
                    uint64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * ES配置项（JSON格式字符串）
                     */
                    std::string m_esConfig;
                    bool m_esConfigHasBeenSet;

                    /**
                     * 默认用户elastic的密码（8到16位，至少包括两项（[a-z,A-Z],[0-9]和[-!@#$%&^*+=_:;,.?]的特殊符号）
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 可视化组件（Kibana、Cerebro）的公网访问策略
                     */
                    EsAcl m_esAcl;
                    bool m_esAclHasBeenSet;

                    /**
                     * 已废弃请使用NodeInfoList
磁盘大小（单位GB）
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 已废弃请使用NodeInfoList
节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * 已废弃请使用NodeInfoList
专用主节点个数（只支持3个或5个）
                     */
                    uint64_t m_masterNodeNum;
                    bool m_masterNodeNumHasBeenSet;

                    /**
                     * 已废弃请使用NodeInfoList
专用主节点规格<li>ES.S1.SMALL2：1核2G</li><li>ES.S1.MEDIUM4：2核4G</li><li>ES.S1.MEDIUM8：2核8G</li><li>ES.S1.LARGE16：4核16G</li><li>ES.S1.2XLARGE32：8核32G</li><li>ES.S1.4XLARGE32：16核32G</li><li>ES.S1.4XLARGE64：16核64G</li>
                     */
                    std::string m_masterNodeType;
                    bool m_masterNodeTypeHasBeenSet;

                    /**
                     * 已废弃请使用NodeInfoList
专用主节点磁盘大小（单位GB系统默认配置为50GB,暂不支持自定义）
                     */
                    uint64_t m_masterNodeDiskSize;
                    bool m_masterNodeDiskSizeHasBeenSet;

                    /**
                     * 更新配置时是否强制重启<li>true强制重启</li><li>false不强制重启</li>当前仅更新EsConfig时需要设置，默认值为false
                     */
                    bool m_forceRestart;
                    bool m_forceRestartHasBeenSet;

                    /**
                     * COS自动备份信息
                     */
                    CosBackup m_cosBackup;
                    bool m_cosBackupHasBeenSet;

                    /**
                     * 节点信息列表，可以只传递要更新的节点及其对应的规格信息。支持的操作包括<li>修改一种节点的个数</li><li>修改一种节点的节点规格及磁盘大小</li><li>增加一种节点类型（需要同时指定该节点的类型，个数，规格，磁盘等信息）</li>上述操作一次只能进行一种，且磁盘类型不支持修改
                     */
                    std::vector<NodeInfo> m_nodeInfoList;
                    bool m_nodeInfoListHasBeenSet;

                    /**
                     * ES集群公网访问状态
OPEN 开启
CLOSE 关闭
                     */
                    std::string m_publicAccess;
                    bool m_publicAccessHasBeenSet;

                    /**
                     * 公网访问控制列表
                     */
                    EsPublicAcl m_esPublicAcl;
                    bool m_esPublicAclHasBeenSet;

                    /**
                     * Kibana公网访问状态
OPEN 开启
CLOSE 关闭
                     */
                    std::string m_kibanaPublicAccess;
                    bool m_kibanaPublicAccessHasBeenSet;

                    /**
                     * Kibana内网访问状态
OPEN 开启
CLOSE 关闭
                     */
                    std::string m_kibanaPrivateAccess;
                    bool m_kibanaPrivateAccessHasBeenSet;

                    /**
                     * ES 6.8及以上版本基础版开启或关闭用户认证
                     */
                    int64_t m_basicSecurityType;
                    bool m_basicSecurityTypeHasBeenSet;

                    /**
                     * Kibana内网端口
                     */
                    uint64_t m_kibanaPrivatePort;
                    bool m_kibanaPrivatePortHasBeenSet;

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
                     * 场景化模板类型 -1：不启用 1：通用 2：日志 3：搜索
                     */
                    int64_t m_sceneType;
                    bool m_sceneTypeHasBeenSet;

                    /**
                     * Kibana配置项（JSON格式字符串）
                     */
                    std::string m_kibanaConfig;
                    bool m_kibanaConfigHasBeenSet;

                    /**
                     * 可视化节点配置
                     */
                    WebNodeTypeInfo m_webNodeTypeInfo;
                    bool m_webNodeTypeInfoHasBeenSet;

                    /**
                     * 切换到新网络架构
                     */
                    std::string m_switchPrivateLink;
                    bool m_switchPrivateLinkHasBeenSet;

                    /**
                     * 启用Cerebro
                     */
                    bool m_enableCerebro;
                    bool m_enableCerebroHasBeenSet;

                    /**
                     * Cerebro公网访问状态
OPEN 开启
CLOSE 关闭
                     */
                    std::string m_cerebroPublicAccess;
                    bool m_cerebroPublicAccessHasBeenSet;

                    /**
                     * Cerebro内网访问状态
OPEN 开启
CLOSE 关闭
                     */
                    std::string m_cerebroPrivateAccess;
                    bool m_cerebroPrivateAccessHasBeenSet;

                    /**
                     * 新增或修改的配置组信息
                     */
                    EsConfigSetInfo m_esConfigSet;
                    bool m_esConfigSetHasBeenSet;

                    /**
                     * 可维护时间段
                     */
                    OperationDurationUpdated m_operationDuration;
                    bool m_operationDurationHasBeenSet;

                    /**
                     * 是否开启Alerting 外网告警输出：
OPEN 开启
CLOSE 关闭
                     */
                    std::string m_kibanaAlteringPublicAccess;
                    bool m_kibanaAlteringPublicAccessHasBeenSet;

                    /**
                     * kibana内网自定义域名
                     */
                    std::string m_kibanaPrivateDomain;
                    bool m_kibanaPrivateDomainHasBeenSet;

                    /**
                     * cerebro内网自定义域名
                     */
                    std::string m_cerebroPrivateDomain;
                    bool m_cerebroPrivateDomainHasBeenSet;

                    /**
                     * 变更为https集群，默认是http
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 节点出站访问详细信息

                     */
                    std::vector<OutboundPublicAcl> m_outboundPublicAcls;
                    bool m_outboundPublicAclsHasBeenSet;

                    /**
                     * 节点出站访问操作
OPEN 开启
CLOSE 关闭
                     */
                    std::string m_outboundPublicAccess;
                    bool m_outboundPublicAccessHasBeenSet;

                    /**
                     * cvm延迟上架参数
                     */
                    uint64_t m_cvmDelayOnlineTime;
                    bool m_cvmDelayOnlineTimeHasBeenSet;

                    /**
                     * 分片迁移并发数
                     */
                    uint64_t m_shardAllocationConcurrents;
                    bool m_shardAllocationConcurrentsHasBeenSet;

                    /**
                     * 分片迁移并发速度
                     */
                    uint64_t m_shardAllocationBytes;
                    bool m_shardAllocationBytesHasBeenSet;

                    /**
                     * 读写分离模式：-1-不开启，1-本地读写分离，2-远端读写分离
                     */
                    int64_t m_readWriteMode;
                    bool m_readWriteModeHasBeenSet;

                    /**
                     * 是否开启置放群组异步任务
                     */
                    bool m_enableScheduleRecoverGroup;
                    bool m_enableScheduleRecoverGroupHasBeenSet;

                    /**
                     * 置放群组异步任务可维护时间段
                     */
                    EnableScheduleOperationDuration m_enableScheduleOperationDuration;
                    bool m_enableScheduleOperationDurationHasBeenSet;

                    /**
                     * 开启集群保护：OPEN-开启，CLOSE-关闭
                     */
                    std::string m_enableDestroyProtection;
                    bool m_enableDestroyProtectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_UPDATEINSTANCEREQUEST_H_
