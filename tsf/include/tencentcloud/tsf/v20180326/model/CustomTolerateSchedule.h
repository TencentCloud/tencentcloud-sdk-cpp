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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_CUSTOMTOLERATESCHEDULE_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_CUSTOMTOLERATESCHEDULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 自定义容忍调度规则列表
                */
                class CustomTolerateSchedule : public AbstractModel
                {
                public:
                    CustomTolerateSchedule();
                    ~CustomTolerateSchedule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取-
                     * @return Key -
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置-
                     * @param _key -
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取-
                     * @return Operator -
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置-
                     * @param _operator -
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
                     * 获取-
                     * @return Value -
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置-
                     * @param _value -
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取-
                     * @return Effect -
                     * 
                     */
                    std::string GetEffect() const;

                    /**
                     * 设置-
                     * @param _effect -
                     * 
                     */
                    void SetEffect(const std::string& _effect);

                    /**
                     * 判断参数 Effect 是否已赋值
                     * @return Effect 是否已赋值
                     * 
                     */
                    bool EffectHasBeenSet() const;

                    /**
                     * 获取-
                     * @return TolerationSeconds -
                     * 
                     */
                    int64_t GetTolerationSeconds() const;

                    /**
                     * 设置-
                     * @param _tolerationSeconds -
                     * 
                     */
                    void SetTolerationSeconds(const int64_t& _tolerationSeconds);

                    /**
                     * 判断参数 TolerationSeconds 是否已赋值
                     * @return TolerationSeconds 是否已赋值
                     * 
                     */
                    bool TolerationSecondsHasBeenSet() const;

                private:

                    /**
                     * -
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * -
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * -
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * -
                     */
                    std::string m_effect;
                    bool m_effectHasBeenSet;

                    /**
                     * -
                     */
                    int64_t m_tolerationSeconds;
                    bool m_tolerationSecondsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CUSTOMTOLERATESCHEDULE_H_
