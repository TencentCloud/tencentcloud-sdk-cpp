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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CLOUDFUNCTIONITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CLOUDFUNCTIONITEM_H_

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
                * 云函数
                */
                class CloudFunctionItem : public AbstractModel
                {
                public:
                    CloudFunctionItem();
                    ~CloudFunctionItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云函数名称
                     * @return InstanceName 云函数名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置云函数名称
                     * @param _instanceName 云函数名称
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
                     * 获取云函数状态
                     * @return InstanceStatus 云函数状态
                     * 
                     */
                    std::string GetInstanceStatus() const;

                    /**
                     * 设置云函数状态
                     * @param _instanceStatus 云函数状态
                     * 
                     */
                    void SetInstanceStatus(const std::string& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取云函数类型
                     * @return FunctionType 云函数类型
                     * 
                     */
                    std::string GetFunctionType() const;

                    /**
                     * 设置云函数类型
                     * @param _functionType 云函数类型
                     * 
                     */
                    void SetFunctionType(const std::string& _functionType);

                    /**
                     * 判断参数 FunctionType 是否已赋值
                     * @return FunctionType 是否已赋值
                     * 
                     */
                    bool FunctionTypeHasBeenSet() const;

                    /**
                     * 获取资源标签
                     * @return InstanceTag 资源标签
                     * 
                     */
                    std::string GetInstanceTag() const;

                    /**
                     * 设置资源标签
                     * @param _instanceTag 资源标签
                     * 
                     */
                    void SetInstanceTag(const std::string& _instanceTag);

                    /**
                     * 判断参数 InstanceTag 是否已赋值
                     * @return InstanceTag 是否已赋值
                     * 
                     */
                    bool InstanceTagHasBeenSet() const;

                    /**
                     * 获取命名空间
                     * @return Namespace 命名空间
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间
                     * @param _namespace 命名空间
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
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
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
                     * 获取自定义域名
                     * @return Domain 自定义域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置自定义域名
                     * @param _domain 自定义域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return InstanceID 实例ID
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置实例ID
                     * @param _instanceID 实例ID
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取实例类型
                     * @return InstanceType 实例类型
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例类型
                     * @param _instanceType 实例类型
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取租户ID
                     * @return AppID 租户ID
                     * 
                     */
                    uint64_t GetAppID() const;

                    /**
                     * 设置租户ID
                     * @param _appID 租户ID
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
                     * 获取云函数状态展示内容
                     * @return InstanceStatusDisplay 云函数状态展示内容
                     * 
                     */
                    std::string GetInstanceStatusDisplay() const;

                    /**
                     * 设置云函数状态展示内容
                     * @param _instanceStatusDisplay 云函数状态展示内容
                     * 
                     */
                    void SetInstanceStatusDisplay(const std::string& _instanceStatusDisplay);

                    /**
                     * 判断参数 InstanceStatusDisplay 是否已赋值
                     * @return InstanceStatusDisplay 是否已赋值
                     * 
                     */
                    bool InstanceStatusDisplayHasBeenSet() const;

                    /**
                     * 获取核心资产标签
                     * @return CoreAssetFlag 核心资产标签
                     * 
                     */
                    std::string GetCoreAssetFlag() const;

                    /**
                     * 设置核心资产标签
                     * @param _coreAssetFlag 核心资产标签
                     * 
                     */
                    void SetCoreAssetFlag(const std::string& _coreAssetFlag);

                    /**
                     * 判断参数 CoreAssetFlag 是否已赋值
                     * @return CoreAssetFlag 是否已赋值
                     * 
                     */
                    bool CoreAssetFlagHasBeenSet() const;

                    /**
                     * 获取公网访问URL
                     * @return PublicURL 公网访问URL
                     * 
                     */
                    std::string GetPublicURL() const;

                    /**
                     * 设置公网访问URL
                     * @param _publicURL 公网访问URL
                     * 
                     */
                    void SetPublicURL(const std::string& _publicURL);

                    /**
                     * 判断参数 PublicURL 是否已赋值
                     * @return PublicURL 是否已赋值
                     * 
                     */
                    bool PublicURLHasBeenSet() const;

                    /**
                     * 获取私网访问URL
                     * @return PrivateURL 私网访问URL
                     * 
                     */
                    std::string GetPrivateURL() const;

                    /**
                     * 设置私网访问URL
                     * @param _privateURL 私网访问URL
                     * 
                     */
                    void SetPrivateURL(const std::string& _privateURL);

                    /**
                     * 判断参数 PrivateURL 是否已赋值
                     * @return PrivateURL 是否已赋值
                     * 
                     */
                    bool PrivateURLHasBeenSet() const;

                    /**
                     * 获取所属账号
                     * @return AccountInfo 所属账号
                     * 
                     */
                    std::string GetAccountInfo() const;

                    /**
                     * 设置所属账号
                     * @param _accountInfo 所属账号
                     * 
                     */
                    void SetAccountInfo(const std::string& _accountInfo);

                    /**
                     * 判断参数 AccountInfo 是否已赋值
                     * @return AccountInfo 是否已赋值
                     * 
                     */
                    bool AccountInfoHasBeenSet() const;

                private:

                    /**
                     * 云函数名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 云函数状态
                     */
                    std::string m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * 云函数类型
                     */
                    std::string m_functionType;
                    bool m_functionTypeHasBeenSet;

                    /**
                     * 资源标签
                     */
                    std::string m_instanceTag;
                    bool m_instanceTagHasBeenSet;

                    /**
                     * 命名空间
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 自定义域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 实例类型
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 租户ID
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * 云函数状态展示内容
                     */
                    std::string m_instanceStatusDisplay;
                    bool m_instanceStatusDisplayHasBeenSet;

                    /**
                     * 核心资产标签
                     */
                    std::string m_coreAssetFlag;
                    bool m_coreAssetFlagHasBeenSet;

                    /**
                     * 公网访问URL
                     */
                    std::string m_publicURL;
                    bool m_publicURLHasBeenSet;

                    /**
                     * 私网访问URL
                     */
                    std::string m_privateURL;
                    bool m_privateURLHasBeenSet;

                    /**
                     * 所属账号
                     */
                    std::string m_accountInfo;
                    bool m_accountInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CLOUDFUNCTIONITEM_H_
