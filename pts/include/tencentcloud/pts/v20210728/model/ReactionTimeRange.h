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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_REACTIONTIMERANGE_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_REACTIONTIMERANGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * 采用日志响应时间RT范围
                */
                class ReactionTimeRange : public AbstractModel
                {
                public:
                    ReactionTimeRange();
                    ~ReactionTimeRange() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取最小响应时间，单位ms
                     * @return Min 最小响应时间，单位ms
                     * 
                     */
                    std::string GetMin() const;

                    /**
                     * 设置最小响应时间，单位ms
                     * @param _min 最小响应时间，单位ms
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
                     * 获取最大响应时间，单位ms
                     * @return Max 最大响应时间，单位ms
                     * 
                     */
                    std::string GetMax() const;

                    /**
                     * 设置最大响应时间，单位ms
                     * @param _max 最大响应时间，单位ms
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
                     * 最小响应时间，单位ms
                     */
                    std::string m_min;
                    bool m_minHasBeenSet;

                    /**
                     * 最大响应时间，单位ms
                     */
                    std::string m_max;
                    bool m_maxHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_REACTIONTIMERANGE_H_
