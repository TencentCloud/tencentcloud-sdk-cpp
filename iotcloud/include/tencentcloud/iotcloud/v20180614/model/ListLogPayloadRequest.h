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

#ifndef TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_LISTLOGPAYLOADREQUEST_H_
#define TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_LISTLOGPAYLOADREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20180614
        {
            namespace Model
            {
                /**
                * ListLogPayload请求参数结构体
                */
                class ListLogPayloadRequest : public AbstractModel
                {
                public:
                    ListLogPayloadRequest();
                    ~ListLogPayloadRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取日志开始时间，毫秒级时间戳
                     * @return MinTime 日志开始时间，毫秒级时间戳
                     * 
                     */
                    uint64_t GetMinTime() const;

                    /**
                     * 设置日志开始时间，毫秒级时间戳
                     * @param _minTime 日志开始时间，毫秒级时间戳
                     * 
                     */
                    void SetMinTime(const uint64_t& _minTime);

                    /**
                     * 判断参数 MinTime 是否已赋值
                     * @return MinTime 是否已赋值
                     * 
                     */
                    bool MinTimeHasBeenSet() const;

                    /**
                     * 获取日志结束时间，毫秒级时间戳
                     * @return MaxTime 日志结束时间，毫秒级时间戳
                     * 
                     */
                    uint64_t GetMaxTime() const;

                    /**
                     * 设置日志结束时间，毫秒级时间戳
                     * @param _maxTime 日志结束时间，毫秒级时间戳
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
                     * 获取查询关键字，可以同时支持键值查询和文本查询，例如，查询某key的值为value，并且包含某word的日志，该参数为：key:value word。键值或文本可以包含多个，以空格隔开。其中可以索引的key比如：RequestID、ProductID、DeviceName等。
一个典型的查询示例：ProductID:ABCDE12345 DeviceName:test publish
                     * @return Keywords 查询关键字，可以同时支持键值查询和文本查询，例如，查询某key的值为value，并且包含某word的日志，该参数为：key:value word。键值或文本可以包含多个，以空格隔开。其中可以索引的key比如：RequestID、ProductID、DeviceName等。
一个典型的查询示例：ProductID:ABCDE12345 DeviceName:test publish
                     * 
                     */
                    std::string GetKeywords() const;

                    /**
                     * 设置查询关键字，可以同时支持键值查询和文本查询，例如，查询某key的值为value，并且包含某word的日志，该参数为：key:value word。键值或文本可以包含多个，以空格隔开。其中可以索引的key比如：RequestID、ProductID、DeviceName等。
一个典型的查询示例：ProductID:ABCDE12345 DeviceName:test publish
                     * @param _keywords 查询关键字，可以同时支持键值查询和文本查询，例如，查询某key的值为value，并且包含某word的日志，该参数为：key:value word。键值或文本可以包含多个，以空格隔开。其中可以索引的key比如：RequestID、ProductID、DeviceName等。
一个典型的查询示例：ProductID:ABCDE12345 DeviceName:test publish
                     * 
                     */
                    void SetKeywords(const std::string& _keywords);

                    /**
                     * 判断参数 Keywords 是否已赋值
                     * @return Keywords 是否已赋值
                     * 
                     */
                    bool KeywordsHasBeenSet() const;

                    /**
                     * 获取日志检索上下文
                     * @return Context 日志检索上下文
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置日志检索上下文
                     * @param _context 日志检索上下文
                     * 
                     */
                    void SetContext(const std::string& _context);

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取日志最大条数
                     * @return MaxNum 日志最大条数
                     * 
                     */
                    int64_t GetMaxNum() const;

                    /**
                     * 设置日志最大条数
                     * @param _maxNum 日志最大条数
                     * 
                     */
                    void SetMaxNum(const int64_t& _maxNum);

                    /**
                     * 判断参数 MaxNum 是否已赋值
                     * @return MaxNum 是否已赋值
                     * 
                     */
                    bool MaxNumHasBeenSet() const;

                private:

                    /**
                     * 日志开始时间，毫秒级时间戳
                     */
                    uint64_t m_minTime;
                    bool m_minTimeHasBeenSet;

                    /**
                     * 日志结束时间，毫秒级时间戳
                     */
                    uint64_t m_maxTime;
                    bool m_maxTimeHasBeenSet;

                    /**
                     * 查询关键字，可以同时支持键值查询和文本查询，例如，查询某key的值为value，并且包含某word的日志，该参数为：key:value word。键值或文本可以包含多个，以空格隔开。其中可以索引的key比如：RequestID、ProductID、DeviceName等。
一个典型的查询示例：ProductID:ABCDE12345 DeviceName:test publish
                     */
                    std::string m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * 日志检索上下文
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * 日志最大条数
                     */
                    int64_t m_maxNum;
                    bool m_maxNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_LISTLOGPAYLOADREQUEST_H_
