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
                    std::string ToJsonString() const;


                    /**
                     * 获取卡号
                     * @return CardNo 卡号
                     * 
                     */
                    std::string GetCardNo() const;

                    /**
                     * 判断参数 CardNo 是否已赋值
                     * @return CardNo 是否已赋值
                     * 
                     */
                    bool CardNoHasBeenSet() const;

                    /**
                     * 获取银行信息
                     * @return BankInfo 银行信息
                     * 
                     */
                    std::string GetBankInfo() const;

                    /**
                     * 判断参数 BankInfo 是否已赋值
                     * @return BankInfo 是否已赋值
                     * 
                     */
                    bool BankInfoHasBeenSet() const;

                    /**
                     * 获取有效期，格式如：07/2023
                     * @return ValidDate 有效期，格式如：07/2023
                     * 
                     */
                    std::string GetValidDate() const;

                    /**
                     * 判断参数 ValidDate 是否已赋值
                     * @return ValidDate 是否已赋值
                     * 
                     */
                    bool ValidDateHasBeenSet() const;

                    /**
                     * 获取卡类型
                     * @return CardType 卡类型
                     * 
                     */
                    std::string GetCardType() const;

                    /**
                     * 判断参数 CardType 是否已赋值
                     * @return CardType 是否已赋值
                     * 
                     */
                    bool CardTypeHasBeenSet() const;

                    /**
                     * 获取卡名字
                     * @return CardName 卡名字
                     * 
                     */
                    std::string GetCardName() const;

                    /**
                     * 判断参数 CardName 是否已赋值
                     * @return CardName 是否已赋值
                     * 
                     */
                    bool CardNameHasBeenSet() const;

                    /**
                     * 获取切片图片数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BorderCutImage 切片图片数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBorderCutImage() const;

                    /**
                     * 判断参数 BorderCutImage 是否已赋值
                     * @return BorderCutImage 是否已赋值
                     * 
                     */
                    bool BorderCutImageHasBeenSet() const;

                    /**
                     * 获取卡号图片数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CardNoImage 卡号图片数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCardNoImage() const;

                    /**
                     * 判断参数 CardNoImage 是否已赋值
                     * @return CardNoImage 是否已赋值
                     * 
                     */
                    bool CardNoImageHasBeenSet() const;

                    /**
                     * 获取WarningCode 告警码列表和释义：
-9110:银行卡日期无效; 
-9111:银行卡边框不完整; 
-9112:银行卡图片反光;
-9113:银行卡复印件;
-9114:银行卡翻拍件
（告警码可以同时存在多个）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WarningCode WarningCode 告警码列表和释义：
-9110:银行卡日期无效; 
-9111:银行卡边框不完整; 
-9112:银行卡图片反光;
-9113:银行卡复印件;
-9114:银行卡翻拍件
（告警码可以同时存在多个）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetWarningCode() const;

                    /**
                     * 判断参数 WarningCode 是否已赋值
                     * @return WarningCode 是否已赋值
                     * 
                     */
                    bool WarningCodeHasBeenSet() const;

                    /**
                     * 获取图片质量分数，请求EnableQualityValue时返回（取值范围：0-100，分数越低越模糊，建议阈值≥50）。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QualityValue 图片质量分数，请求EnableQualityValue时返回（取值范围：0-100，分数越低越模糊，建议阈值≥50）。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetQualityValue() const;

                    /**
                     * 判断参数 QualityValue 是否已赋值
                     * @return QualityValue 是否已赋值
                     * 
                     */
                    bool QualityValueHasBeenSet() const;

                    /**
                     * 获取卡类别， 如： 标准实体银行卡、电子银行卡信息截图
                     * @return CardCategory 卡类别， 如： 标准实体银行卡、电子银行卡信息截图
                     * 
                     */
                    std::string GetCardCategory() const;

                    /**
                     * 判断参数 CardCategory 是否已赋值
                     * @return CardCategory 是否已赋值
                     * 
                     */
                    bool CardCategoryHasBeenSet() const;

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
                     * 有效期，格式如：07/2023
                     */
                    std::string m_validDate;
                    bool m_validDateHasBeenSet;

                    /**
                     * 卡类型
                     */
                    std::string m_cardType;
                    bool m_cardTypeHasBeenSet;

                    /**
                     * 卡名字
                     */
                    std::string m_cardName;
                    bool m_cardNameHasBeenSet;

                    /**
                     * 切片图片数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_borderCutImage;
                    bool m_borderCutImageHasBeenSet;

                    /**
                     * 卡号图片数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cardNoImage;
                    bool m_cardNoImageHasBeenSet;

                    /**
                     * WarningCode 告警码列表和释义：
-9110:银行卡日期无效; 
-9111:银行卡边框不完整; 
-9112:银行卡图片反光;
-9113:银行卡复印件;
-9114:银行卡翻拍件
（告警码可以同时存在多个）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_warningCode;
                    bool m_warningCodeHasBeenSet;

                    /**
                     * 图片质量分数，请求EnableQualityValue时返回（取值范围：0-100，分数越低越模糊，建议阈值≥50）。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_qualityValue;
                    bool m_qualityValueHasBeenSet;

                    /**
                     * 卡类别， 如： 标准实体银行卡、电子银行卡信息截图
                     */
                    std::string m_cardCategory;
                    bool m_cardCategoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_BANKCARDOCRRESPONSE_H_
