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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_ACCESSLOGINFO_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_ACCESSLOGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 单条日志数据描述
                */
                class AccessLogInfo : public AbstractModel
                {
                public:
                    AccessLogInfo();
                    ~AccessLogInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志时间，单位ms
                     * @return Time 日志时间，单位ms
                     * 
                     */
                    int64_t GetTime() const;

                    /**
                     * 设置日志时间，单位ms
                     * @param _time 日志时间，单位ms
                     * 
                     */
                    void SetTime(const int64_t& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取日志主题ID
                     * @return TopicId 日志主题ID
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置日志主题ID
                     * @param _topicId 日志主题ID
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取日志主题名称
                     * @return TopicName 日志主题名称
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置日志主题名称
                     * @param _topicName 日志主题名称
                     * 
                     */
                    void SetTopicName(const std::string& _topicName);

                    /**
                     * 判断参数 TopicName 是否已赋值
                     * @return TopicName 是否已赋值
                     * 
                     */
                    bool TopicNameHasBeenSet() const;

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
                     * 获取日志上报请求包的ID
                     * @return PkgId 日志上报请求包的ID
                     * 
                     */
                    std::string GetPkgId() const;

                    /**
                     * 设置日志上报请求包的ID
                     * @param _pkgId 日志上报请求包的ID
                     * 
                     */
                    void SetPkgId(const std::string& _pkgId);

                    /**
                     * 判断参数 PkgId 是否已赋值
                     * @return PkgId 是否已赋值
                     * 
                     */
                    bool PkgIdHasBeenSet() const;

                    /**
                     * 获取请求包内日志的ID
                     * @return PkgLogId 请求包内日志的ID
                     * 
                     */
                    std::string GetPkgLogId() const;

                    /**
                     * 设置请求包内日志的ID
                     * @param _pkgLogId 请求包内日志的ID
                     * 
                     */
                    void SetPkgLogId(const std::string& _pkgLogId);

                    /**
                     * 判断参数 PkgLogId 是否已赋值
                     * @return PkgLogId 是否已赋值
                     * 
                     */
                    bool PkgLogIdHasBeenSet() const;

                    /**
                     * 获取日志内容的Json序列化字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogJson 日志内容的Json序列化字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogJson() const;

                    /**
                     * 设置日志内容的Json序列化字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _logJson 日志内容的Json序列化字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLogJson(const std::string& _logJson);

                    /**
                     * 判断参数 LogJson 是否已赋值
                     * @return LogJson 是否已赋值
                     * 
                     */
                    bool LogJsonHasBeenSet() const;

                private:

                    /**
                     * 日志时间，单位ms
                     */
                    int64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 日志主题ID
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 日志主题名称
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * 日志来源IP
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 日志文件名称
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 日志上报请求包的ID
                     */
                    std::string m_pkgId;
                    bool m_pkgIdHasBeenSet;

                    /**
                     * 请求包内日志的ID
                     */
                    std::string m_pkgLogId;
                    bool m_pkgLogIdHasBeenSet;

                    /**
                     * 日志内容的Json序列化字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logJson;
                    bool m_logJsonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_ACCESSLOGINFO_H_
