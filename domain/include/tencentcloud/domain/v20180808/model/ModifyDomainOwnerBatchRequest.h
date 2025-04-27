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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_MODIFYDOMAINOWNERBATCHREQUEST_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_MODIFYDOMAINOWNERBATCHREQUEST_H_

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
                * ModifyDomainOwnerBatch请求参数结构体
                */
                class ModifyDomainOwnerBatchRequest : public AbstractModel
                {
                public:
                    ModifyDomainOwnerBatchRequest();
                    ~ModifyDomainOwnerBatchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要过户的域名。
一次提交不大于4000个
                     * @return Domains 要过户的域名。
一次提交不大于4000个
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置要过户的域名。
一次提交不大于4000个
                     * @param _domains 要过户的域名。
一次提交不大于4000个
                     * 
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

                    /**
                     * 获取转入账户的主uin。
                     * @return NewOwnerUin 转入账户的主uin。
                     * 
                     */
                    std::string GetNewOwnerUin() const;

                    /**
                     * 设置转入账户的主uin。
                     * @param _newOwnerUin 转入账户的主uin。
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

                    /**
                     * 获取转入账户的appid。
                     * @return NewOwnerAppId 转入账户的appid。
                     * 
                     */
                    std::string GetNewOwnerAppId() const;

                    /**
                     * 设置转入账户的appid。
                     * @param _newOwnerAppId 转入账户的appid。
                     * 
                     */
                    void SetNewOwnerAppId(const std::string& _newOwnerAppId);

                    /**
                     * 判断参数 NewOwnerAppId 是否已赋值
                     * @return NewOwnerAppId 是否已赋值
                     * 
                     */
                    bool NewOwnerAppIdHasBeenSet() const;

                private:

                    /**
                     * 要过户的域名。
一次提交不大于4000个
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * 转入账户的主uin。
                     */
                    std::string m_newOwnerUin;
                    bool m_newOwnerUinHasBeenSet;

                    /**
                     * 是否同时转移对应的 DNS 解析域名，默认false
                     */
                    bool m_transferDns;
                    bool m_transferDnsHasBeenSet;

                    /**
                     * 转入账户的appid。
                     */
                    std::string m_newOwnerAppId;
                    bool m_newOwnerAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_MODIFYDOMAINOWNERBATCHREQUEST_H_
