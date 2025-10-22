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

#ifndef TENCENTCLOUD_CTSDB_V20230202_MODEL_FILTER_H_
#define TENCENTCLOUD_CTSDB_V20230202_MODEL_FILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ctsdb
    {
        namespace V20230202
        {
            namespace Model
            {
                /**
                * 查询过滤器
                */
                class Filter : public AbstractModel
                {
                public:
                    Filter();
                    ~Filter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取过滤参数
                     * @return Name 过滤参数
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置过滤参数
                     * @param _name 过滤参数
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取过滤表达式
                     * @return Op 过滤表达式
                     * 
                     */
                    std::string GetOp() const;

                    /**
                     * 设置过滤表达式
                     * @param _op 过滤表达式
                     * 
                     */
                    void SetOp(const std::string& _op);

                    /**
                     * 判断参数 Op 是否已赋值
                     * @return Op 是否已赋值
                     * 
                     */
                    bool OpHasBeenSet() const;

                    /**
                     * 获取参与过滤的值
                     * @return Values 参与过滤的值
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置参与过滤的值
                     * @param _values 参与过滤的值
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * 过滤参数
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 过滤表达式
                     */
                    std::string m_op;
                    bool m_opHasBeenSet;

                    /**
                     * 参与过滤的值
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTSDB_V20230202_MODEL_FILTER_H_
