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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_RULEITEM_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_RULEITEM_H_

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
                * 规则元数据
                */
                class RuleItem : public AbstractModel
                {
                public:
                    RuleItem();
                    ~RuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取字段名称
                     * @return Key 字段名称
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置字段名称
                     * @param _key 字段名称
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取操作关系（等于、不等于、包含、不包含）
                     * @return Operate 操作关系（等于、不等于、包含、不包含）
                     * 
                     */
                    std::string GetOperate() const;

                    /**
                     * 设置操作关系（等于、不等于、包含、不包含）
                     * @param _operate 操作关系（等于、不等于、包含、不包含）
                     * 
                     */
                    void SetOperate(const std::string& _operate);

                    /**
                     * 判断参数 Operate 是否已赋值
                     * @return Operate 是否已赋值
                     * 
                     */
                    bool OperateHasBeenSet() const;

                    /**
                     * 获取内容
                     * @return Value 内容
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置内容
                     * @param _value 内容
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
                     * 获取内容，v2多值版本使用
                     * @return Values 内容，v2多值版本使用
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置内容，v2多值版本使用
                     * @param _values 内容，v2多值版本使用
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * 字段名称
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 操作关系（等于、不等于、包含、不包含）
                     */
                    std::string m_operate;
                    bool m_operateHasBeenSet;

                    /**
                     * 内容
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 内容，v2多值版本使用
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_RULEITEM_H_
