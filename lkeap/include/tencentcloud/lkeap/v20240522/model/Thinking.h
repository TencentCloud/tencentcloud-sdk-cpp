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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_THINKING_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_THINKING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
        {
            namespace Model
            {
                /**
                * 思维链开关类型
                */
                class Thinking : public AbstractModel
                {
                public:
                    Thinking();
                    ~Thinking() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取控制开启思维链，默认disabled

enabled：开启思维链
disabled：关闭思维链
                     * @return Type 控制开启思维链，默认disabled

enabled：开启思维链
disabled：关闭思维链
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置控制开启思维链，默认disabled

enabled：开启思维链
disabled：关闭思维链
                     * @param _type 控制开启思维链，默认disabled

enabled：开启思维链
disabled：关闭思维链
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 控制开启思维链，默认disabled

enabled：开启思维链
disabled：关闭思维链
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_THINKING_H_
