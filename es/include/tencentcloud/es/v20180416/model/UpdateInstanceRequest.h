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
                     * 获取要操作的实例ID
                     * @return InstanceId 要操作的实例ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置要操作的实例ID
                     * @param InstanceId 要操作的实例ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取修改后的实例名称, 1-50 个英文、汉字、数字、连接线-或下划线_
                     * @return InstanceName 修改后的实例名称, 1-50 个英文、汉字、数字、连接线-或下划线_
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置修改后的实例名称, 1-50 个英文、汉字、数字、连接线-或下划线_
                     * @param InstanceName 修改后的实例名称, 1-50 个英文、汉字、数字、连接线-或下划线_
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取横向扩缩容后的节点个数
                     * @return NodeNum 横向扩缩容后的节点个数
                     */
                    uint64_t GetNodeNum() const;

                    /**
                     * 设置横向扩缩容后的节点个数
                     * @param NodeNum 横向扩缩容后的节点个数
                     */
                    void SetNodeNum(const uint64_t& _nodeNum);

                    /**
                     * 判断参数 NodeNum 是否已赋值
                     * @return NodeNum 是否已赋值
                     */
                    bool NodeNumHasBeenSet() const;

                    /**
                     * 获取修改后的配置项, JSON格式字符串。当前仅支持以下配置项：
action.destructive_requires_name
indices.fielddata.cache.size
indices.query.bool.max_clause_count
                     * @return EsConfig 修改后的配置项, JSON格式字符串。当前仅支持以下配置项：
action.destructive_requires_name
indices.fielddata.cache.size
indices.query.bool.max_clause_count
                     */
                    std::string GetEsConfig() const;

                    /**
                     * 设置修改后的配置项, JSON格式字符串。当前仅支持以下配置项：
action.destructive_requires_name
indices.fielddata.cache.size
indices.query.bool.max_clause_count
                     * @param EsConfig 修改后的配置项, JSON格式字符串。当前仅支持以下配置项：
action.destructive_requires_name
indices.fielddata.cache.size
indices.query.bool.max_clause_count
                     */
                    void SetEsConfig(const std::string& _esConfig);

                    /**
                     * 判断参数 EsConfig 是否已赋值
                     * @return EsConfig 是否已赋值
                     */
                    bool EsConfigHasBeenSet() const;

                    /**
                     * 获取重置后的Kibana密码, 8到16位，至少包括两项（[a-z,A-Z],[0-9]和[-!@#$%&^*+=_:;,.?]的特殊符号
                     * @return Password 重置后的Kibana密码, 8到16位，至少包括两项（[a-z,A-Z],[0-9]和[-!@#$%&^*+=_:;,.?]的特殊符号
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置重置后的Kibana密码, 8到16位，至少包括两项（[a-z,A-Z],[0-9]和[-!@#$%&^*+=_:;,.?]的特殊符号
                     * @param Password 重置后的Kibana密码, 8到16位，至少包括两项（[a-z,A-Z],[0-9]和[-!@#$%&^*+=_:;,.?]的特殊符号
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取修改后的访问控制列表
                     * @return EsAcl 修改后的访问控制列表
                     */
                    EsAcl GetEsAcl() const;

                    /**
                     * 设置修改后的访问控制列表
                     * @param EsAcl 修改后的访问控制列表
                     */
                    void SetEsAcl(const EsAcl& _esAcl);

                    /**
                     * 判断参数 EsAcl 是否已赋值
                     * @return EsAcl 是否已赋值
                     */
                    bool EsAclHasBeenSet() const;

                    /**
                     * 获取磁盘大小,单位GB
                     * @return DiskSize 磁盘大小,单位GB
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置磁盘大小,单位GB
                     * @param DiskSize 磁盘大小,单位GB
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取节点规格: 
ES.S1.SMALL2: 1 核 2G
ES.S1.MEDIUM4: 2 核 4G 
ES.S1.MEDIUM8: 2 核 8G 
ES.S1.LARGE16: 4 核 16G 
ES.S1.2XLARGE32: 8 核 32G 
ES.S1.4XLARGE64: 16 核 64G
                     * @return NodeType 节点规格: 
ES.S1.SMALL2: 1 核 2G
ES.S1.MEDIUM4: 2 核 4G 
ES.S1.MEDIUM8: 2 核 8G 
ES.S1.LARGE16: 4 核 16G 
ES.S1.2XLARGE32: 8 核 32G 
ES.S1.4XLARGE64: 16 核 64G
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置节点规格: 
ES.S1.SMALL2: 1 核 2G
ES.S1.MEDIUM4: 2 核 4G 
ES.S1.MEDIUM8: 2 核 8G 
ES.S1.LARGE16: 4 核 16G 
ES.S1.2XLARGE32: 8 核 32G 
ES.S1.4XLARGE64: 16 核 64G
                     * @param NodeType 节点规格: 
ES.S1.SMALL2: 1 核 2G
ES.S1.MEDIUM4: 2 核 4G 
ES.S1.MEDIUM8: 2 核 8G 
ES.S1.LARGE16: 4 核 16G 
ES.S1.2XLARGE32: 8 核 32G 
ES.S1.4XLARGE64: 16 核 64G
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取专用主节点个数
                     * @return MasterNodeNum 专用主节点个数
                     */
                    uint64_t GetMasterNodeNum() const;

                    /**
                     * 设置专用主节点个数
                     * @param MasterNodeNum 专用主节点个数
                     */
                    void SetMasterNodeNum(const uint64_t& _masterNodeNum);

                    /**
                     * 判断参数 MasterNodeNum 是否已赋值
                     * @return MasterNodeNum 是否已赋值
                     */
                    bool MasterNodeNumHasBeenSet() const;

                    /**
                     * 获取专用主节点规格，与NodeType支持的规格相同
                     * @return MasterNodeType 专用主节点规格，与NodeType支持的规格相同
                     */
                    std::string GetMasterNodeType() const;

                    /**
                     * 设置专用主节点规格，与NodeType支持的规格相同
                     * @param MasterNodeType 专用主节点规格，与NodeType支持的规格相同
                     */
                    void SetMasterNodeType(const std::string& _masterNodeType);

                    /**
                     * 判断参数 MasterNodeType 是否已赋值
                     * @return MasterNodeType 是否已赋值
                     */
                    bool MasterNodeTypeHasBeenSet() const;

                    /**
                     * 获取专用主节点磁盘大小， 单位GB（系统默认配置为50GB,暂不支持自定义）
                     * @return MasterNodeDiskSize 专用主节点磁盘大小， 单位GB（系统默认配置为50GB,暂不支持自定义）
                     */
                    uint64_t GetMasterNodeDiskSize() const;

                    /**
                     * 设置专用主节点磁盘大小， 单位GB（系统默认配置为50GB,暂不支持自定义）
                     * @param MasterNodeDiskSize 专用主节点磁盘大小， 单位GB（系统默认配置为50GB,暂不支持自定义）
                     */
                    void SetMasterNodeDiskSize(const uint64_t& _masterNodeDiskSize);

                    /**
                     * 判断参数 MasterNodeDiskSize 是否已赋值
                     * @return MasterNodeDiskSize 是否已赋值
                     */
                    bool MasterNodeDiskSizeHasBeenSet() const;

                    /**
                     * 获取更新配置时是否强制重启
                     * @return ForceRestart 更新配置时是否强制重启
                     */
                    bool GetForceRestart() const;

                    /**
                     * 设置更新配置时是否强制重启
                     * @param ForceRestart 更新配置时是否强制重启
                     */
                    void SetForceRestart(const bool& _forceRestart);

                    /**
                     * 判断参数 ForceRestart 是否已赋值
                     * @return ForceRestart 是否已赋值
                     */
                    bool ForceRestartHasBeenSet() const;

                    /**
                     * 获取COS自动备份信息
                     * @return CosBackup COS自动备份信息
                     */
                    CosBackup GetCosBackup() const;

                    /**
                     * 设置COS自动备份信息
                     * @param CosBackup COS自动备份信息
                     */
                    void SetCosBackup(const CosBackup& _cosBackup);

                    /**
                     * 判断参数 CosBackup 是否已赋值
                     * @return CosBackup 是否已赋值
                     */
                    bool CosBackupHasBeenSet() const;

                private:

                    /**
                     * 要操作的实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 修改后的实例名称, 1-50 个英文、汉字、数字、连接线-或下划线_
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 横向扩缩容后的节点个数
                     */
                    uint64_t m_nodeNum;
                    bool m_nodeNumHasBeenSet;

                    /**
                     * 修改后的配置项, JSON格式字符串。当前仅支持以下配置项：
action.destructive_requires_name
indices.fielddata.cache.size
indices.query.bool.max_clause_count
                     */
                    std::string m_esConfig;
                    bool m_esConfigHasBeenSet;

                    /**
                     * 重置后的Kibana密码, 8到16位，至少包括两项（[a-z,A-Z],[0-9]和[-!@#$%&^*+=_:;,.?]的特殊符号
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 修改后的访问控制列表
                     */
                    EsAcl m_esAcl;
                    bool m_esAclHasBeenSet;

                    /**
                     * 磁盘大小,单位GB
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 节点规格: 
ES.S1.SMALL2: 1 核 2G
ES.S1.MEDIUM4: 2 核 4G 
ES.S1.MEDIUM8: 2 核 8G 
ES.S1.LARGE16: 4 核 16G 
ES.S1.2XLARGE32: 8 核 32G 
ES.S1.4XLARGE64: 16 核 64G
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * 专用主节点个数
                     */
                    uint64_t m_masterNodeNum;
                    bool m_masterNodeNumHasBeenSet;

                    /**
                     * 专用主节点规格，与NodeType支持的规格相同
                     */
                    std::string m_masterNodeType;
                    bool m_masterNodeTypeHasBeenSet;

                    /**
                     * 专用主节点磁盘大小， 单位GB（系统默认配置为50GB,暂不支持自定义）
                     */
                    uint64_t m_masterNodeDiskSize;
                    bool m_masterNodeDiskSizeHasBeenSet;

                    /**
                     * 更新配置时是否强制重启
                     */
                    bool m_forceRestart;
                    bool m_forceRestartHasBeenSet;

                    /**
                     * COS自动备份信息
                     */
                    CosBackup m_cosBackup;
                    bool m_cosBackupHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_UPDATEINSTANCEREQUEST_H_
