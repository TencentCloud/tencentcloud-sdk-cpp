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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SCREENNAMEVALUE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SCREENNAMEVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 【云安全预警】大屏可视化数据Name Value 数据
                */
                class ScreenNameValue : public AbstractModel
                {
                public:
                    ScreenNameValue();
                    ~ScreenNameValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取统计类型 不同接口对应不同的内容
                     * @return Name 统计类型 不同接口对应不同的内容
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置统计类型 不同接口对应不同的内容
                     * @param _name 统计类型 不同接口对应不同的内容
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
                     * 获取统计数量
                     * @return Value 统计数量
                     * 
                     */
                    uint64_t GetValue() const;

                    /**
                     * 设置统计数量
                     * @param _value 统计数量
                     * 
                     */
                    void SetValue(const uint64_t& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * 统计类型 不同接口对应不同的内容
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 统计数量
                     */
                    uint64_t m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SCREENNAMEVALUE_H_
