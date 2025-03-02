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

#ifndef TENCENTCLOUD_RCE_V20201103_MODEL_INPUTCRYPTOMANAGEMARKETINGRISK_H_
#define TENCENTCLOUD_RCE_V20201103_MODEL_INPUTCRYPTOMANAGEMARKETINGRISK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20201103
        {
            namespace Model
            {
                /**
                * 全栈式风控引擎入参
                */
                class InputCryptoManageMarketingRisk : public AbstractModel
                {
                public:
                    InputCryptoManageMarketingRisk();
                    ~InputCryptoManageMarketingRisk() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否授权：1已授权，否则未授权。
 调用全栈式风控引擎接口服务时，客户需先明确授权。
                     * @return IsAuthorized 是否授权：1已授权，否则未授权。
 调用全栈式风控引擎接口服务时，客户需先明确授权。
                     * 
                     */
                    std::string GetIsAuthorized() const;

                    /**
                     * 设置是否授权：1已授权，否则未授权。
 调用全栈式风控引擎接口服务时，客户需先明确授权。
                     * @param _isAuthorized 是否授权：1已授权，否则未授权。
 调用全栈式风控引擎接口服务时，客户需先明确授权。
                     * 
                     */
                    void SetIsAuthorized(const std::string& _isAuthorized);

                    /**
                     * 判断参数 IsAuthorized 是否已赋值
                     * @return IsAuthorized 是否已赋值
                     * 
                     */
                    bool IsAuthorizedHasBeenSet() const;

                    /**
                     * 获取加密类型：1AES加密
                     * @return CryptoType 加密类型：1AES加密
                     * 
                     */
                    std::string GetCryptoType() const;

                    /**
                     * 设置加密类型：1AES加密
                     * @param _cryptoType 加密类型：1AES加密
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
                     * 获取加密内容，非空时接口采用加密模式。
                     * @return CryptoContent 加密内容，非空时接口采用加密模式。
                     * 
                     */
                    std::string GetCryptoContent() const;

                    /**
                     * 设置加密内容，非空时接口采用加密模式。
                     * @param _cryptoContent 加密内容，非空时接口采用加密模式。
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
                     * 是否授权：1已授权，否则未授权。
 调用全栈式风控引擎接口服务时，客户需先明确授权。
                     */
                    std::string m_isAuthorized;
                    bool m_isAuthorizedHasBeenSet;

                    /**
                     * 加密类型：1AES加密
                     */
                    std::string m_cryptoType;
                    bool m_cryptoTypeHasBeenSet;

                    /**
                     * 加密内容，非空时接口采用加密模式。
                     */
                    std::string m_cryptoContent;
                    bool m_cryptoContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20201103_MODEL_INPUTCRYPTOMANAGEMARKETINGRISK_H_
