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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_ADDASSETIMAGEREGISTRYREGISTRYDETAILREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_ADDASSETIMAGEREGISTRYREGISTRYDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/ConnDetectConfig.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * AddAssetImageRegistryRegistryDetail请求参数结构体
                */
                class AddAssetImageRegistryRegistryDetailRequest : public AbstractModel
                {
                public:
                    AddAssetImageRegistryRegistryDetailRequest();
                    ~AddAssetImageRegistryRegistryDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取仓库名
                     * @return Name 仓库名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置仓库名
                     * @param _name 仓库名
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
                     * 获取用户名
                     * @return Username 用户名
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置用户名
                     * @param _username 用户名
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取密码
                     * @return Password 密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置密码
                     * @param _password 密码
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
                     * 获取仓库url
                     * @return Url 仓库url
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置仓库url
                     * @param _url 仓库url
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取仓库类型，列表：harbor,quay,jfrog,aws,azure,other-tcr
                     * @return RegistryType 仓库类型，列表：harbor,quay,jfrog,aws,azure,other-tcr
                     * 
                     */
                    std::string GetRegistryType() const;

                    /**
                     * 设置仓库类型，列表：harbor,quay,jfrog,aws,azure,other-tcr
                     * @param _registryType 仓库类型，列表：harbor,quay,jfrog,aws,azure,other-tcr
                     * 
                     */
                    void SetRegistryType(const std::string& _registryType);

                    /**
                     * 判断参数 RegistryType 是否已赋值
                     * @return RegistryType 是否已赋值
                     * 
                     */
                    bool RegistryTypeHasBeenSet() const;

                    /**
                     * 获取网络类型，列表：public（公网）
                     * @return NetType 网络类型，列表：public（公网）
                     * 
                     */
                    std::string GetNetType() const;

                    /**
                     * 设置网络类型，列表：public（公网）
                     * @param _netType 网络类型，列表：public（公网）
                     * 
                     */
                    void SetNetType(const std::string& _netType);

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     * 
                     */
                    bool NetTypeHasBeenSet() const;

                    /**
                     * 获取仓库版本
                     * @return RegistryVersion 仓库版本
                     * 
                     */
                    std::string GetRegistryVersion() const;

                    /**
                     * 设置仓库版本
                     * @param _registryVersion 仓库版本
                     * 
                     */
                    void SetRegistryVersion(const std::string& _registryVersion);

                    /**
                     * 判断参数 RegistryVersion 是否已赋值
                     * @return RegistryVersion 是否已赋值
                     * 
                     */
                    bool RegistryVersionHasBeenSet() const;

                    /**
                     * 获取区域，列表：default（默认）
                     * @return RegistryRegion 区域，列表：default（默认）
                     * 
                     */
                    std::string GetRegistryRegion() const;

                    /**
                     * 设置区域，列表：default（默认）
                     * @param _registryRegion 区域，列表：default（默认）
                     * 
                     */
                    void SetRegistryRegion(const std::string& _registryRegion);

                    /**
                     * 判断参数 RegistryRegion 是否已赋值
                     * @return RegistryRegion 是否已赋值
                     * 
                     */
                    bool RegistryRegionHasBeenSet() const;

                    /**
                     * 获取限速
                     * @return SpeedLimit 限速
                     * 
                     */
                    int64_t GetSpeedLimit() const;

                    /**
                     * 设置限速
                     * @param _speedLimit 限速
                     * 
                     */
                    void SetSpeedLimit(const int64_t& _speedLimit);

                    /**
                     * 判断参数 SpeedLimit 是否已赋值
                     * @return SpeedLimit 是否已赋值
                     * 
                     */
                    bool SpeedLimitHasBeenSet() const;

                    /**
                     * 获取安全模式（证书校验）：0（默认） 非安全模式（跳过证书校验）：1
                     * @return Insecure 安全模式（证书校验）：0（默认） 非安全模式（跳过证书校验）：1
                     * 
                     */
                    uint64_t GetInsecure() const;

                    /**
                     * 设置安全模式（证书校验）：0（默认） 非安全模式（跳过证书校验）：1
                     * @param _insecure 安全模式（证书校验）：0（默认） 非安全模式（跳过证书校验）：1
                     * 
                     */
                    void SetInsecure(const uint64_t& _insecure);

                    /**
                     * 判断参数 Insecure 是否已赋值
                     * @return Insecure 是否已赋值
                     * 
                     */
                    bool InsecureHasBeenSet() const;

                    /**
                     * 获取联通性检测的记录ID
                     * @return ConnDetectConfig 联通性检测的记录ID
                     * 
                     */
                    std::vector<ConnDetectConfig> GetConnDetectConfig() const;

                    /**
                     * 设置联通性检测的记录ID
                     * @param _connDetectConfig 联通性检测的记录ID
                     * 
                     */
                    void SetConnDetectConfig(const std::vector<ConnDetectConfig>& _connDetectConfig);

                    /**
                     * 判断参数 ConnDetectConfig 是否已赋值
                     * @return ConnDetectConfig 是否已赋值
                     * 
                     */
                    bool ConnDetectConfigHasBeenSet() const;

                    /**
                     * 获取是否自动授权&扫描，选择全量同步时只针对最新版本镜像，增量同步时则包含所有新增镜像
                     * @return NeedScan 是否自动授权&扫描，选择全量同步时只针对最新版本镜像，增量同步时则包含所有新增镜像
                     * 
                     */
                    bool GetNeedScan() const;

                    /**
                     * 设置是否自动授权&扫描，选择全量同步时只针对最新版本镜像，增量同步时则包含所有新增镜像
                     * @param _needScan 是否自动授权&扫描，选择全量同步时只针对最新版本镜像，增量同步时则包含所有新增镜像
                     * 
                     */
                    void SetNeedScan(const bool& _needScan);

                    /**
                     * 判断参数 NeedScan 是否已赋值
                     * @return NeedScan 是否已赋值
                     * 
                     */
                    bool NeedScanHasBeenSet() const;

                    /**
                     * 获取同步方式，0全量同步，1增量同步
                     * @return SyncMode 同步方式，0全量同步，1增量同步
                     * 
                     */
                    uint64_t GetSyncMode() const;

                    /**
                     * 设置同步方式，0全量同步，1增量同步
                     * @param _syncMode 同步方式，0全量同步，1增量同步
                     * 
                     */
                    void SetSyncMode(const uint64_t& _syncMode);

                    /**
                     * 判断参数 SyncMode 是否已赋值
                     * @return SyncMode 是否已赋值
                     * 
                     */
                    bool SyncModeHasBeenSet() const;

                    /**
                     * 获取webhook接入地址
                     * @return WebhookUrl webhook接入地址
                     * 
                     */
                    std::string GetWebhookUrl() const;

                    /**
                     * 设置webhook接入地址
                     * @param _webhookUrl webhook接入地址
                     * 
                     */
                    void SetWebhookUrl(const std::string& _webhookUrl);

                    /**
                     * 判断参数 WebhookUrl 是否已赋值
                     * @return WebhookUrl 是否已赋值
                     * 
                     */
                    bool WebhookUrlHasBeenSet() const;

                    /**
                     * 获取webhook接入token
                     * @return WebhookToken webhook接入token
                     * 
                     */
                    std::string GetWebhookToken() const;

                    /**
                     * 设置webhook接入token
                     * @param _webhookToken webhook接入token
                     * 
                     */
                    void SetWebhookToken(const std::string& _webhookToken);

                    /**
                     * 判断参数 WebhookToken 是否已赋值
                     * @return WebhookToken 是否已赋值
                     * 
                     */
                    bool WebhookTokenHasBeenSet() const;

                    /**
                     * 获取tcr实例ID
                     * @return InstanceId tcr实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置tcr实例ID
                     * @param _instanceId tcr实例ID
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
                     * 仓库名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 用户名
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * 密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 仓库url
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 仓库类型，列表：harbor,quay,jfrog,aws,azure,other-tcr
                     */
                    std::string m_registryType;
                    bool m_registryTypeHasBeenSet;

                    /**
                     * 网络类型，列表：public（公网）
                     */
                    std::string m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * 仓库版本
                     */
                    std::string m_registryVersion;
                    bool m_registryVersionHasBeenSet;

                    /**
                     * 区域，列表：default（默认）
                     */
                    std::string m_registryRegion;
                    bool m_registryRegionHasBeenSet;

                    /**
                     * 限速
                     */
                    int64_t m_speedLimit;
                    bool m_speedLimitHasBeenSet;

                    /**
                     * 安全模式（证书校验）：0（默认） 非安全模式（跳过证书校验）：1
                     */
                    uint64_t m_insecure;
                    bool m_insecureHasBeenSet;

                    /**
                     * 联通性检测的记录ID
                     */
                    std::vector<ConnDetectConfig> m_connDetectConfig;
                    bool m_connDetectConfigHasBeenSet;

                    /**
                     * 是否自动授权&扫描，选择全量同步时只针对最新版本镜像，增量同步时则包含所有新增镜像
                     */
                    bool m_needScan;
                    bool m_needScanHasBeenSet;

                    /**
                     * 同步方式，0全量同步，1增量同步
                     */
                    uint64_t m_syncMode;
                    bool m_syncModeHasBeenSet;

                    /**
                     * webhook接入地址
                     */
                    std::string m_webhookUrl;
                    bool m_webhookUrlHasBeenSet;

                    /**
                     * webhook接入token
                     */
                    std::string m_webhookToken;
                    bool m_webhookTokenHasBeenSet;

                    /**
                     * tcr实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_ADDASSETIMAGEREGISTRYREGISTRYDETAILREQUEST_H_
