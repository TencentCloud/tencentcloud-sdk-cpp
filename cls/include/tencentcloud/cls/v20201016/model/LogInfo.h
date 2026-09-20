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
                     * 获取<p>日志时间，单位ms</p>
                     * @return Time <p>日志时间，单位ms</p>
                     * 
                     */
                    int64_t GetTime() const;

                    /**
                     * 设置<p>日志时间，单位ms</p>
                     * @param _time <p>日志时间，单位ms</p>
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
                     * 获取<p>日志主题ID</p>
                     * @return TopicId <p>日志主题ID</p>
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置<p>日志主题ID</p>
                     * @param _topicId <p>日志主题ID</p>
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
                     * 获取<p>日志主题名称</p>
                     * @return TopicName <p>日志主题名称</p>
                     * 
                     */
                    std::string GetTopicName() const;

                    /**
                     * 设置<p>日志主题名称</p>
                     * @param _topicName <p>日志主题名称</p>
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
                     * 获取<p>日志来源IP</p>
                     * @return Source <p>日志来源IP</p>
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置<p>日志来源IP</p>
                     * @param _source <p>日志来源IP</p>
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
                     * 获取<p>日志文件名称</p>
                     * @return FileName <p>日志文件名称</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置<p>日志文件名称</p>
                     * @param _fileName <p>日志文件名称</p>
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
                     * 获取<p>日志上报请求包的ID</p>
                     * @return PkgId <p>日志上报请求包的ID</p>
                     * 
                     */
                    std::string GetPkgId() const;

                    /**
                     * 设置<p>日志上报请求包的ID</p>
                     * @param _pkgId <p>日志上报请求包的ID</p>
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
                     * 获取<p>请求包内日志的ID</p>
                     * @return PkgLogId <p>请求包内日志的ID</p>
                     * 
                     */
                    std::string GetPkgLogId() const;

                    /**
                     * 设置<p>请求包内日志的ID</p>
                     * @param _pkgLogId <p>请求包内日志的ID</p>
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
                     * 获取<p>符合检索条件的关键词，一般用于高亮显示。仅支持键值检索，不支持全文检索</p>
                     * @return HighLights <p>符合检索条件的关键词，一般用于高亮显示。仅支持键值检索，不支持全文检索</p>
                     * 
                     */
                    std::vector<HighLightItem> GetHighLights() const;

                    /**
                     * 设置<p>符合检索条件的关键词，一般用于高亮显示。仅支持键值检索，不支持全文检索</p>
                     * @param _highLights <p>符合检索条件的关键词，一般用于高亮显示。仅支持键值检索，不支持全文检索</p>
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
                     * 获取<p>日志内容的Json序列化字符串</p>
                     * @return LogJson <p>日志内容的Json序列化字符串</p>
                     * 
                     */
                    std::string GetLogJson() const;

                    /**
                     * 设置<p>日志内容的Json序列化字符串</p>
                     * @param _logJson <p>日志内容的Json序列化字符串</p>
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
                     * 获取<p>日志来源主机名称</p>
                     * @return HostName <p>日志来源主机名称</p>
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置<p>日志来源主机名称</p>
                     * @param _hostName <p>日志来源主机名称</p>
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
                     * 获取<p>原始日志(仅在日志创建索引异常时有值)</p>
                     * @return RawLog <p>原始日志(仅在日志创建索引异常时有值)</p>
                     * 
                     */
                    std::string GetRawLog() const;

                    /**
                     * 设置<p>原始日志(仅在日志创建索引异常时有值)</p>
                     * @param _rawLog <p>原始日志(仅在日志创建索引异常时有值)</p>
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
                     * 获取<p>日志创建索引异常原因(仅在日志创建索引异常时有值)</p>
                     * @return IndexStatus <p>日志创建索引异常原因(仅在日志创建索引异常时有值)</p>
                     * 
                     */
                    std::string GetIndexStatus() const;

                    /**
                     * 设置<p>日志创建索引异常原因(仅在日志创建索引异常时有值)</p>
                     * @param _indexStatus <p>日志创建索引异常原因(仅在日志创建索引异常时有值)</p>
                     * 
                     */
                    void SetIndexStatus(const std::string& _indexStatus);

                    /**
                     * 判断参数 IndexStatus 是否已赋值
                     * @return IndexStatus 是否已赋值
                     * 
                     */
                    bool IndexStatusHasBeenSet() const;

                    /**
                     * 获取<p>日志时间，单位ns</p><p>单位：纳秒</p>
                     * @return TimeNanos <p>日志时间，单位ns</p><p>单位：纳秒</p>
                     * 
                     */
                    int64_t GetTimeNanos() const;

                    /**
                     * 设置<p>日志时间，单位ns</p><p>单位：纳秒</p>
                     * @param _timeNanos <p>日志时间，单位ns</p><p>单位：纳秒</p>
                     * 
                     */
                    void SetTimeNanos(const int64_t& _timeNanos);

                    /**
                     * 判断参数 TimeNanos 是否已赋值
                     * @return TimeNanos 是否已赋值
                     * 
                     */
                    bool TimeNanosHasBeenSet() const;

                private:

                    /**
                     * <p>日志时间，单位ms</p>
                     */
                    int64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * <p>日志主题ID</p>
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * <p>日志主题名称</p>
                     */
                    std::string m_topicName;
                    bool m_topicNameHasBeenSet;

                    /**
                     * <p>日志来源IP</p>
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * <p>日志文件名称</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>日志上报请求包的ID</p>
                     */
                    std::string m_pkgId;
                    bool m_pkgIdHasBeenSet;

                    /**
                     * <p>请求包内日志的ID</p>
                     */
                    std::string m_pkgLogId;
                    bool m_pkgLogIdHasBeenSet;

                    /**
                     * <p>符合检索条件的关键词，一般用于高亮显示。仅支持键值检索，不支持全文检索</p>
                     */
                    std::vector<HighLightItem> m_highLights;
                    bool m_highLightsHasBeenSet;

                    /**
                     * <p>日志内容的Json序列化字符串</p>
                     */
                    std::string m_logJson;
                    bool m_logJsonHasBeenSet;

                    /**
                     * <p>日志来源主机名称</p>
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * <p>原始日志(仅在日志创建索引异常时有值)</p>
                     */
                    std::string m_rawLog;
                    bool m_rawLogHasBeenSet;

                    /**
                     * <p>日志创建索引异常原因(仅在日志创建索引异常时有值)</p>
                     */
                    std::string m_indexStatus;
                    bool m_indexStatusHasBeenSet;

                    /**
                     * <p>日志时间，单位ns</p><p>单位：纳秒</p>
                     */
                    int64_t m_timeNanos;
                    bool m_timeNanosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_LOGINFO_H_
