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
                     * 获取慢日志输出格式：库名.表名.命令。
                     * @return Pattern 慢日志输出格式：库名.表名.命令。
                     * 
                     */
                    std::string GetPattern() const;

                    /**
                     * 设置慢日志输出格式：库名.表名.命令。
                     * @param _pattern 慢日志输出格式：库名.表名.命令。
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
                     * 获取记录慢日志时所带的queryHash 值，标识一类查询。
                     * @return QueryHash 记录慢日志时所带的queryHash 值，标识一类查询。
                     * 
                     */
                    std::string GetQueryHash() const;

                    /**
                     * 设置记录慢日志时所带的queryHash 值，标识一类查询。
                     * @param _queryHash 记录慢日志时所带的queryHash 值，标识一类查询。
                     * 
                     */
                    void SetQueryHash(const std::string& _queryHash);

                    /**
                     * 判断参数 QueryHash 是否已赋值
                     * @return QueryHash 是否已赋值
                     * 
                     */
                    bool QueryHashHasBeenSet() const;

                    /**
                     * 获取最大执行时间。单位：毫秒。
                     * @return MaxTime 最大执行时间。单位：毫秒。
                     * 
                     */
                    uint64_t GetMaxTime() const;

                    /**
                     * 设置最大执行时间。单位：毫秒。
                     * @param _maxTime 最大执行时间。单位：毫秒。
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
                     * 获取平均执行时间。单位：毫秒。
                     * @return AverageTime 平均执行时间。单位：毫秒。
                     * 
                     */
                    uint64_t GetAverageTime() const;

                    /**
                     * 设置平均执行时间。单位：毫秒。
                     * @param _averageTime 平均执行时间。单位：毫秒。
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
                     * 获取慢日志条数。
                     * @return Total 慢日志条数。
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 设置慢日志条数。
                     * @param _total 慢日志条数。
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
                     * 慢日志输出格式：库名.表名.命令。
                     */
                    std::string m_pattern;
                    bool m_patternHasBeenSet;

                    /**
                     * 记录慢日志时所带的queryHash 值，标识一类查询。
                     */
                    std::string m_queryHash;
                    bool m_queryHashHasBeenSet;

                    /**
                     * 最大执行时间。单位：毫秒。
                     */
                    uint64_t m_maxTime;
                    bool m_maxTimeHasBeenSet;

                    /**
                     * 平均执行时间。单位：毫秒。
                     */
                    uint64_t m_averageTime;
                    bool m_averageTimeHasBeenSet;

                    /**
                     * 慢日志条数。
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_SLOWLOGPATTERN_H_
