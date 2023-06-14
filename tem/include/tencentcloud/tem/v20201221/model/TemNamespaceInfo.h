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

#ifndef TENCENTCLOUD_TEM_V20201221_MODEL_TEMNAMESPACEINFO_H_
#define TENCENTCLOUD_TEM_V20201221_MODEL_TEMNAMESPACEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20201221
        {
            namespace Model
            {
                /**
                * 命名空间对象
                */
                class TemNamespaceInfo : public AbstractModel
                {
                public:
                    TemNamespaceInfo();
                    ~TemNamespaceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取命名空间id
                     * @return NamespaceId 命名空间id
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置命名空间id
                     * @param _namespaceId 命名空间id
                     * 
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     * 
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取渠道
                     * @return Channel 渠道
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置渠道
                     * @param _channel 渠道
                     * 
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                    /**
                     * 获取命名空间名称
                     * @return NamespaceName 命名空间名称
                     * 
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置命名空间名称
                     * @param _namespaceName 命名空间名称
                     * 
                     */
                    void SetNamespaceName(const std::string& _namespaceName);

                    /**
                     * 判断参数 NamespaceName 是否已赋值
                     * @return NamespaceName 是否已赋值
                     * 
                     */
                    bool NamespaceNameHasBeenSet() const;

                    /**
                     * 获取区域名称
                     * @return Region 区域名称
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置区域名称
                     * @param _region 区域名称
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
                     * 获取命名空间描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 命名空间描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置命名空间描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 命名空间描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取状态,1:已销毁;0:正常
                     * @return Status 状态,1:已销毁;0:正常
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态,1:已销毁;0:正常
                     * @param _status 状态,1:已销毁;0:正常
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取vpc网络
                     * @return Vpc vpc网络
                     * 
                     */
                    std::string GetVpc() const;

                    /**
                     * 设置vpc网络
                     * @param _vpc vpc网络
                     * 
                     */
                    void SetVpc(const std::string& _vpc);

                    /**
                     * 判断参数 Vpc 是否已赋值
                     * @return Vpc 是否已赋值
                     * 
                     */
                    bool VpcHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateDate 创建时间
                     * 
                     */
                    std::string GetCreateDate() const;

                    /**
                     * 设置创建时间
                     * @param _createDate 创建时间
                     * 
                     */
                    void SetCreateDate(const std::string& _createDate);

                    /**
                     * 判断参数 CreateDate 是否已赋值
                     * @return CreateDate 是否已赋值
                     * 
                     */
                    bool CreateDateHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return ModifyDate 修改时间
                     * 
                     */
                    std::string GetModifyDate() const;

                    /**
                     * 设置修改时间
                     * @param _modifyDate 修改时间
                     * 
                     */
                    void SetModifyDate(const std::string& _modifyDate);

                    /**
                     * 判断参数 ModifyDate 是否已赋值
                     * @return ModifyDate 是否已赋值
                     * 
                     */
                    bool ModifyDateHasBeenSet() const;

                    /**
                     * 获取修改人
                     * @return Modifier 修改人
                     * 
                     */
                    std::string GetModifier() const;

                    /**
                     * 设置修改人
                     * @param _modifier 修改人
                     * 
                     */
                    void SetModifier(const std::string& _modifier);

                    /**
                     * 判断参数 Modifier 是否已赋值
                     * @return Modifier 是否已赋值
                     * 
                     */
                    bool ModifierHasBeenSet() const;

                    /**
                     * 获取创建人
                     * @return Creator 创建人
                     * 
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置创建人
                     * @param _creator 创建人
                     * 
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取服务数
                     * @return ServiceNum 服务数
                     * 
                     */
                    int64_t GetServiceNum() const;

                    /**
                     * 设置服务数
                     * @param _serviceNum 服务数
                     * 
                     */
                    void SetServiceNum(const int64_t& _serviceNum);

                    /**
                     * 判断参数 ServiceNum 是否已赋值
                     * @return ServiceNum 是否已赋值
                     * 
                     */
                    bool ServiceNumHasBeenSet() const;

                    /**
                     * 获取运行实例数
                     * @return RunInstancesNum 运行实例数
                     * 
                     */
                    int64_t GetRunInstancesNum() const;

                    /**
                     * 设置运行实例数
                     * @param _runInstancesNum 运行实例数
                     * 
                     */
                    void SetRunInstancesNum(const int64_t& _runInstancesNum);

                    /**
                     * 判断参数 RunInstancesNum 是否已赋值
                     * @return RunInstancesNum 是否已赋值
                     * 
                     */
                    bool RunInstancesNumHasBeenSet() const;

                    /**
                     * 获取子网络
                     * @return SubnetId 子网络
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网络
                     * @param _subnetId 子网络
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
                     * 获取tcb环境状态
                     * @return TcbEnvStatus tcb环境状态
                     * 
                     */
                    std::string GetTcbEnvStatus() const;

                    /**
                     * 设置tcb环境状态
                     * @param _tcbEnvStatus tcb环境状态
                     * 
                     */
                    void SetTcbEnvStatus(const std::string& _tcbEnvStatus);

                    /**
                     * 判断参数 TcbEnvStatus 是否已赋值
                     * @return TcbEnvStatus 是否已赋值
                     * 
                     */
                    bool TcbEnvStatusHasBeenSet() const;

                    /**
                     * 获取eks cluster status
                     * @return ClusterStatus eks cluster status
                     * 
                     */
                    std::string GetClusterStatus() const;

                    /**
                     * 设置eks cluster status
                     * @param _clusterStatus eks cluster status
                     * 
                     */
                    void SetClusterStatus(const std::string& _clusterStatus);

                    /**
                     * 判断参数 ClusterStatus 是否已赋值
                     * @return ClusterStatus 是否已赋值
                     * 
                     */
                    bool ClusterStatusHasBeenSet() const;

                    /**
                     * 获取是否开启tsw
                     * @return EnableTswTraceService 是否开启tsw
                     * 
                     */
                    bool GetEnableTswTraceService() const;

                    /**
                     * 设置是否开启tsw
                     * @param _enableTswTraceService 是否开启tsw
                     * 
                     */
                    void SetEnableTswTraceService(const bool& _enableTswTraceService);

                    /**
                     * 判断参数 EnableTswTraceService 是否已赋值
                     * @return EnableTswTraceService 是否已赋值
                     * 
                     */
                    bool EnableTswTraceServiceHasBeenSet() const;

                private:

                    /**
                     * 命名空间id
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 渠道
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * 命名空间名称
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * 区域名称
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 命名空间描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 状态,1:已销毁;0:正常
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * vpc网络
                     */
                    std::string m_vpc;
                    bool m_vpcHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createDate;
                    bool m_createDateHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_modifyDate;
                    bool m_modifyDateHasBeenSet;

                    /**
                     * 修改人
                     */
                    std::string m_modifier;
                    bool m_modifierHasBeenSet;

                    /**
                     * 创建人
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * 服务数
                     */
                    int64_t m_serviceNum;
                    bool m_serviceNumHasBeenSet;

                    /**
                     * 运行实例数
                     */
                    int64_t m_runInstancesNum;
                    bool m_runInstancesNumHasBeenSet;

                    /**
                     * 子网络
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * tcb环境状态
                     */
                    std::string m_tcbEnvStatus;
                    bool m_tcbEnvStatusHasBeenSet;

                    /**
                     * eks cluster status
                     */
                    std::string m_clusterStatus;
                    bool m_clusterStatusHasBeenSet;

                    /**
                     * 是否开启tsw
                     */
                    bool m_enableTswTraceService;
                    bool m_enableTswTraceServiceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20201221_MODEL_TEMNAMESPACEINFO_H_
