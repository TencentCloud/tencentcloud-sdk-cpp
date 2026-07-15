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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_LOGANALYSISDOWNLOADTASK_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_LOGANALYSISDOWNLOADTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 日志分析日志下载任务。
                */
                class LogAnalysisDownloadTask : public AbstractModel
                {
                public:
                    LogAnalysisDownloadTask();
                    ~LogAnalysisDownloadTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务 ID。</p>
                     * @return TaskId <p>任务 ID。</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>任务 ID。</p>
                     * @param _taskId <p>任务 ID。</p>
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>站点 ID。</p>
                     * @return ZoneId <p>站点 ID。</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>站点 ID。</p>
                     * @param _zoneId <p>站点 ID。</p>
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>数据归属地区，取值有：<ul><li>mainland：中国大陆境内；</li><li>overseas：全球（不含中国大陆）。</li></ul></p>
                     * @return Area <p>数据归属地区，取值有：<ul><li>mainland：中国大陆境内；</li><li>overseas：全球（不含中国大陆）。</li></ul></p>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置<p>数据归属地区，取值有：<ul><li>mainland：中国大陆境内；</li><li>overseas：全球（不含中国大陆）。</li></ul></p>
                     * @param _area <p>数据归属地区，取值有：<ul><li>mainland：中国大陆境内；</li><li>overseas：全球（不含中国大陆）。</li></ul></p>
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取<p>开始时间，示例值：2020-04-29T00:00:00Z。</p>
                     * @return StartTime <p>开始时间，示例值：2020-04-29T00:00:00Z。</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>开始时间，示例值：2020-04-29T00:00:00Z。</p>
                     * @param _startTime <p>开始时间，示例值：2020-04-29T00:00:00Z。</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>结束时间，示例值：2020-04-30T00:00:00Z。</p>
                     * @return EndTime <p>结束时间，示例值：2020-04-30T00:00:00Z。</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间，示例值：2020-04-30T00:00:00Z。</p>
                     * @param _endTime <p>结束时间，示例值：2020-04-30T00:00:00Z。</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>日志类型，取值有：<ul><li> l7-access-logs：七层访问日志；</li><li>web-attack：托管规则日志。</li></ul></p>
                     * @return LogType <p>日志类型，取值有：<ul><li> l7-access-logs：七层访问日志；</li><li>web-attack：托管规则日志。</li></ul></p>
                     * 
                     */
                    std::string GetLogType() const;

                    /**
                     * 设置<p>日志类型，取值有：<ul><li> l7-access-logs：七层访问日志；</li><li>web-attack：托管规则日志。</li></ul></p>
                     * @param _logType <p>日志类型，取值有：<ul><li> l7-access-logs：七层访问日志；</li><li>web-attack：托管规则日志。</li></ul></p>
                     * 
                     */
                    void SetLogType(const std::string& _logType);

                    /**
                     * 判断参数 LogType 是否已赋值
                     * @return LogType 是否已赋值
                     * 
                     */
                    bool LogTypeHasBeenSet() const;

                    /**
                     * 获取<p><a href="https://cloud.tencent.com/document/product/1552/124662">日志匹配条件</a>，长度上限 12KB。</p>
                     * @return Condition <p><a href="https://cloud.tencent.com/document/product/1552/124662">日志匹配条件</a>，长度上限 12KB。</p>
                     * 
                     */
                    std::string GetCondition() const;

                    /**
                     * 设置<p><a href="https://cloud.tencent.com/document/product/1552/124662">日志匹配条件</a>，长度上限 12KB。</p>
                     * @param _condition <p><a href="https://cloud.tencent.com/document/product/1552/124662">日志匹配条件</a>，长度上限 12KB。</p>
                     * 
                     */
                    void SetCondition(const std::string& _condition);

                    /**
                     * 判断参数 Condition 是否已赋值
                     * @return Condition 是否已赋值
                     * 
                     */
                    bool ConditionHasBeenSet() const;

                    /**
                     * 获取<p>文件格式，取值有：</p><ul><li>csv 。</li></ul>
                     * @return Format <p>文件格式，取值有：</p><ul><li>csv 。</li></ul>
                     * 
                     */
                    std::string GetFormat() const;

                    /**
                     * 设置<p>文件格式，取值有：</p><ul><li>csv 。</li></ul>
                     * @param _format <p>文件格式，取值有：</p><ul><li>csv 。</li></ul>
                     * 
                     */
                    void SetFormat(const std::string& _format);

                    /**
                     * 判断参数 Format 是否已赋值
                     * @return Format 是否已赋值
                     * 
                     */
                    bool FormatHasBeenSet() const;

                    /**
                     * 获取<p>原始日志是否按时间排序返回，取值有：<ul><li>asc：升序；</li><li>desc：降序。</li></ul></p>
                     * @return Sort <p>原始日志是否按时间排序返回，取值有：<ul><li>asc：升序；</li><li>desc：降序。</li></ul></p>
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置<p>原始日志是否按时间排序返回，取值有：<ul><li>asc：升序；</li><li>desc：降序。</li></ul></p>
                     * @param _sort <p>原始日志是否按时间排序返回，取值有：<ul><li>asc：升序；</li><li>desc：降序。</li></ul></p>
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取<p>任务状态，取值有：<ul><li>loading：处理中，等待生成下载链接；</li><li> failed: 处理失败，当前任务无法下载;</li><li>completed：已完成打包，可以下载。</li></ul></p>
                     * @return Status <p>任务状态，取值有：<ul><li>loading：处理中，等待生成下载链接；</li><li> failed: 处理失败，当前任务无法下载;</li><li>completed：已完成打包，可以下载。</li></ul></p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>任务状态，取值有：<ul><li>loading：处理中，等待生成下载链接；</li><li> failed: 处理失败，当前任务无法下载;</li><li>completed：已完成打包，可以下载。</li></ul></p>
                     * @param _status <p>任务状态，取值有：<ul><li>loading：处理中，等待生成下载链接；</li><li> failed: 处理失败，当前任务无法下载;</li><li>completed：已完成打包，可以下载。</li></ul></p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>任务创建时间，任务创建成功后将保留3天。</p>
                     * @return CreateTime <p>任务创建时间，任务创建成功后将保留3天。</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>任务创建时间，任务创建成功后将保留3天。</p>
                     * @param _createTime <p>任务创建时间，任务创建成功后将保留3天。</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>下载地址，仅当 Status = completed 时有返回值。</p>
                     * @return Url <p>下载地址，仅当 Status = completed 时有返回值。</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>下载地址，仅当 Status = completed 时有返回值。</p>
                     * @param _url <p>下载地址，仅当 Status = completed 时有返回值。</p>
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取<p>下载任务过期时间，过期后下载地址将不可用，请通过本接口获取新的下载地址。</p>
                     * @return ExpireTime <p>下载任务过期时间，过期后下载地址将不可用，请通过本接口获取新的下载地址。</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>下载任务过期时间，过期后下载地址将不可用，请通过本接口获取新的下载地址。</p>
                     * @param _expireTime <p>下载任务过期时间，过期后下载地址将不可用，请通过本接口获取新的下载地址。</p>
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * <p>任务 ID。</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>站点 ID。</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>数据归属地区，取值有：<ul><li>mainland：中国大陆境内；</li><li>overseas：全球（不含中国大陆）。</li></ul></p>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * <p>开始时间，示例值：2020-04-29T00:00:00Z。</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间，示例值：2020-04-30T00:00:00Z。</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>日志类型，取值有：<ul><li> l7-access-logs：七层访问日志；</li><li>web-attack：托管规则日志。</li></ul></p>
                     */
                    std::string m_logType;
                    bool m_logTypeHasBeenSet;

                    /**
                     * <p><a href="https://cloud.tencent.com/document/product/1552/124662">日志匹配条件</a>，长度上限 12KB。</p>
                     */
                    std::string m_condition;
                    bool m_conditionHasBeenSet;

                    /**
                     * <p>文件格式，取值有：</p><ul><li>csv 。</li></ul>
                     */
                    std::string m_format;
                    bool m_formatHasBeenSet;

                    /**
                     * <p>原始日志是否按时间排序返回，取值有：<ul><li>asc：升序；</li><li>desc：降序。</li></ul></p>
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * <p>任务状态，取值有：<ul><li>loading：处理中，等待生成下载链接；</li><li> failed: 处理失败，当前任务无法下载;</li><li>completed：已完成打包，可以下载。</li></ul></p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>任务创建时间，任务创建成功后将保留3天。</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>下载地址，仅当 Status = completed 时有返回值。</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>下载任务过期时间，过期后下载地址将不可用，请通过本接口获取新的下载地址。</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_LOGANALYSISDOWNLOADTASK_H_
