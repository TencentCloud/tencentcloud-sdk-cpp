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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_MODIFYDOMAINOWNERREQUEST_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_MODIFYDOMAINOWNERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * ModifyDomainOwner请求参数结构体
                */
                class ModifyDomainOwnerRequest : public AbstractModel
                {
                public:
                    ModifyDomainOwnerRequest();
                    ~ModifyDomainOwnerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名ID
                     * @return DomainId 域名ID
                     * 
                     */
                    std::string GetDomainId() const;

                    /**
                     * 设置域名ID
                     * @param _domainId 域名ID
                     * 
                     */
                    void SetDomainId(const std::string& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取新用户UIN
                     * @return NewOwnerUin 新用户UIN
                     * 
                     */
                    std::string GetNewOwnerUin() const;

                    /**
                     * 设置新用户UIN
                     * @param _newOwnerUin 新用户UIN
                     * 
                     */
                    void SetNewOwnerUin(const std::string& _newOwnerUin);

                    /**
                     * 判断参数 NewOwnerUin 是否已赋值
                     * @return NewOwnerUin 是否已赋值
                     * 
                     */
                    bool NewOwnerUinHasBeenSet() const;

                    /**
                     * 获取新用户APPID
                     * @return NewOwnerAppId 新用户APPID
                     * 
                     */
                    std::string GetNewOwnerAppId() const;

                    /**
                     * 设置新用户APPID
                     * @param _newOwnerAppId 新用户APPID
                     * 
                     */
                    void SetNewOwnerAppId(const std::string& _newOwnerAppId);

                    /**
                     * 判断参数 NewOwnerAppId 是否已赋值
                     * @return NewOwnerAppId 是否已赋值
                     * 
                     */
                    bool NewOwnerAppIdHasBeenSet() const;

                    /**
                     * 获取是否同时转移对应的 DNS 解析域名，默认false
                     * @return TransferDns 是否同时转移对应的 DNS 解析域名，默认false
                     * 
                     */
                    bool GetTransferDns() const;

                    /**
                     * 设置是否同时转移对应的 DNS 解析域名，默认false
                     * @param _transferDns 是否同时转移对应的 DNS 解析域名，默认false
                     * 
                     */
                    void SetTransferDns(const bool& _transferDns);

                    /**
                     * 判断参数 TransferDns 是否已赋值
                     * @return TransferDns 是否已赋值
                     * 
                     */
                    bool TransferDnsHasBeenSet() const;

                private:

                    /**
                     * 域名ID
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * 新用户UIN
                     */
                    std::string m_newOwnerUin;
                    bool m_newOwnerUinHasBeenSet;

                    /**
                     * 新用户APPID
                     */
                    std::string m_newOwnerAppId;
                    bool m_newOwnerAppIdHasBeenSet;

                    /**
                     * 是否同时转移对应的 DNS 解析域名，默认false
                     */
                    bool m_transferDns;
                    bool m_transferDnsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_MODIFYDOMAINOWNERREQUEST_H_
