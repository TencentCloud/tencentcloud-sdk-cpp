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
                     * 获取计价名称
                     * @return Name 计价名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置计价名称
                     * @param _name 计价名称
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
                     * 获取计价类别
                     * @return Category 计价类别
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置计价类别
                     * @param _category 计价类别
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
                     * 获取计费项标签
                     * @return Code 计费项标签
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置计费项标签
                     * @param _code 计费项标签
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
                     * 获取步长
                     * @return Step 步长
                     * 
                     */
                    int64_t GetStep() const;

                    /**
                     * 设置步长
                     * @param _step 步长
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
                     * 计价名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 计价类别
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * 计费项标签
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 步长
                     */
                    int64_t m_step;
                    bool m_stepHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_PRICETAG_H_
