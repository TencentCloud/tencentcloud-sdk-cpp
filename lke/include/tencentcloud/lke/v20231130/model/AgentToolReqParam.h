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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_AGENTTOOLREQPARAM_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_AGENTTOOLREQPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/AgentToolReqParam.h>
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
                * Agent工具的请求参数定义
                */
                class AgentToolReqParam : public AbstractModel
                {
                public:
                    AgentToolReqParam();
                    ~AgentToolReqParam() = default;
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
                     * 获取参数类型，0:string, 1:int, 2:float，3:bool 4:object 5:array_string, 6:array_int, 7:array_float, 8:array_bool, 9:array_object
                     * @return Type 参数类型，0:string, 1:int, 2:float，3:bool 4:object 5:array_string, 6:array_int, 7:array_float, 8:array_bool, 9:array_object
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置参数类型，0:string, 1:int, 2:float，3:bool 4:object 5:array_string, 6:array_int, 7:array_float, 8:array_bool, 9:array_object
                     * @param _type 参数类型，0:string, 1:int, 2:float，3:bool 4:object 5:array_string, 6:array_int, 7:array_float, 8:array_bool, 9:array_object
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
                    std::vector<AgentToolReqParam> GetSubParams() const;

                    /**
                     * 设置子参数,ParamType 是OBJECT 或 ARRAY<>类型有用
                     * @param _subParams 子参数,ParamType 是OBJECT 或 ARRAY<>类型有用
                     * 
                     */
                    void SetSubParams(const std::vector<AgentToolReqParam>& _subParams);

                    /**
                     * 判断参数 SubParams 是否已赋值
                     * @return SubParams 是否已赋值
                     * 
                     */
                    bool SubParamsHasBeenSet() const;

                    /**
                     * 获取是否隐藏不可见
                     * @return GlobalHidden 是否隐藏不可见
                     * 
                     */
                    bool GetGlobalHidden() const;

                    /**
                     * 设置是否隐藏不可见
                     * @param _globalHidden 是否隐藏不可见
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
                     * 获取agent模式下模型是否可见
                     * @return AgentHidden agent模式下模型是否可见
                     * 
                     */
                    bool GetAgentHidden() const;

                    /**
                     * 设置agent模式下模型是否可见
                     * @param _agentHidden agent模式下模型是否可见
                     * 
                     */
                    void SetAgentHidden(const bool& _agentHidden);

                    /**
                     * 判断参数 AgentHidden 是否已赋值
                     * @return AgentHidden 是否已赋值
                     * 
                     */
                    bool AgentHiddenHasBeenSet() const;

                    /**
                     * 获取其中任意
                     * @return AnyOf 其中任意
                     * 
                     */
                    std::vector<AgentToolReqParam> GetAnyOf() const;

                    /**
                     * 设置其中任意
                     * @param _anyOf 其中任意
                     * 
                     */
                    void SetAnyOf(const std::vector<AgentToolReqParam>& _anyOf);

                    /**
                     * 判断参数 AnyOf 是否已赋值
                     * @return AnyOf 是否已赋值
                     * 
                     */
                    bool AnyOfHasBeenSet() const;

                    /**
                     * 获取其中一个
                     * @return OneOf 其中一个
                     * 
                     */
                    std::vector<AgentToolReqParam> GetOneOf() const;

                    /**
                     * 设置其中一个
                     * @param _oneOf 其中一个
                     * 
                     */
                    void SetOneOf(const std::vector<AgentToolReqParam>& _oneOf);

                    /**
                     * 判断参数 OneOf 是否已赋值
                     * @return OneOf 是否已赋值
                     * 
                     */
                    bool OneOfHasBeenSet() const;

                    /**
                     * 获取输入
                     * @return Input 输入
                     * 
                     */
                    AgentInput GetInput() const;

                    /**
                     * 设置输入
                     * @param _input 输入
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
                     * 参数类型，0:string, 1:int, 2:float，3:bool 4:object 5:array_string, 6:array_int, 7:array_float, 8:array_bool, 9:array_object
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
                    std::vector<AgentToolReqParam> m_subParams;
                    bool m_subParamsHasBeenSet;

                    /**
                     * 是否隐藏不可见
                     */
                    bool m_globalHidden;
                    bool m_globalHiddenHasBeenSet;

                    /**
                     * agent模式下模型是否可见
                     */
                    bool m_agentHidden;
                    bool m_agentHiddenHasBeenSet;

                    /**
                     * 其中任意
                     */
                    std::vector<AgentToolReqParam> m_anyOf;
                    bool m_anyOfHasBeenSet;

                    /**
                     * 其中一个
                     */
                    std::vector<AgentToolReqParam> m_oneOf;
                    bool m_oneOfHasBeenSet;

                    /**
                     * 输入
                     */
                    AgentInput m_input;
                    bool m_inputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_AGENTTOOLREQPARAM_H_
