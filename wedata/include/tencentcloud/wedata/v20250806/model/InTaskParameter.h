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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_INTASKPARAMETER_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_INTASKPARAMETER_H_

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
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 参数传递-引用参数
                */
                class InTaskParameter : public AbstractModel
                {
                public:
                    InTaskParameter();
                    ~InTaskParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>参数名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamKey <p>参数名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParamKey() const;

                    /**
                     * 设置<p>参数名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramKey <p>参数名</p>
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
                     * 获取<p>参数描述：格式为 项目标识.任务名称.参数名；例：project_wedata_1.sh_250820_104107.pp_out</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamDesc <p>参数描述：格式为 项目标识.任务名称.参数名；例：project_wedata_1.sh_250820_104107.pp_out</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParamDesc() const;

                    /**
                     * 设置<p>参数描述：格式为 项目标识.任务名称.参数名；例：project_wedata_1.sh_250820_104107.pp_out</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramDesc <p>参数描述：格式为 项目标识.任务名称.参数名；例：project_wedata_1.sh_250820_104107.pp_out</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParamDesc(const std::string& _paramDesc);

                    /**
                     * 判断参数 ParamDesc 是否已赋值
                     * @return ParamDesc 是否已赋值
                     * 
                     */
                    bool ParamDescHasBeenSet() const;

                    /**
                     * 获取<p>父任务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FromTaskId <p>父任务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFromTaskId() const;

                    /**
                     * 设置<p>父任务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fromTaskId <p>父任务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFromTaskId(const std::string& _fromTaskId);

                    /**
                     * 判断参数 FromTaskId 是否已赋值
                     * @return FromTaskId 是否已赋值
                     * 
                     */
                    bool FromTaskIdHasBeenSet() const;

                    /**
                     * 获取<p>父任务参数key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FromParamKey <p>父任务参数key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFromParamKey() const;

                    /**
                     * 设置<p>父任务参数key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fromParamKey <p>父任务参数key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFromParamKey(const std::string& _fromParamKey);

                    /**
                     * 判断参数 FromParamKey 是否已赋值
                     * @return FromParamKey 是否已赋值
                     * 
                     */
                    bool FromParamKeyHasBeenSet() const;

                    /**
                     * 获取<p>任务输入类型，默认使用TASK</p><p>枚举值：</p><ul><li>TASK： 来源为父任务</li><li>CONSTANT： 常量值，目前仅for-each节点支持</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type <p>任务输入类型，默认使用TASK</p><p>枚举值：</p><ul><li>TASK： 来源为父任务</li><li>CONSTANT： 常量值，目前仅for-each节点支持</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>任务输入类型，默认使用TASK</p><p>枚举值：</p><ul><li>TASK： 来源为父任务</li><li>CONSTANT： 常量值，目前仅for-each节点支持</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type <p>任务输入类型，默认使用TASK</p><p>枚举值：</p><ul><li>TASK： 来源为父任务</li><li>CONSTANT： 常量值，目前仅for-each节点支持</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * <p>参数名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paramKey;
                    bool m_paramKeyHasBeenSet;

                    /**
                     * <p>参数描述：格式为 项目标识.任务名称.参数名；例：project_wedata_1.sh_250820_104107.pp_out</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paramDesc;
                    bool m_paramDescHasBeenSet;

                    /**
                     * <p>父任务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fromTaskId;
                    bool m_fromTaskIdHasBeenSet;

                    /**
                     * <p>父任务参数key</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fromParamKey;
                    bool m_fromParamKeyHasBeenSet;

                    /**
                     * <p>任务输入类型，默认使用TASK</p><p>枚举值：</p><ul><li>TASK： 来源为父任务</li><li>CONSTANT： 常量值，目前仅for-each节点支持</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_INTASKPARAMETER_H_
