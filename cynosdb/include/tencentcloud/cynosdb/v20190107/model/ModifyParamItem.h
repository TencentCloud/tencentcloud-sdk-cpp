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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYPARAMITEM_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYPARAMITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 修改的实例参数信息
                */
                class ModifyParamItem : public AbstractModel
                {
                public:
                    ModifyParamItem();
                    ~ModifyParamItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取参数名
                     * @return ParamName 参数名
                     */
                    std::string GetParamName() const;

                    /**
                     * 设置参数名
                     * @param ParamName 参数名
                     */
                    void SetParamName(const std::string& _paramName);

                    /**
                     * 判断参数 ParamName 是否已赋值
                     * @return ParamName 是否已赋值
                     */
                    bool ParamNameHasBeenSet() const;

                    /**
                     * 获取参数当前值
                     * @return CurrentValue 参数当前值
                     */
                    std::string GetCurrentValue() const;

                    /**
                     * 设置参数当前值
                     * @param CurrentValue 参数当前值
                     */
                    void SetCurrentValue(const std::string& _currentValue);

                    /**
                     * 判断参数 CurrentValue 是否已赋值
                     * @return CurrentValue 是否已赋值
                     */
                    bool CurrentValueHasBeenSet() const;

                    /**
                     * 获取参数旧值（只在出参时有用）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OldValue 参数旧值（只在出参时有用）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOldValue() const;

                    /**
                     * 设置参数旧值（只在出参时有用）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OldValue 参数旧值（只在出参时有用）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOldValue(const std::string& _oldValue);

                    /**
                     * 判断参数 OldValue 是否已赋值
                     * @return OldValue 是否已赋值
                     */
                    bool OldValueHasBeenSet() const;

                private:

                    /**
                     * 参数名
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * 参数当前值
                     */
                    std::string m_currentValue;
                    bool m_currentValueHasBeenSet;

                    /**
                     * 参数旧值（只在出参时有用）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_oldValue;
                    bool m_oldValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_MODIFYPARAMITEM_H_
