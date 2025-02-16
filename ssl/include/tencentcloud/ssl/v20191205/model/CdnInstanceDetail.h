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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_CDNINSTANCEDETAIL_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_CDNINSTANCEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * CDN实例详情
                */
                class CdnInstanceDetail : public AbstractModel
                {
                public:
                    CdnInstanceDetail();
                    ~CdnInstanceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
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
                     * 获取已部署证书ID
                     * @return CertId 已部署证书ID
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置已部署证书ID
                     * @param _certId 已部署证书ID
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
                     * 获取域名状态 rejected：域名审核未通过，域名备案过期/被注销导致，processing：部署中，online：已启动，offline：已关闭
                     * @return Status 域名状态 rejected：域名审核未通过，域名备案过期/被注销导致，processing：部署中，online：已启动，offline：已关闭
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置域名状态 rejected：域名审核未通过，域名备案过期/被注销导致，processing：部署中，online：已启动，offline：已关闭
                     * @param _status 域名状态 rejected：域名审核未通过，域名备案过期/被注销导致，processing：部署中，online：已启动，offline：已关闭
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
                     * 获取域名计费状态，on表示开启，off表示关闭。
                     * @return HttpsBillingSwitch 域名计费状态，on表示开启，off表示关闭。
                     * 
                     */
                    std::string GetHttpsBillingSwitch() const;

                    /**
                     * 设置域名计费状态，on表示开启，off表示关闭。
                     * @param _httpsBillingSwitch 域名计费状态，on表示开启，off表示关闭。
                     * 
                     */
                    void SetHttpsBillingSwitch(const std::string& _httpsBillingSwitch);

                    /**
                     * 判断参数 HttpsBillingSwitch 是否已赋值
                     * @return HttpsBillingSwitch 是否已赋值
                     * 
                     */
                    bool HttpsBillingSwitchHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 已部署证书ID
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * 域名状态 rejected：域名审核未通过，域名备案过期/被注销导致，processing：部署中，online：已启动，offline：已关闭
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 域名计费状态，on表示开启，off表示关闭。
                     */
                    std::string m_httpsBillingSwitch;
                    bool m_httpsBillingSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_CDNINSTANCEDETAIL_H_
