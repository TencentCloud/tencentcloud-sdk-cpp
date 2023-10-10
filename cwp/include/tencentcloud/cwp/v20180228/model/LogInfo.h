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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_LOGINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_LOGINFO_H_

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
                * 日志详情
                */
                class LogInfo : public AbstractModel
                {
                public:
                    LogInfo();
                    ~LogInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志内容的Json序列化字符串
                     * @return Content 日志内容的Json序列化字符串
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置日志内容的Json序列化字符串
                     * @param _content 日志内容的Json序列化字符串
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取日志文件名称
                     * @return FileName 日志文件名称
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置日志文件名称
                     * @param _fileName 日志文件名称
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取日志来源IP
                     * @return Source 日志来源IP
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置日志来源IP
                     * @param _source 日志来源IP
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取日志时间，单位ms
                     * @return TimeStamp 日志时间，单位ms
                     * 
                     */
                    int64_t GetTimeStamp() const;

                    /**
                     * 设置日志时间，单位ms
                     * @param _timeStamp 日志时间，单位ms
                     * 
                     */
                    void SetTimeStamp(const int64_t& _timeStamp);

                    /**
                     * 判断参数 TimeStamp 是否已赋值
                     * @return TimeStamp 是否已赋值
                     * 
                     */
                    bool TimeStampHasBeenSet() const;

                private:

                    /**
                     * 日志内容的Json序列化字符串
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 日志文件名称
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 日志来源IP
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 日志时间，单位ms
                     */
                    int64_t m_timeStamp;
                    bool m_timeStampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_LOGINFO_H_
