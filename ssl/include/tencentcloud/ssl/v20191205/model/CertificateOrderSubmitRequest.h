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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATEORDERSUBMITREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATEORDERSUBMITREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CertificateOrderSubmit请求参数结构体
                */
                class CertificateOrderSubmitRequest : public AbstractModel
                {
                public:
                    CertificateOrderSubmitRequest();
                    ~CertificateOrderSubmitRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取证书 ID。
                     * @return CertId 证书 ID。
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置证书 ID。
                     * @param _certId 证书 ID。
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
                     * 获取是否删除自动DNS验证值：0，不删除； 1，删除； 默认不删除
                     * @return DeleteDnsAutoRecord 是否删除自动DNS验证值：0，不删除； 1，删除； 默认不删除
                     * 
                     */
                    uint64_t GetDeleteDnsAutoRecord() const;

                    /**
                     * 设置是否删除自动DNS验证值：0，不删除； 1，删除； 默认不删除
                     * @param _deleteDnsAutoRecord 是否删除自动DNS验证值：0，不删除； 1，删除； 默认不删除
                     * 
                     */
                    void SetDeleteDnsAutoRecord(const uint64_t& _deleteDnsAutoRecord);

                    /**
                     * 判断参数 DeleteDnsAutoRecord 是否已赋值
                     * @return DeleteDnsAutoRecord 是否已赋值
                     * 
                     */
                    bool DeleteDnsAutoRecordHasBeenSet() const;

                    /**
                     * 获取域名验证方式：DNS_AUTO 自动DNS验证， DNS DNS验证， FILE 文件验证
                     * @return VerifyType 域名验证方式：DNS_AUTO 自动DNS验证， DNS DNS验证， FILE 文件验证
                     * 
                     */
                    std::string GetVerifyType() const;

                    /**
                     * 设置域名验证方式：DNS_AUTO 自动DNS验证， DNS DNS验证， FILE 文件验证
                     * @param _verifyType 域名验证方式：DNS_AUTO 自动DNS验证， DNS DNS验证， FILE 文件验证
                     * 
                     */
                    void SetVerifyType(const std::string& _verifyType);

                    /**
                     * 判断参数 VerifyType 是否已赋值
                     * @return VerifyType 是否已赋值
                     * 
                     */
                    bool VerifyTypeHasBeenSet() const;

                private:

                    /**
                     * 证书 ID。
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * 是否删除自动DNS验证值：0，不删除； 1，删除； 默认不删除
                     */
                    uint64_t m_deleteDnsAutoRecord;
                    bool m_deleteDnsAutoRecordHasBeenSet;

                    /**
                     * 域名验证方式：DNS_AUTO 自动DNS验证， DNS DNS验证， FILE 文件验证
                     */
                    std::string m_verifyType;
                    bool m_verifyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_CERTIFICATEORDERSUBMITREQUEST_H_
