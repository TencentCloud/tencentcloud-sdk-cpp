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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_CARD_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_CARD_H_

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
        namespace V20260130
        {
            namespace Model
            {
                /**
                * 银行卡
                */
                class Card : public AbstractModel
                {
                public:
                    Card();
                    ~Card() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>发卡行识别码卡号前6位</p><p>参数格式：符合ISO 13616-1标准</p>
                     * @return CardBin <p>发卡行识别码卡号前6位</p><p>参数格式：符合ISO 13616-1标准</p>
                     * 
                     */
                    std::string GetCardBin() const;

                    /**
                     * 设置<p>发卡行识别码卡号前6位</p><p>参数格式：符合ISO 13616-1标准</p>
                     * @param _cardBin <p>发卡行识别码卡号前6位</p><p>参数格式：符合ISO 13616-1标准</p>
                     * 
                     */
                    void SetCardBin(const std::string& _cardBin);

                    /**
                     * 判断参数 CardBin 是否已赋值
                     * @return CardBin 是否已赋值
                     * 
                     */
                    bool CardBinHasBeenSet() const;

                    /**
                     * 获取<p>发卡行识别码卡号后4位</p><p>参数格式：符合ISO 13616-1标准</p>
                     * @return LastFourDigits <p>发卡行识别码卡号后4位</p><p>参数格式：符合ISO 13616-1标准</p>
                     * 
                     */
                    std::string GetLastFourDigits() const;

                    /**
                     * 设置<p>发卡行识别码卡号后4位</p><p>参数格式：符合ISO 13616-1标准</p>
                     * @param _lastFourDigits <p>发卡行识别码卡号后4位</p><p>参数格式：符合ISO 13616-1标准</p>
                     * 
                     */
                    void SetLastFourDigits(const std::string& _lastFourDigits);

                    /**
                     * 判断参数 LastFourDigits 是否已赋值
                     * @return LastFourDigits 是否已赋值
                     * 
                     */
                    bool LastFourDigitsHasBeenSet() const;

                    /**
                     * 获取<p>发行国家</p>
                     * @return Country <p>发行国家</p>
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置<p>发行国家</p>
                     * @param _country <p>发行国家</p>
                     * 
                     */
                    void SetCountry(const std::string& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     * 
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取<p>发行银行</p>
                     * @return Bank <p>发行银行</p>
                     * 
                     */
                    std::string GetBank() const;

                    /**
                     * 设置<p>发行银行</p>
                     * @param _bank <p>发行银行</p>
                     * 
                     */
                    void SetBank(const std::string& _bank);

                    /**
                     * 判断参数 Bank 是否已赋值
                     * @return Bank 是否已赋值
                     * 
                     */
                    bool BankHasBeenSet() const;

                    /**
                     * 获取<p>支付卡类型</p><p>枚举值：</p><ul><li>credit： 信用卡</li><li>debit： 借记卡</li><li>charge： 签账卡</li></ul>
                     * @return Type <p>支付卡类型</p><p>枚举值：</p><ul><li>credit： 信用卡</li><li>debit： 借记卡</li><li>charge： 签账卡</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>支付卡类型</p><p>枚举值：</p><ul><li>credit： 信用卡</li><li>debit： 借记卡</li><li>charge： 签账卡</li></ul>
                     * @param _type <p>支付卡类型</p><p>枚举值：</p><ul><li>credit： 信用卡</li><li>debit： 借记卡</li><li>charge： 签账卡</li></ul>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>支付卡品牌</p>
                     * @return Brand <p>支付卡品牌</p>
                     * 
                     */
                    std::string GetBrand() const;

                    /**
                     * 设置<p>支付卡品牌</p>
                     * @param _brand <p>支付卡品牌</p>
                     * 
                     */
                    void SetBrand(const std::string& _brand);

                    /**
                     * 判断参数 Brand 是否已赋值
                     * @return Brand 是否已赋值
                     * 
                     */
                    bool BrandHasBeenSet() const;

                    /**
                     * 获取<p>支付卡等级</p>
                     * @return Level <p>支付卡等级</p>
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置<p>支付卡等级</p>
                     * @param _level <p>支付卡等级</p>
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取<p>持有者姓名</p>
                     * @return HolderName <p>持有者姓名</p>
                     * 
                     */
                    std::string GetHolderName() const;

                    /**
                     * 设置<p>持有者姓名</p>
                     * @param _holderName <p>持有者姓名</p>
                     * 
                     */
                    void SetHolderName(const std::string& _holderName);

                    /**
                     * 判断参数 HolderName 是否已赋值
                     * @return HolderName 是否已赋值
                     * 
                     */
                    bool HolderNameHasBeenSet() const;

                    /**
                     * 获取<p>过期日期</p><p>参数格式：YYYY-MM-DD</p>
                     * @return ExpireTime <p>过期日期</p><p>参数格式：YYYY-MM-DD</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>过期日期</p><p>参数格式：YYYY-MM-DD</p>
                     * @param _expireTime <p>过期日期</p><p>参数格式：YYYY-MM-DD</p>
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * <p>发卡行识别码卡号前6位</p><p>参数格式：符合ISO 13616-1标准</p>
                     */
                    std::string m_cardBin;
                    bool m_cardBinHasBeenSet;

                    /**
                     * <p>发卡行识别码卡号后4位</p><p>参数格式：符合ISO 13616-1标准</p>
                     */
                    std::string m_lastFourDigits;
                    bool m_lastFourDigitsHasBeenSet;

                    /**
                     * <p>发行国家</p>
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * <p>发行银行</p>
                     */
                    std::string m_bank;
                    bool m_bankHasBeenSet;

                    /**
                     * <p>支付卡类型</p><p>枚举值：</p><ul><li>credit： 信用卡</li><li>debit： 借记卡</li><li>charge： 签账卡</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>支付卡品牌</p>
                     */
                    std::string m_brand;
                    bool m_brandHasBeenSet;

                    /**
                     * <p>支付卡等级</p>
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>持有者姓名</p>
                     */
                    std::string m_holderName;
                    bool m_holderNameHasBeenSet;

                    /**
                     * <p>过期日期</p><p>参数格式：YYYY-MM-DD</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_CARD_H_
