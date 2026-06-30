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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEREGISTRYREGISTRYDETAILRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEREGISTRYREGISTRYDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcss/v20201101/model/RegistryConnDetectResult.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeAssetImageRegistryRegistryDetail返回参数结构体
                */
                class DescribeAssetImageRegistryRegistryDetailResponse : public AbstractModel
                {
                public:
                    DescribeAssetImageRegistryRegistryDetailResponse();
                    ~DescribeAssetImageRegistryRegistryDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>仓库名</p>
                     * @return Name <p>仓库名</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>用户名</p>
                     * @return Username <p>用户名</p>
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取<p>密码</p>
                     * @return Password <p>密码</p>
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取<p>仓库url</p>
                     * @return Url <p>仓库url</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取<p>仓库类型，列表：harbor</p>
                     * @return RegistryType <p>仓库类型，列表：harbor</p>
                     * 
                     */
                    std::string GetRegistryType() const;

                    /**
                     * 判断参数 RegistryType 是否已赋值
                     * @return RegistryType 是否已赋值
                     * 
                     */
                    bool RegistryTypeHasBeenSet() const;

                    /**
                     * 获取<p>仓库版本</p>
                     * @return RegistryVersion <p>仓库版本</p>
                     * 
                     */
                    std::string GetRegistryVersion() const;

                    /**
                     * 判断参数 RegistryVersion 是否已赋值
                     * @return RegistryVersion 是否已赋值
                     * 
                     */
                    bool RegistryVersionHasBeenSet() const;

                    /**
                     * 获取<p>网络类型，列表：public（公网）,private（私网）</p>
                     * @return NetType <p>网络类型，列表：public（公网）,private（私网）</p>
                     * 
                     */
                    std::string GetNetType() const;

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     * 
                     */
                    bool NetTypeHasBeenSet() const;

                    /**
                     * 获取<p>区域，列表:default（默认）</p>
                     * @return RegistryRegion <p>区域，列表:default（默认）</p>
                     * 
                     */
                    std::string GetRegistryRegion() const;

                    /**
                     * 判断参数 RegistryRegion 是否已赋值
                     * @return RegistryRegion 是否已赋值
                     * 
                     */
                    bool RegistryRegionHasBeenSet() const;

                    /**
                     * 获取<p>限速</p>
                     * @return SpeedLimit <p>限速</p>
                     * 
                     */
                    uint64_t GetSpeedLimit() const;

                    /**
                     * 判断参数 SpeedLimit 是否已赋值
                     * @return SpeedLimit 是否已赋值
                     * 
                     */
                    bool SpeedLimitHasBeenSet() const;

                    /**
                     * 获取<p>安全模式（证书校验）：0（默认） 非安全模式（跳过证书校验）：1</p>
                     * @return Insecure <p>安全模式（证书校验）：0（默认） 非安全模式（跳过证书校验）：1</p>
                     * 
                     */
                    uint64_t GetInsecure() const;

                    /**
                     * 判断参数 Insecure 是否已赋值
                     * @return Insecure 是否已赋值
                     * 
                     */
                    bool InsecureHasBeenSet() const;

                    /**
                     * 获取<p>联通性检测结果详情</p>
                     * @return ConnDetectDetail <p>联通性检测结果详情</p>
                     * 
                     */
                    std::vector<RegistryConnDetectResult> GetConnDetectDetail() const;

                    /**
                     * 判断参数 ConnDetectDetail 是否已赋值
                     * @return ConnDetectDetail 是否已赋值
                     * 
                     */
                    bool ConnDetectDetailHasBeenSet() const;

                    /**
                     * 获取<p>tcr情况下instance_id</p>
                     * @return InstanceID <p>tcr情况下instance_id</p>
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取<p>同步方式，0全量同步，1增量同步</p>
                     * @return SyncMode <p>同步方式，0全量同步，1增量同步</p>
                     * 
                     */
                    uint64_t GetSyncMode() const;

                    /**
                     * 判断参数 SyncMode 是否已赋值
                     * @return SyncMode 是否已赋值
                     * 
                     */
                    bool SyncModeHasBeenSet() const;

                    /**
                     * 获取<p>是否自动授权&amp;扫描，选择全量同步时只针对最新版本镜像，增量同步时则包含所有新增镜像</p>
                     * @return NeedScan <p>是否自动授权&amp;扫描，选择全量同步时只针对最新版本镜像，增量同步时则包含所有新增镜像</p>
                     * 
                     */
                    bool GetNeedScan() const;

                    /**
                     * 判断参数 NeedScan 是否已赋值
                     * @return NeedScan 是否已赋值
                     * 
                     */
                    bool NeedScanHasBeenSet() const;

                    /**
                     * 获取<p>webhook接入地址</p>
                     * @return WebhookUrl <p>webhook接入地址</p>
                     * 
                     */
                    std::string GetWebhookUrl() const;

                    /**
                     * 判断参数 WebhookUrl 是否已赋值
                     * @return WebhookUrl 是否已赋值
                     * 
                     */
                    bool WebhookUrlHasBeenSet() const;

                    /**
                     * 获取<p>webhook接入token</p>
                     * @return WebhookToken <p>webhook接入token</p>
                     * 
                     */
                    std::string GetWebhookToken() const;

                    /**
                     * 判断参数 WebhookToken 是否已赋值
                     * @return WebhookToken 是否已赋值
                     * 
                     */
                    bool WebhookTokenHasBeenSet() const;

                private:

                    /**
                     * <p>仓库名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>用户名</p>
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * <p>密码</p>
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * <p>仓库url</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>仓库类型，列表：harbor</p>
                     */
                    std::string m_registryType;
                    bool m_registryTypeHasBeenSet;

                    /**
                     * <p>仓库版本</p>
                     */
                    std::string m_registryVersion;
                    bool m_registryVersionHasBeenSet;

                    /**
                     * <p>网络类型，列表：public（公网）,private（私网）</p>
                     */
                    std::string m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * <p>区域，列表:default（默认）</p>
                     */
                    std::string m_registryRegion;
                    bool m_registryRegionHasBeenSet;

                    /**
                     * <p>限速</p>
                     */
                    uint64_t m_speedLimit;
                    bool m_speedLimitHasBeenSet;

                    /**
                     * <p>安全模式（证书校验）：0（默认） 非安全模式（跳过证书校验）：1</p>
                     */
                    uint64_t m_insecure;
                    bool m_insecureHasBeenSet;

                    /**
                     * <p>联通性检测结果详情</p>
                     */
                    std::vector<RegistryConnDetectResult> m_connDetectDetail;
                    bool m_connDetectDetailHasBeenSet;

                    /**
                     * <p>tcr情况下instance_id</p>
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * <p>同步方式，0全量同步，1增量同步</p>
                     */
                    uint64_t m_syncMode;
                    bool m_syncModeHasBeenSet;

                    /**
                     * <p>是否自动授权&amp;扫描，选择全量同步时只针对最新版本镜像，增量同步时则包含所有新增镜像</p>
                     */
                    bool m_needScan;
                    bool m_needScanHasBeenSet;

                    /**
                     * <p>webhook接入地址</p>
                     */
                    std::string m_webhookUrl;
                    bool m_webhookUrlHasBeenSet;

                    /**
                     * <p>webhook接入token</p>
                     */
                    std::string m_webhookToken;
                    bool m_webhookTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEREGISTRYREGISTRYDETAILRESPONSE_H_
