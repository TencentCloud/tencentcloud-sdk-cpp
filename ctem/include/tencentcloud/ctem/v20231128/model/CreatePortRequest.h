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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_CREATEPORTREQUEST_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_CREATEPORTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ctem
    {
        namespace V20231128
        {
            namespace Model
            {
                /**
                * CreatePort请求参数结构体
                */
                class CreatePortRequest : public AbstractModel
                {
                public:
                    CreatePortRequest();
                    ~CreatePortRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取企业Id
                     * @return CustomerId 企业Id
                     * 
                     */
                    int64_t GetCustomerId() const;

                    /**
                     * 设置企业Id
                     * @param _customerId 企业Id
                     * 
                     */
                    void SetCustomerId(const int64_t& _customerId);

                    /**
                     * 判断参数 CustomerId 是否已赋值
                     * @return CustomerId 是否已赋值
                     * 
                     */
                    bool CustomerIdHasBeenSet() const;

                    /**
                     * 获取端口
                     * @return Port 端口
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置端口
                     * @param _port 端口
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取IP或域名地址
                     * @return Asset IP或域名地址
                     * 
                     */
                    std::string GetAsset() const;

                    /**
                     * 设置IP或域名地址
                     * @param _asset IP或域名地址
                     * 
                     */
                    void SetAsset(const std::string& _asset);

                    /**
                     * 判断参数 Asset 是否已赋值
                     * @return Asset 是否已赋值
                     * 
                     */
                    bool AssetHasBeenSet() const;

                    /**
                     * 获取是否高危
                     * @return IsHighRisk 是否高危
                     * 
                     */
                    bool GetIsHighRisk() const;

                    /**
                     * 设置是否高危
                     * @param _isHighRisk 是否高危
                     * 
                     */
                    void SetIsHighRisk(const bool& _isHighRisk);

                    /**
                     * 判断参数 IsHighRisk 是否已赋值
                     * @return IsHighRisk 是否已赋值
                     * 
                     */
                    bool IsHighRiskHasBeenSet() const;

                    /**
                     * 获取子公司
                     * @return EnterpriseUid 子公司
                     * 
                     */
                    std::string GetEnterpriseUid() const;

                    /**
                     * 设置子公司
                     * @param _enterpriseUid 子公司
                     * 
                     */
                    void SetEnterpriseUid(const std::string& _enterpriseUid);

                    /**
                     * 判断参数 EnterpriseUid 是否已赋值
                     * @return EnterpriseUid 是否已赋值
                     * 
                     */
                    bool EnterpriseUidHasBeenSet() const;

                    /**
                     * 获取base64编码后的指纹
                     * @return Banner base64编码后的指纹
                     * 
                     */
                    std::string GetBanner() const;

                    /**
                     * 设置base64编码后的指纹
                     * @param _banner base64编码后的指纹
                     * 
                     */
                    void SetBanner(const std::string& _banner);

                    /**
                     * 判断参数 Banner 是否已赋值
                     * @return Banner 是否已赋值
                     * 
                     */
                    bool BannerHasBeenSet() const;

                    /**
                     * 获取解析的IP
                     * @return Ip 解析的IP
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置解析的IP
                     * @param _ip 解析的IP
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取组件名称
                     * @return App 组件名称
                     * 
                     */
                    std::string GetApp() const;

                    /**
                     * 设置组件名称
                     * @param _app 组件名称
                     * 
                     */
                    void SetApp(const std::string& _app);

                    /**
                     * 判断参数 App 是否已赋值
                     * @return App 是否已赋值
                     * 
                     */
                    bool AppHasBeenSet() const;

                    /**
                     * 获取服务名称
                     * @return Service 服务名称
                     * 
                     */
                    std::string GetService() const;

                    /**
                     * 设置服务名称
                     * @param _service 服务名称
                     * 
                     */
                    void SetService(const std::string& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     * 
                     */
                    bool ServiceHasBeenSet() const;

                private:

                    /**
                     * 企业Id
                     */
                    int64_t m_customerId;
                    bool m_customerIdHasBeenSet;

                    /**
                     * 端口
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * IP或域名地址
                     */
                    std::string m_asset;
                    bool m_assetHasBeenSet;

                    /**
                     * 是否高危
                     */
                    bool m_isHighRisk;
                    bool m_isHighRiskHasBeenSet;

                    /**
                     * 子公司
                     */
                    std::string m_enterpriseUid;
                    bool m_enterpriseUidHasBeenSet;

                    /**
                     * base64编码后的指纹
                     */
                    std::string m_banner;
                    bool m_bannerHasBeenSet;

                    /**
                     * 解析的IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 组件名称
                     */
                    std::string m_app;
                    bool m_appHasBeenSet;

                    /**
                     * 服务名称
                     */
                    std::string m_service;
                    bool m_serviceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_CREATEPORTREQUEST_H_
