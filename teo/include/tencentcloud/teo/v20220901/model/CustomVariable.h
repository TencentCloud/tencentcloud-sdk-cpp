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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMVARIABLE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMVARIABLE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 自定义变量详情。
                */
                class CustomVariable : public AbstractModel
                {
                public:
                    CustomVariable();
                    ~CustomVariable() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>变量名称。需填写完整前缀：user.zone.* 表示站点级自定义变量，user.rule.* 表示规则级自定义变量。前缀后的自定义部分仅支持大小写字母、数字和下划线。变量名称区分大小写，长度不能超过 50 个字符。变量创建成功后，名称不可修改。</p>
                     * @return Name <p>变量名称。需填写完整前缀：user.zone.* 表示站点级自定义变量，user.rule.* 表示规则级自定义变量。前缀后的自定义部分仅支持大小写字母、数字和下划线。变量名称区分大小写，长度不能超过 50 个字符。变量创建成功后，名称不可修改。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>变量名称。需填写完整前缀：user.zone.* 表示站点级自定义变量，user.rule.* 表示规则级自定义变量。前缀后的自定义部分仅支持大小写字母、数字和下划线。变量名称区分大小写，长度不能超过 50 个字符。变量创建成功后，名称不可修改。</p>
                     * @param _name <p>变量名称。需填写完整前缀：user.zone.* 表示站点级自定义变量，user.rule.* 表示规则级自定义变量。前缀后的自定义部分仅支持大小写字母、数字和下划线。变量名称区分大小写，长度不能超过 50 个字符。变量创建成功后，名称不可修改。</p>
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
                     * 获取<p>变量初始值。支持使用常量字符串、变量以及公式。长度不能超过 255 个字符。</p>
                     * @return InitialValue <p>变量初始值。支持使用常量字符串、变量以及公式。长度不能超过 255 个字符。</p>
                     * 
                     */
                    std::string GetInitialValue() const;

                    /**
                     * 设置<p>变量初始值。支持使用常量字符串、变量以及公式。长度不能超过 255 个字符。</p>
                     * @param _initialValue <p>变量初始值。支持使用常量字符串、变量以及公式。长度不能超过 255 个字符。</p>
                     * 
                     */
                    void SetInitialValue(const std::string& _initialValue);

                    /**
                     * 判断参数 InitialValue 是否已赋值
                     * @return InitialValue 是否已赋值
                     * 
                     */
                    bool InitialValueHasBeenSet() const;

                    /**
                     * 获取<p>变量描述。长度限制不超过 60 个字符。</p>
                     * @return Description <p>变量描述。长度限制不超过 60 个字符。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>变量描述。长度限制不超过 60 个字符。</p>
                     * @param _description <p>变量描述。长度限制不超过 60 个字符。</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * <p>变量名称。需填写完整前缀：user.zone.* 表示站点级自定义变量，user.rule.* 表示规则级自定义变量。前缀后的自定义部分仅支持大小写字母、数字和下划线。变量名称区分大小写，长度不能超过 50 个字符。变量创建成功后，名称不可修改。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>变量初始值。支持使用常量字符串、变量以及公式。长度不能超过 255 个字符。</p>
                     */
                    std::string m_initialValue;
                    bool m_initialValueHasBeenSet;

                    /**
                     * <p>变量描述。长度限制不超过 60 个字符。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMVARIABLE_H_
