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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_PARAMETERINFODSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_PARAMETERINFODSDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 参数信息领域模型
                */
                class ParameterInfoDsDto : public AbstractModel
                {
                public:
                    ParameterInfoDsDto();
                    ~ParameterInfoDsDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取参数key
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamKey 参数key
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParamKey() const;

                    /**
                     * 设置参数key
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramKey 参数key
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParamKey(const std::string& _paramKey);

                    /**
                     * 判断参数 ParamKey 是否已赋值
                     * @return ParamKey 是否已赋值
                     * 
                     */
                    bool ParamKeyHasBeenSet() const;

                    /**
                     * 获取参数类型project_self_constant,
project_self_data_variable,   project_self_run_variable,
    project_system,   workflow_self_constant,   workflow_self_data_variable,
workflow_self_run_variable,
workflow_system,
task
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamType 参数类型project_self_constant,
project_self_data_variable,   project_self_run_variable,
    project_system,   workflow_self_constant,   workflow_self_data_variable,
workflow_self_run_variable,
workflow_system,
task
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParamType() const;

                    /**
                     * 设置参数类型project_self_constant,
project_self_data_variable,   project_self_run_variable,
    project_system,   workflow_self_constant,   workflow_self_data_variable,
workflow_self_run_variable,
workflow_system,
task
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramType 参数类型project_self_constant,
project_self_data_variable,   project_self_run_variable,
    project_system,   workflow_self_constant,   workflow_self_data_variable,
workflow_self_run_variable,
workflow_system,
task
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParamType(const std::string& _paramType);

                    /**
                     * 判断参数 ParamType 是否已赋值
                     * @return ParamType 是否已赋值
                     * 
                     */
                    bool ParamTypeHasBeenSet() const;

                    /**
                     * 获取参数归属
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamBelong 参数归属
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParamBelong() const;

                    /**
                     * 设置参数归属
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramBelong 参数归属
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParamBelong(const std::string& _paramBelong);

                    /**
                     * 判断参数 ParamBelong 是否已赋值
                     * @return ParamBelong 是否已赋值
                     * 
                     */
                    bool ParamBelongHasBeenSet() const;

                    /**
                     * 获取参数周期运行值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamDefine 参数周期运行值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParamDefine() const;

                    /**
                     * 设置参数周期运行值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramDefine 参数周期运行值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParamDefine(const std::string& _paramDefine);

                    /**
                     * 判断参数 ParamDefine 是否已赋值
                     * @return ParamDefine 是否已赋值
                     * 
                     */
                    bool ParamDefineHasBeenSet() const;

                    /**
                     * 获取参数值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamValue 参数值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParamValue() const;

                    /**
                     * 设置参数值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramValue 参数值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParamValue(const std::string& _paramValue);

                    /**
                     * 判断参数 ParamValue 是否已赋值
                     * @return ParamValue 是否已赋值
                     * 
                     */
                    bool ParamValueHasBeenSet() const;

                    /**
                     * 获取参数责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamOwner 参数责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParamOwner() const;

                    /**
                     * 设置参数责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramOwner 参数责任人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParamOwner(const std::string& _paramOwner);

                    /**
                     * 判断参数 ParamOwner 是否已赋值
                     * @return ParamOwner 是否已赋值
                     * 
                     */
                    bool ParamOwnerHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取导入结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Result 导入结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetResult() const;

                    /**
                     * 设置导入结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _result 导入结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResult(const bool& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Msg 信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMsg() const;

                    /**
                     * 设置信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _msg 信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMsg(const std::string& _msg);

                    /**
                     * 判断参数 Msg 是否已赋值
                     * @return Msg 是否已赋值
                     * 
                     */
                    bool MsgHasBeenSet() const;

                    /**
                     * 获取参数调试运行值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamDefineTest 参数调试运行值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParamDefineTest() const;

                    /**
                     * 设置参数调试运行值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramDefineTest 参数调试运行值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParamDefineTest(const std::string& _paramDefineTest);

                    /**
                     * 判断参数 ParamDefineTest 是否已赋值
                     * @return ParamDefineTest 是否已赋值
                     * 
                     */
                    bool ParamDefineTestHasBeenSet() const;

                    /**
                     * 获取参数描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamDescription 参数描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParamDescription() const;

                    /**
                     * 设置参数描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramDescription 参数描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParamDescription(const std::string& _paramDescription);

                    /**
                     * 判断参数 ParamDescription 是否已赋值
                     * @return ParamDescription 是否已赋值
                     * 
                     */
                    bool ParamDescriptionHasBeenSet() const;

                private:

                    /**
                     * 唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 参数key
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paramKey;
                    bool m_paramKeyHasBeenSet;

                    /**
                     * 参数类型project_self_constant,
project_self_data_variable,   project_self_run_variable,
    project_system,   workflow_self_constant,   workflow_self_data_variable,
workflow_self_run_variable,
workflow_system,
task
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paramType;
                    bool m_paramTypeHasBeenSet;

                    /**
                     * 参数归属
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paramBelong;
                    bool m_paramBelongHasBeenSet;

                    /**
                     * 参数周期运行值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paramDefine;
                    bool m_paramDefineHasBeenSet;

                    /**
                     * 参数值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paramValue;
                    bool m_paramValueHasBeenSet;

                    /**
                     * 参数责任人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paramOwner;
                    bool m_paramOwnerHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 导入结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_msg;
                    bool m_msgHasBeenSet;

                    /**
                     * 参数调试运行值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paramDefineTest;
                    bool m_paramDefineTestHasBeenSet;

                    /**
                     * 参数描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paramDescription;
                    bool m_paramDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_PARAMETERINFODSDTO_H_
