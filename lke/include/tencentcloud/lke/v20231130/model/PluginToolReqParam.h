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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_PLUGINTOOLREQPARAM_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_PLUGINTOOLREQPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/PluginToolReqParam.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 插件参数请求结构
                */
                class PluginToolReqParam : public AbstractModel
                {
                public:
                    PluginToolReqParam();
                    ~PluginToolReqParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取参数名称
                     * @return Name 参数名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置参数名称
                     * @param _name 参数名称
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
                     * 获取参数描述
                     * @return Desc 参数描述
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置参数描述
                     * @param _desc 参数描述
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取参数类型，0:string, 1:int, 2:float，3:bool 4:object 5:array_string, 6:array_int, 7:array_float, 8:array_bool, 9:array_object, 99:null, 100:upspecified
                     * @return Type 参数类型，0:string, 1:int, 2:float，3:bool 4:object 5:array_string, 6:array_int, 7:array_float, 8:array_bool, 9:array_object, 99:null, 100:upspecified
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置参数类型，0:string, 1:int, 2:float，3:bool 4:object 5:array_string, 6:array_int, 7:array_float, 8:array_bool, 9:array_object, 99:null, 100:upspecified
                     * @param _type 参数类型，0:string, 1:int, 2:float，3:bool 4:object 5:array_string, 6:array_int, 7:array_float, 8:array_bool, 9:array_object, 99:null, 100:upspecified
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
                     * 获取参数是否必填
                     * @return IsRequired 参数是否必填
                     * 
                     */
                    bool GetIsRequired() const;

                    /**
                     * 设置参数是否必填
                     * @param _isRequired 参数是否必填
                     * 
                     */
                    void SetIsRequired(const bool& _isRequired);

                    /**
                     * 判断参数 IsRequired 是否已赋值
                     * @return IsRequired 是否已赋值
                     * 
                     */
                    bool IsRequiredHasBeenSet() const;

                    /**
                     * 获取参数默认值
                     * @return DefaultValue 参数默认值
                     * 
                     */
                    std::string GetDefaultValue() const;

                    /**
                     * 设置参数默认值
                     * @param _defaultValue 参数默认值
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
                     * 获取子参数,ParamType 是OBJECT 或 ARRAY<>类型有用
                     * @return SubParams 子参数,ParamType 是OBJECT 或 ARRAY<>类型有用
                     * 
                     */
                    std::vector<PluginToolReqParam> GetSubParams() const;

                    /**
                     * 设置子参数,ParamType 是OBJECT 或 ARRAY<>类型有用
                     * @param _subParams 子参数,ParamType 是OBJECT 或 ARRAY<>类型有用
                     * 
                     */
                    void SetSubParams(const std::vector<PluginToolReqParam>& _subParams);

                    /**
                     * 判断参数 SubParams 是否已赋值
                     * @return SubParams 是否已赋值
                     * 
                     */
                    bool SubParamsHasBeenSet() const;

                    /**
                     * 获取插件参数配置是否隐藏不可见，true-隐藏不可见，false-可见
                     * @return GlobalHidden 插件参数配置是否隐藏不可见，true-隐藏不可见，false-可见
                     * 
                     */
                    bool GetGlobalHidden() const;

                    /**
                     * 设置插件参数配置是否隐藏不可见，true-隐藏不可见，false-可见
                     * @param _globalHidden 插件参数配置是否隐藏不可见，true-隐藏不可见，false-可见
                     * 
                     */
                    void SetGlobalHidden(const bool& _globalHidden);

                    /**
                     * 判断参数 GlobalHidden 是否已赋值
                     * @return GlobalHidden 是否已赋值
                     * 
                     */
                    bool GlobalHiddenHasBeenSet() const;

                    /**
                     * 获取OneOf类型参数
                     * @return OneOf OneOf类型参数
                     * 
                     */
                    std::vector<PluginToolReqParam> GetOneOf() const;

                    /**
                     * 设置OneOf类型参数
                     * @param _oneOf OneOf类型参数
                     * 
                     */
                    void SetOneOf(const std::vector<PluginToolReqParam>& _oneOf);

                    /**
                     * 判断参数 OneOf 是否已赋值
                     * @return OneOf 是否已赋值
                     * 
                     */
                    bool OneOfHasBeenSet() const;

                    /**
                     * 获取AnyOf类型参数
                     * @return AnyOf AnyOf类型参数
                     * 
                     */
                    std::vector<PluginToolReqParam> GetAnyOf() const;

                    /**
                     * 设置AnyOf类型参数
                     * @param _anyOf AnyOf类型参数
                     * 
                     */
                    void SetAnyOf(const std::vector<PluginToolReqParam>& _anyOf);

                    /**
                     * 判断参数 AnyOf 是否已赋值
                     * @return AnyOf 是否已赋值
                     * 
                     */
                    bool AnyOfHasBeenSet() const;

                private:

                    /**
                     * 参数名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 参数描述
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 参数类型，0:string, 1:int, 2:float，3:bool 4:object 5:array_string, 6:array_int, 7:array_float, 8:array_bool, 9:array_object, 99:null, 100:upspecified
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 参数是否必填
                     */
                    bool m_isRequired;
                    bool m_isRequiredHasBeenSet;

                    /**
                     * 参数默认值
                     */
                    std::string m_defaultValue;
                    bool m_defaultValueHasBeenSet;

                    /**
                     * 子参数,ParamType 是OBJECT 或 ARRAY<>类型有用
                     */
                    std::vector<PluginToolReqParam> m_subParams;
                    bool m_subParamsHasBeenSet;

                    /**
                     * 插件参数配置是否隐藏不可见，true-隐藏不可见，false-可见
                     */
                    bool m_globalHidden;
                    bool m_globalHiddenHasBeenSet;

                    /**
                     * OneOf类型参数
                     */
                    std::vector<PluginToolReqParam> m_oneOf;
                    bool m_oneOfHasBeenSet;

                    /**
                     * AnyOf类型参数
                     */
                    std::vector<PluginToolReqParam> m_anyOf;
                    bool m_anyOfHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_PLUGINTOOLREQPARAM_H_
