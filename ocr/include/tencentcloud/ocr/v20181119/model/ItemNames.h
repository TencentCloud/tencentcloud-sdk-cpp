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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_ITEMNAMES_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_ITEMNAMES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 自定义抽取需要的字段名称、字段类型、字段提示词。
                */
                class ItemNames : public AbstractModel
                {
                public:
                    ItemNames();
                    ~ItemNames() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>自定义抽取功能需返回的字段名称。</p>
                     * @return KeyName <p>自定义抽取功能需返回的字段名称。</p>
                     * 
                     */
                    std::string GetKeyName() const;

                    /**
                     * 设置<p>自定义抽取功能需返回的字段名称。</p>
                     * @param _keyName <p>自定义抽取功能需返回的字段名称。</p>
                     * 
                     */
                    void SetKeyName(const std::string& _keyName);

                    /**
                     * 判断参数 KeyName 是否已赋值
                     * @return KeyName 是否已赋值
                     * 
                     */
                    bool KeyNameHasBeenSet() const;

                    /**
                     * 获取<p>默认 0；0表示kv对  1表示 表格字段。</p>
                     * @return KeyType <p>默认 0；0表示kv对  1表示 表格字段。</p>
                     * 
                     */
                    int64_t GetKeyType() const;

                    /**
                     * 设置<p>默认 0；0表示kv对  1表示 表格字段。</p>
                     * @param _keyType <p>默认 0；0表示kv对  1表示 表格字段。</p>
                     * 
                     */
                    void SetKeyType(const int64_t& _keyType);

                    /**
                     * 判断参数 KeyType 是否已赋值
                     * @return KeyType 是否已赋值
                     * 
                     */
                    bool KeyTypeHasBeenSet() const;

                    /**
                     * 获取<p>抽取字段的描述内容。</p>
                     * @return KeyPrompt <p>抽取字段的描述内容。</p>
                     * 
                     */
                    std::string GetKeyPrompt() const;

                    /**
                     * 设置<p>抽取字段的描述内容。</p>
                     * @param _keyPrompt <p>抽取字段的描述内容。</p>
                     * 
                     */
                    void SetKeyPrompt(const std::string& _keyPrompt);

                    /**
                     * 判断参数 KeyPrompt 是否已赋值
                     * @return KeyPrompt 是否已赋值
                     * 
                     */
                    bool KeyPromptHasBeenSet() const;

                    /**
                     * 获取<p>自定义字段对应期望的值内容（这个一般需要对字段审核比对才需要输入）。</p>
                     * @return KeyExpectedValue <p>自定义字段对应期望的值内容（这个一般需要对字段审核比对才需要输入）。</p>
                     * 
                     */
                    std::string GetKeyExpectedValue() const;

                    /**
                     * 设置<p>自定义字段对应期望的值内容（这个一般需要对字段审核比对才需要输入）。</p>
                     * @param _keyExpectedValue <p>自定义字段对应期望的值内容（这个一般需要对字段审核比对才需要输入）。</p>
                     * 
                     */
                    void SetKeyExpectedValue(const std::string& _keyExpectedValue);

                    /**
                     * 判断参数 KeyExpectedValue 是否已赋值
                     * @return KeyExpectedValue 是否已赋值
                     * 
                     */
                    bool KeyExpectedValueHasBeenSet() const;

                    /**
                     * 获取<p>自定义字段审核比对的规则prompt。</p><p>比如keyname是姓名，KeyExpectedValue 张三，KeyAuditPrompt设置为“字符需要完全匹配则审核返回正确”/“字符匹配90%就审核返回正确”</p>
                     * @return KeyAuditPrompt <p>自定义字段审核比对的规则prompt。</p><p>比如keyname是姓名，KeyExpectedValue 张三，KeyAuditPrompt设置为“字符需要完全匹配则审核返回正确”/“字符匹配90%就审核返回正确”</p>
                     * 
                     */
                    std::string GetKeyAuditPrompt() const;

                    /**
                     * 设置<p>自定义字段审核比对的规则prompt。</p><p>比如keyname是姓名，KeyExpectedValue 张三，KeyAuditPrompt设置为“字符需要完全匹配则审核返回正确”/“字符匹配90%就审核返回正确”</p>
                     * @param _keyAuditPrompt <p>自定义字段审核比对的规则prompt。</p><p>比如keyname是姓名，KeyExpectedValue 张三，KeyAuditPrompt设置为“字符需要完全匹配则审核返回正确”/“字符匹配90%就审核返回正确”</p>
                     * 
                     */
                    void SetKeyAuditPrompt(const std::string& _keyAuditPrompt);

                    /**
                     * 判断参数 KeyAuditPrompt 是否已赋值
                     * @return KeyAuditPrompt 是否已赋值
                     * 
                     */
                    bool KeyAuditPromptHasBeenSet() const;

                private:

                    /**
                     * <p>自定义抽取功能需返回的字段名称。</p>
                     */
                    std::string m_keyName;
                    bool m_keyNameHasBeenSet;

                    /**
                     * <p>默认 0；0表示kv对  1表示 表格字段。</p>
                     */
                    int64_t m_keyType;
                    bool m_keyTypeHasBeenSet;

                    /**
                     * <p>抽取字段的描述内容。</p>
                     */
                    std::string m_keyPrompt;
                    bool m_keyPromptHasBeenSet;

                    /**
                     * <p>自定义字段对应期望的值内容（这个一般需要对字段审核比对才需要输入）。</p>
                     */
                    std::string m_keyExpectedValue;
                    bool m_keyExpectedValueHasBeenSet;

                    /**
                     * <p>自定义字段审核比对的规则prompt。</p><p>比如keyname是姓名，KeyExpectedValue 张三，KeyAuditPrompt设置为“字符需要完全匹配则审核返回正确”/“字符匹配90%就审核返回正确”</p>
                     */
                    std::string m_keyAuditPrompt;
                    bool m_keyAuditPromptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_ITEMNAMES_H_
