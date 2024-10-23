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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CERTIFICATEINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CERTIFICATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * https 证书配置。
                */
                class CertificateInfo : public AbstractModel
                {
                public:
                    CertificateInfo();
                    ~CertificateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取证书 ID。来源于 SSL 侧，您可以前往 [SSL 证书列表](https://console.cloud.tencent.com/ssl) 查看 CertId。
                     * @return CertId 证书 ID。来源于 SSL 侧，您可以前往 [SSL 证书列表](https://console.cloud.tencent.com/ssl) 查看 CertId。
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置证书 ID。来源于 SSL 侧，您可以前往 [SSL 证书列表](https://console.cloud.tencent.com/ssl) 查看 CertId。
                     * @param _certId 证书 ID。来源于 SSL 侧，您可以前往 [SSL 证书列表](https://console.cloud.tencent.com/ssl) 查看 CertId。
                     * 
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取证书备注名。
                     * @return Alias 证书备注名。
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置证书备注名。
                     * @param _alias 证书备注名。
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取证书类型，取值有：
<li>default：默认证书；</li>
<li>upload：用户上传；</li>
<li>managed：腾讯云托管。</li>
                     * @return Type 证书类型，取值有：
<li>default：默认证书；</li>
<li>upload：用户上传；</li>
<li>managed：腾讯云托管。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置证书类型，取值有：
<li>default：默认证书；</li>
<li>upload：用户上传；</li>
<li>managed：腾讯云托管。</li>
                     * @param _type 证书类型，取值有：
<li>default：默认证书；</li>
<li>upload：用户上传；</li>
<li>managed：腾讯云托管。</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取证书过期时间。
                     * @return ExpireTime 证书过期时间。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置证书过期时间。
                     * @param _expireTime 证书过期时间。
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取证书部署时间。
                     * @return DeployTime 证书部署时间。
                     * 
                     */
                    std::string GetDeployTime() const;

                    /**
                     * 设置证书部署时间。
                     * @param _deployTime 证书部署时间。
                     * 
                     */
                    void SetDeployTime(const std::string& _deployTime);

                    /**
                     * 判断参数 DeployTime 是否已赋值
                     * @return DeployTime 是否已赋值
                     * 
                     */
                    bool DeployTimeHasBeenSet() const;

                    /**
                     * 获取签名算法。
                     * @return SignAlgo 签名算法。
                     * 
                     */
                    std::string GetSignAlgo() const;

                    /**
                     * 设置签名算法。
                     * @param _signAlgo 签名算法。
                     * 
                     */
                    void SetSignAlgo(const std::string& _signAlgo);

                    /**
                     * 判断参数 SignAlgo 是否已赋值
                     * @return SignAlgo 是否已赋值
                     * 
                     */
                    bool SignAlgoHasBeenSet() const;

                    /**
                     * 获取证书状态，取值有：
<li>deployed：已部署；</li>
<li>processing：部署中；</li>
<li>applying：申请中；</li>
<li>failed：申请失败；</li>
<li>issued：绑定失败。</li>
                     * @return Status 证书状态，取值有：
<li>deployed：已部署；</li>
<li>processing：部署中；</li>
<li>applying：申请中；</li>
<li>failed：申请失败；</li>
<li>issued：绑定失败。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置证书状态，取值有：
<li>deployed：已部署；</li>
<li>processing：部署中；</li>
<li>applying：申请中；</li>
<li>failed：申请失败；</li>
<li>issued：绑定失败。</li>
                     * @param _status 证书状态，取值有：
<li>deployed：已部署；</li>
<li>processing：部署中；</li>
<li>applying：申请中；</li>
<li>failed：申请失败；</li>
<li>issued：绑定失败。</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 证书 ID。来源于 SSL 侧，您可以前往 [SSL 证书列表](https://console.cloud.tencent.com/ssl) 查看 CertId。
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * 证书备注名。
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 证书类型，取值有：
<li>default：默认证书；</li>
<li>upload：用户上传；</li>
<li>managed：腾讯云托管。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 证书过期时间。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 证书部署时间。
                     */
                    std::string m_deployTime;
                    bool m_deployTimeHasBeenSet;

                    /**
                     * 签名算法。
                     */
                    std::string m_signAlgo;
                    bool m_signAlgoHasBeenSet;

                    /**
                     * 证书状态，取值有：
<li>deployed：已部署；</li>
<li>processing：部署中；</li>
<li>applying：申请中；</li>
<li>failed：申请失败；</li>
<li>issued：绑定失败。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CERTIFICATEINFO_H_
