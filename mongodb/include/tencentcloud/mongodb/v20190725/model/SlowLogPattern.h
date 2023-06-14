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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_SLOWLOGPATTERN_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_SLOWLOGPATTERN_H_

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
                * 用于描述MongoDB数据库慢日志统计信息
                */
                class SlowLogPattern : public AbstractModel
                {
                public:
                    SlowLogPattern();
                    ~SlowLogPattern() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取慢日志模式
                     * @return Pattern 慢日志模式
                     * 
                     */
                    std::string GetPattern() const;

                    /**
                     * 设置慢日志模式
                     * @param _pattern 慢日志模式
                     * 
                     */
                    void SetPattern(const std::string& _pattern);

                    /**
                     * 判断参数 Pattern 是否已赋值
                     * @return Pattern 是否已赋值
                     * 
                     */
                    bool PatternHasBeenSet() const;

                    /**
                     * 获取最大执行时间
                     * @return MaxTime 最大执行时间
                     * 
                     */
                    uint64_t GetMaxTime() const;

                    /**
                     * 设置最大执行时间
                     * @param _maxTime 最大执行时间
                     * 
                     */
                    void SetMaxTime(const uint64_t& _maxTime);

                    /**
                     * 判断参数 MaxTime 是否已赋值
                     * @return MaxTime 是否已赋值
                     * 
                     */
                    bool MaxTimeHasBeenSet() const;

                    /**
                     * 获取平均执行时间
                     * @return AverageTime 平均执行时间
                     * 
                     */
                    uint64_t GetAverageTime() const;

                    /**
                     * 设置平均执行时间
                     * @param _averageTime 平均执行时间
                     * 
                     */
                    void SetAverageTime(const uint64_t& _averageTime);

                    /**
                     * 判断参数 AverageTime 是否已赋值
                     * @return AverageTime 是否已赋值
                     * 
                     */
                    bool AverageTimeHasBeenSet() const;

                    /**
                     * 获取该模式慢日志条数
                     * @return Total 该模式慢日志条数
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 设置该模式慢日志条数
                     * @param _total 该模式慢日志条数
                     * 
                     */
                    void SetTotal(const uint64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 慢日志模式
                     */
                    std::string m_pattern;
                    bool m_patternHasBeenSet;

                    /**
                     * 最大执行时间
                     */
                    uint64_t m_maxTime;
                    bool m_maxTimeHasBeenSet;

                    /**
                     * 平均执行时间
                     */
                    uint64_t m_averageTime;
                    bool m_averageTimeHasBeenSet;

                    /**
                     * 该模式慢日志条数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_SLOWLOGPATTERN_H_
