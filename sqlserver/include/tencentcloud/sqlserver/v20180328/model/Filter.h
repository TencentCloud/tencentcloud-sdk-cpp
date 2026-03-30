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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_FILTER_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_FILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 业务侧实例过滤参数
                */
                class Filter : public AbstractModel
                {
                public:
                    Filter();
                    ~Filter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取1. 项目 ProjectId
    - true = 精确查找
    - false = 模糊匹配
2. 标签键 TagKey
    - true = 精确查找
    - false = 模糊匹配
3. 标签 Tag
    - true = 精确查找
    - false = 模糊匹配
4. 实例名称 InstanceName
    - true = 精确查找
    - false = 模糊匹配
5. 实例ID InstanceId
    - true = 精确查找
    - false = 模糊匹配


                     * @return Name 1. 项目 ProjectId
    - true = 精确查找
    - false = 模糊匹配
2. 标签键 TagKey
    - true = 精确查找
    - false = 模糊匹配
3. 标签 Tag
    - true = 精确查找
    - false = 模糊匹配
4. 实例名称 InstanceName
    - true = 精确查找
    - false = 模糊匹配
5. 实例ID InstanceId
    - true = 精确查找
    - false = 模糊匹配


                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置1. 项目 ProjectId
    - true = 精确查找
    - false = 模糊匹配
2. 标签键 TagKey
    - true = 精确查找
    - false = 模糊匹配
3. 标签 Tag
    - true = 精确查找
    - false = 模糊匹配
4. 实例名称 InstanceName
    - true = 精确查找
    - false = 模糊匹配
5. 实例ID InstanceId
    - true = 精确查找
    - false = 模糊匹配


                     * @param _name 1. 项目 ProjectId
    - true = 精确查找
    - false = 模糊匹配
2. 标签键 TagKey
    - true = 精确查找
    - false = 模糊匹配
3. 标签 Tag
    - true = 精确查找
    - false = 模糊匹配
4. 实例名称 InstanceName
    - true = 精确查找
    - false = 模糊匹配
5. 实例ID InstanceId
    - true = 精确查找
    - false = 模糊匹配


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
                     * 获取值
                     * @return Values 值
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置值
                     * @param _values 值
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                    /**
                     * 获取开关
                     * @return ExactMatch 开关
                     * 
                     */
                    bool GetExactMatch() const;

                    /**
                     * 设置开关
                     * @param _exactMatch 开关
                     * 
                     */
                    void SetExactMatch(const bool& _exactMatch);

                    /**
                     * 判断参数 ExactMatch 是否已赋值
                     * @return ExactMatch 是否已赋值
                     * 
                     */
                    bool ExactMatchHasBeenSet() const;

                private:

                    /**
                     * 1. 项目 ProjectId
    - true = 精确查找
    - false = 模糊匹配
2. 标签键 TagKey
    - true = 精确查找
    - false = 模糊匹配
3. 标签 Tag
    - true = 精确查找
    - false = 模糊匹配
4. 实例名称 InstanceName
    - true = 精确查找
    - false = 模糊匹配
5. 实例ID InstanceId
    - true = 精确查找
    - false = 模糊匹配


                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 值
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * 开关
                     */
                    bool m_exactMatch;
                    bool m_exactMatchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_FILTER_H_
