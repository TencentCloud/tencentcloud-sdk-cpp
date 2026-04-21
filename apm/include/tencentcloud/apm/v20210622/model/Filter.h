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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_FILTER_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_FILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 查询过滤参数
                */
                class Filter : public AbstractModel
                {
                public:
                    Filter();
                    ~Filter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>过滤方式（=, !=, in）</p>
                     * @return Type <p>过滤方式（=, !=, in）</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>过滤方式（=, !=, in）</p>
                     * @param _type <p>过滤方式（=, !=, in）</p>
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
                     * 获取<p>过滤维度名</p><p>详情参考实际接口字段描述</p>
                     * @return Key <p>过滤维度名</p><p>详情参考实际接口字段描述</p>
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置<p>过滤维度名</p><p>详情参考实际接口字段描述</p>
                     * @param _key <p>过滤维度名</p><p>详情参考实际接口字段描述</p>
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
                     * 获取<p>过滤值，in过滤方式用逗号分割多个值</p>
                     * @return Value <p>过滤值，in过滤方式用逗号分割多个值</p>
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置<p>过滤值，in过滤方式用逗号分割多个值</p>
                     * @param _value <p>过滤值，in过滤方式用逗号分割多个值</p>
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
                     * <p>过滤方式（=, !=, in）</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>过滤维度名</p><p>详情参考实际接口字段描述</p>
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * <p>过滤值，in过滤方式用逗号分割多个值</p>
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_FILTER_H_
