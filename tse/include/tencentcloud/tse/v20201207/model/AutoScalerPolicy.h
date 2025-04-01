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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_AUTOSCALERPOLICY_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_AUTOSCALERPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 扩容策略
                */
                class AutoScalerPolicy : public AbstractModel
                {
                public:
                    AutoScalerPolicy();
                    ~AutoScalerPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取类型，Pods
                     * @return Type 类型，Pods
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型，Pods
                     * @param _type 类型，Pods
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取数量
                     * @return Value 数量
                     * 
                     */
                    int64_t GetValue() const;

                    /**
                     * 设置数量
                     * @param _value 数量
                     * 
                     */
                    void SetValue(const int64_t& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取扩容周期
                     * @return PeriodSeconds 扩容周期
                     * 
                     */
                    int64_t GetPeriodSeconds() const;

                    /**
                     * 设置扩容周期
                     * @param _periodSeconds 扩容周期
                     * 
                     */
                    void SetPeriodSeconds(const int64_t& _periodSeconds);

                    /**
                     * 判断参数 PeriodSeconds 是否已赋值
                     * @return PeriodSeconds 是否已赋值
                     * 
                     */
                    bool PeriodSecondsHasBeenSet() const;

                private:

                    /**
                     * 类型，Pods
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 数量
                     */
                    int64_t m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 扩容周期
                     */
                    int64_t m_periodSeconds;
                    bool m_periodSecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_AUTOSCALERPOLICY_H_
