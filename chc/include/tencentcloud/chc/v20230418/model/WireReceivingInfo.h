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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_WIRERECEIVINGINFO_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_WIRERECEIVINGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 线材收货信息
                */
                class WireReceivingInfo : public AbstractModel
                {
                public:
                    WireReceivingInfo();
                    ~WireReceivingInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取'光纤', '网线', '电源线'
                     * @return TypeName '光纤', '网线', '电源线'
                     * 
                     */
                    std::string GetTypeName() const;

                    /**
                     * 设置'光纤', '网线', '电源线'
                     * @param _typeName '光纤', '网线', '电源线'
                     * 
                     */
                    void SetTypeName(const std::string& _typeName);

                    /**
                     * 判断参数 TypeName 是否已赋值
                     * @return TypeName 是否已赋值
                     * 
                     */
                    bool TypeNameHasBeenSet() const;

                    /**
                     * 获取数量
                     * @return Quantity 数量
                     * 
                     */
                    uint64_t GetQuantity() const;

                    /**
                     * 设置数量
                     * @param _quantity 数量
                     * 
                     */
                    void SetQuantity(const uint64_t& _quantity);

                    /**
                     * 判断参数 Quantity 是否已赋值
                     * @return Quantity 是否已赋值
                     * 
                     */
                    bool QuantityHasBeenSet() const;

                    /**
                     * 获取'箱', '卷', '套'
                     * @return Unit '箱', '卷', '套'
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置'箱', '卷', '套'
                     * @param _unit '箱', '卷', '套'
                     * 
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                    /**
                     * 获取收货凭证号
                     * @return ReceiptNumber 收货凭证号
                     * 
                     */
                    std::string GetReceiptNumber() const;

                    /**
                     * 设置收货凭证号
                     * @param _receiptNumber 收货凭证号
                     * 
                     */
                    void SetReceiptNumber(const std::string& _receiptNumber);

                    /**
                     * 判断参数 ReceiptNumber 是否已赋值
                     * @return ReceiptNumber 是否已赋值
                     * 
                     */
                    bool ReceiptNumberHasBeenSet() const;

                    /**
                     * 获取硬件备注
                     * @return HardwareMemo 硬件备注
                     * 
                     */
                    std::string GetHardwareMemo() const;

                    /**
                     * 设置硬件备注
                     * @param _hardwareMemo 硬件备注
                     * 
                     */
                    void SetHardwareMemo(const std::string& _hardwareMemo);

                    /**
                     * 判断参数 HardwareMemo 是否已赋值
                     * @return HardwareMemo 是否已赋值
                     * 
                     */
                    bool HardwareMemoHasBeenSet() const;

                private:

                    /**
                     * '光纤', '网线', '电源线'
                     */
                    std::string m_typeName;
                    bool m_typeNameHasBeenSet;

                    /**
                     * 数量
                     */
                    uint64_t m_quantity;
                    bool m_quantityHasBeenSet;

                    /**
                     * '箱', '卷', '套'
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * 收货凭证号
                     */
                    std::string m_receiptNumber;
                    bool m_receiptNumberHasBeenSet;

                    /**
                     * 硬件备注
                     */
                    std::string m_hardwareMemo;
                    bool m_hardwareMemoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_WIRERECEIVINGINFO_H_
