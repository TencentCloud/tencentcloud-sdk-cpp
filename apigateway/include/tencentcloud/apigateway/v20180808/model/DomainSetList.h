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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DOMAINSETLIST_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DOMAINSETLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * 服务自定义域名列表
                */
                class DomainSetList : public AbstractModel
                {
                public:
                    DomainSetList();
                    ~DomainSetList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名名称。
                     * @return DomainName 域名名称。
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置域名名称。
                     * @param DomainName 域名名称。
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取域名解析状态。True 表示正常解析，False 表示解析失败。
                     * @return Status 域名解析状态。True 表示正常解析，False 表示解析失败。
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置域名解析状态。True 表示正常解析，False 表示解析失败。
                     * @param Status 域名解析状态。True 表示正常解析，False 表示解析失败。
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取证书ID。
                     * @return CertificateId 证书ID。
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置证书ID。
                     * @param CertificateId 证书ID。
                     */
                    void SetCertificateId(const std::string& _certificateId);

                    /**
                     * 判断参数 CertificateId 是否已赋值
                     * @return CertificateId 是否已赋值
                     */
                    bool CertificateIdHasBeenSet() const;

                    /**
                     * 获取是否使用默认路径映射。
                     * @return IsDefaultMapping 是否使用默认路径映射。
                     */
                    bool GetIsDefaultMapping() const;

                    /**
                     * 设置是否使用默认路径映射。
                     * @param IsDefaultMapping 是否使用默认路径映射。
                     */
                    void SetIsDefaultMapping(const bool& _isDefaultMapping);

                    /**
                     * 判断参数 IsDefaultMapping 是否已赋值
                     * @return IsDefaultMapping 是否已赋值
                     */
                    bool IsDefaultMappingHasBeenSet() const;

                    /**
                     * 获取自定义域名协议类型。
                     * @return Protocol 自定义域名协议类型。
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置自定义域名协议类型。
                     * @param Protocol 自定义域名协议类型。
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取网络类型（'INNER' 或 'OUTER'）。
                     * @return NetType 网络类型（'INNER' 或 'OUTER'）。
                     */
                    std::string GetNetType() const;

                    /**
                     * 设置网络类型（'INNER' 或 'OUTER'）。
                     * @param NetType 网络类型（'INNER' 或 'OUTER'）。
                     */
                    void SetNetType(const std::string& _netType);

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     */
                    bool NetTypeHasBeenSet() const;

                private:

                    /**
                     * 域名名称。
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * 域名解析状态。True 表示正常解析，False 表示解析失败。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 证书ID。
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * 是否使用默认路径映射。
                     */
                    bool m_isDefaultMapping;
                    bool m_isDefaultMappingHasBeenSet;

                    /**
                     * 自定义域名协议类型。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 网络类型（'INNER' 或 'OUTER'）。
                     */
                    std::string m_netType;
                    bool m_netTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_DOMAINSETLIST_H_
