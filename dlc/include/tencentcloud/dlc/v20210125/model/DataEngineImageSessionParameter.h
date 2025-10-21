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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DATAENGINEIMAGESESSIONPARAMETER_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DATAENGINEIMAGESESSIONPARAMETER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 集群Session配置信息.
                */
                class DataEngineImageSessionParameter : public AbstractModel
                {
                public:
                    DataEngineImageSessionParameter();
                    ~DataEngineImageSessionParameter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置id
                     * @return ParameterId 配置id
                     * 
                     */
                    std::string GetParameterId() const;

                    /**
                     * 设置配置id
                     * @param _parameterId 配置id
                     * 
                     */
                    void SetParameterId(const std::string& _parameterId);

                    /**
                     * 判断参数 ParameterId 是否已赋值
                     * @return ParameterId 是否已赋值
                     * 
                     */
                    bool ParameterIdHasBeenSet() const;

                    /**
                     * 获取小版本镜像ID
                     * @return ChildImageVersionId 小版本镜像ID
                     * 
                     */
                    std::string GetChildImageVersionId() const;

                    /**
                     * 设置小版本镜像ID
                     * @param _childImageVersionId 小版本镜像ID
                     * 
                     */
                    void SetChildImageVersionId(const std::string& _childImageVersionId);

                    /**
                     * 判断参数 ChildImageVersionId 是否已赋值
                     * @return ChildImageVersionId 是否已赋值
                     * 
                     */
                    bool ChildImageVersionIdHasBeenSet() const;

                    /**
                     * 获取集群类型：SparkSQL/PrestoSQL/SparkBatch
                     * @return EngineType 集群类型：SparkSQL/PrestoSQL/SparkBatch
                     * 
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置集群类型：SparkSQL/PrestoSQL/SparkBatch
                     * @param _engineType 集群类型：SparkSQL/PrestoSQL/SparkBatch
                     * 
                     */
                    void SetEngineType(const std::string& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     * 
                     */
                    bool EngineTypeHasBeenSet() const;

                    /**
                     * 获取参数key
                     * @return KeyName 参数key
                     * 
                     */
                    std::string GetKeyName() const;

                    /**
                     * 设置参数key
                     * @param _keyName 参数key
                     * 
                     */
                    void SetKeyName(const std::string& _keyName);

                    /**
                     * 判断参数 KeyName 是否已赋值
                     * @return KeyName 是否已赋值
                     * 
                     */
                    bool KeyNameHasBeenSet() const;

                    /**
                     * 获取Key描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return KeyDescription Key描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetKeyDescription() const;

                    /**
                     * 设置Key描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _keyDescription Key描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetKeyDescription(const std::string& _keyDescription);

                    /**
                     * 判断参数 KeyDescription 是否已赋值
                     * @return KeyDescription 是否已赋值
                     * 
                     */
                    bool KeyDescriptionHasBeenSet() const;

                    /**
                     * 获取value类型
                     * @return ValueType value类型
                     * 
                     */
                    std::string GetValueType() const;

                    /**
                     * 设置value类型
                     * @param _valueType value类型
                     * 
                     */
                    void SetValueType(const std::string& _valueType);

                    /**
                     * 判断参数 ValueType 是否已赋值
                     * @return ValueType 是否已赋值
                     * 
                     */
                    bool ValueTypeHasBeenSet() const;

                    /**
                     * 获取value长度限制
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ValueLengthLimit value长度限制
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetValueLengthLimit() const;

                    /**
                     * 设置value长度限制
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _valueLengthLimit value长度限制
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValueLengthLimit(const std::string& _valueLengthLimit);

                    /**
                     * 判断参数 ValueLengthLimit 是否已赋值
                     * @return ValueLengthLimit 是否已赋值
                     * 
                     */
                    bool ValueLengthLimitHasBeenSet() const;

                    /**
                     * 获取value正则限制
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ValueRegexpLimit value正则限制
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetValueRegexpLimit() const;

                    /**
                     * 设置value正则限制
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _valueRegexpLimit value正则限制
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValueRegexpLimit(const std::string& _valueRegexpLimit);

                    /**
                     * 判断参数 ValueRegexpLimit 是否已赋值
                     * @return ValueRegexpLimit 是否已赋值
                     * 
                     */
                    bool ValueRegexpLimitHasBeenSet() const;

                    /**
                     * 获取value默认值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ValueDefault value默认值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetValueDefault() const;

                    /**
                     * 设置value默认值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _valueDefault value默认值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValueDefault(const std::string& _valueDefault);

                    /**
                     * 判断参数 ValueDefault 是否已赋值
                     * @return ValueDefault 是否已赋值
                     * 
                     */
                    bool ValueDefaultHasBeenSet() const;

                    /**
                     * 获取是否为公共版本：1：公共；2：私有
                     * @return IsPublic 是否为公共版本：1：公共；2：私有
                     * 
                     */
                    uint64_t GetIsPublic() const;

                    /**
                     * 设置是否为公共版本：1：公共；2：私有
                     * @param _isPublic 是否为公共版本：1：公共；2：私有
                     * 
                     */
                    void SetIsPublic(const uint64_t& _isPublic);

                    /**
                     * 判断参数 IsPublic 是否已赋值
                     * @return IsPublic 是否已赋值
                     * 
                     */
                    bool IsPublicHasBeenSet() const;

                    /**
                     * 获取配置类型：1：session配置（默认）；2：common配置；3：cluster配置
                     * @return ParameterType 配置类型：1：session配置（默认）；2：common配置；3：cluster配置
                     * 
                     */
                    uint64_t GetParameterType() const;

                    /**
                     * 设置配置类型：1：session配置（默认）；2：common配置；3：cluster配置
                     * @param _parameterType 配置类型：1：session配置（默认）；2：common配置；3：cluster配置
                     * 
                     */
                    void SetParameterType(const uint64_t& _parameterType);

                    /**
                     * 判断参数 ParameterType 是否已赋值
                     * @return ParameterType 是否已赋值
                     * 
                     */
                    bool ParameterTypeHasBeenSet() const;

                    /**
                     * 获取提交方式：User(用户)、BackGround（后台）
                     * @return SubmitMethod 提交方式：User(用户)、BackGround（后台）
                     * 
                     */
                    std::string GetSubmitMethod() const;

                    /**
                     * 设置提交方式：User(用户)、BackGround（后台）
                     * @param _submitMethod 提交方式：User(用户)、BackGround（后台）
                     * 
                     */
                    void SetSubmitMethod(const std::string& _submitMethod);

                    /**
                     * 判断参数 SubmitMethod 是否已赋值
                     * @return SubmitMethod 是否已赋值
                     * 
                     */
                    bool SubmitMethodHasBeenSet() const;

                    /**
                     * 获取操作者
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Operator 操作者
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作者
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operator 操作者
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取插入时间
                     * @return InsertTime 插入时间
                     * 
                     */
                    std::string GetInsertTime() const;

                    /**
                     * 设置插入时间
                     * @param _insertTime 插入时间
                     * 
                     */
                    void SetInsertTime(const std::string& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     * 
                     */
                    bool InsertTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 配置id
                     */
                    std::string m_parameterId;
                    bool m_parameterIdHasBeenSet;

                    /**
                     * 小版本镜像ID
                     */
                    std::string m_childImageVersionId;
                    bool m_childImageVersionIdHasBeenSet;

                    /**
                     * 集群类型：SparkSQL/PrestoSQL/SparkBatch
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                    /**
                     * 参数key
                     */
                    std::string m_keyName;
                    bool m_keyNameHasBeenSet;

                    /**
                     * Key描述信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_keyDescription;
                    bool m_keyDescriptionHasBeenSet;

                    /**
                     * value类型
                     */
                    std::string m_valueType;
                    bool m_valueTypeHasBeenSet;

                    /**
                     * value长度限制
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_valueLengthLimit;
                    bool m_valueLengthLimitHasBeenSet;

                    /**
                     * value正则限制
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_valueRegexpLimit;
                    bool m_valueRegexpLimitHasBeenSet;

                    /**
                     * value默认值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_valueDefault;
                    bool m_valueDefaultHasBeenSet;

                    /**
                     * 是否为公共版本：1：公共；2：私有
                     */
                    uint64_t m_isPublic;
                    bool m_isPublicHasBeenSet;

                    /**
                     * 配置类型：1：session配置（默认）；2：common配置；3：cluster配置
                     */
                    uint64_t m_parameterType;
                    bool m_parameterTypeHasBeenSet;

                    /**
                     * 提交方式：User(用户)、BackGround（后台）
                     */
                    std::string m_submitMethod;
                    bool m_submitMethodHasBeenSet;

                    /**
                     * 操作者
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 插入时间
                     */
                    std::string m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DATAENGINEIMAGESESSIONPARAMETER_H_
