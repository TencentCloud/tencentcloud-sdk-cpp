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
                     * 获取仓库名
                     * @return Name 仓库名
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
                     * 获取用户名
                     * @return Username 用户名
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
                     * 获取密码
                     * @return Password 密码
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
                     * 获取仓库url
                     * @return Url 仓库url
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
                     * 获取仓库类型，列表：harbor
                     * @return RegistryType 仓库类型，列表：harbor
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
                     * 获取仓库版本
                     * @return RegistryVersion 仓库版本
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
                     * 获取网络类型，列表：public（公网）,private（私网）
                     * @return NetType 网络类型，列表：public（公网）,private（私网）
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
                     * 获取区域，列表:default（默认）
                     * @return RegistryRegion 区域，列表:default（默认）
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
                     * 获取限速
                     * @return SpeedLimit 限速
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
                     * 获取安全模式（证书校验）：0（默认） 非安全模式（跳过证书校验）：1
                     * @return Insecure 安全模式（证书校验）：0（默认） 非安全模式（跳过证书校验）：1
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
                     * 获取联通性检测结果详情
                     * @return ConnDetectDetail 联通性检测结果详情
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
                     * 获取tcr情况下instance_id
                     * @return InstanceID tcr情况下instance_id
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
                     * 获取同步方式，0全量同步，1增量同步
                     * @return SyncMode 同步方式，0全量同步，1增量同步
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
                     * 获取是否自动授权&扫描，选择全量同步时只针对最新版本镜像，增量同步时则包含所有新增镜像
                     * @return NeedScan 是否自动授权&扫描，选择全量同步时只针对最新版本镜像，增量同步时则包含所有新增镜像
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
                     * 获取webhook接入地址
                     * @return WebhookUrl webhook接入地址
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
                     * 获取webhook接入token	
                     * @return WebhookToken webhook接入token	
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
                     * 仓库类型，列表：harbor
                     */
                    std::string m_registryType;
                    bool m_registryTypeHasBeenSet;

                    /**
                     * 仓库版本
                     */
                    std::string m_registryVersion;
                    bool m_registryVersionHasBeenSet;

                    /**
                     * 网络类型，列表：public（公网）,private（私网）
                     */
                    std::string m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * 区域，列表:default（默认）
                     */
                    std::string m_registryRegion;
                    bool m_registryRegionHasBeenSet;

                    /**
                     * 限速
                     */
                    uint64_t m_speedLimit;
                    bool m_speedLimitHasBeenSet;

                    /**
                     * 安全模式（证书校验）：0（默认） 非安全模式（跳过证书校验）：1
                     */
                    uint64_t m_insecure;
                    bool m_insecureHasBeenSet;

                    /**
                     * 联通性检测结果详情
                     */
                    std::vector<RegistryConnDetectResult> m_connDetectDetail;
                    bool m_connDetectDetailHasBeenSet;

                    /**
                     * tcr情况下instance_id
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 同步方式，0全量同步，1增量同步
                     */
                    uint64_t m_syncMode;
                    bool m_syncModeHasBeenSet;

                    /**
                     * 是否自动授权&扫描，选择全量同步时只针对最新版本镜像，增量同步时则包含所有新增镜像
                     */
                    bool m_needScan;
                    bool m_needScanHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEASSETIMAGEREGISTRYREGISTRYDETAILRESPONSE_H_
