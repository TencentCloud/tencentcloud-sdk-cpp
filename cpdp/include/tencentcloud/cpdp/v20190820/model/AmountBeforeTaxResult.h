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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_AMOUNTBEFORETAXRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_AMOUNTBEFORETAXRESULT_H_

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
                * 税前金额结果
                */
                class AmountBeforeTaxResult : public AbstractModel
                {
                public:
                    AmountBeforeTaxResult();
                    ~AmountBeforeTaxResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取税前金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AmountBeforeTax 税前金额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAmountBeforeTax() const;

                    /**
                     * 设置税前金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AmountBeforeTax 税前金额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAmountBeforeTax(const std::string& _amountBeforeTax);

                    /**
                     * 判断参数 AmountBeforeTax 是否已赋值
                     * @return AmountBeforeTax 是否已赋值
                     */
                    bool AmountBeforeTaxHasBeenSet() const;

                private:

                    /**
                     * 税前金额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_amountBeforeTax;
                    bool m_amountBeforeTaxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_AMOUNTBEFORETAXRESULT_H_
