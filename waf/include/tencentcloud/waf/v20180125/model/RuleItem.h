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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_RULEITEM_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_RULEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/ValueLevel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 大模型检测内容匹配
                */
                class RuleItem : public AbstractModel
                {
                public:
                    RuleItem();
                    ~RuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取 信息类型
                     * @return Key  信息类型
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置 信息类型
                     * @param _key  信息类型
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
                     * 获取 操作符，默认是包含

                     * @return Op  操作符，默认是包含

                     * 
                     */
                    std::string GetOp() const;

                    /**
                     * 设置 操作符，默认是包含

                     * @param _op  操作符，默认是包含

                     * 
                     */
                    void SetOp(const std::string& _op);

                    /**
                     * 判断参数 Op 是否已赋值
                     * @return Op 是否已赋值
                     * 
                     */
                    bool OpHasBeenSet() const;

                    /**
                     * 获取信息类型
                     * @return Value 信息类型
                     * 
                     */
                    std::vector<std::string> GetValue() const;

                    /**
                     * 设置信息类型
                     * @param _value 信息类型
                     * 
                     */
                    void SetValue(const std::vector<std::string>& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取信息类
                     * @return Levels 信息类
                     * 
                     */
                    std::vector<ValueLevel> GetLevels() const;

                    /**
                     * 设置信息类
                     * @param _levels 信息类
                     * 
                     */
                    void SetLevels(const std::vector<ValueLevel>& _levels);

                    /**
                     * 判断参数 Levels 是否已赋值
                     * @return Levels 是否已赋值
                     * 
                     */
                    bool LevelsHasBeenSet() const;

                    /**
                     * 获取Toolcall工具参数名，支持多层路径(如apiData.operate_op)，仅tool_args信息类型使用
                     * @return Name Toolcall工具参数名，支持多层路径(如apiData.operate_op)，仅tool_args信息类型使用
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置Toolcall工具参数名，支持多层路径(如apiData.operate_op)，仅tool_args信息类型使用
                     * @param _name Toolcall工具参数名，支持多层路径(如apiData.operate_op)，仅tool_args信息类型使用
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     *  信息类型
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     *  操作符，默认是包含

                     */
                    std::string m_op;
                    bool m_opHasBeenSet;

                    /**
                     * 信息类型
                     */
                    std::vector<std::string> m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 信息类
                     */
                    std::vector<ValueLevel> m_levels;
                    bool m_levelsHasBeenSet;

                    /**
                     * Toolcall工具参数名，支持多层路径(如apiData.operate_op)，仅tool_args信息类型使用
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_RULEITEM_H_
