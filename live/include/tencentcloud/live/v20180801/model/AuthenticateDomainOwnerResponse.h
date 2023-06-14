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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_AUTHENTICATEDOMAINOWNERRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_AUTHENTICATEDOMAINOWNERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * AuthenticateDomainOwner返回参数结构体
                */
                class AuthenticateDomainOwnerResponse : public AbstractModel
                {
                public:
                    AuthenticateDomainOwnerResponse();
                    ~AuthenticateDomainOwnerResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取验证内容。
VerifyType 传 dnsCheck 时，为要配的 TXT 记录值。
VerifyType 传 fileCheck 时，为文件内容。
                     * @return Content 验证内容。
VerifyType 传 dnsCheck 时，为要配的 TXT 记录值。
VerifyType 传 fileCheck 时，为文件内容。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取域名验证状态。
>=0 为已验证归属。
<0 未验证归属权。
                     * @return Status 域名验证状态。
>=0 为已验证归属。
<0 未验证归属权。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取DomainName 对应的主域名。
同一主域名下的所有域名只需成功验证一次，后续均无需再验证。
                     * @return MainDomain DomainName 对应的主域名。
同一主域名下的所有域名只需成功验证一次，后续均无需再验证。
                     * 
                     */
                    std::string GetMainDomain() const;

                    /**
                     * 判断参数 MainDomain 是否已赋值
                     * @return MainDomain 是否已赋值
                     * 
                     */
                    bool MainDomainHasBeenSet() const;

                private:

                    /**
                     * 验证内容。
VerifyType 传 dnsCheck 时，为要配的 TXT 记录值。
VerifyType 传 fileCheck 时，为文件内容。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 域名验证状态。
>=0 为已验证归属。
<0 未验证归属权。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * DomainName 对应的主域名。
同一主域名下的所有域名只需成功验证一次，后续均无需再验证。
                     */
                    std::string m_mainDomain;
                    bool m_mainDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_AUTHENTICATEDOMAINOWNERRESPONSE_H_
