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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_CLBWAFREGIONITEM_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_CLBWAFREGIONITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * Clb-waf地域信息
                */
                class ClbWafRegionItem : public AbstractModel
                {
                public:
                    ClbWafRegionItem();
                    ~ClbWafRegionItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域ID
                     * @return Id 地域ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置地域ID
                     * @param _id 地域ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取地域中文说明
                     * @return Text 地域中文说明
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置地域中文说明
                     * @param _text 地域中文说明
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取地域英文全拼
                     * @return Value 地域英文全拼
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置地域英文全拼
                     * @param _value 地域英文全拼
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取地域编码
                     * @return Code 地域编码
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置地域编码
                     * @param _code 地域编码
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                private:

                    /**
                     * 地域ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 地域中文说明
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 地域英文全拼
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 地域编码
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_CLBWAFREGIONITEM_H_
