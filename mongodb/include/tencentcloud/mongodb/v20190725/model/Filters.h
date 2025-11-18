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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_FILTERS_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_FILTERS_H_

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
                class Filters : public AbstractModel
                {
                public:
                    Filters();
                    ~Filters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取搜索字段，目前支持：
"InstanceId"：实例Id，例如：cmgo-****）
"InstanceName"：实例名称
"ClusterId"：实例组Id，例如：cmgo-****
                     * @return Name 搜索字段，目前支持：
"InstanceId"：实例Id，例如：cmgo-****）
"InstanceName"：实例名称
"ClusterId"：实例组Id，例如：cmgo-****
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置搜索字段，目前支持：
"InstanceId"：实例Id，例如：cmgo-****）
"InstanceName"：实例名称
"ClusterId"：实例组Id，例如：cmgo-****
                     * @param _name 搜索字段，目前支持：
"InstanceId"：实例Id，例如：cmgo-****）
"InstanceName"：实例名称
"ClusterId"：实例组Id，例如：cmgo-****
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
                     * 获取筛选值
                     * @return Values 筛选值
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置筛选值
                     * @param _values 筛选值
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
                     * 搜索字段，目前支持：
"InstanceId"：实例Id，例如：cmgo-****）
"InstanceName"：实例名称
"ClusterId"：实例组Id，例如：cmgo-****
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 筛选值
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_FILTERS_H_
