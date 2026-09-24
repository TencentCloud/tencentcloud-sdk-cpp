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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCEDOMAIN_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCEDOMAIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/OwnershipVerification.h>
#include <tencentcloud/teo/v20220901/model/HostsCertificate.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 推理服务的域名信息。
                */
                class InferenceDomain : public AbstractModel
                {
                public:
                    InferenceDomain();
                    ~InferenceDomain() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>域名名称。</p>
                     * @return Domain <p>域名名称。</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>域名名称。</p>
                     * @param _domain <p>域名名称。</p>
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
                     * 获取<p>域名状态。</p><p>枚举值：</p><ul><li>Online： 已生效；</li><li>Process： 部署中；</li><li>Offline： 已停用；</li><li>Init： 未生效，待激活站点。</li></ul>
                     * @return Status <p>域名状态。</p><p>枚举值：</p><ul><li>Online： 已生效；</li><li>Process： 部署中；</li><li>Offline： 已停用；</li><li>Init： 未生效，待激活站点。</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>域名状态。</p><p>枚举值：</p><ul><li>Online： 已生效；</li><li>Process： 部署中；</li><li>Offline： 已停用；</li><li>Init： 未生效，待激活站点。</li></ul>
                     * @param _status <p>域名状态。</p><p>枚举值：</p><ul><li>Online： 已生效；</li><li>Process： 部署中；</li><li>Offline： 已停用；</li><li>Init： 未生效，待激活站点。</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>推理任务请求鉴权开关。</p><p>枚举值：</p><ul><li>Off： 关闭鉴权；</li><li>On： 开启鉴权。</li></ul><p>默认值：On。</p>
                     * @return AuthSwitch <p>推理任务请求鉴权开关。</p><p>枚举值：</p><ul><li>Off： 关闭鉴权；</li><li>On： 开启鉴权。</li></ul><p>默认值：On。</p>
                     * 
                     */
                    std::string GetAuthSwitch() const;

                    /**
                     * 设置<p>推理任务请求鉴权开关。</p><p>枚举值：</p><ul><li>Off： 关闭鉴权；</li><li>On： 开启鉴权。</li></ul><p>默认值：On。</p>
                     * @param _authSwitch <p>推理任务请求鉴权开关。</p><p>枚举值：</p><ul><li>Off： 关闭鉴权；</li><li>On： 开启鉴权。</li></ul><p>默认值：On。</p>
                     * 
                     */
                    void SetAuthSwitch(const std::string& _authSwitch);

                    /**
                     * 判断参数 AuthSwitch 是否已赋值
                     * @return AuthSwitch 是否已赋值
                     * 
                     */
                    bool AuthSwitchHasBeenSet() const;

                    /**
                     * 获取<p>CNAME 地址。</p><p>校验域名 CNAME 配置状态，请参考<a href="https://cloud.tencent.com/document/api/1552/94491"> CheckCnameStatus </a>接口。</p>
                     * @return Cname <p>CNAME 地址。</p><p>校验域名 CNAME 配置状态，请参考<a href="https://cloud.tencent.com/document/api/1552/94491"> CheckCnameStatus </a>接口。</p>
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 设置<p>CNAME 地址。</p><p>校验域名 CNAME 配置状态，请参考<a href="https://cloud.tencent.com/document/api/1552/94491"> CheckCnameStatus </a>接口。</p>
                     * @param _cname <p>CNAME 地址。</p><p>校验域名 CNAME 配置状态，请参考<a href="https://cloud.tencent.com/document/api/1552/94491"> CheckCnameStatus </a>接口。</p>
                     * 
                     */
                    void SetCname(const std::string& _cname);

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     * 
                     */
                    bool CnameHasBeenSet() const;

                    /**
                     * 获取<p>域名需进行归属权验证才能继续提供服务时，该对象会携带对应验证方式所需要的信息。</p><p>验证归属权，请参考<a href="https://cloud.tencent.com/document/api/1552/98879"> VerifyOwnership </a>接口。</p>
                     * @return OwnershipVerification <p>域名需进行归属权验证才能继续提供服务时，该对象会携带对应验证方式所需要的信息。</p><p>验证归属权，请参考<a href="https://cloud.tencent.com/document/api/1552/98879"> VerifyOwnership </a>接口。</p>
                     * 
                     */
                    OwnershipVerification GetOwnershipVerification() const;

                    /**
                     * 设置<p>域名需进行归属权验证才能继续提供服务时，该对象会携带对应验证方式所需要的信息。</p><p>验证归属权，请参考<a href="https://cloud.tencent.com/document/api/1552/98879"> VerifyOwnership </a>接口。</p>
                     * @param _ownershipVerification <p>域名需进行归属权验证才能继续提供服务时，该对象会携带对应验证方式所需要的信息。</p><p>验证归属权，请参考<a href="https://cloud.tencent.com/document/api/1552/98879"> VerifyOwnership </a>接口。</p>
                     * 
                     */
                    void SetOwnershipVerification(const OwnershipVerification& _ownershipVerification);

                    /**
                     * 判断参数 OwnershipVerification 是否已赋值
                     * @return OwnershipVerification 是否已赋值
                     * 
                     */
                    bool OwnershipVerificationHasBeenSet() const;

                    /**
                     * 获取<p>域名证书信息。</p><p>申请免费证书，请参考 <a href="https://cloud.tencent.com/document/api/1552/124807">ApplyFreeCertificate</a> 接口；<br>检查免费证书申请结果，请参考 <a href="https://cloud.tencent.com/document/api/1552/124806">CheckFreeCertificateVerification</a> 接口；<br>配置域名证书，请参考 <a href="https://cloud.tencent.com/document/api/1552/80764">ModifyHostsCertificate</a> 接口。</p>
                     * @return Certificate <p>域名证书信息。</p><p>申请免费证书，请参考 <a href="https://cloud.tencent.com/document/api/1552/124807">ApplyFreeCertificate</a> 接口；<br>检查免费证书申请结果，请参考 <a href="https://cloud.tencent.com/document/api/1552/124806">CheckFreeCertificateVerification</a> 接口；<br>配置域名证书，请参考 <a href="https://cloud.tencent.com/document/api/1552/80764">ModifyHostsCertificate</a> 接口。</p>
                     * 
                     */
                    HostsCertificate GetCertificate() const;

                    /**
                     * 设置<p>域名证书信息。</p><p>申请免费证书，请参考 <a href="https://cloud.tencent.com/document/api/1552/124807">ApplyFreeCertificate</a> 接口；<br>检查免费证书申请结果，请参考 <a href="https://cloud.tencent.com/document/api/1552/124806">CheckFreeCertificateVerification</a> 接口；<br>配置域名证书，请参考 <a href="https://cloud.tencent.com/document/api/1552/80764">ModifyHostsCertificate</a> 接口。</p>
                     * @param _certificate <p>域名证书信息。</p><p>申请免费证书，请参考 <a href="https://cloud.tencent.com/document/api/1552/124807">ApplyFreeCertificate</a> 接口；<br>检查免费证书申请结果，请参考 <a href="https://cloud.tencent.com/document/api/1552/124806">CheckFreeCertificateVerification</a> 接口；<br>配置域名证书，请参考 <a href="https://cloud.tencent.com/document/api/1552/80764">ModifyHostsCertificate</a> 接口。</p>
                     * 
                     */
                    void SetCertificate(const HostsCertificate& _certificate);

                    /**
                     * 判断参数 Certificate 是否已赋值
                     * @return Certificate 是否已赋值
                     * 
                     */
                    bool CertificateHasBeenSet() const;

                    /**
                     * 获取<p>创建时间。</p>
                     * @return CreateTime <p>创建时间。</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间。</p>
                     * @param _createTime <p>创建时间。</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>修改时间。</p>
                     * @return UpdateTime <p>修改时间。</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>修改时间。</p>
                     * @param _updateTime <p>修改时间。</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>域名名称。</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>域名状态。</p><p>枚举值：</p><ul><li>Online： 已生效；</li><li>Process： 部署中；</li><li>Offline： 已停用；</li><li>Init： 未生效，待激活站点。</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>推理任务请求鉴权开关。</p><p>枚举值：</p><ul><li>Off： 关闭鉴权；</li><li>On： 开启鉴权。</li></ul><p>默认值：On。</p>
                     */
                    std::string m_authSwitch;
                    bool m_authSwitchHasBeenSet;

                    /**
                     * <p>CNAME 地址。</p><p>校验域名 CNAME 配置状态，请参考<a href="https://cloud.tencent.com/document/api/1552/94491"> CheckCnameStatus </a>接口。</p>
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * <p>域名需进行归属权验证才能继续提供服务时，该对象会携带对应验证方式所需要的信息。</p><p>验证归属权，请参考<a href="https://cloud.tencent.com/document/api/1552/98879"> VerifyOwnership </a>接口。</p>
                     */
                    OwnershipVerification m_ownershipVerification;
                    bool m_ownershipVerificationHasBeenSet;

                    /**
                     * <p>域名证书信息。</p><p>申请免费证书，请参考 <a href="https://cloud.tencent.com/document/api/1552/124807">ApplyFreeCertificate</a> 接口；<br>检查免费证书申请结果，请参考 <a href="https://cloud.tencent.com/document/api/1552/124806">CheckFreeCertificateVerification</a> 接口；<br>配置域名证书，请参考 <a href="https://cloud.tencent.com/document/api/1552/80764">ModifyHostsCertificate</a> 接口。</p>
                     */
                    HostsCertificate m_certificate;
                    bool m_certificateHasBeenSet;

                    /**
                     * <p>创建时间。</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>修改时间。</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_INFERENCEDOMAIN_H_
