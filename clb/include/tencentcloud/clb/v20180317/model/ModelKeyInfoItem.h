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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODELKEYINFOITEM_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODELKEYINFOITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/KeyDetailItem.h>
#include <tencentcloud/clb/v20180317/model/ServiceProviderModelItem.h>
#include <tencentcloud/clb/v20180317/model/TagInfo.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 模型及其 Key 信息
                */
                class ModelKeyInfoItem : public AbstractModel
                {
                public:
                    ModelKeyInfoItem();
                    ~ModelKeyInfoItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>接入类型</p>
                     * @return AccessType <p>接入类型</p>
                     * 
                     */
                    std::string GetAccessType() const;

                    /**
                     * 设置<p>接入类型</p>
                     * @param _accessType <p>接入类型</p>
                     * 
                     */
                    void SetAccessType(const std::string& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取<p>API Base URL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApiBase <p>API Base URL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApiBase() const;

                    /**
                     * 设置<p>API Base URL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apiBase <p>API Base URL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApiBase(const std::string& _apiBase);

                    /**
                     * 判断参数 ApiBase 是否已赋值
                     * @return ApiBase 是否已赋值
                     * 
                     */
                    bool ApiBaseHasBeenSet() const;

                    /**
                     * 获取<p>模型创建时间（ISO 8601）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedAt <p>模型创建时间（ISO 8601）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置<p>模型创建时间（ISO 8601）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdAt <p>模型创建时间（ISO 8601）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取<p>自定义host header</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostHeader <p>自定义host header</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHostHeader() const;

                    /**
                     * 设置<p>自定义host header</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hostHeader <p>自定义host header</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHostHeader(const std::string& _hostHeader);

                    /**
                     * 判断参数 HostHeader 是否已赋值
                     * @return HostHeader 是否已赋值
                     * 
                     */
                    bool HostHeaderHasBeenSet() const;

                    /**
                     * 获取<p>Key 数量</p>
                     * @return KeyCount <p>Key 数量</p>
                     * 
                     */
                    int64_t GetKeyCount() const;

                    /**
                     * 设置<p>Key 数量</p>
                     * @param _keyCount <p>Key 数量</p>
                     * 
                     */
                    void SetKeyCount(const int64_t& _keyCount);

                    /**
                     * 判断参数 KeyCount 是否已赋值
                     * @return KeyCount 是否已赋值
                     * 
                     */
                    bool KeyCountHasBeenSet() const;

                    /**
                     * 获取<p>Key 详情列表</p>
                     * @return Keys <p>Key 详情列表</p>
                     * 
                     */
                    std::vector<KeyDetailItem> GetKeys() const;

                    /**
                     * 设置<p>Key 详情列表</p>
                     * @param _keys <p>Key 详情列表</p>
                     * 
                     */
                    void SetKeys(const std::vector<KeyDetailItem>& _keys);

                    /**
                     * 判断参数 Keys 是否已赋值
                     * @return Keys 是否已赋值
                     * 
                     */
                    bool KeysHasBeenSet() const;

                    /**
                     * 获取<p>model信息</p>
                     * @return ModelIdsWithAlias <p>model信息</p>
                     * 
                     */
                    std::vector<ServiceProviderModelItem> GetModelIdsWithAlias() const;

                    /**
                     * 设置<p>model信息</p>
                     * @param _modelIdsWithAlias <p>model信息</p>
                     * 
                     */
                    void SetModelIdsWithAlias(const std::vector<ServiceProviderModelItem>& _modelIdsWithAlias);

                    /**
                     * 判断参数 ModelIdsWithAlias 是否已赋值
                     * @return ModelIdsWithAlias 是否已赋值
                     * 
                     */
                    bool ModelIdsWithAliasHasBeenSet() const;

                    /**
                     * 获取<p>模型供应商</p>
                     * @return ModelProvider <p>模型供应商</p>
                     * 
                     */
                    std::string GetModelProvider() const;

                    /**
                     * 设置<p>模型供应商</p>
                     * @param _modelProvider <p>模型供应商</p>
                     * 
                     */
                    void SetModelProvider(const std::string& _modelProvider);

                    /**
                     * 判断参数 ModelProvider 是否已赋值
                     * @return ModelProvider 是否已赋值
                     * 
                     */
                    bool ModelProviderHasBeenSet() const;

                    /**
                     * 获取<p>模型协议</p>
                     * @return Protocol <p>模型协议</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>模型协议</p>
                     * @param _protocol <p>模型协议</p>
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
                     * 获取<p>内部通信占用IP</p>
                     * @return ServiceIps <p>内部通信占用IP</p>
                     * 
                     */
                    std::vector<std::string> GetServiceIps() const;

                    /**
                     * 设置<p>内部通信占用IP</p>
                     * @param _serviceIps <p>内部通信占用IP</p>
                     * 
                     */
                    void SetServiceIps(const std::vector<std::string>& _serviceIps);

                    /**
                     * 判断参数 ServiceIps 是否已赋值
                     * @return ServiceIps 是否已赋值
                     * 
                     */
                    bool ServiceIpsHasBeenSet() const;

                    /**
                     * 获取<p>服务提供商ID</p>
                     * @return ServiceProviderId <p>服务提供商ID</p>
                     * 
                     */
                    std::string GetServiceProviderId() const;

                    /**
                     * 设置<p>服务提供商ID</p>
                     * @param _serviceProviderId <p>服务提供商ID</p>
                     * 
                     */
                    void SetServiceProviderId(const std::string& _serviceProviderId);

                    /**
                     * 判断参数 ServiceProviderId 是否已赋值
                     * @return ServiceProviderId 是否已赋值
                     * 
                     */
                    bool ServiceProviderIdHasBeenSet() const;

                    /**
                     * 获取<p>服务提供商自定义名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceProviderName <p>服务提供商自定义名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceProviderName() const;

                    /**
                     * 设置<p>服务提供商自定义名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceProviderName <p>服务提供商自定义名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceProviderName(const std::string& _serviceProviderName);

                    /**
                     * 判断参数 ServiceProviderName 是否已赋值
                     * @return ServiceProviderName 是否已赋值
                     * 
                     */
                    bool ServiceProviderNameHasBeenSet() const;

                    /**
                     * 获取<p>模型状态</p><p>枚举值：</p><ul><li>Active： 运行中</li><li>Provisioning： 创建中</li><li>Configuring： 变配中</li><li>Deleting： 删除中</li><li>ProvisionFailed： 创建失败</li><li>ConfigureFailed： 变配失败</li><li>DeletionFailed： 删除失败</li><li>Disabled： 已禁用</li></ul>
                     * @return Status <p>模型状态</p><p>枚举值：</p><ul><li>Active： 运行中</li><li>Provisioning： 创建中</li><li>Configuring： 变配中</li><li>Deleting： 删除中</li><li>ProvisionFailed： 创建失败</li><li>ConfigureFailed： 变配失败</li><li>DeletionFailed： 删除失败</li><li>Disabled： 已禁用</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>模型状态</p><p>枚举值：</p><ul><li>Active： 运行中</li><li>Provisioning： 创建中</li><li>Configuring： 变配中</li><li>Deleting： 删除中</li><li>ProvisionFailed： 创建失败</li><li>ConfigureFailed： 变配失败</li><li>DeletionFailed： 删除失败</li><li>Disabled： 已禁用</li></ul>
                     * @param _status <p>模型状态</p><p>枚举值：</p><ul><li>Active： 运行中</li><li>Provisioning： 创建中</li><li>Configuring： 变配中</li><li>Deleting： 删除中</li><li>ProvisionFailed： 创建失败</li><li>ConfigureFailed： 变配失败</li><li>DeletionFailed： 删除失败</li><li>Disabled： 已禁用</li></ul>
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
                     * 获取<p>子网 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetId <p>子网 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>子网 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subnetId <p>子网 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>标签信息</p>
                     * @return Tags <p>标签信息</p>
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置<p>标签信息</p>
                     * @param _tags <p>标签信息</p>
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>是否校验上游SSL</p>
                     * @return VerifySSL <p>是否校验上游SSL</p>
                     * 
                     */
                    bool GetVerifySSL() const;

                    /**
                     * 设置<p>是否校验上游SSL</p>
                     * @param _verifySSL <p>是否校验上游SSL</p>
                     * 
                     */
                    void SetVerifySSL(const bool& _verifySSL);

                    /**
                     * 判断参数 VerifySSL 是否已赋值
                     * @return VerifySSL 是否已赋值
                     * 
                     */
                    bool VerifySSLHasBeenSet() const;

                    /**
                     * 获取<p>VPC 实例 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId <p>VPC 实例 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VPC 实例 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcId <p>VPC 实例 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                private:

                    /**
                     * <p>接入类型</p>
                     */
                    std::string m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * <p>API Base URL</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apiBase;
                    bool m_apiBaseHasBeenSet;

                    /**
                     * <p>模型创建时间（ISO 8601）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * <p>自定义host header</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hostHeader;
                    bool m_hostHeaderHasBeenSet;

                    /**
                     * <p>Key 数量</p>
                     */
                    int64_t m_keyCount;
                    bool m_keyCountHasBeenSet;

                    /**
                     * <p>Key 详情列表</p>
                     */
                    std::vector<KeyDetailItem> m_keys;
                    bool m_keysHasBeenSet;

                    /**
                     * <p>model信息</p>
                     */
                    std::vector<ServiceProviderModelItem> m_modelIdsWithAlias;
                    bool m_modelIdsWithAliasHasBeenSet;

                    /**
                     * <p>模型供应商</p>
                     */
                    std::string m_modelProvider;
                    bool m_modelProviderHasBeenSet;

                    /**
                     * <p>模型协议</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>内部通信占用IP</p>
                     */
                    std::vector<std::string> m_serviceIps;
                    bool m_serviceIpsHasBeenSet;

                    /**
                     * <p>服务提供商ID</p>
                     */
                    std::string m_serviceProviderId;
                    bool m_serviceProviderIdHasBeenSet;

                    /**
                     * <p>服务提供商自定义名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceProviderName;
                    bool m_serviceProviderNameHasBeenSet;

                    /**
                     * <p>模型状态</p><p>枚举值：</p><ul><li>Active： 运行中</li><li>Provisioning： 创建中</li><li>Configuring： 变配中</li><li>Deleting： 删除中</li><li>ProvisionFailed： 创建失败</li><li>ConfigureFailed： 变配失败</li><li>DeletionFailed： 删除失败</li><li>Disabled： 已禁用</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>子网 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>标签信息</p>
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>是否校验上游SSL</p>
                     */
                    bool m_verifySSL;
                    bool m_verifySSLHasBeenSet;

                    /**
                     * <p>VPC 实例 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODELKEYINFOITEM_H_
