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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_BANKSLIP_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_BANKSLIP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/BankSlipInfo.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 银行回单
                */
                class BankSlip : public AbstractModel
                {
                public:
                    BankSlip();
                    ~BankSlip() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取银行回单信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BankSlipInfos 银行回单信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<BankSlipInfo> GetBankSlipInfos() const;

                    /**
                     * 设置银行回单信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bankSlipInfos 银行回单信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBankSlipInfos(const std::vector<BankSlipInfo>& _bankSlipInfos);

                    /**
                     * 判断参数 BankSlipInfos 是否已赋值
                     * @return BankSlipInfos 是否已赋值
                     * 
                     */
                    bool BankSlipInfosHasBeenSet() const;

                    /**
                     * 获取银行回单信息常用字段
                     * @return CommonBankSlipInfos 银行回单信息常用字段
                     * 
                     */
                    std::vector<BankSlipInfo> GetCommonBankSlipInfos() const;

                    /**
                     * 设置银行回单信息常用字段
                     * @param _commonBankSlipInfos 银行回单信息常用字段
                     * 
                     */
                    void SetCommonBankSlipInfos(const std::vector<BankSlipInfo>& _commonBankSlipInfos);

                    /**
                     * 判断参数 CommonBankSlipInfos 是否已赋值
                     * @return CommonBankSlipInfos 是否已赋值
                     * 
                     */
                    bool CommonBankSlipInfosHasBeenSet() const;

                private:

                    /**
                     * 银行回单信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<BankSlipInfo> m_bankSlipInfos;
                    bool m_bankSlipInfosHasBeenSet;

                    /**
                     * 银行回单信息常用字段
                     */
                    std::vector<BankSlipInfo> m_commonBankSlipInfos;
                    bool m_commonBankSlipInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_BANKSLIP_H_
