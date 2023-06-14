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

#ifndef TENCENTCLOUD_CHDFS_V20190718_MODEL_TRANSITION_H_
#define TENCENTCLOUD_CHDFS_V20190718_MODEL_TRANSITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chdfs
    {
        namespace V20190718
        {
            namespace Model
            {
                /**
                * 生命周期规则转换属性
                */
                class Transition : public AbstractModel
                {
                public:
                    Transition();
                    ~Transition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取触发时间（单位天）
                     * @return Days 触发时间（单位天）
                     * 
                     */
                    uint64_t GetDays() const;

                    /**
                     * 设置触发时间（单位天）
                     * @param _days 触发时间（单位天）
                     * 
                     */
                    void SetDays(const uint64_t& _days);

                    /**
                     * 判断参数 Days 是否已赋值
                     * @return Days 是否已赋值
                     * 
                     */
                    bool DaysHasBeenSet() const;

                    /**
                     * 获取转换类型（1：归档；2：删除）
                     * @return Type 转换类型（1：归档；2：删除）
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置转换类型（1：归档；2：删除）
                     * @param _type 转换类型（1：归档；2：删除）
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 触发时间（单位天）
                     */
                    uint64_t m_days;
                    bool m_daysHasBeenSet;

                    /**
                     * 转换类型（1：归档；2：删除）
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20190718_MODEL_TRANSITION_H_
