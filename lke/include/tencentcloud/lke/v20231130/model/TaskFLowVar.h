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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_TASKFLOWVAR_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_TASKFLOWVAR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 变量详情
                */
                class TaskFLowVar : public AbstractModel
                {
                public:
                    TaskFLowVar();
                    ~TaskFLowVar() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取变量ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VarId 变量ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVarId() const;

                    /**
                     * 设置变量ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _varId 变量ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVarId(const std::string& _varId);

                    /**
                     * 判断参数 VarId 是否已赋值
                     * @return VarId 是否已赋值
                     * 
                     */
                    bool VarIdHasBeenSet() const;

                    /**
                     * 获取变量名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VarName 变量名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVarName() const;

                    /**
                     * 设置变量名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _varName 变量名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVarName(const std::string& _varName);

                    /**
                     * 判断参数 VarName 是否已赋值
                     * @return VarName 是否已赋值
                     * 
                     */
                    bool VarNameHasBeenSet() const;

                    /**
                     * 获取变量描述（默认为"-"）
                     * @return VarDesc 变量描述（默认为"-"）
                     * 
                     */
                    std::string GetVarDesc() const;

                    /**
                     * 设置变量描述（默认为"-"）
                     * @param _varDesc 变量描述（默认为"-"）
                     * 
                     */
                    void SetVarDesc(const std::string& _varDesc);

                    /**
                     * 判断参数 VarDesc 是否已赋值
                     * @return VarDesc 是否已赋值
                     * 
                     */
                    bool VarDescHasBeenSet() const;

                    /**
                     * 获取变量类型 (STRING,INT,FLOAT,BOOL,OBJECT,ARRAY_STRING,ARRAY_INT,ARRAY_FLOAT,ARRAY_BOOL,ARRAY_OBJECT,FILE,DOCUMENT,IMAGE,AUDIO)

                     * @return VarType 变量类型 (STRING,INT,FLOAT,BOOL,OBJECT,ARRAY_STRING,ARRAY_INT,ARRAY_FLOAT,ARRAY_BOOL,ARRAY_OBJECT,FILE,DOCUMENT,IMAGE,AUDIO)

                     * 
                     */
                    std::string GetVarType() const;

                    /**
                     * 设置变量类型 (STRING,INT,FLOAT,BOOL,OBJECT,ARRAY_STRING,ARRAY_INT,ARRAY_FLOAT,ARRAY_BOOL,ARRAY_OBJECT,FILE,DOCUMENT,IMAGE,AUDIO)

                     * @param _varType 变量类型 (STRING,INT,FLOAT,BOOL,OBJECT,ARRAY_STRING,ARRAY_INT,ARRAY_FLOAT,ARRAY_BOOL,ARRAY_OBJECT,FILE,DOCUMENT,IMAGE,AUDIO)

                     * 
                     */
                    void SetVarType(const std::string& _varType);

                    /**
                     * 判断参数 VarType 是否已赋值
                     * @return VarType 是否已赋值
                     * 
                     */
                    bool VarTypeHasBeenSet() const;

                private:

                    /**
                     * 变量ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_varId;
                    bool m_varIdHasBeenSet;

                    /**
                     * 变量名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_varName;
                    bool m_varNameHasBeenSet;

                    /**
                     * 变量描述（默认为"-"）
                     */
                    std::string m_varDesc;
                    bool m_varDescHasBeenSet;

                    /**
                     * 变量类型 (STRING,INT,FLOAT,BOOL,OBJECT,ARRAY_STRING,ARRAY_INT,ARRAY_FLOAT,ARRAY_BOOL,ARRAY_OBJECT,FILE,DOCUMENT,IMAGE,AUDIO)

                     */
                    std::string m_varType;
                    bool m_varTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_TASKFLOWVAR_H_
