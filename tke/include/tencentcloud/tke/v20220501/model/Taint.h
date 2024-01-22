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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_TAINT_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_TAINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * kubernetes Taint
                */
                class Taint : public AbstractModel
                {
                public:
                    Taint();
                    ~Taint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Taint的Key
                     * @return Key Taint的Key
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置Taint的Key
                     * @param _key Taint的Key
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
                     * 获取Taint的Value
                     * @return Value Taint的Value
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置Taint的Value
                     * @param _value Taint的Value
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
                     * 获取Taint的Effect
                     * @return Effect Taint的Effect
                     * 
                     */
                    std::string GetEffect() const;

                    /**
                     * 设置Taint的Effect
                     * @param _effect Taint的Effect
                     * 
                     */
                    void SetEffect(const std::string& _effect);

                    /**
                     * 判断参数 Effect 是否已赋值
                     * @return Effect 是否已赋值
                     * 
                     */
                    bool EffectHasBeenSet() const;

                private:

                    /**
                     * Taint的Key
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * Taint的Value
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * Taint的Effect
                     */
                    std::string m_effect;
                    bool m_effectHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_TAINT_H_
