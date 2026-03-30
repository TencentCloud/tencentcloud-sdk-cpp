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

#ifndef TENCENTCLOUD_TDS_V20220801_MODEL_EXTRAINFO_H_
#define TENCENTCLOUD_TDS_V20220801_MODEL_EXTRAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tds
    {
        namespace V20220801
        {
            namespace Model
            {
                /**
                * 附加信息
                */
                class ExtraInfo : public AbstractModel
                {
                public:
                    ExtraInfo();
                    ~ExtraInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>附加信息名字</p>
                     * @return Key <p>附加信息名字</p>
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置<p>附加信息名字</p>
                     * @param _key <p>附加信息名字</p>
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
                     * 获取<p>附加信息内容</p>
                     * @return Value <p>附加信息内容</p>
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置<p>附加信息内容</p>
                     * @param _value <p>附加信息内容</p>
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
                     * <p>附加信息名字</p>
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * <p>附加信息内容</p>
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDS_V20220801_MODEL_EXTRAINFO_H_
