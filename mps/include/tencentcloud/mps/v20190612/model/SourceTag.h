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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SOURCETAG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SOURCETAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * type SourceTag struct {
	Key   string `json:"Key"`
	Value string `json:"Value"`
}
                */
                class SourceTag : public AbstractModel
                {
                public:
                    SourceTag();
                    ~SourceTag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取sourcetag的key，支持1-50位的大写字母、数字、下划线、中划线
                     * @return Key sourcetag的key，支持1-50位的大写字母、数字、下划线、中划线
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置sourcetag的key，支持1-50位的大写字母、数字、下划线、中划线
                     * @param _key sourcetag的key，支持1-50位的大写字母、数字、下划线、中划线
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
                     * 获取sourcetag的value，支持1-200位的字母、数字下划线、中划线、英文句号、百分号（%）
                     * @return Value sourcetag的value，支持1-200位的字母、数字下划线、中划线、英文句号、百分号（%）
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置sourcetag的value，支持1-200位的字母、数字下划线、中划线、英文句号、百分号（%）
                     * @param _value sourcetag的value，支持1-200位的字母、数字下划线、中划线、英文句号、百分号（%）
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
                     * sourcetag的key，支持1-50位的大写字母、数字、下划线、中划线
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * sourcetag的value，支持1-200位的字母、数字下划线、中划线、英文句号、百分号（%）
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SOURCETAG_H_
