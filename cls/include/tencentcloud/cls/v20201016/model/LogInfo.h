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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_LOGINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_LOGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/HighLightItem.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 日志结果信息
                */
                class LogInfo : public AbstractModel
                {
                public:
                    LogInfo();
                    ~LogInfo() = default;
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
                     * 获取符合检索条件的关键词，一般用于高亮显示。仅支持键值检索，不支持全文检索	
                     * @return HighLights 符合检索条件的关键词，一般用于高亮显示。仅支持键值检索，不支持全文检索	
                     * 
                     */
                    std::vector<HighLightItem> GetHighLights() const;

                    /**
                     * 设置符合检索条件的关键词，一般用于高亮显示。仅支持键值检索，不支持全文检索	
                     * @param _highLights 符合检索条件的关键词，一般用于高亮显示。仅支持键值检索，不支持全文检索	
                     * 
                     */
                    void SetHighLights(const std::vector<HighLightItem>& _highLights);

                    /**
                     * 判断参数 HighLights 是否已赋值
                     * @return HighLights 是否已赋值
                     * 
                     */
                    bool HighLightsHasBeenSet() const;

                    /**
                     * 获取日志内容的Json序列化字符串
                     * @return LogJson 日志内容的Json序列化字符串
                     * 
                     */
                    std::string GetLogJson() const;

                    /**
                     * 设置日志内容的Json序列化字符串
                     * @param _logJson 日志内容的Json序列化字符串
                     * 
                     */
                    void SetLogJson(const std::string& _logJson);

                    /**
                     * 判断参数 LogJson 是否已赋值
                     * @return LogJson 是否已赋值
                     * 
                     */
                    bool LogJsonHasBeenSet() const;

                    /**
                     * 获取日志来源主机名称
                     * @return HostName 日志来源主机名称
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置日志来源主机名称
                     * @param _hostName 日志来源主机名称
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取原始日志(仅在日志创建索引异常时有值)
                     * @return RawLog 原始日志(仅在日志创建索引异常时有值)
                     * 
                     */
                    std::string GetRawLog() const;

                    /**
                     * 设置原始日志(仅在日志创建索引异常时有值)
                     * @param _rawLog 原始日志(仅在日志创建索引异常时有值)
                     * 
                     */
                    void SetRawLog(const std::string& _rawLog);

                    /**
                     * 判断参数 RawLog 是否已赋值
                     * @return RawLog 是否已赋值
                     * 
                     */
                    bool RawLogHasBeenSet() const;

                    /**
                     * 获取日志创建索引异常原因(仅在日志创建索引异常时有值)
                     * @return IndexStatus 日志创建索引异常原因(仅在日志创建索引异常时有值)
                     * 
                     */
                    std::string GetIndexStatus() const;

                    /**
                     * 设置日志创建索引异常原因(仅在日志创建索引异常时有值)
                     * @param _indexStatus 日志创建索引异常原因(仅在日志创建索引异常时有值)
                     * 
                     */
                    void SetIndexStatus(const std::string& _indexStatus);

                    /**
                     * 判断参数 IndexStatus 是否已赋值
                     * @return IndexStatus 是否已赋值
                     * 
                     */
                    bool IndexStatusHasBeenSet() const;

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
                     * 符合检索条件的关键词，一般用于高亮显示。仅支持键值检索，不支持全文检索	
                     */
                    std::vector<HighLightItem> m_highLights;
                    bool m_highLightsHasBeenSet;

                    /**
                     * 日志内容的Json序列化字符串
                     */
                    std::string m_logJson;
                    bool m_logJsonHasBeenSet;

                    /**
                     * 日志来源主机名称
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 原始日志(仅在日志创建索引异常时有值)
                     */
                    std::string m_rawLog;
                    bool m_rawLogHasBeenSet;

                    /**
                     * 日志创建索引异常原因(仅在日志创建索引异常时有值)
                     */
                    std::string m_indexStatus;
                    bool m_indexStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_LOGINFO_H_
