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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CLUSTERCUSTOMPARAMETERS_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CLUSTERCUSTOMPARAMETERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 集群自定义参数
                */
                class ClusterCustomParameters : public AbstractModel
                {
                public:
                    ClusterCustomParameters();
                    ~ClusterCustomParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取占位符名称
入参限制：长度 1-256
适用分支：腾讯云分支（IsCloud=true）
                     * @return Name 占位符名称
入参限制：长度 1-256
适用分支：腾讯云分支（IsCloud=true）
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置占位符名称
入参限制：长度 1-256
适用分支：腾讯云分支（IsCloud=true）
                     * @param _name 占位符名称
入参限制：长度 1-256
适用分支：腾讯云分支（IsCloud=true）
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
                     * 获取一个或多个取值（多个取值以逗号拼接替换占位符）
入参限制：每个元素长度 1-256
适用分支：腾讯云分支（IsCloud=true）
                     * @return Values 一个或多个取值（多个取值以逗号拼接替换占位符）
入参限制：每个元素长度 1-256
适用分支：腾讯云分支（IsCloud=true）
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置一个或多个取值（多个取值以逗号拼接替换占位符）
入参限制：每个元素长度 1-256
适用分支：腾讯云分支（IsCloud=true）
                     * @param _values 一个或多个取值（多个取值以逗号拼接替换占位符）
入参限制：每个元素长度 1-256
适用分支：腾讯云分支（IsCloud=true）
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
                     * 获取是否精确匹配
默认值：false
                     * @return ExactMatch 是否精确匹配
默认值：false
                     * 
                     */
                    bool GetExactMatch() const;

                    /**
                     * 设置是否精确匹配
默认值：false
                     * @param _exactMatch 是否精确匹配
默认值：false
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
                     * 占位符名称
入参限制：长度 1-256
适用分支：腾讯云分支（IsCloud=true）
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 一个或多个取值（多个取值以逗号拼接替换占位符）
入参限制：每个元素长度 1-256
适用分支：腾讯云分支（IsCloud=true）
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * 是否精确匹配
默认值：false
                     */
                    bool m_exactMatch;
                    bool m_exactMatchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CLUSTERCUSTOMPARAMETERS_H_
