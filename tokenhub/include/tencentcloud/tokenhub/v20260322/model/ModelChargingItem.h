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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_MODELCHARGINGITEM_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_MODELCHARGINGITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * 计费条目
                */
                class ModelChargingItem : public AbstractModel
                {
                public:
                    ModelChargingItem();
                    ~ModelChargingItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取价格维度标识。取值：Input（输入）、Output（输出）、Cache（缓存命中）、Thinking（思考）、BatchInput（批量输入）、BatchOutput（批量输出）、BatchCache（批量缓存命中）、ImageInput（输入图片）、ImageOutput（输出图片）、Search（搜索调用）。
                     * @return PriceName 价格维度标识。取值：Input（输入）、Output（输出）、Cache（缓存命中）、Thinking（思考）、BatchInput（批量输入）、BatchOutput（批量输出）、BatchCache（批量缓存命中）、ImageInput（输入图片）、ImageOutput（输出图片）、Search（搜索调用）。
                     * 
                     */
                    std::string GetPriceName() const;

                    /**
                     * 设置价格维度标识。取值：Input（输入）、Output（输出）、Cache（缓存命中）、Thinking（思考）、BatchInput（批量输入）、BatchOutput（批量输出）、BatchCache（批量缓存命中）、ImageInput（输入图片）、ImageOutput（输出图片）、Search（搜索调用）。
                     * @param _priceName 价格维度标识。取值：Input（输入）、Output（输出）、Cache（缓存命中）、Thinking（思考）、BatchInput（批量输入）、BatchOutput（批量输出）、BatchCache（批量缓存命中）、ImageInput（输入图片）、ImageOutput（输出图片）、Search（搜索调用）。
                     * 
                     */
                    void SetPriceName(const std::string& _priceName);

                    /**
                     * 判断参数 PriceName 是否已赋值
                     * @return PriceName 是否已赋值
                     * 
                     */
                    bool PriceNameHasBeenSet() const;

                    /**
                     * 获取价格维度展示名，后端直接提供当前语言文本（如 输入、Input），前端无需翻译。
                     * @return DisplayName 价格维度展示名，后端直接提供当前语言文本（如 输入、Input），前端无需翻译。
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置价格维度展示名，后端直接提供当前语言文本（如 输入、Input），前端无需翻译。
                     * @param _displayName 价格维度展示名，后端直接提供当前语言文本（如 输入、Input），前端无需翻译。
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取价格数值。
                     * @return Price 价格数值。
                     * 
                     */
                    std::string GetPrice() const;

                    /**
                     * 设置价格数值。
                     * @param _price 价格数值。
                     * 
                     */
                    void SetPrice(const std::string& _price);

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                    /**
                     * 获取价格单位，后端直接提供当前语言文本（如 元/百万tokens、元/张、积分/次）。
                     * @return PriceUnit 价格单位，后端直接提供当前语言文本（如 元/百万tokens、元/张、积分/次）。
                     * 
                     */
                    std::string GetPriceUnit() const;

                    /**
                     * 设置价格单位，后端直接提供当前语言文本（如 元/百万tokens、元/张、积分/次）。
                     * @param _priceUnit 价格单位，后端直接提供当前语言文本（如 元/百万tokens、元/张、积分/次）。
                     * 
                     */
                    void SetPriceUnit(const std::string& _priceUnit);

                    /**
                     * 判断参数 PriceUnit 是否已赋值
                     * @return PriceUnit 是否已赋值
                     * 
                     */
                    bool PriceUnitHasBeenSet() const;

                private:

                    /**
                     * 价格维度标识。取值：Input（输入）、Output（输出）、Cache（缓存命中）、Thinking（思考）、BatchInput（批量输入）、BatchOutput（批量输出）、BatchCache（批量缓存命中）、ImageInput（输入图片）、ImageOutput（输出图片）、Search（搜索调用）。
                     */
                    std::string m_priceName;
                    bool m_priceNameHasBeenSet;

                    /**
                     * 价格维度展示名，后端直接提供当前语言文本（如 输入、Input），前端无需翻译。
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * 价格数值。
                     */
                    std::string m_price;
                    bool m_priceHasBeenSet;

                    /**
                     * 价格单位，后端直接提供当前语言文本（如 元/百万tokens、元/张、积分/次）。
                     */
                    std::string m_priceUnit;
                    bool m_priceUnitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_MODELCHARGINGITEM_H_
