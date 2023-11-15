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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_CREATEAPPLICATIONTOKENREQUEST_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_CREATEAPPLICATIONTOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * CreateApplicationToken请求参数结构体
                */
                class CreateApplicationTokenRequest : public AbstractModel
                {
                public:
                    CreateApplicationTokenRequest();
                    ~CreateApplicationTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用id
                     * @return ApplicationId 应用id
                     * 
                     */
                    uint64_t GetApplicationId() const;

                    /**
                     * 设置应用id
                     * @param _applicationId 应用id
                     * 
                     */
                    void SetApplicationId(const uint64_t& _applicationId);

                    /**
                     * 判断参数 ApplicationId 是否已赋值
                     * @return ApplicationId 是否已赋值
                     * 
                     */
                    bool ApplicationIdHasBeenSet() const;

                    /**
                     * 获取一个随机数或者时间戳，用于防止重放攻击，每个请求唯一，建议用uuid
                     * @return Nonce 一个随机数或者时间戳，用于防止重放攻击，每个请求唯一，建议用uuid
                     * 
                     */
                    std::string GetNonce() const;

                    /**
                     * 设置一个随机数或者时间戳，用于防止重放攻击，每个请求唯一，建议用uuid
                     * @param _nonce 一个随机数或者时间戳，用于防止重放攻击，每个请求唯一，建议用uuid
                     * 
                     */
                    void SetNonce(const std::string& _nonce);

                    /**
                     * 判断参数 Nonce 是否已赋值
                     * @return Nonce 是否已赋值
                     * 
                     */
                    bool NonceHasBeenSet() const;

                    /**
                     * 获取租户id
                     * @return TenantId 租户id
                     * 
                     */
                    uint64_t GetTenantId() const;

                    /**
                     * 设置租户id
                     * @param _tenantId 租户id
                     * 
                     */
                    void SetTenantId(const uint64_t& _tenantId);

                    /**
                     * 判断参数 TenantId 是否已赋值
                     * @return TenantId 是否已赋值
                     * 
                     */
                    bool TenantIdHasBeenSet() const;

                    /**
                     * 获取请求时间，当前时间的unix毫秒时间戳
                     * @return RequestTime 请求时间，当前时间的unix毫秒时间戳
                     * 
                     */
                    uint64_t GetRequestTime() const;

                    /**
                     * 设置请求时间，当前时间的unix毫秒时间戳
                     * @param _requestTime 请求时间，当前时间的unix毫秒时间戳
                     * 
                     */
                    void SetRequestTime(const uint64_t& _requestTime);

                    /**
                     * 判断参数 RequestTime 是否已赋值
                     * @return RequestTime 是否已赋值
                     * 
                     */
                    bool RequestTimeHasBeenSet() const;

                    /**
                     * 获取签名方法见用户使用文档
                     * @return Signature 签名方法见用户使用文档
                     * 
                     */
                    std::string GetSignature() const;

                    /**
                     * 设置签名方法见用户使用文档
                     * @param _signature 签名方法见用户使用文档
                     * 
                     */
                    void SetSignature(const std::string& _signature);

                    /**
                     * 判断参数 Signature 是否已赋值
                     * @return Signature 是否已赋值
                     * 
                     */
                    bool SignatureHasBeenSet() const;

                private:

                    /**
                     * 应用id
                     */
                    uint64_t m_applicationId;
                    bool m_applicationIdHasBeenSet;

                    /**
                     * 一个随机数或者时间戳，用于防止重放攻击，每个请求唯一，建议用uuid
                     */
                    std::string m_nonce;
                    bool m_nonceHasBeenSet;

                    /**
                     * 租户id
                     */
                    uint64_t m_tenantId;
                    bool m_tenantIdHasBeenSet;

                    /**
                     * 请求时间，当前时间的unix毫秒时间戳
                     */
                    uint64_t m_requestTime;
                    bool m_requestTimeHasBeenSet;

                    /**
                     * 签名方法见用户使用文档
                     */
                    std::string m_signature;
                    bool m_signatureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_CREATEAPPLICATIONTOKENREQUEST_H_
