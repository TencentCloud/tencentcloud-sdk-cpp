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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_PARAMETERTASKDSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_PARAMETERTASKDSDTO_H_

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
                * 任务参数Dto
                */
                class ParameterTaskDsDto : public AbstractModel
                {
                public:
                    ParameterTaskDsDto();
                    ~ParameterTaskDsDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId 任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取参数名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamKey 参数名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParamKey() const;

                    /**
                     * 设置参数名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramKey 参数名
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
                     * 获取参数定义
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamDefine 参数定义
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParamDefine() const;

                    /**
                     * 设置参数定义
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramDefine 参数定义
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
                     * 获取任务参数输入类型, 取值示例

- text    文本输入

- kv     k-v输入
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputType 任务参数输入类型, 取值示例

- text    文本输入

- kv     k-v输入
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInputType() const;

                    /**
                     * 设置任务参数输入类型, 取值示例

- text    文本输入

- kv     k-v输入
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inputType 任务参数输入类型, 取值示例

- text    文本输入

- kv     k-v输入
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInputType(const std::string& _inputType);

                    /**
                     * 判断参数 InputType 是否已赋值
                     * @return InputType 是否已赋值
                     * 
                     */
                    bool InputTypeHasBeenSet() const;

                private:

                    /**
                     * 任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 参数名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paramKey;
                    bool m_paramKeyHasBeenSet;

                    /**
                     * 参数定义
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
                     * 任务参数输入类型, 取值示例

- text    文本输入

- kv     k-v输入
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inputType;
                    bool m_inputTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_PARAMETERTASKDSDTO_H_
