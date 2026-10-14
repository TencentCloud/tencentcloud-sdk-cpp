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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPVARIABLEVALUE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPVARIABLEVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * AppVariableValue
                */
                class AppVariableValue : public AbstractModel
                {
                public:
                    AppVariableValue();
                    ~AppVariableValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>变量ID</p>
                     * @return VariableId <p>变量ID</p>
                     * 
                     */
                    std::string GetVariableId() const;

                    /**
                     * 设置<p>变量ID</p>
                     * @param _variableId <p>变量ID</p>
                     * 
                     */
                    void SetVariableId(const std::string& _variableId);

                    /**
                     * 判断参数 VariableId 是否已赋值
                     * @return VariableId 是否已赋值
                     * 
                     */
                    bool VariableIdHasBeenSet() const;

                    /**
                     * 获取<p>变量值</p>
                     * @return VariableValue <p>变量值</p>
                     * 
                     */
                    std::string GetVariableValue() const;

                    /**
                     * 设置<p>变量值</p>
                     * @param _variableValue <p>变量值</p>
                     * 
                     */
                    void SetVariableValue(const std::string& _variableValue);

                    /**
                     * 判断参数 VariableValue 是否已赋值
                     * @return VariableValue 是否已赋值
                     * 
                     */
                    bool VariableValueHasBeenSet() const;

                private:

                    /**
                     * <p>变量ID</p>
                     */
                    std::string m_variableId;
                    bool m_variableIdHasBeenSet;

                    /**
                     * <p>变量值</p>
                     */
                    std::string m_variableValue;
                    bool m_variableValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPVARIABLEVALUE_H_
