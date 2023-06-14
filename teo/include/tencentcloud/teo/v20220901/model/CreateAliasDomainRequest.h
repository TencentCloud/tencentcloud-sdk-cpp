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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEALIASDOMAINREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEALIASDOMAINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CreateAliasDomain请求参数结构体
                */
                class CreateAliasDomainRequest : public AbstractModel
                {
                public:
                    CreateAliasDomainRequest();
                    ~CreateAliasDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点 ID。
                     * @return ZoneId 站点 ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点 ID。
                     * @param _zoneId 站点 ID。
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取别称域名名称。
                     * @return AliasName 别称域名名称。
                     * 
                     */
                    std::string GetAliasName() const;

                    /**
                     * 设置别称域名名称。
                     * @param _aliasName 别称域名名称。
                     * 
                     */
                    void SetAliasName(const std::string& _aliasName);

                    /**
                     * 判断参数 AliasName 是否已赋值
                     * @return AliasName 是否已赋值
                     * 
                     */
                    bool AliasNameHasBeenSet() const;

                    /**
                     * 获取目标域名名称。
                     * @return TargetName 目标域名名称。
                     * 
                     */
                    std::string GetTargetName() const;

                    /**
                     * 设置目标域名名称。
                     * @param _targetName 目标域名名称。
                     * 
                     */
                    void SetTargetName(const std::string& _targetName);

                    /**
                     * 判断参数 TargetName 是否已赋值
                     * @return TargetName 是否已赋值
                     * 
                     */
                    bool TargetNameHasBeenSet() const;

                    /**
                     * 获取证书配置，取值有：
<li> none：不配置；</li>
<li> hosting：SSL托管证书。</li>默认取值为 none。
                     * @return CertType 证书配置，取值有：
<li> none：不配置；</li>
<li> hosting：SSL托管证书。</li>默认取值为 none。
                     * 
                     */
                    std::string GetCertType() const;

                    /**
                     * 设置证书配置，取值有：
<li> none：不配置；</li>
<li> hosting：SSL托管证书。</li>默认取值为 none。
                     * @param _certType 证书配置，取值有：
<li> none：不配置；</li>
<li> hosting：SSL托管证书。</li>默认取值为 none。
                     * 
                     */
                    void SetCertType(const std::string& _certType);

                    /**
                     * 判断参数 CertType 是否已赋值
                     * @return CertType 是否已赋值
                     * 
                     */
                    bool CertTypeHasBeenSet() const;

                    /**
                     * 获取当 CertType 取值为 hosting 时需填入相应证书 ID。
                     * @return CertId 当 CertType 取值为 hosting 时需填入相应证书 ID。
                     * 
                     */
                    std::vector<std::string> GetCertId() const;

                    /**
                     * 设置当 CertType 取值为 hosting 时需填入相应证书 ID。
                     * @param _certId 当 CertType 取值为 hosting 时需填入相应证书 ID。
                     * 
                     */
                    void SetCertId(const std::vector<std::string>& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                private:

                    /**
                     * 站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 别称域名名称。
                     */
                    std::string m_aliasName;
                    bool m_aliasNameHasBeenSet;

                    /**
                     * 目标域名名称。
                     */
                    std::string m_targetName;
                    bool m_targetNameHasBeenSet;

                    /**
                     * 证书配置，取值有：
<li> none：不配置；</li>
<li> hosting：SSL托管证书。</li>默认取值为 none。
                     */
                    std::string m_certType;
                    bool m_certTypeHasBeenSet;

                    /**
                     * 当 CertType 取值为 hosting 时需填入相应证书 ID。
                     */
                    std::vector<std::string> m_certId;
                    bool m_certIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEALIASDOMAINREQUEST_H_
