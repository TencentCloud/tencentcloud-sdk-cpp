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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_BASE64ENCODEDTRIGGERRULE_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_BASE64ENCODEDTRIGGERRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * Base64编码的header触发规则
                */
                class Base64EncodedTriggerRule : public AbstractModel
                {
                public:
                    Base64EncodedTriggerRule();
                    ~Base64EncodedTriggerRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取进行编码触发的header，可选值 "Accept"和"Content_Type" 对应实际数据流请求header中的Accept和 Content-Type。
                     * @return Name 进行编码触发的header，可选值 "Accept"和"Content_Type" 对应实际数据流请求header中的Accept和 Content-Type。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置进行编码触发的header，可选值 "Accept"和"Content_Type" 对应实际数据流请求header中的Accept和 Content-Type。
                     * @param _name 进行编码触发的header，可选值 "Accept"和"Content_Type" 对应实际数据流请求header中的Accept和 Content-Type。
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
                     * 获取进行编码触发的header的可选值数组, 数组元素的字符串最大长度为40，元素可以包括数字，英文字母以及特殊字符，特殊字符的可选值为： `.`    `+`    `*`   `-`   `/`  `_` 

例如 [
    "application/x-vpeg005",
    "application/xhtml+xml",
    "application/vnd.ms-project",
    "application/vnd.rn-rn_music_package"
] 等都是合法的。
                     * @return Value 进行编码触发的header的可选值数组, 数组元素的字符串最大长度为40，元素可以包括数字，英文字母以及特殊字符，特殊字符的可选值为： `.`    `+`    `*`   `-`   `/`  `_` 

例如 [
    "application/x-vpeg005",
    "application/xhtml+xml",
    "application/vnd.ms-project",
    "application/vnd.rn-rn_music_package"
] 等都是合法的。
                     * 
                     */
                    std::vector<std::string> GetValue() const;

                    /**
                     * 设置进行编码触发的header的可选值数组, 数组元素的字符串最大长度为40，元素可以包括数字，英文字母以及特殊字符，特殊字符的可选值为： `.`    `+`    `*`   `-`   `/`  `_` 

例如 [
    "application/x-vpeg005",
    "application/xhtml+xml",
    "application/vnd.ms-project",
    "application/vnd.rn-rn_music_package"
] 等都是合法的。
                     * @param _value 进行编码触发的header的可选值数组, 数组元素的字符串最大长度为40，元素可以包括数字，英文字母以及特殊字符，特殊字符的可选值为： `.`    `+`    `*`   `-`   `/`  `_` 

例如 [
    "application/x-vpeg005",
    "application/xhtml+xml",
    "application/vnd.ms-project",
    "application/vnd.rn-rn_music_package"
] 等都是合法的。
                     * 
                     */
                    void SetValue(const std::vector<std::string>& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * 进行编码触发的header，可选值 "Accept"和"Content_Type" 对应实际数据流请求header中的Accept和 Content-Type。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 进行编码触发的header的可选值数组, 数组元素的字符串最大长度为40，元素可以包括数字，英文字母以及特殊字符，特殊字符的可选值为： `.`    `+`    `*`   `-`   `/`  `_` 

例如 [
    "application/x-vpeg005",
    "application/xhtml+xml",
    "application/vnd.ms-project",
    "application/vnd.rn-rn_music_package"
] 等都是合法的。
                     */
                    std::vector<std::string> m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_BASE64ENCODEDTRIGGERRULE_H_
