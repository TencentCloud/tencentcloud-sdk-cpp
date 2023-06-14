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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_FEERANGINFO_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_FEERANGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 分段计费区间信息
                */
                class FeeRangInfo : public AbstractModel
                {
                public:
                    FeeRangInfo();
                    ~FeeRangInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取卡类型，银联产品使用 
DEBIT：借记卡 
CREDIT：贷记卡
                     * @return CardType 卡类型，银联产品使用 
DEBIT：借记卡 
CREDIT：贷记卡
                     * 
                     */
                    std::string GetCardType() const;

                    /**
                     * 设置卡类型，银联产品使用 
DEBIT：借记卡 
CREDIT：贷记卡
                     * @param _cardType 卡类型，银联产品使用 
DEBIT：借记卡 
CREDIT：贷记卡
                     * 
                     */
                    void SetCardType(const std::string& _cardType);

                    /**
                     * 判断参数 CardType 是否已赋值
                     * @return CardType 是否已赋值
                     * 
                     */
                    bool CardTypeHasBeenSet() const;

                    /**
                     * 获取区间起始金额，单位（分）
                     * @return RangeStartValue 区间起始金额，单位（分）
                     * 
                     */
                    uint64_t GetRangeStartValue() const;

                    /**
                     * 设置区间起始金额，单位（分）
                     * @param _rangeStartValue 区间起始金额，单位（分）
                     * 
                     */
                    void SetRangeStartValue(const uint64_t& _rangeStartValue);

                    /**
                     * 判断参数 RangeStartValue 是否已赋值
                     * @return RangeStartValue 是否已赋值
                     * 
                     */
                    bool RangeStartValueHasBeenSet() const;

                    /**
                     * 获取区间结束金额，单位（分）
                     * @return RangeEndValue 区间结束金额，单位（分）
                     * 
                     */
                    uint64_t GetRangeEndValue() const;

                    /**
                     * 设置区间结束金额，单位（分）
                     * @param _rangeEndValue 区间结束金额，单位（分）
                     * 
                     */
                    void SetRangeEndValue(const uint64_t& _rangeEndValue);

                    /**
                     * 判断参数 RangeEndValue 是否已赋值
                     * @return RangeEndValue 是否已赋值
                     * 
                     */
                    bool RangeEndValueHasBeenSet() const;

                    /**
                     * 获取分段计费模式 
SINGLE：按金额计费 
RATIO：按费率计费
                     * @return RangeFeeMode 分段计费模式 
SINGLE：按金额计费 
RATIO：按费率计费
                     * 
                     */
                    std::string GetRangeFeeMode() const;

                    /**
                     * 设置分段计费模式 
SINGLE：按金额计费 
RATIO：按费率计费
                     * @param _rangeFeeMode 分段计费模式 
SINGLE：按金额计费 
RATIO：按费率计费
                     * 
                     */
                    void SetRangeFeeMode(const std::string& _rangeFeeMode);

                    /**
                     * 判断参数 RangeFeeMode 是否已赋值
                     * @return RangeFeeMode 是否已赋值
                     * 
                     */
                    bool RangeFeeModeHasBeenSet() const;

                    /**
                     * 获取费用值，单位（0.01%或分）
                     * @return FeeValue 费用值，单位（0.01%或分）
                     * 
                     */
                    uint64_t GetFeeValue() const;

                    /**
                     * 设置费用值，单位（0.01%或分）
                     * @param _feeValue 费用值，单位（0.01%或分）
                     * 
                     */
                    void SetFeeValue(const uint64_t& _feeValue);

                    /**
                     * 判断参数 FeeValue 是否已赋值
                     * @return FeeValue 是否已赋值
                     * 
                     */
                    bool FeeValueHasBeenSet() const;

                    /**
                     * 获取最低收费金额，单位（分）
                     * @return MinFee 最低收费金额，单位（分）
                     * 
                     */
                    uint64_t GetMinFee() const;

                    /**
                     * 设置最低收费金额，单位（分）
                     * @param _minFee 最低收费金额，单位（分）
                     * 
                     */
                    void SetMinFee(const uint64_t& _minFee);

                    /**
                     * 判断参数 MinFee 是否已赋值
                     * @return MinFee 是否已赋值
                     * 
                     */
                    bool MinFeeHasBeenSet() const;

                    /**
                     * 获取最高收费金额，单位（分）
                     * @return MaxFee 最高收费金额，单位（分）
                     * 
                     */
                    uint64_t GetMaxFee() const;

                    /**
                     * 设置最高收费金额，单位（分）
                     * @param _maxFee 最高收费金额，单位（分）
                     * 
                     */
                    void SetMaxFee(const uint64_t& _maxFee);

                    /**
                     * 判断参数 MaxFee 是否已赋值
                     * @return MaxFee 是否已赋值
                     * 
                     */
                    bool MaxFeeHasBeenSet() const;

                private:

                    /**
                     * 卡类型，银联产品使用 
DEBIT：借记卡 
CREDIT：贷记卡
                     */
                    std::string m_cardType;
                    bool m_cardTypeHasBeenSet;

                    /**
                     * 区间起始金额，单位（分）
                     */
                    uint64_t m_rangeStartValue;
                    bool m_rangeStartValueHasBeenSet;

                    /**
                     * 区间结束金额，单位（分）
                     */
                    uint64_t m_rangeEndValue;
                    bool m_rangeEndValueHasBeenSet;

                    /**
                     * 分段计费模式 
SINGLE：按金额计费 
RATIO：按费率计费
                     */
                    std::string m_rangeFeeMode;
                    bool m_rangeFeeModeHasBeenSet;

                    /**
                     * 费用值，单位（0.01%或分）
                     */
                    uint64_t m_feeValue;
                    bool m_feeValueHasBeenSet;

                    /**
                     * 最低收费金额，单位（分）
                     */
                    uint64_t m_minFee;
                    bool m_minFeeHasBeenSet;

                    /**
                     * 最高收费金额，单位（分）
                     */
                    uint64_t m_maxFee;
                    bool m_maxFeeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_FEERANGINFO_H_
