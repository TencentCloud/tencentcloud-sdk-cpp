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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CLUSTERSERVICELISTITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CLUSTERSERVICELISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AssetTag.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 集群service列表项
                */
                class ClusterServiceListItem : public AbstractModel
                {
                public:
                    ClusterServiceListItem();
                    ~ClusterServiceListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取<p>资产id</p>
                     * @return AssetId <p>资产id</p>
                     * @deprecated
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置<p>资产id</p>
                     * @param _assetId <p>资产id</p>
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
                     * 获取<p>名称</p>
                     * @return Name <p>名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>名称</p>
                     * @param _name <p>名称</p>
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
                     * 获取<p>selector标签</p>
                     * @return SelectorLabel <p>selector标签</p>
                     * 
                     */
                    std::vector<AssetTag> GetSelectorLabel() const;

                    /**
                     * 设置<p>selector标签</p>
                     * @param _selectorLabel <p>selector标签</p>
                     * 
                     */
                    void SetSelectorLabel(const std::vector<AssetTag>& _selectorLabel);

                    /**
                     * 判断参数 SelectorLabel 是否已赋值
                     * @return SelectorLabel 是否已赋值
                     * 
                     */
                    bool SelectorLabelHasBeenSet() const;

                    /**
                     * 获取<p>命名空间</p>
                     * @return Namespace <p>命名空间</p>
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置<p>命名空间</p>
                     * @param _namespace <p>命名空间</p>
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>service 唯一 ID</p>
                     * @return ServiceUniqueID <p>service 唯一 ID</p>
                     * 
                     */
                    std::string GetServiceUniqueID() const;

                    /**
                     * 设置<p>service 唯一 ID</p>
                     * @param _serviceUniqueID <p>service 唯一 ID</p>
                     * 
                     */
                    void SetServiceUniqueID(const std::string& _serviceUniqueID);

                    /**
                     * 判断参数 ServiceUniqueID 是否已赋值
                     * @return ServiceUniqueID 是否已赋值
                     * 
                     */
                    bool ServiceUniqueIDHasBeenSet() const;

                    /**
                     * 获取<p>service 类型</p>
                     * @return ServiceType <p>service 类型</p>
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置<p>service 类型</p>
                     * @param _serviceType <p>service 类型</p>
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取<p>集群IP</p>
                     * @return ClusterIP <p>集群IP</p>
                     * 
                     */
                    std::string GetClusterIP() const;

                    /**
                     * 设置<p>集群IP</p>
                     * @param _clusterIP <p>集群IP</p>
                     * 
                     */
                    void SetClusterIP(const std::string& _clusterIP);

                    /**
                     * 判断参数 ClusterIP 是否已赋值
                     * @return ClusterIP 是否已赋值
                     * 
                     */
                    bool ClusterIPHasBeenSet() const;

                    /**
                     * 获取<p>外网IP</p>
                     * @return ExternalIP <p>外网IP</p>
                     * 
                     */
                    std::vector<std::string> GetExternalIP() const;

                    /**
                     * 设置<p>外网IP</p>
                     * @param _externalIP <p>外网IP</p>
                     * 
                     */
                    void SetExternalIP(const std::vector<std::string>& _externalIP);

                    /**
                     * 判断参数 ExternalIP 是否已赋值
                     * @return ExternalIP 是否已赋值
                     * 
                     */
                    bool ExternalIPHasBeenSet() const;

                    /**
                     * 获取<p>端口</p>
                     * @return Ports <p>端口</p>
                     * 
                     */
                    std::vector<std::string> GetPorts() const;

                    /**
                     * 设置<p>端口</p>
                     * @param _ports <p>端口</p>
                     * 
                     */
                    void SetPorts(const std::vector<std::string>& _ports);

                    /**
                     * 判断参数 Ports 是否已赋值
                     * @return Ports 是否已赋值
                     * 
                     */
                    bool PortsHasBeenSet() const;

                private:

                    /**
                     * <p>appid</p>
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>资产id</p>
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * <p>名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>selector标签</p>
                     */
                    std::vector<AssetTag> m_selectorLabel;
                    bool m_selectorLabelHasBeenSet;

                    /**
                     * <p>命名空间</p>
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>service 唯一 ID</p>
                     */
                    std::string m_serviceUniqueID;
                    bool m_serviceUniqueIDHasBeenSet;

                    /**
                     * <p>service 类型</p>
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * <p>集群IP</p>
                     */
                    std::string m_clusterIP;
                    bool m_clusterIPHasBeenSet;

                    /**
                     * <p>外网IP</p>
                     */
                    std::vector<std::string> m_externalIP;
                    bool m_externalIPHasBeenSet;

                    /**
                     * <p>端口</p>
                     */
                    std::vector<std::string> m_ports;
                    bool m_portsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CLUSTERSERVICELISTITEM_H_
