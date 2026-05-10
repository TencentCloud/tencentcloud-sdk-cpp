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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_WIDGETPARAM_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_WIDGETPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/WidgetParam.h>
#include <tencentcloud/lke/v20231130/model/AgentInput.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Widget参数配置
                */
                class WidgetParam : public AbstractModel
                {
                public:
                    WidgetParam();
                    ~WidgetParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>参数名称</p>
                     * @return Name <p>参数名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>参数名称</p>
                     * @param _name <p>参数名称</p>
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
                     * 获取<p>参数类型</p><p>枚举值：</p><ul><li>0： string</li><li>1： int</li><li>2： float</li><li>3： bool</li><li>4： object</li><li>5： array_string</li><li>6： array_int</li><li>7： array_float</li><li>8： array_bool</li><li>9： array_object</li><li>20： array_array</li></ul>
                     * @return Type <p>参数类型</p><p>枚举值：</p><ul><li>0： string</li><li>1： int</li><li>2： float</li><li>3： bool</li><li>4： object</li><li>5： array_string</li><li>6： array_int</li><li>7： array_float</li><li>8： array_bool</li><li>9： array_object</li><li>20： array_array</li></ul>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>参数类型</p><p>枚举值：</p><ul><li>0： string</li><li>1： int</li><li>2： float</li><li>3： bool</li><li>4： object</li><li>5： array_string</li><li>6： array_int</li><li>7： array_float</li><li>8： array_bool</li><li>9： array_object</li><li>20： array_array</li></ul>
                     * @param _type <p>参数类型</p><p>枚举值：</p><ul><li>0： string</li><li>1： int</li><li>2： float</li><li>3： bool</li><li>4： object</li><li>5： array_string</li><li>6： array_int</li><li>7： array_float</li><li>8： array_bool</li><li>9： array_object</li><li>20： array_array</li></ul>
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>子参数</p>
                     * @return SubParams <p>子参数</p>
                     * 
                     */
                    std::vector<WidgetParam> GetSubParams() const;

                    /**
                     * 设置<p>子参数</p>
                     * @param _subParams <p>子参数</p>
                     * 
                     */
                    void SetSubParams(const std::vector<WidgetParam>& _subParams);

                    /**
                     * 判断参数 SubParams 是否已赋值
                     * @return SubParams 是否已赋值
                     * 
                     */
                    bool SubParamsHasBeenSet() const;

                    /**
                     * 获取<p>默认值, Input未指定时，使用该值</p>
                     * @return DefaultValue <p>默认值, Input未指定时，使用该值</p>
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置<p>默认值, Input未指定时，使用该值</p>
                     * @param _defaultValue <p>默认值, Input未指定时，使用该值</p>
                     * 
                     */
                    void SetDefaultValue(const std::string& _defaultValue);

                    /**
                     * 判断参数 DefaultValue 是否已赋值
                     * @return DefaultValue 是否已赋值
                     * 
                     */
                    bool DefaultValueHasBeenSet() const;

                    /**
                     * 获取<p>输入的值</p>
                     * @return Input <p>输入的值</p>
                     * 
                     */
                    AgentInput GetInput() const;

                    /**
                     * 设置<p>输入的值</p>
                     * @param _input <p>输入的值</p>
                     * 
                     */
                    void SetInput(const AgentInput& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                private:

                    /**
                     * <p>参数名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>参数类型</p><p>枚举值：</p><ul><li>0： string</li><li>1： int</li><li>2： float</li><li>3： bool</li><li>4： object</li><li>5： array_string</li><li>6： array_int</li><li>7： array_float</li><li>8： array_bool</li><li>9： array_object</li><li>20： array_array</li></ul>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>子参数</p>
                     */
                    std::vector<WidgetParam> m_subParams;
                    bool m_subParamsHasBeenSet;

                    /**
                     * <p>默认值, Input未指定时，使用该值</p>
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * <p>输入的值</p>
                     */
                    AgentInput m_input;
                    bool m_inputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_WIDGETPARAM_H_
