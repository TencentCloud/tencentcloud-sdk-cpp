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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_EXTRACTIONFIELD_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_EXTRACTIONFIELD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 合同智能提取字段信息
                */
                class ExtractionField : public AbstractModel
                {
                public:
                    ExtractionField();
                    ~ExtractionField() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用于合同智能提取的字段名称。

注意: `长度不能超过30个字符`
                     * @return Name 用于合同智能提取的字段名称。

注意: `长度不能超过30个字符`
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置用于合同智能提取的字段名称。

注意: `长度不能超过30个字符`
                     * @param _name 用于合同智能提取的字段名称。

注意: `长度不能超过30个字符`
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
                     * 获取指定合同智能提取的字段类型，目前仅支持`TEXT`、`DATE`、`NUMBER`、`OPTION`类型。

类型支持如下：
1、TEXT（文本）
2、DATE（日期）
3、NUMBER（数字）
4、OPTION（选项值）
                     * @return Type 指定合同智能提取的字段类型，目前仅支持`TEXT`、`DATE`、`NUMBER`、`OPTION`类型。

类型支持如下：
1、TEXT（文本）
2、DATE（日期）
3、NUMBER（数字）
4、OPTION（选项值）
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置指定合同智能提取的字段类型，目前仅支持`TEXT`、`DATE`、`NUMBER`、`OPTION`类型。

类型支持如下：
1、TEXT（文本）
2、DATE（日期）
3、NUMBER（数字）
4、OPTION（选项值）
                     * @param _type 指定合同智能提取的字段类型，目前仅支持`TEXT`、`DATE`、`NUMBER`、`OPTION`类型。

类型支持如下：
1、TEXT（文本）
2、DATE（日期）
3、NUMBER（数字）
4、OPTION（选项值）
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取用于描述字段信息。

注意：
1、描述字段不能超过100个字符
                     * @return Description 用于描述字段信息。

注意：
1、描述字段不能超过100个字符
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置用于描述字段信息。

注意：
1、描述字段不能超过100个字符
                     * @param _description 用于描述字段信息。

注意：
1、描述字段不能超过100个字符
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取提取出合同中的字段信息。
                     * @return Values 提取出合同中的字段信息。
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置提取出合同中的字段信息。
                     * @param _values 提取出合同中的字段信息。
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                    /**
                     * 获取当字段类型`Type`为OPTION时为必输项，输入选项值
                     * @return ChoiceList 当字段类型`Type`为OPTION时为必输项，输入选项值
                     * 
                     */
                    std::vector<std::string> GetChoiceList() const;

                    /**
                     * 设置当字段类型`Type`为OPTION时为必输项，输入选项值
                     * @param _choiceList 当字段类型`Type`为OPTION时为必输项，输入选项值
                     * 
                     */
                    void SetChoiceList(const std::vector<std::string>& _choiceList);

                    /**
                     * 判断参数 ChoiceList 是否已赋值
                     * @return ChoiceList 是否已赋值
                     * 
                     */
                    bool ChoiceListHasBeenSet() const;

                private:

                    /**
                     * 用于合同智能提取的字段名称。

注意: `长度不能超过30个字符`
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 指定合同智能提取的字段类型，目前仅支持`TEXT`、`DATE`、`NUMBER`、`OPTION`类型。

类型支持如下：
1、TEXT（文本）
2、DATE（日期）
3、NUMBER（数字）
4、OPTION（选项值）
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 用于描述字段信息。

注意：
1、描述字段不能超过100个字符
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 提取出合同中的字段信息。
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * 当字段类型`Type`为OPTION时为必输项，输入选项值
                     */
                    std::vector<std::string> m_choiceList;
                    bool m_choiceListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_EXTRACTIONFIELD_H_
