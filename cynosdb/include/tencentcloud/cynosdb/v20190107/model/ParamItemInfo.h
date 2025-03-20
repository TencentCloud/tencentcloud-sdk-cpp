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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PARAMITEMINFO_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PARAMITEMINFO_H_

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
                * 参数变化信息
                */
                class ParamItemInfo : public AbstractModel
                {
                public:
                    ParamItemInfo();
                    ~ParamItemInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取参数名字
                     * @return ParamName 参数名字
                     * 
                     */
                    std::string GetParamName() const;

                    /**
                     * 设置参数名字
                     * @param _paramName 参数名字
                     * 
                     */
                    void SetParamName(const std::string& _paramName);

                    /**
                     * 判断参数 ParamName 是否已赋值
                     * @return ParamName 是否已赋值
                     * 
                     */
                    bool ParamNameHasBeenSet() const;

                    /**
                     * 获取参数新值

                     * @return NewValue 参数新值

                     * 
                     */
                    std::string GetNewValue() const;

                    /**
                     * 设置参数新值

                     * @param _newValue 参数新值

                     * 
                     */
                    void SetNewValue(const std::string& _newValue);

                    /**
                     * 判断参数 NewValue 是否已赋值
                     * @return NewValue 是否已赋值
                     * 
                     */
                    bool NewValueHasBeenSet() const;

                    /**
                     * 获取参数旧值

                     * @return OldValue 参数旧值

                     * 
                     */
                    std::string GetOldValue() const;

                    /**
                     * 设置参数旧值

                     * @param _oldValue 参数旧值

                     * 
                     */
                    void SetOldValue(const std::string& _oldValue);

                    /**
                     * 判断参数 OldValue 是否已赋值
                     * @return OldValue 是否已赋值
                     * 
                     */
                    bool OldValueHasBeenSet() const;

                    /**
                     * 获取参数公式

                     * @return ValueFunction 参数公式

                     * 
                     */
                    std::string GetValueFunction() const;

                    /**
                     * 设置参数公式

                     * @param _valueFunction 参数公式

                     * 
                     */
                    void SetValueFunction(const std::string& _valueFunction);

                    /**
                     * 判断参数 ValueFunction 是否已赋值
                     * @return ValueFunction 是否已赋值
                     * 
                     */
                    bool ValueFunctionHasBeenSet() const;

                private:

                    /**
                     * 参数名字
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * 参数新值

                     */
                    std::string m_newValue;
                    bool m_newValueHasBeenSet;

                    /**
                     * 参数旧值

                     */
                    std::string m_oldValue;
                    bool m_oldValueHasBeenSet;

                    /**
                     * 参数公式

                     */
                    std::string m_valueFunction;
                    bool m_valueFunctionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PARAMITEMINFO_H_
