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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_FBKEYVALUE_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_FBKEYVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * 按 Key 闪回键值对
                */
                class FBKeyValue : public AbstractModel
                {
                public:
                    FBKeyValue();
                    ~FBKeyValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取指定按 Key 闪回的目标 Key （键） 。
                     * @return Key 指定按 Key 闪回的目标 Key （键） 。
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置指定按 Key 闪回的目标 Key （键） 。
                     * @param _key 指定按 Key 闪回的目标 Key （键） 。
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
                     * 获取指定按 Key 闪回的目标 Key 所对应的 Value（值）。
                     * @return Value 指定按 Key 闪回的目标 Key 所对应的 Value（值）。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置指定按 Key 闪回的目标 Key 所对应的 Value（值）。
                     * @param _value 指定按 Key 闪回的目标 Key 所对应的 Value（值）。
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * 指定按 Key 闪回的目标 Key （键） 。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 指定按 Key 闪回的目标 Key 所对应的 Value（值）。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_FBKEYVALUE_H_
