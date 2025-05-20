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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYORIGINPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYORIGINPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/OriginPrivateParameters.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 修改源站配置参数。
                */
                class ModifyOriginParameters : public AbstractModel
                {
                public:
                    ModifyOriginParameters();
                    ~ModifyOriginParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取源站类型。取值有：
<li>IPDomain：IPV4、IPV6 或域名类型源站；</li>
<li>OriginGroup：源站组类型源站；</li>
<li>LoadBalance：负载均衡，该功能内测中，如需使用，请提工单或联系智能客服；</li>
<li>COS：腾讯云 COS 对象存储源站；</li>
<li>AWSS3：支持 AWS S3 协议的所有对象存储源站。</li>
                     * @return OriginType 源站类型。取值有：
<li>IPDomain：IPV4、IPV6 或域名类型源站；</li>
<li>OriginGroup：源站组类型源站；</li>
<li>LoadBalance：负载均衡，该功能内测中，如需使用，请提工单或联系智能客服；</li>
<li>COS：腾讯云 COS 对象存储源站；</li>
<li>AWSS3：支持 AWS S3 协议的所有对象存储源站。</li>
                     * 
                     */
                    std::string GetOriginType() const;

                    /**
                     * 设置源站类型。取值有：
<li>IPDomain：IPV4、IPV6 或域名类型源站；</li>
<li>OriginGroup：源站组类型源站；</li>
<li>LoadBalance：负载均衡，该功能内测中，如需使用，请提工单或联系智能客服；</li>
<li>COS：腾讯云 COS 对象存储源站；</li>
<li>AWSS3：支持 AWS S3 协议的所有对象存储源站。</li>
                     * @param _originType 源站类型。取值有：
<li>IPDomain：IPV4、IPV6 或域名类型源站；</li>
<li>OriginGroup：源站组类型源站；</li>
<li>LoadBalance：负载均衡，该功能内测中，如需使用，请提工单或联系智能客服；</li>
<li>COS：腾讯云 COS 对象存储源站；</li>
<li>AWSS3：支持 AWS S3 协议的所有对象存储源站。</li>
                     * 
                     */
                    void SetOriginType(const std::string& _originType);

                    /**
                     * 判断参数 OriginType 是否已赋值
                     * @return OriginType 是否已赋值
                     * 
                     */
                    bool OriginTypeHasBeenSet() const;

                    /**
                     * 获取源站地址，根据 OriginType 的取值分为以下情况：
<li>当 OriginType = IPDomain 时，该参数请填写 IPV4、IPV6 地址或域名；</li>
<li>当 OriginType = COS 时，该参数请填写 COS 桶的访问域名；</li>
<li>当 OriginType = AWSS3，该参数请填写 S3 桶的访问域名；</li>
<li>当 OriginType = OriginGroup 时，该参数请填写源站组 ID；</li>
<li>当 OriginType = LoadBalance 时，该参数请填写负载均衡实例 ID，该功能当前仅白名单开放。</li>
                     * @return Origin 源站地址，根据 OriginType 的取值分为以下情况：
<li>当 OriginType = IPDomain 时，该参数请填写 IPV4、IPV6 地址或域名；</li>
<li>当 OriginType = COS 时，该参数请填写 COS 桶的访问域名；</li>
<li>当 OriginType = AWSS3，该参数请填写 S3 桶的访问域名；</li>
<li>当 OriginType = OriginGroup 时，该参数请填写源站组 ID；</li>
<li>当 OriginType = LoadBalance 时，该参数请填写负载均衡实例 ID，该功能当前仅白名单开放。</li>
                     * 
                     */
                    std::string GetOrigin() const;

                    /**
                     * 设置源站地址，根据 OriginType 的取值分为以下情况：
<li>当 OriginType = IPDomain 时，该参数请填写 IPV4、IPV6 地址或域名；</li>
<li>当 OriginType = COS 时，该参数请填写 COS 桶的访问域名；</li>
<li>当 OriginType = AWSS3，该参数请填写 S3 桶的访问域名；</li>
<li>当 OriginType = OriginGroup 时，该参数请填写源站组 ID；</li>
<li>当 OriginType = LoadBalance 时，该参数请填写负载均衡实例 ID，该功能当前仅白名单开放。</li>
                     * @param _origin 源站地址，根据 OriginType 的取值分为以下情况：
<li>当 OriginType = IPDomain 时，该参数请填写 IPV4、IPV6 地址或域名；</li>
<li>当 OriginType = COS 时，该参数请填写 COS 桶的访问域名；</li>
<li>当 OriginType = AWSS3，该参数请填写 S3 桶的访问域名；</li>
<li>当 OriginType = OriginGroup 时，该参数请填写源站组 ID；</li>
<li>当 OriginType = LoadBalance 时，该参数请填写负载均衡实例 ID，该功能当前仅白名单开放。</li>
                     * 
                     */
                    void SetOrigin(const std::string& _origin);

                    /**
                     * 判断参数 Origin 是否已赋值
                     * @return Origin 是否已赋值
                     * 
                     */
                    bool OriginHasBeenSet() const;

                    /**
                     * 获取回源协议配置。当 OriginType 取值为 IPDomain、OriginGroup、LoadBalance 时该参数必填。取值有：
<li>http：使用 HTTP 协议；</li>
<li>https：使用 HTTPS 协议；</li>
<li>follow：协议跟随。</li>
                     * @return OriginProtocol 回源协议配置。当 OriginType 取值为 IPDomain、OriginGroup、LoadBalance 时该参数必填。取值有：
<li>http：使用 HTTP 协议；</li>
<li>https：使用 HTTPS 协议；</li>
<li>follow：协议跟随。</li>
                     * 
                     */
                    std::string GetOriginProtocol() const;

                    /**
                     * 设置回源协议配置。当 OriginType 取值为 IPDomain、OriginGroup、LoadBalance 时该参数必填。取值有：
<li>http：使用 HTTP 协议；</li>
<li>https：使用 HTTPS 协议；</li>
<li>follow：协议跟随。</li>
                     * @param _originProtocol 回源协议配置。当 OriginType 取值为 IPDomain、OriginGroup、LoadBalance 时该参数必填。取值有：
<li>http：使用 HTTP 协议；</li>
<li>https：使用 HTTPS 协议；</li>
<li>follow：协议跟随。</li>
                     * 
                     */
                    void SetOriginProtocol(const std::string& _originProtocol);

                    /**
                     * 判断参数 OriginProtocol 是否已赋值
                     * @return OriginProtocol 是否已赋值
                     * 
                     */
                    bool OriginProtocolHasBeenSet() const;

                    /**
                     * 获取HTTP 回源端口，取值范围 1～65535。当回源协议 OriginProtocol 为 http 或者 follow 时该参数必填。
                     * @return HTTPOriginPort HTTP 回源端口，取值范围 1～65535。当回源协议 OriginProtocol 为 http 或者 follow 时该参数必填。
                     * 
                     */
                    int64_t GetHTTPOriginPort() const;

                    /**
                     * 设置HTTP 回源端口，取值范围 1～65535。当回源协议 OriginProtocol 为 http 或者 follow 时该参数必填。
                     * @param _hTTPOriginPort HTTP 回源端口，取值范围 1～65535。当回源协议 OriginProtocol 为 http 或者 follow 时该参数必填。
                     * 
                     */
                    void SetHTTPOriginPort(const int64_t& _hTTPOriginPort);

                    /**
                     * 判断参数 HTTPOriginPort 是否已赋值
                     * @return HTTPOriginPort 是否已赋值
                     * 
                     */
                    bool HTTPOriginPortHasBeenSet() const;

                    /**
                     * 获取HTTPS 回源端口，取值范围 1～65535。当回源协议 OriginProtocol 为 https 或者 follow 时该参数必填。
                     * @return HTTPSOriginPort HTTPS 回源端口，取值范围 1～65535。当回源协议 OriginProtocol 为 https 或者 follow 时该参数必填。
                     * 
                     */
                    int64_t GetHTTPSOriginPort() const;

                    /**
                     * 设置HTTPS 回源端口，取值范围 1～65535。当回源协议 OriginProtocol 为 https 或者 follow 时该参数必填。
                     * @param _hTTPSOriginPort HTTPS 回源端口，取值范围 1～65535。当回源协议 OriginProtocol 为 https 或者 follow 时该参数必填。
                     * 
                     */
                    void SetHTTPSOriginPort(const int64_t& _hTTPSOriginPort);

                    /**
                     * 判断参数 HTTPSOriginPort 是否已赋值
                     * @return HTTPSOriginPort 是否已赋值
                     * 
                     */
                    bool HTTPSOriginPortHasBeenSet() const;

                    /**
                     * 获取指定是否允许访问私有对象存储源站，当源站类型 OriginType = COS 或 AWSS3 时该参数必填，取值有：
<li>on：使用私有鉴权；</li>
<li>off：不使用私有鉴权。</li>
                     * @return PrivateAccess 指定是否允许访问私有对象存储源站，当源站类型 OriginType = COS 或 AWSS3 时该参数必填，取值有：
<li>on：使用私有鉴权；</li>
<li>off：不使用私有鉴权。</li>
                     * 
                     */
                    std::string GetPrivateAccess() const;

                    /**
                     * 设置指定是否允许访问私有对象存储源站，当源站类型 OriginType = COS 或 AWSS3 时该参数必填，取值有：
<li>on：使用私有鉴权；</li>
<li>off：不使用私有鉴权。</li>
                     * @param _privateAccess 指定是否允许访问私有对象存储源站，当源站类型 OriginType = COS 或 AWSS3 时该参数必填，取值有：
<li>on：使用私有鉴权；</li>
<li>off：不使用私有鉴权。</li>
                     * 
                     */
                    void SetPrivateAccess(const std::string& _privateAccess);

                    /**
                     * 判断参数 PrivateAccess 是否已赋值
                     * @return PrivateAccess 是否已赋值
                     * 
                     */
                    bool PrivateAccessHasBeenSet() const;

                    /**
                     * 获取私有鉴权使用参数，该参数仅当 OriginType = AWSS3 且 PrivateAccess = on 时会生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrivateParameters 私有鉴权使用参数，该参数仅当 OriginType = AWSS3 且 PrivateAccess = on 时会生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OriginPrivateParameters GetPrivateParameters() const;

                    /**
                     * 设置私有鉴权使用参数，该参数仅当 OriginType = AWSS3 且 PrivateAccess = on 时会生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _privateParameters 私有鉴权使用参数，该参数仅当 OriginType = AWSS3 且 PrivateAccess = on 时会生效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPrivateParameters(const OriginPrivateParameters& _privateParameters);

                    /**
                     * 判断参数 PrivateParameters 是否已赋值
                     * @return PrivateParameters 是否已赋值
                     * 
                     */
                    bool PrivateParametersHasBeenSet() const;

                private:

                    /**
                     * 源站类型。取值有：
<li>IPDomain：IPV4、IPV6 或域名类型源站；</li>
<li>OriginGroup：源站组类型源站；</li>
<li>LoadBalance：负载均衡，该功能内测中，如需使用，请提工单或联系智能客服；</li>
<li>COS：腾讯云 COS 对象存储源站；</li>
<li>AWSS3：支持 AWS S3 协议的所有对象存储源站。</li>
                     */
                    std::string m_originType;
                    bool m_originTypeHasBeenSet;

                    /**
                     * 源站地址，根据 OriginType 的取值分为以下情况：
<li>当 OriginType = IPDomain 时，该参数请填写 IPV4、IPV6 地址或域名；</li>
<li>当 OriginType = COS 时，该参数请填写 COS 桶的访问域名；</li>
<li>当 OriginType = AWSS3，该参数请填写 S3 桶的访问域名；</li>
<li>当 OriginType = OriginGroup 时，该参数请填写源站组 ID；</li>
<li>当 OriginType = LoadBalance 时，该参数请填写负载均衡实例 ID，该功能当前仅白名单开放。</li>
                     */
                    std::string m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * 回源协议配置。当 OriginType 取值为 IPDomain、OriginGroup、LoadBalance 时该参数必填。取值有：
<li>http：使用 HTTP 协议；</li>
<li>https：使用 HTTPS 协议；</li>
<li>follow：协议跟随。</li>
                     */
                    std::string m_originProtocol;
                    bool m_originProtocolHasBeenSet;

                    /**
                     * HTTP 回源端口，取值范围 1～65535。当回源协议 OriginProtocol 为 http 或者 follow 时该参数必填。
                     */
                    int64_t m_hTTPOriginPort;
                    bool m_hTTPOriginPortHasBeenSet;

                    /**
                     * HTTPS 回源端口，取值范围 1～65535。当回源协议 OriginProtocol 为 https 或者 follow 时该参数必填。
                     */
                    int64_t m_hTTPSOriginPort;
                    bool m_hTTPSOriginPortHasBeenSet;

                    /**
                     * 指定是否允许访问私有对象存储源站，当源站类型 OriginType = COS 或 AWSS3 时该参数必填，取值有：
<li>on：使用私有鉴权；</li>
<li>off：不使用私有鉴权。</li>
                     */
                    std::string m_privateAccess;
                    bool m_privateAccessHasBeenSet;

                    /**
                     * 私有鉴权使用参数，该参数仅当 OriginType = AWSS3 且 PrivateAccess = on 时会生效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OriginPrivateParameters m_privateParameters;
                    bool m_privateParametersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYORIGINPARAMETERS_H_
