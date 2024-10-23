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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MUTUALTLS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MUTUALTLS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/CertificateInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * HTTPS 双向认证。
                */
                class MutualTLS : public AbstractModel
                {
                public:
                    MutualTLS();
                    ~MutualTLS() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取双向认证配置开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * @return Switch 双向认证配置开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置双向认证配置开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * @param _switch 双向认证配置开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取双向认证证书列表。
注意：MutualTLS 在 ModifyHostsCertificate 作为入参使用时，该参数传入对应证书的 CertId 即可。您可以前往 [SSL 证书列表](https://console.cloud.tencent.com/ssl) 查看 CertId。
                     * @return CertInfos 双向认证证书列表。
注意：MutualTLS 在 ModifyHostsCertificate 作为入参使用时，该参数传入对应证书的 CertId 即可。您可以前往 [SSL 证书列表](https://console.cloud.tencent.com/ssl) 查看 CertId。
                     * 
                     */
                    std::vector<CertificateInfo> GetCertInfos() const;

                    /**
                     * 设置双向认证证书列表。
注意：MutualTLS 在 ModifyHostsCertificate 作为入参使用时，该参数传入对应证书的 CertId 即可。您可以前往 [SSL 证书列表](https://console.cloud.tencent.com/ssl) 查看 CertId。
                     * @param _certInfos 双向认证证书列表。
注意：MutualTLS 在 ModifyHostsCertificate 作为入参使用时，该参数传入对应证书的 CertId 即可。您可以前往 [SSL 证书列表](https://console.cloud.tencent.com/ssl) 查看 CertId。
                     * 
                     */
                    void SetCertInfos(const std::vector<CertificateInfo>& _certInfos);

                    /**
                     * 判断参数 CertInfos 是否已赋值
                     * @return CertInfos 是否已赋值
                     * 
                     */
                    bool CertInfosHasBeenSet() const;

                private:

                    /**
                     * 双向认证配置开关，取值有：
<li>on：开启；</li>
<li>off：关闭。</li>
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 双向认证证书列表。
注意：MutualTLS 在 ModifyHostsCertificate 作为入参使用时，该参数传入对应证书的 CertId 即可。您可以前往 [SSL 证书列表](https://console.cloud.tencent.com/ssl) 查看 CertId。
                     */
                    std::vector<CertificateInfo> m_certInfos;
                    bool m_certInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MUTUALTLS_H_
