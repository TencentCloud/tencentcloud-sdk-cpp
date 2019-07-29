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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_BANKCARDOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_BANKCARDOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * BankCardOCR返回参数结构体
                */
                class BankCardOCRResponse : public AbstractModel
                {
                public:
                    BankCardOCRResponse();
                    ~BankCardOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取卡号
                     * @return CardNo 卡号
                     */
                    std::string GetCardNo() const;

                    /**
                     * 判断参数 CardNo 是否已赋值
                     * @return CardNo 是否已赋值
                     */
                    bool CardNoHasBeenSet() const;

                    /**
                     * 获取银行信息
                     * @return BankInfo 银行信息
                     */
                    std::string GetBankInfo() const;

                    /**
                     * 判断参数 BankInfo 是否已赋值
                     * @return BankInfo 是否已赋值
                     */
                    bool BankInfoHasBeenSet() const;

                    /**
                     * 获取有效期
                     * @return ValidDate 有效期
                     */
                    std::string GetValidDate() const;

                    /**
                     * 判断参数 ValidDate 是否已赋值
                     * @return ValidDate 是否已赋值
                     */
                    bool ValidDateHasBeenSet() const;

                private:

                    /**
                     * 卡号
                     */
                    std::string m_cardNo;
                    bool m_cardNoHasBeenSet;

                    /**
                     * 银行信息
                     */
                    std::string m_bankInfo;
                    bool m_bankInfoHasBeenSet;

                    /**
                     * 有效期
                     */
                    std::string m_validDate;
                    bool m_validDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_BANKCARDOCRRESPONSE_H_
