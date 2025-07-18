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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_ACCESSKEYVALUEINFO_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_ACCESSKEYVALUEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/AccessValueInfo.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 用于 DescribeAccessIndex 的出参
                */
                class AccessKeyValueInfo : public AbstractModel
                {
                public:
                    AccessKeyValueInfo();
                    ~AccessKeyValueInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取需要配置键值或者元字段索引的字段
                     * @return Key 需要配置键值或者元字段索引的字段
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置需要配置键值或者元字段索引的字段
                     * @param _key 需要配置键值或者元字段索引的字段
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
                     * 获取字段的索引描述信息
                     * @return Value 字段的索引描述信息
                     * 
                     */
                    AccessValueInfo GetValue() const;

                    /**
                     * 设置字段的索引描述信息
                     * @param _value 字段的索引描述信息
                     * 
                     */
                    void SetValue(const AccessValueInfo& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * 需要配置键值或者元字段索引的字段
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 字段的索引描述信息
                     */
                    AccessValueInfo m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_ACCESSKEYVALUEINFO_H_
