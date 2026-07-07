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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CREATEMODELREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CREATEMODELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/ModelItem.h>
#include <tencentcloud/clb/v20180317/model/KeyItem.h>
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
                * CreateModel请求参数结构体
                */
                class CreateModelRequest : public AbstractModel
                {
                public:
                    CreateModelRequest();
                    ~CreateModelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>接入类型：PublicBYOK/PublicCustom/PrivateCustom</p>
                     * @return AccessType <p>接入类型：PublicBYOK/PublicCustom/PrivateCustom</p>
                     * 
                     */
                    std::string GetAccessType() const;

                    /**
                     * 设置<p>接入类型：PublicBYOK/PublicCustom/PrivateCustom</p>
                     * @param _accessType <p>接入类型：PublicBYOK/PublicCustom/PrivateCustom</p>
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
                     * 获取<p>模型提供商</p>
                     * @return ModelProvider <p>模型提供商</p>
                     * 
                     */
                    std::string GetModelProvider() const;

                    /**
                     * 设置<p>模型提供商</p>
                     * @param _modelProvider <p>模型提供商</p>
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
                     * 获取<p>通用模型标识列表</p>
                     * @return ModelIds <p>通用模型标识列表</p>
                     * 
                     */
                    std::vector<ModelItem> GetModelIds() const;

                    /**
                     * 设置<p>通用模型标识列表</p>
                     * @param _modelIds <p>通用模型标识列表</p>
                     * 
                     */
                    void SetModelIds(const std::vector<ModelItem>& _modelIds);

                    /**
                     * 判断参数 ModelIds 是否已赋值
                     * @return ModelIds 是否已赋值
                     * 
                     */
                    bool ModelIdsHasBeenSet() const;

                    /**
                     * 获取<p>Key 列表</p>
                     * @return Keys <p>Key 列表</p>
                     * 
                     */
                    std::vector<KeyItem> GetKeys() const;

                    /**
                     * 设置<p>Key 列表</p>
                     * @param _keys <p>Key 列表</p>
                     * 
                     */
                    void SetKeys(const std::vector<KeyItem>& _keys);

                    /**
                     * 判断参数 Keys 是否已赋值
                     * @return Keys 是否已赋值
                     * 
                     */
                    bool KeysHasBeenSet() const;

                    /**
                     * 获取<p>BYOK ID(在自定义模型时在部署网络后必须填写)</p>
                     * @return ServiceProviderId <p>BYOK ID(在自定义模型时在部署网络后必须填写)</p>
                     * 
                     */
                    std::string GetServiceProviderId() const;

                    /**
                     * 设置<p>BYOK ID(在自定义模型时在部署网络后必须填写)</p>
                     * @param _serviceProviderId <p>BYOK ID(在自定义模型时在部署网络后必须填写)</p>
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
                     * 获取<p>服务供应商(创建BYOK自定义名称)。</p>
                     * @return ServiceProviderName <p>服务供应商(创建BYOK自定义名称)。</p>
                     * 
                     */
                    std::string GetServiceProviderName() const;

                    /**
                     * 设置<p>服务供应商(创建BYOK自定义名称)。</p>
                     * @param _serviceProviderName <p>服务供应商(创建BYOK自定义名称)。</p>
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
                     * 获取<p>API Base URL</p>
                     * @return ApiBase <p>API Base URL</p>
                     * 
                     */
                    std::string GetApiBase() const;

                    /**
                     * 设置<p>API Base URL</p>
                     * @param _apiBase <p>API Base URL</p>
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
                     * 获取<p>VPC ID</p>
                     * @return VpcId <p>VPC ID</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VPC ID</p>
                     * @param _vpcId <p>VPC ID</p>
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取<p>子网 ID</p>
                     * @return SubnetId <p>子网 ID</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>子网 ID</p>
                     * @param _subnetId <p>子网 ID</p>
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
                     * 获取<p>转发请求时添加的Host请求头</p>
                     * @return HostHeader <p>转发请求时添加的Host请求头</p>
                     * 
                     */
                    std::string GetHostHeader() const;

                    /**
                     * 设置<p>转发请求时添加的Host请求头</p>
                     * @param _hostHeader <p>转发请求时添加的Host请求头</p>
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
                     * 获取<p>是否校验服务提供商的SSL证书</p>
                     * @return VerifySSL <p>是否校验服务提供商的SSL证书</p>
                     * 
                     */
                    bool GetVerifySSL() const;

                    /**
                     * 设置<p>是否校验服务提供商的SSL证书</p>
                     * @param _verifySSL <p>是否校验服务提供商的SSL证书</p>
                     * 
                     */
                    void SetVerifySSL(const bool& _verifySSL);

                    /**
                     * 判断参数 VerifySSL 是否已赋值
                     * @return VerifySSL 是否已赋值
                     * 
                     */
                    bool VerifySSLHasBeenSet() const;

                private:

                    /**
                     * <p>接入类型：PublicBYOK/PublicCustom/PrivateCustom</p>
                     */
                    std::string m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * <p>模型提供商</p>
                     */
                    std::string m_modelProvider;
                    bool m_modelProviderHasBeenSet;

                    /**
                     * <p>通用模型标识列表</p>
                     */
                    std::vector<ModelItem> m_modelIds;
                    bool m_modelIdsHasBeenSet;

                    /**
                     * <p>Key 列表</p>
                     */
                    std::vector<KeyItem> m_keys;
                    bool m_keysHasBeenSet;

                    /**
                     * <p>BYOK ID(在自定义模型时在部署网络后必须填写)</p>
                     */
                    std::string m_serviceProviderId;
                    bool m_serviceProviderIdHasBeenSet;

                    /**
                     * <p>服务供应商(创建BYOK自定义名称)。</p>
                     */
                    std::string m_serviceProviderName;
                    bool m_serviceProviderNameHasBeenSet;

                    /**
                     * <p>模型协议</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>API Base URL</p>
                     */
                    std::string m_apiBase;
                    bool m_apiBaseHasBeenSet;

                    /**
                     * <p>VPC ID</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>子网 ID</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>转发请求时添加的Host请求头</p>
                     */
                    std::string m_hostHeader;
                    bool m_hostHeaderHasBeenSet;

                    /**
                     * <p>标签信息</p>
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>是否校验服务提供商的SSL证书</p>
                     */
                    bool m_verifySSL;
                    bool m_verifySSLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CREATEMODELREQUEST_H_
