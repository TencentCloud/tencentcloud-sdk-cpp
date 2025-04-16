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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_RANGE_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_RANGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * Range范围
                */
                class Range : public AbstractModel
                {
                public:
                    Range();
                    ~Range() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取最小值
                     * @return Min 最小值
                     * 
                     */
                    std::string GetMin() const;

                    /**
                     * 设置最小值
                     * @param _min 最小值
                     * 
                     */
                    void SetMin(const std::string& _min);

                    /**
                     * 判断参数 Min 是否已赋值
                     * @return Min 是否已赋值
                     * 
                     */
                    bool MinHasBeenSet() const;

                    /**
                     * 获取最大值
                     * @return Max 最大值
                     * 
                     */
                    std::string GetMax() const;

                    /**
                     * 设置最大值
                     * @param _max 最大值
                     * 
                     */
                    void SetMax(const std::string& _max);

                    /**
                     * 判断参数 Max 是否已赋值
                     * @return Max 是否已赋值
                     * 
                     */
                    bool MaxHasBeenSet() const;

                private:

                    /**
                     * 最小值
                     */
                    std::string m_min;
                    bool m_minHasBeenSet;

                    /**
                     * 最大值
                     */
                    std::string m_max;
                    bool m_maxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_RANGE_H_
