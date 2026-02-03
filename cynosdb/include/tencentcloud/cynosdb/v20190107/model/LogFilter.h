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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LOGFILTER_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LOGFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 日志过滤条件
                */
                class LogFilter : public AbstractModel
                {
                public:
                    LogFilter();
                    ~LogFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取过滤项。
                     * @return Type 过滤项。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置过滤项。
                     * @param _type 过滤项。
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
                     * 获取过滤条件。支持以下条件： WINC-包含（分词维度）， WEXC-不包含（分词维度）, INC - 包含, EXC - 不包含, EQS - 等于, NEQ - 不等于, RA - 范围。
                     * @return Compare 过滤条件。支持以下条件： WINC-包含（分词维度）， WEXC-不包含（分词维度）, INC - 包含, EXC - 不包含, EQS - 等于, NEQ - 不等于, RA - 范围。
                     * 
                     */
                    std::string GetCompare() const;

                    /**
                     * 设置过滤条件。支持以下条件： WINC-包含（分词维度）， WEXC-不包含（分词维度）, INC - 包含, EXC - 不包含, EQS - 等于, NEQ - 不等于, RA - 范围。
                     * @param _compare 过滤条件。支持以下条件： WINC-包含（分词维度）， WEXC-不包含（分词维度）, INC - 包含, EXC - 不包含, EQS - 等于, NEQ - 不等于, RA - 范围。
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
                     * 获取过滤的值。反向查询时，多个值之前是且的关系，正向查询多个值是或的关系
                     * @return Value 过滤的值。反向查询时，多个值之前是且的关系，正向查询多个值是或的关系
                     * 
                     */
                    std::vector<std::string> GetValue() const;

                    /**
                     * 设置过滤的值。反向查询时，多个值之前是且的关系，正向查询多个值是或的关系
                     * @param _value 过滤的值。反向查询时，多个值之前是且的关系，正向查询多个值是或的关系
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
                     * 过滤项。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 过滤条件。支持以下条件： WINC-包含（分词维度）， WEXC-不包含（分词维度）, INC - 包含, EXC - 不包含, EQS - 等于, NEQ - 不等于, RA - 范围。
                     */
                    std::string m_compare;
                    bool m_compareHasBeenSet;

                    /**
                     * 过滤的值。反向查询时，多个值之前是且的关系，正向查询多个值是或的关系
                     */
                    std::vector<std::string> m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_LOGFILTER_H_
