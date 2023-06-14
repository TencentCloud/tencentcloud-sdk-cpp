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

#ifndef TENCENTCLOUD_AFC_V20200226_MODEL_ANTIFRAUDVIPCRYPTOFILTER_H_
#define TENCENTCLOUD_AFC_V20200226_MODEL_ANTIFRAUDVIPCRYPTOFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Afc
    {
        namespace V20200226
        {
            namespace Model
            {
                /**
                * AntiFraudVipCryptoFilter– 业务入参
                */
                class AntiFraudVipCryptoFilter : public AbstractModel
                {
                public:
                    AntiFraudVipCryptoFilter();
                    ~AntiFraudVipCryptoFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取约定用入参，默认不涉及默认BusinessSecurityData 与BusinessCrptoData 不传
                     * @return CryptoType 约定用入参，默认不涉及默认BusinessSecurityData 与BusinessCrptoData 不传
                     * 
                     */
                    std::string GetCryptoType() const;

                    /**
                     * 设置约定用入参，默认不涉及默认BusinessSecurityData 与BusinessCrptoData 不传
                     * @param _cryptoType 约定用入参，默认不涉及默认BusinessSecurityData 与BusinessCrptoData 不传
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
                     * 获取约定用入参，默认不涉及
                     * @return CryptoContent 约定用入参，默认不涉及
                     * 
                     */
                    std::string GetCryptoContent() const;

                    /**
                     * 设置约定用入参，默认不涉及
                     * @param _cryptoContent 约定用入参，默认不涉及
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
                     * 约定用入参，默认不涉及默认BusinessSecurityData 与BusinessCrptoData 不传
                     */
                    std::string m_cryptoType;
                    bool m_cryptoTypeHasBeenSet;

                    /**
                     * 约定用入参，默认不涉及
                     */
                    std::string m_cryptoContent;
                    bool m_cryptoContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AFC_V20200226_MODEL_ANTIFRAUDVIPCRYPTOFILTER_H_
