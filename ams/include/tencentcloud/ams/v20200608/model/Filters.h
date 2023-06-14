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

#ifndef TENCENTCLOUD_AMS_V20200608_MODEL_FILTERS_H_
#define TENCENTCLOUD_AMS_V20200608_MODEL_FILTERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ams
    {
        namespace V20200608
        {
            namespace Model
            {
                /**
                * 音频过滤条件
                */
                class Filters : public AbstractModel
                {
                public:
                    Filters();
                    ~Filters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取查询字段：
策略BizType
子账号SubUin
日期区间DateRange
                     * @return Name 查询字段：
策略BizType
子账号SubUin
日期区间DateRange
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置查询字段：
策略BizType
子账号SubUin
日期区间DateRange
                     * @param _name 查询字段：
策略BizType
子账号SubUin
日期区间DateRange
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
                     * 获取查询值
                     * @return Values 查询值
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置查询值
                     * @param _values 查询值
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
                     * 查询字段：
策略BizType
子账号SubUin
日期区间DateRange
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 查询值
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AMS_V20200608_MODEL_FILTERS_H_
