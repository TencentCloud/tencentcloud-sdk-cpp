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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYACCTINFOLISTREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYACCTINFOLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * QueryAcctInfoList请求参数结构体
                */
                class QueryAcctInfoListRequest : public AbstractModel
                {
                public:
                    QueryAcctInfoListRequest();
                    ~QueryAcctInfoListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取聚鑫分配的支付主MidasAppId
                     * @return MidasAppId 聚鑫分配的支付主MidasAppId
                     * 
                     */
                    std::string GetMidasAppId() const;

                    /**
                     * 设置聚鑫分配的支付主MidasAppId
                     * @param _midasAppId 聚鑫分配的支付主MidasAppId
                     * 
                     */
                    void SetMidasAppId(const std::string& _midasAppId);

                    /**
                     * 判断参数 MidasAppId 是否已赋值
                     * @return MidasAppId 是否已赋值
                     * 
                     */
                    bool MidasAppIdHasBeenSet() const;

                    /**
                     * 获取查询开始时间(以开户时间为准)
                     * @return QueryAcctBeginTime 查询开始时间(以开户时间为准)
                     * 
                     */
                    std::string GetQueryAcctBeginTime() const;

                    /**
                     * 设置查询开始时间(以开户时间为准)
                     * @param _queryAcctBeginTime 查询开始时间(以开户时间为准)
                     * 
                     */
                    void SetQueryAcctBeginTime(const std::string& _queryAcctBeginTime);

                    /**
                     * 判断参数 QueryAcctBeginTime 是否已赋值
                     * @return QueryAcctBeginTime 是否已赋值
                     * 
                     */
                    bool QueryAcctBeginTimeHasBeenSet() const;

                    /**
                     * 获取查询结束时间(以开户时间为准)
                     * @return QueryAcctEndTime 查询结束时间(以开户时间为准)
                     * 
                     */
                    std::string GetQueryAcctEndTime() const;

                    /**
                     * 设置查询结束时间(以开户时间为准)
                     * @param _queryAcctEndTime 查询结束时间(以开户时间为准)
                     * 
                     */
                    void SetQueryAcctEndTime(const std::string& _queryAcctEndTime);

                    /**
                     * 判断参数 QueryAcctEndTime 是否已赋值
                     * @return QueryAcctEndTime 是否已赋值
                     * 
                     */
                    bool QueryAcctEndTimeHasBeenSet() const;

                    /**
                     * 获取分页号,  起始值为1，每次最多返回20条记录，第二页返回的记录数为第21至40条记录，第三页为41至60条记录，顺序均按照开户时间的先后
                     * @return PageOffset 分页号,  起始值为1，每次最多返回20条记录，第二页返回的记录数为第21至40条记录，第三页为41至60条记录，顺序均按照开户时间的先后
                     * 
                     */
                    std::string GetPageOffset() const;

                    /**
                     * 设置分页号,  起始值为1，每次最多返回20条记录，第二页返回的记录数为第21至40条记录，第三页为41至60条记录，顺序均按照开户时间的先后
                     * @param _pageOffset 分页号,  起始值为1，每次最多返回20条记录，第二页返回的记录数为第21至40条记录，第三页为41至60条记录，顺序均按照开户时间的先后
                     * 
                     */
                    void SetPageOffset(const std::string& _pageOffset);

                    /**
                     * 判断参数 PageOffset 是否已赋值
                     * @return PageOffset 是否已赋值
                     * 
                     */
                    bool PageOffsetHasBeenSet() const;

                    /**
                     * 获取由平台客服提供的计费密钥Id
                     * @return MidasSecretId 由平台客服提供的计费密钥Id
                     * 
                     */
                    std::string GetMidasSecretId() const;

                    /**
                     * 设置由平台客服提供的计费密钥Id
                     * @param _midasSecretId 由平台客服提供的计费密钥Id
                     * 
                     */
                    void SetMidasSecretId(const std::string& _midasSecretId);

                    /**
                     * 判断参数 MidasSecretId 是否已赋值
                     * @return MidasSecretId 是否已赋值
                     * 
                     */
                    bool MidasSecretIdHasBeenSet() const;

                    /**
                     * 获取计费签名
                     * @return MidasSignature 计费签名
                     * 
                     */
                    std::string GetMidasSignature() const;

                    /**
                     * 设置计费签名
                     * @param _midasSignature 计费签名
                     * 
                     */
                    void SetMidasSignature(const std::string& _midasSignature);

                    /**
                     * 判断参数 MidasSignature 是否已赋值
                     * @return MidasSignature 是否已赋值
                     * 
                     */
                    bool MidasSignatureHasBeenSet() const;

                    /**
                     * 获取敏感信息加密类型:
RSA: rsa非对称加密，使用RSA-PKCS1-v1_5
AES: aes对称加密，使用AES256-CBC-PCKS7padding
缺省: RSA
                     * @return EncryptType 敏感信息加密类型:
RSA: rsa非对称加密，使用RSA-PKCS1-v1_5
AES: aes对称加密，使用AES256-CBC-PCKS7padding
缺省: RSA
                     * 
                     */
                    std::string GetEncryptType() const;

                    /**
                     * 设置敏感信息加密类型:
RSA: rsa非对称加密，使用RSA-PKCS1-v1_5
AES: aes对称加密，使用AES256-CBC-PCKS7padding
缺省: RSA
                     * @param _encryptType 敏感信息加密类型:
RSA: rsa非对称加密，使用RSA-PKCS1-v1_5
AES: aes对称加密，使用AES256-CBC-PCKS7padding
缺省: RSA
                     * 
                     */
                    void SetEncryptType(const std::string& _encryptType);

                    /**
                     * 判断参数 EncryptType 是否已赋值
                     * @return EncryptType 是否已赋值
                     * 
                     */
                    bool EncryptTypeHasBeenSet() const;

                    /**
                     * 获取环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     * @return MidasEnvironment 环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     * 
                     */
                    std::string GetMidasEnvironment() const;

                    /**
                     * 设置环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     * @param _midasEnvironment 环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     * 
                     */
                    void SetMidasEnvironment(const std::string& _midasEnvironment);

                    /**
                     * 判断参数 MidasEnvironment 是否已赋值
                     * @return MidasEnvironment 是否已赋值
                     * 
                     */
                    bool MidasEnvironmentHasBeenSet() const;

                private:

                    /**
                     * 聚鑫分配的支付主MidasAppId
                     */
                    std::string m_midasAppId;
                    bool m_midasAppIdHasBeenSet;

                    /**
                     * 查询开始时间(以开户时间为准)
                     */
                    std::string m_queryAcctBeginTime;
                    bool m_queryAcctBeginTimeHasBeenSet;

                    /**
                     * 查询结束时间(以开户时间为准)
                     */
                    std::string m_queryAcctEndTime;
                    bool m_queryAcctEndTimeHasBeenSet;

                    /**
                     * 分页号,  起始值为1，每次最多返回20条记录，第二页返回的记录数为第21至40条记录，第三页为41至60条记录，顺序均按照开户时间的先后
                     */
                    std::string m_pageOffset;
                    bool m_pageOffsetHasBeenSet;

                    /**
                     * 由平台客服提供的计费密钥Id
                     */
                    std::string m_midasSecretId;
                    bool m_midasSecretIdHasBeenSet;

                    /**
                     * 计费签名
                     */
                    std::string m_midasSignature;
                    bool m_midasSignatureHasBeenSet;

                    /**
                     * 敏感信息加密类型:
RSA: rsa非对称加密，使用RSA-PKCS1-v1_5
AES: aes对称加密，使用AES256-CBC-PCKS7padding
缺省: RSA
                     */
                    std::string m_encryptType;
                    bool m_encryptTypeHasBeenSet;

                    /**
                     * 环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     */
                    std::string m_midasEnvironment;
                    bool m_midasEnvironmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYACCTINFOLISTREQUEST_H_
