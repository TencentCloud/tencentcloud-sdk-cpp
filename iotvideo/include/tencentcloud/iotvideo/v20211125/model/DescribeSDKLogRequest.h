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

#ifndef TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DESCRIBESDKLOGREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DESCRIBESDKLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20211125
        {
            namespace Model
            {
                /**
                * DescribeSDKLog请求参数结构体
                */
                class DescribeSDKLogRequest : public AbstractModel
                {
                public:
                    DescribeSDKLogRequest();
                    ~DescribeSDKLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取日志开始时间
                     * @return MinTime 日志开始时间
                     * 
                     */
                    uint64_t GetMinTime() const;

                    /**
                     * 设置日志开始时间
                     * @param _minTime 日志开始时间
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
                     * 获取日志结束时间
                     * @return MaxTime 日志结束时间
                     * 
                     */
                    uint64_t GetMaxTime() const;

                    /**
                     * 设置日志结束时间
                     * @param _maxTime 日志结束时间
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
                     * 获取查询关键字，可以同时支持键值查询和文本查询，
例如，查询某key的值为value，并且包含某word的日志，该参数为：key:value word。
键值或文本可以包含多个，以空格隔开。
其中可以索引的key包括：productid、devicename、loglevel
一个典型的查询示例：productid:7JK1G72JNE devicename:name publish loglevel:WARN一个典型的查询示例：productid:ABCDE12345 devicename:test scene:SHADOW publish
                     * @return Keywords 查询关键字，可以同时支持键值查询和文本查询，
例如，查询某key的值为value，并且包含某word的日志，该参数为：key:value word。
键值或文本可以包含多个，以空格隔开。
其中可以索引的key包括：productid、devicename、loglevel
一个典型的查询示例：productid:7JK1G72JNE devicename:name publish loglevel:WARN一个典型的查询示例：productid:ABCDE12345 devicename:test scene:SHADOW publish
                     * 
                     */
                    std::string GetKeywords() const;

                    /**
                     * 设置查询关键字，可以同时支持键值查询和文本查询，
例如，查询某key的值为value，并且包含某word的日志，该参数为：key:value word。
键值或文本可以包含多个，以空格隔开。
其中可以索引的key包括：productid、devicename、loglevel
一个典型的查询示例：productid:7JK1G72JNE devicename:name publish loglevel:WARN一个典型的查询示例：productid:ABCDE12345 devicename:test scene:SHADOW publish
                     * @param _keywords 查询关键字，可以同时支持键值查询和文本查询，
例如，查询某key的值为value，并且包含某word的日志，该参数为：key:value word。
键值或文本可以包含多个，以空格隔开。
其中可以索引的key包括：productid、devicename、loglevel
一个典型的查询示例：productid:7JK1G72JNE devicename:name publish loglevel:WARN一个典型的查询示例：productid:ABCDE12345 devicename:test scene:SHADOW publish
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
                     * 获取查询条数
                     * @return MaxNum 查询条数
                     * 
                     */
                    uint64_t GetMaxNum() const;

                    /**
                     * 设置查询条数
                     * @param _maxNum 查询条数
                     * 
                     */
                    void SetMaxNum(const uint64_t& _maxNum);

                    /**
                     * 判断参数 MaxNum 是否已赋值
                     * @return MaxNum 是否已赋值
                     * 
                     */
                    bool MaxNumHasBeenSet() const;

                private:

                    /**
                     * 日志开始时间
                     */
                    uint64_t m_minTime;
                    bool m_minTimeHasBeenSet;

                    /**
                     * 日志结束时间
                     */
                    uint64_t m_maxTime;
                    bool m_maxTimeHasBeenSet;

                    /**
                     * 查询关键字，可以同时支持键值查询和文本查询，
例如，查询某key的值为value，并且包含某word的日志，该参数为：key:value word。
键值或文本可以包含多个，以空格隔开。
其中可以索引的key包括：productid、devicename、loglevel
一个典型的查询示例：productid:7JK1G72JNE devicename:name publish loglevel:WARN一个典型的查询示例：productid:ABCDE12345 devicename:test scene:SHADOW publish
                     */
                    std::string m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * 日志检索上下文
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * 查询条数
                     */
                    uint64_t m_maxNum;
                    bool m_maxNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DESCRIBESDKLOGREQUEST_H_
