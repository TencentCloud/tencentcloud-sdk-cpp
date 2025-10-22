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

#ifndef TENCENTCLOUD_TCM_V20210413_MODEL_TAG_H_
#define TENCENTCLOUD_TCM_V20210413_MODEL_TAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcm
    {
        namespace V20210413
        {
            namespace Model
            {
                /**
                * 标签
                */
                class Tag : public AbstractModel
                {
                public:
                    Tag();
                    ~Tag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签键
                     * @return Key 标签键
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置标签键
                     * @param _key 标签键
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
                     * 获取标签值
                     * @return Value 标签值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置标签值
                     * @param _value 标签值
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
                     * 获取是否透传给其他关联产品
                     * @return Passthrough 是否透传给其他关联产品
                     * 
                     */
                    bool GetPassthrough() const;

                    /**
                     * 设置是否透传给其他关联产品
                     * @param _passthrough 是否透传给其他关联产品
                     * 
                     */
                    void SetPassthrough(const bool& _passthrough);

                    /**
                     * 判断参数 Passthrough 是否已赋值
                     * @return Passthrough 是否已赋值
                     * 
                     */
                    bool PassthroughHasBeenSet() const;

                private:

                    /**
                     * 标签键
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 标签值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 是否透传给其他关联产品
                     */
                    bool m_passthrough;
                    bool m_passthroughHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCM_V20210413_MODEL_TAG_H_
