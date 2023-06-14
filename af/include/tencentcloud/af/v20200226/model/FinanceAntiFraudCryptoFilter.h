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

#ifndef TENCENTCLOUD_AF_V20200226_MODEL_FINANCEANTIFRAUDCRYPTOFILTER_H_
#define TENCENTCLOUD_AF_V20200226_MODEL_FINANCEANTIFRAUDCRYPTOFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Af
    {
        namespace V20200226
        {
            namespace Model
            {
                /**
                * 借贷反欺诈密文业务入参
                */
                class FinanceAntiFraudCryptoFilter : public AbstractModel
                {
                public:
                    FinanceAntiFraudCryptoFilter();
                    ~FinanceAntiFraudCryptoFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取值1定义：AES加密方式[加密模式ECB；填充格式pkcs7padding；秘钥16字节即128位
                     * @return CryptoType 值1定义：AES加密方式[加密模式ECB；填充格式pkcs7padding；秘钥16字节即128位
                     * 
                     */
                    std::string GetCryptoType() const;

                    /**
                     * 设置值1定义：AES加密方式[加密模式ECB；填充格式pkcs7padding；秘钥16字节即128位
                     * @param _cryptoType 值1定义：AES加密方式[加密模式ECB；填充格式pkcs7padding；秘钥16字节即128位
                     * 
                     */
                    void SetCryptoType(const std::string& _cryptoType);

                    /**
                     * 判断参数 CryptoType 是否已赋值
                     * @return CryptoType 是否已赋值
                     * 
                     */
                    bool CryptoTypeHasBeenSet() const;

                    /**
                     * 获取业务字段BusinessSecurityData的json数据格式，采用CryptoType相应的加密方式计算后得到的bash64编码内容。比如对{"PhoneNumber":"13430420001","IdNumber":"420115199501010001","BankCardNumber":"6214000100010001"}包体做加密。
                     * @return CryptoContent 业务字段BusinessSecurityData的json数据格式，采用CryptoType相应的加密方式计算后得到的bash64编码内容。比如对{"PhoneNumber":"13430420001","IdNumber":"420115199501010001","BankCardNumber":"6214000100010001"}包体做加密。
                     * 
                     */
                    std::string GetCryptoContent() const;

                    /**
                     * 设置业务字段BusinessSecurityData的json数据格式，采用CryptoType相应的加密方式计算后得到的bash64编码内容。比如对{"PhoneNumber":"13430420001","IdNumber":"420115199501010001","BankCardNumber":"6214000100010001"}包体做加密。
                     * @param _cryptoContent 业务字段BusinessSecurityData的json数据格式，采用CryptoType相应的加密方式计算后得到的bash64编码内容。比如对{"PhoneNumber":"13430420001","IdNumber":"420115199501010001","BankCardNumber":"6214000100010001"}包体做加密。
                     * 
                     */
                    void SetCryptoContent(const std::string& _cryptoContent);

                    /**
                     * 判断参数 CryptoContent 是否已赋值
                     * @return CryptoContent 是否已赋值
                     * 
                     */
                    bool CryptoContentHasBeenSet() const;

                private:

                    /**
                     * 值1定义：AES加密方式[加密模式ECB；填充格式pkcs7padding；秘钥16字节即128位
                     */
                    std::string m_cryptoType;
                    bool m_cryptoTypeHasBeenSet;

                    /**
                     * 业务字段BusinessSecurityData的json数据格式，采用CryptoType相应的加密方式计算后得到的bash64编码内容。比如对{"PhoneNumber":"13430420001","IdNumber":"420115199501010001","BankCardNumber":"6214000100010001"}包体做加密。
                     */
                    std::string m_cryptoContent;
                    bool m_cryptoContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AF_V20200226_MODEL_FINANCEANTIFRAUDCRYPTOFILTER_H_
