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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_PRICETAG_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_PRICETAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * 价格标签信息
                */
                class PriceTag : public AbstractModel
                {
                public:
                    PriceTag();
                    ~PriceTag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取计价名称，表示规格的计费项项目分类，具体规格的计价名称可参考  [获取MQTT产品售卖规格](https://cloud.tencent.com/document/product/1778/116232) 接口的返回结果。
                     * @return Name 计价名称，表示规格的计费项项目分类，具体规格的计价名称可参考  [获取MQTT产品售卖规格](https://cloud.tencent.com/document/product/1778/116232) 接口的返回结果。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置计价名称，表示规格的计费项项目分类，具体规格的计价名称可参考  [获取MQTT产品售卖规格](https://cloud.tencent.com/document/product/1778/116232) 接口的返回结果。
                     * @param _name 计价名称，表示规格的计费项项目分类，具体规格的计价名称可参考  [获取MQTT产品售卖规格](https://cloud.tencent.com/document/product/1778/116232) 接口的返回结果。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取计价类别，计价名称子类，具体规格的计价类别可参考  [获取MQTT产品售卖规格](https://cloud.tencent.com/document/product/1778/116232) 的返回结果。
                     * @return Category 计价类别，计价名称子类，具体规格的计价类别可参考  [获取MQTT产品售卖规格](https://cloud.tencent.com/document/product/1778/116232) 的返回结果。
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置计价类别，计价名称子类，具体规格的计价类别可参考  [获取MQTT产品售卖规格](https://cloud.tencent.com/document/product/1778/116232) 的返回结果。
                     * @param _category 计价类别，计价名称子类，具体规格的计价类别可参考  [获取MQTT产品售卖规格](https://cloud.tencent.com/document/product/1778/116232) 的返回结果。
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取计费项标签，为计价名称（Name）下计价类别（Category）的子项目，表示一个具体的收费项。规格的计费项标签可参考 
 [获取MQTT产品售卖规格](https://cloud.tencent.com/document/product/1778/116232) 接口的返回结果。
                     * @return Code 计费项标签，为计价名称（Name）下计价类别（Category）的子项目，表示一个具体的收费项。规格的计费项标签可参考 
 [获取MQTT产品售卖规格](https://cloud.tencent.com/document/product/1778/116232) 接口的返回结果。
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置计费项标签，为计价名称（Name）下计价类别（Category）的子项目，表示一个具体的收费项。规格的计费项标签可参考 
 [获取MQTT产品售卖规格](https://cloud.tencent.com/document/product/1778/116232) 接口的返回结果。
                     * @param _code 计费项标签，为计价名称（Name）下计价类别（Category）的子项目，表示一个具体的收费项。规格的计费项标签可参考 
 [获取MQTT产品售卖规格](https://cloud.tencent.com/document/product/1778/116232) 接口的返回结果。
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取计费步长，表示该规格在 计价名称（Name）下的计价类别（Category）的计费项标签（Code）计费数量。具体规格该字段取值参考 [获取MQTT产品售卖规格](https://cloud.tencent.com/document/product/1778/116232)
                     * @return Step 计费步长，表示该规格在 计价名称（Name）下的计价类别（Category）的计费项标签（Code）计费数量。具体规格该字段取值参考 [获取MQTT产品售卖规格](https://cloud.tencent.com/document/product/1778/116232)
                     * 
                     */
                    int64_t GetStep() const;

                    /**
                     * 设置计费步长，表示该规格在 计价名称（Name）下的计价类别（Category）的计费项标签（Code）计费数量。具体规格该字段取值参考 [获取MQTT产品售卖规格](https://cloud.tencent.com/document/product/1778/116232)
                     * @param _step 计费步长，表示该规格在 计价名称（Name）下的计价类别（Category）的计费项标签（Code）计费数量。具体规格该字段取值参考 [获取MQTT产品售卖规格](https://cloud.tencent.com/document/product/1778/116232)
                     * 
                     */
                    void SetStep(const int64_t& _step);

                    /**
                     * 判断参数 Step 是否已赋值
                     * @return Step 是否已赋值
                     * 
                     */
                    bool StepHasBeenSet() const;

                private:

                    /**
                     * 计价名称，表示规格的计费项项目分类，具体规格的计价名称可参考  [获取MQTT产品售卖规格](https://cloud.tencent.com/document/product/1778/116232) 接口的返回结果。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 计价类别，计价名称子类，具体规格的计价类别可参考  [获取MQTT产品售卖规格](https://cloud.tencent.com/document/product/1778/116232) 的返回结果。
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * 计费项标签，为计价名称（Name）下计价类别（Category）的子项目，表示一个具体的收费项。规格的计费项标签可参考 
 [获取MQTT产品售卖规格](https://cloud.tencent.com/document/product/1778/116232) 接口的返回结果。
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 计费步长，表示该规格在 计价名称（Name）下的计价类别（Category）的计费项标签（Code）计费数量。具体规格该字段取值参考 [获取MQTT产品售卖规格](https://cloud.tencent.com/document/product/1778/116232)
                     */
                    int64_t m_step;
                    bool m_stepHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_PRICETAG_H_
