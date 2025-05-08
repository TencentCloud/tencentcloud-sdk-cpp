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

#ifndef TENCENTCLOUD_CONFIG_V20220802_MODEL_SOURCECONDITIONFORMANAGE_H_
#define TENCENTCLOUD_CONFIG_V20220802_MODEL_SOURCECONDITIONFORMANAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Config
    {
        namespace V20220802
        {
            namespace Model
            {
                /**
                * 管理端规则条件
                */
                class SourceConditionForManage : public AbstractModel
                {
                public:
                    SourceConditionForManage();
                    ~SourceConditionForManage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取条件为空，合规：COMPLIANT，不合规：NON_COMPLIANT，无法应用：NOT_APPLICABLE
                     * @return EmptyAs 条件为空，合规：COMPLIANT，不合规：NON_COMPLIANT，无法应用：NOT_APPLICABLE
                     * 
                     */
                    std::string GetEmptyAs() const;

                    /**
                     * 设置条件为空，合规：COMPLIANT，不合规：NON_COMPLIANT，无法应用：NOT_APPLICABLE
                     * @param _emptyAs 条件为空，合规：COMPLIANT，不合规：NON_COMPLIANT，无法应用：NOT_APPLICABLE
                     * 
                     */
                    void SetEmptyAs(const std::string& _emptyAs);

                    /**
                     * 判断参数 EmptyAs 是否已赋值
                     * @return EmptyAs 是否已赋值
                     * 
                     */
                    bool EmptyAsHasBeenSet() const;

                    /**
                     * 获取配置路径
                     * @return SelectPath 配置路径
                     * 
                     */
                    std::string GetSelectPath() const;

                    /**
                     * 设置配置路径
                     * @param _selectPath 配置路径
                     * 
                     */
                    void SetSelectPath(const std::string& _selectPath);

                    /**
                     * 判断参数 SelectPath 是否已赋值
                     * @return SelectPath 是否已赋值
                     * 
                     */
                    bool SelectPathHasBeenSet() const;

                    /**
                     * 获取操作运算符
                     * @return Operator 操作运算符
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作运算符
                     * @param _operator 操作运算符
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
                     * 获取是否必须
                     * @return Required 是否必须
                     * 
                     */
                    bool GetRequired() const;

                    /**
                     * 设置是否必须
                     * @param _required 是否必须
                     * 
                     */
                    void SetRequired(const bool& _required);

                    /**
                     * 判断参数 Required 是否已赋值
                     * @return Required 是否已赋值
                     * 
                     */
                    bool RequiredHasBeenSet() const;

                    /**
                     * 获取期望值
                     * @return DesiredValue 期望值
                     * 
                     */
                    std::string GetDesiredValue() const;

                    /**
                     * 设置期望值
                     * @param _desiredValue 期望值
                     * 
                     */
                    void SetDesiredValue(const std::string& _desiredValue);

                    /**
                     * 判断参数 DesiredValue 是否已赋值
                     * @return DesiredValue 是否已赋值
                     * 
                     */
                    bool DesiredValueHasBeenSet() const;

                private:

                    /**
                     * 条件为空，合规：COMPLIANT，不合规：NON_COMPLIANT，无法应用：NOT_APPLICABLE
                     */
                    std::string m_emptyAs;
                    bool m_emptyAsHasBeenSet;

                    /**
                     * 配置路径
                     */
                    std::string m_selectPath;
                    bool m_selectPathHasBeenSet;

                    /**
                     * 操作运算符
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 是否必须
                     */
                    bool m_required;
                    bool m_requiredHasBeenSet;

                    /**
                     * 期望值
                     */
                    std::string m_desiredValue;
                    bool m_desiredValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CONFIG_V20220802_MODEL_SOURCECONDITIONFORMANAGE_H_
