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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_AGENTTOOLRSPPARAM_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_AGENTTOOLRSPPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/AgentToolRspParam.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * Agent工具的响应参数定义
                */
                class AgentToolRspParam : public AbstractModel
                {
                public:
                    AgentToolRspParam();
                    ~AgentToolRspParam() = default;
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
                     * 获取子参数,ParamType 是OBJECT 或 ARRAY<>类型有用
                     * @return SubParams 子参数,ParamType 是OBJECT 或 ARRAY<>类型有用
                     * 
                     */
                    std::vector<AgentToolRspParam> GetSubParams() const;

                    /**
                     * 设置子参数,ParamType 是OBJECT 或 ARRAY<>类型有用
                     * @param _subParams 子参数,ParamType 是OBJECT 或 ARRAY<>类型有用
                     * 
                     */
                    void SetSubParams(const std::vector<AgentToolRspParam>& _subParams);

                    /**
                     * 判断参数 SubParams 是否已赋值
                     * @return SubParams 是否已赋值
                     * 
                     */
                    bool SubParamsHasBeenSet() const;

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
                     * 获取COVER: 覆盖解析 INCREMENT:增量解析
                     * @return AnalysisMethod COVER: 覆盖解析 INCREMENT:增量解析
                     * 
                     */
                    std::string GetAnalysisMethod() const;

                    /**
                     * 设置COVER: 覆盖解析 INCREMENT:增量解析
                     * @param _analysisMethod COVER: 覆盖解析 INCREMENT:增量解析
                     * 
                     */
                    void SetAnalysisMethod(const std::string& _analysisMethod);

                    /**
                     * 判断参数 AnalysisMethod 是否已赋值
                     * @return AnalysisMethod 是否已赋值
                     * 
                     */
                    bool AnalysisMethodHasBeenSet() const;

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
                     * 子参数,ParamType 是OBJECT 或 ARRAY<>类型有用
                     */
                    std::vector<AgentToolRspParam> m_subParams;
                    bool m_subParamsHasBeenSet;

                    /**
                     * agent模式下模型是否可见
                     */
                    bool m_agentHidden;
                    bool m_agentHiddenHasBeenSet;

                    /**
                     * 是否隐藏不可见
                     */
                    bool m_globalHidden;
                    bool m_globalHiddenHasBeenSet;

                    /**
                     * COVER: 覆盖解析 INCREMENT:增量解析
                     */
                    std::string m_analysisMethod;
                    bool m_analysisMethodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_AGENTTOOLRSPPARAM_H_
