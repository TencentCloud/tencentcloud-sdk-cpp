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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_ACTIONFIELDCONFIGDETAIL_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_ACTIONFIELDCONFIGDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 动作动态参数返回格式
                */
                class ActionFieldConfigDetail : public AbstractModel
                {
                public:
                    ActionFieldConfigDetail();
                    ~ActionFieldConfigDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取组件类型
可选项如下：
input  文本框
textarea  多行文本框
number  数值输入框
select   选择器
cascader  级联选择器
radio  单选
time   时间选择
                     * @return Type 组件类型
可选项如下：
input  文本框
textarea  多行文本框
number  数值输入框
select   选择器
cascader  级联选择器
radio  单选
time   时间选择
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置组件类型
可选项如下：
input  文本框
textarea  多行文本框
number  数值输入框
select   选择器
cascader  级联选择器
radio  单选
time   时间选择
                     * @param _type 组件类型
可选项如下：
input  文本框
textarea  多行文本框
number  数值输入框
select   选择器
cascader  级联选择器
radio  单选
time   时间选择
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
                     * 获取组件label
                     * @return Lable 组件label
                     * 
                     */
                    std::string GetLable() const;

                    /**
                     * 设置组件label
                     * @param _lable 组件label
                     * 
                     */
                    void SetLable(const std::string& _lable);

                    /**
                     * 判断参数 Lable 是否已赋值
                     * @return Lable 是否已赋值
                     * 
                     */
                    bool LableHasBeenSet() const;

                    /**
                     * 获取组件唯一标识， 传回后端时的key
                     * @return Field 组件唯一标识， 传回后端时的key
                     * 
                     */
                    std::string GetField() const;

                    /**
                     * 设置组件唯一标识， 传回后端时的key
                     * @param _field 组件唯一标识， 传回后端时的key
                     * 
                     */
                    void SetField(const std::string& _field);

                    /**
                     * 判断参数 Field 是否已赋值
                     * @return Field 是否已赋值
                     * 
                     */
                    bool FieldHasBeenSet() const;

                    /**
                     * 获取默认值
                     * @return DefaultValue 默认值
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置默认值
                     * @param _defaultValue 默认值
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
                     * 获取支持配置项如下,可根据需要选择配置项，不需要配置是设置空{}：

{

  placeholder: string (占位符)

  tooltip: string (提示信息)

  reg: RegExp (对输入内容格式进行正则校验的规则)

  max: number (对于输入框，限制最大输入字符数，对于数值输入框，设置上限)

  min: number (对于数值输入框，设置下限)

  step: number (设置数值输入框的步长，默认为1)

  format: string (时间选择的格式，如YYYY-MM-DD表示年月日, YYYY-MM-DD HH:mm:ss 表示时分秒)

  separator:  string[] (多行输入框的分隔符，不传或者为空时表示不分隔，直接返回用户输入的文本字符串)

  multiple: boolean (是否多选,对选择器和级联选择器有效)

  options:  选择器的选项【支持以下两种形式】

直接给定选项数组  { value: string; label: string }[]
通过调接口获取选项                                                                                                                                       { api: string(接口地址),                                                                                                                                       params: string[] (接口参数,对应于参数配置的field，前端根据field对应的所有组件的输入值作为参数查询数据， 为空时在组件加载时直接请求数据)                                                                                                    }
}
                     * @return Config 支持配置项如下,可根据需要选择配置项，不需要配置是设置空{}：

{

  placeholder: string (占位符)

  tooltip: string (提示信息)

  reg: RegExp (对输入内容格式进行正则校验的规则)

  max: number (对于输入框，限制最大输入字符数，对于数值输入框，设置上限)

  min: number (对于数值输入框，设置下限)

  step: number (设置数值输入框的步长，默认为1)

  format: string (时间选择的格式，如YYYY-MM-DD表示年月日, YYYY-MM-DD HH:mm:ss 表示时分秒)

  separator:  string[] (多行输入框的分隔符，不传或者为空时表示不分隔，直接返回用户输入的文本字符串)

  multiple: boolean (是否多选,对选择器和级联选择器有效)

  options:  选择器的选项【支持以下两种形式】

直接给定选项数组  { value: string; label: string }[]
通过调接口获取选项                                                                                                                                       { api: string(接口地址),                                                                                                                                       params: string[] (接口参数,对应于参数配置的field，前端根据field对应的所有组件的输入值作为参数查询数据， 为空时在组件加载时直接请求数据)                                                                                                    }
}
                     * 
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置支持配置项如下,可根据需要选择配置项，不需要配置是设置空{}：

{

  placeholder: string (占位符)

  tooltip: string (提示信息)

  reg: RegExp (对输入内容格式进行正则校验的规则)

  max: number (对于输入框，限制最大输入字符数，对于数值输入框，设置上限)

  min: number (对于数值输入框，设置下限)

  step: number (设置数值输入框的步长，默认为1)

  format: string (时间选择的格式，如YYYY-MM-DD表示年月日, YYYY-MM-DD HH:mm:ss 表示时分秒)

  separator:  string[] (多行输入框的分隔符，不传或者为空时表示不分隔，直接返回用户输入的文本字符串)

  multiple: boolean (是否多选,对选择器和级联选择器有效)

  options:  选择器的选项【支持以下两种形式】

直接给定选项数组  { value: string; label: string }[]
通过调接口获取选项                                                                                                                                       { api: string(接口地址),                                                                                                                                       params: string[] (接口参数,对应于参数配置的field，前端根据field对应的所有组件的输入值作为参数查询数据， 为空时在组件加载时直接请求数据)                                                                                                    }
}
                     * @param _config 支持配置项如下,可根据需要选择配置项，不需要配置是设置空{}：

{

  placeholder: string (占位符)

  tooltip: string (提示信息)

  reg: RegExp (对输入内容格式进行正则校验的规则)

  max: number (对于输入框，限制最大输入字符数，对于数值输入框，设置上限)

  min: number (对于数值输入框，设置下限)

  step: number (设置数值输入框的步长，默认为1)

  format: string (时间选择的格式，如YYYY-MM-DD表示年月日, YYYY-MM-DD HH:mm:ss 表示时分秒)

  separator:  string[] (多行输入框的分隔符，不传或者为空时表示不分隔，直接返回用户输入的文本字符串)

  multiple: boolean (是否多选,对选择器和级联选择器有效)

  options:  选择器的选项【支持以下两种形式】

直接给定选项数组  { value: string; label: string }[]
通过调接口获取选项                                                                                                                                       { api: string(接口地址),                                                                                                                                       params: string[] (接口参数,对应于参数配置的field，前端根据field对应的所有组件的输入值作为参数查询数据， 为空时在组件加载时直接请求数据)                                                                                                    }
}
                     * 
                     */
                    void SetConfig(const std::string& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取是否必填 (0 -- 否   1-- 是)
                     * @return Required 是否必填 (0 -- 否   1-- 是)
                     * 
                     */
                    uint64_t GetRequired() const;

                    /**
                     * 设置是否必填 (0 -- 否   1-- 是)
                     * @param _required 是否必填 (0 -- 否   1-- 是)
                     * 
                     */
                    void SetRequired(const uint64_t& _required);

                    /**
                     * 判断参数 Required 是否已赋值
                     * @return Required 是否已赋值
                     * 
                     */
                    bool RequiredHasBeenSet() const;

                    /**
                     * 获取compute配置依赖的其他field满足的条件时通过校验（如：三个表单项中必须至少有一个填写了）

[fieldName,

{ config:  此项保留，等待后面具体场景细化  }

]
                     * @return Validate compute配置依赖的其他field满足的条件时通过校验（如：三个表单项中必须至少有一个填写了）

[fieldName,

{ config:  此项保留，等待后面具体场景细化  }

]
                     * 
                     */
                    std::string GetValidate() const;

                    /**
                     * 设置compute配置依赖的其他field满足的条件时通过校验（如：三个表单项中必须至少有一个填写了）

[fieldName,

{ config:  此项保留，等待后面具体场景细化  }

]
                     * @param _validate compute配置依赖的其他field满足的条件时通过校验（如：三个表单项中必须至少有一个填写了）

[fieldName,

{ config:  此项保留，等待后面具体场景细化  }

]
                     * 
                     */
                    void SetValidate(const std::string& _validate);

                    /**
                     * 判断参数 Validate 是否已赋值
                     * @return Validate 是否已赋值
                     * 
                     */
                    bool ValidateHasBeenSet() const;

                    /**
                     * 获取是否可见
                     * @return Visible 是否可见
                     * 
                     */
                    std::string GetVisible() const;

                    /**
                     * 设置是否可见
                     * @param _visible 是否可见
                     * 
                     */
                    void SetVisible(const std::string& _visible);

                    /**
                     * 判断参数 Visible 是否已赋值
                     * @return Visible 是否已赋值
                     * 
                     */
                    bool VisibleHasBeenSet() const;

                private:

                    /**
                     * 组件类型
可选项如下：
input  文本框
textarea  多行文本框
number  数值输入框
select   选择器
cascader  级联选择器
radio  单选
time   时间选择
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 组件label
                     */
                    std::string m_lable;
                    bool m_lableHasBeenSet;

                    /**
                     * 组件唯一标识， 传回后端时的key
                     */
                    std::string m_field;
                    bool m_fieldHasBeenSet;

                    /**
                     * 默认值
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * 支持配置项如下,可根据需要选择配置项，不需要配置是设置空{}：

{

  placeholder: string (占位符)

  tooltip: string (提示信息)

  reg: RegExp (对输入内容格式进行正则校验的规则)

  max: number (对于输入框，限制最大输入字符数，对于数值输入框，设置上限)

  min: number (对于数值输入框，设置下限)

  step: number (设置数值输入框的步长，默认为1)

  format: string (时间选择的格式，如YYYY-MM-DD表示年月日, YYYY-MM-DD HH:mm:ss 表示时分秒)

  separator:  string[] (多行输入框的分隔符，不传或者为空时表示不分隔，直接返回用户输入的文本字符串)

  multiple: boolean (是否多选,对选择器和级联选择器有效)

  options:  选择器的选项【支持以下两种形式】

直接给定选项数组  { value: string; label: string }[]
通过调接口获取选项                                                                                                                                       { api: string(接口地址),                                                                                                                                       params: string[] (接口参数,对应于参数配置的field，前端根据field对应的所有组件的输入值作为参数查询数据， 为空时在组件加载时直接请求数据)                                                                                                    }
}
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                    /**
                     * 是否必填 (0 -- 否   1-- 是)
                     */
                    uint64_t m_required;
                    bool m_requiredHasBeenSet;

                    /**
                     * compute配置依赖的其他field满足的条件时通过校验（如：三个表单项中必须至少有一个填写了）

[fieldName,

{ config:  此项保留，等待后面具体场景细化  }

]
                     */
                    std::string m_validate;
                    bool m_validateHasBeenSet;

                    /**
                     * 是否可见
                     */
                    std::string m_visible;
                    bool m_visibleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_ACTIONFIELDCONFIGDETAIL_H_
