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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_PARAMENTRY_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_PARAMENTRY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 批量修改参数
                */
                class ParamEntry : public AbstractModel
                {
                public:
                    ParamEntry();
                    ~ParamEntry() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取参数名
                     * @return Name 参数名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置参数名
                     * @param _name 参数名
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
                     * 获取修改参数值。入参均以字符串形式传递，例如：小数”0.1“、整数”1000“、枚举”replica“
                     * @return ExpectedValue 修改参数值。入参均以字符串形式传递，例如：小数”0.1“、整数”1000“、枚举”replica“
                     * 
                     */
                    std::string GetExpectedValue() const;

                    /**
                     * 设置修改参数值。入参均以字符串形式传递，例如：小数”0.1“、整数”1000“、枚举”replica“
                     * @param _expectedValue 修改参数值。入参均以字符串形式传递，例如：小数”0.1“、整数”1000“、枚举”replica“
                     * 
                     */
                    void SetExpectedValue(const std::string& _expectedValue);

                    /**
                     * 判断参数 ExpectedValue 是否已赋值
                     * @return ExpectedValue 是否已赋值
                     * 
                     */
                    bool ExpectedValueHasBeenSet() const;

                private:

                    /**
                     * 参数名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 修改参数值。入参均以字符串形式传递，例如：小数”0.1“、整数”1000“、枚举”replica“
                     */
                    std::string m_expectedValue;
                    bool m_expectedValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_PARAMENTRY_H_
