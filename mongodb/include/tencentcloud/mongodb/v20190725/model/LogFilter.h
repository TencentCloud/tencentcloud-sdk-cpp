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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_LOGFILTER_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_LOGFILTER_H_

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
                * 过滤条件
                */
                class LogFilter : public AbstractModel
                {
                public:
                    LogFilter();
                    ~LogFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取过滤条件名称
                     * @return Type 过滤条件名称
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置过滤条件名称
                     * @param _type 过滤条件名称
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
                     * 获取过滤条件匹配类型，注意：此参数取值只能等于EQ
                     * @return Compare 过滤条件匹配类型，注意：此参数取值只能等于EQ
                     * 
                     */
                    std::string GetCompare() const;

                    /**
                     * 设置过滤条件匹配类型，注意：此参数取值只能等于EQ
                     * @param _compare 过滤条件匹配类型，注意：此参数取值只能等于EQ
                     * 
                     */
                    void SetCompare(const std::string& _compare);

                    /**
                     * 判断参数 Compare 是否已赋值
                     * @return Compare 是否已赋值
                     * 
                     */
                    bool CompareHasBeenSet() const;

                    /**
                     * 获取过滤条件匹配值
                     * @return Value 过滤条件匹配值
                     * 
                     */
                    std::vector<std::string> GetValue() const;

                    /**
                     * 设置过滤条件匹配值
                     * @param _value 过滤条件匹配值
                     * 
                     */
                    void SetValue(const std::vector<std::string>& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * 过滤条件名称
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 过滤条件匹配类型，注意：此参数取值只能等于EQ
                     */
                    std::string m_compare;
                    bool m_compareHasBeenSet;

                    /**
                     * 过滤条件匹配值
                     */
                    std::vector<std::string> m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_LOGFILTER_H_
