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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMIZEDHEADER_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMIZEDHEADER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 负载均衡实例 HTTP/HTTPS 健康检查策略下可配置的自定义头部。
                */
                class CustomizedHeader : public AbstractModel
                {
                public:
                    CustomizedHeader();
                    ~CustomizedHeader() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自定义头部 Key。
                     * @return Key 自定义头部 Key。
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置自定义头部 Key。
                     * @param _key 自定义头部 Key。
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
                     * 获取自定义头部 Value。
                     * @return Value 自定义头部 Value。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置自定义头部 Value。
                     * @param _value 自定义头部 Value。
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
                     * 自定义头部 Key。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 自定义头部 Value。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CUSTOMIZEDHEADER_H_
