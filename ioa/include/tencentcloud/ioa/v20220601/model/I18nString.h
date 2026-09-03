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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_I18NSTRING_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_I18NSTRING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * I18nString 国际化字符串（对齐云API平台已注册数据结构 ID:131745，用途：入参/出参） 使用方式：通常以 repeated I18nString 数组承载多语言，一条元素装一种语言。 出参示例：[{"Lang":"zh-CN","Value":"策略名"},{"Lang":"en-US","Value":"Policy Name"}] 入参约定：客户端至少提供 zh-CN 一条；后端建议在业务层调用 i18n.MustZhCn 校验。
                */
                class I18nString : public AbstractModel
                {
                public:
                    I18nString();
                    ~I18nString() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>语言枚举</p><p>枚举值：</p><ul><li>zh-CN： 简体中文</li><li>en-US： 英文</li></ul>
                     * @return Lang <p>语言枚举</p><p>枚举值：</p><ul><li>zh-CN： 简体中文</li><li>en-US： 英文</li></ul>
                     * 
                     */
                    std::string GetLang() const;

                    /**
                     * 设置<p>语言枚举</p><p>枚举值：</p><ul><li>zh-CN： 简体中文</li><li>en-US： 英文</li></ul>
                     * @param _lang <p>语言枚举</p><p>枚举值：</p><ul><li>zh-CN： 简体中文</li><li>en-US： 英文</li></ul>
                     * 
                     */
                    void SetLang(const std::string& _lang);

                    /**
                     * 判断参数 Lang 是否已赋值
                     * @return Lang 是否已赋值
                     * 
                     */
                    bool LangHasBeenSet() const;

                    /**
                     * 获取<p>这是一段业务字符串</p>
                     * @return Value <p>这是一段业务字符串</p>
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置<p>这是一段业务字符串</p>
                     * @param _value <p>这是一段业务字符串</p>
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * <p>语言枚举</p><p>枚举值：</p><ul><li>zh-CN： 简体中文</li><li>en-US： 英文</li></ul>
                     */
                    std::string m_lang;
                    bool m_langHasBeenSet;

                    /**
                     * <p>这是一段业务字符串</p>
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_I18NSTRING_H_
