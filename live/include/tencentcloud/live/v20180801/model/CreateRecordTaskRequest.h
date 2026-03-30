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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CREATERECORDTASKREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CREATERECORDTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * CreateRecordTask请求参数结构体
                */
                class CreateRecordTaskRequest : public AbstractModel
                {
                public:
                    CreateRecordTaskRequest();
                    ~CreateRecordTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>流名称。</p>
                     * @return StreamName <p>流名称。</p>
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置<p>流名称。</p>
                     * @param _streamName <p>流名称。</p>
                     * 
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     * 
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取<p>推流域名。</p>
                     * @return DomainName <p>推流域名。</p>
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置<p>推流域名。</p>
                     * @param _domainName <p>推流域名。</p>
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取<p>推流路径。</p>
                     * @return AppName <p>推流路径。</p>
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置<p>推流路径。</p>
                     * @param _appName <p>推流路径。</p>
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取<p>录制任务结束时间，Unix时间戳。设置时间必须大于StartTime及当前时间，且小于当前时间+7天。</p>
                     * @return EndTime <p>录制任务结束时间，Unix时间戳。设置时间必须大于StartTime及当前时间，且小于当前时间+7天。</p>
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置<p>录制任务结束时间，Unix时间戳。设置时间必须大于StartTime及当前时间，且小于当前时间+7天。</p>
                     * @param _endTime <p>录制任务结束时间，Unix时间戳。设置时间必须大于StartTime及当前时间，且小于当前时间+7天。</p>
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>录制任务开始时间，Unix时间戳。如果不填表示立即启动录制。EndTime - StartTime不能超过24小时。</p>
                     * @return StartTime <p>录制任务开始时间，Unix时间戳。如果不填表示立即启动录制。EndTime - StartTime不能超过24小时。</p>
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置<p>录制任务开始时间，Unix时间戳。如果不填表示立即启动录制。EndTime - StartTime不能超过24小时。</p>
                     * @param _startTime <p>录制任务开始时间，Unix时间戳。如果不填表示立即启动录制。EndTime - StartTime不能超过24小时。</p>
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>推流类型，默认0。取值：<br>0-直播推流。<br>1-合成流，即 A+B=C 类型混流。</p>
                     * @return StreamType <p>推流类型，默认0。取值：<br>0-直播推流。<br>1-合成流，即 A+B=C 类型混流。</p>
                     * 
                     */
                    uint64_t GetStreamType() const;

                    /**
                     * 设置<p>推流类型，默认0。取值：<br>0-直播推流。<br>1-合成流，即 A+B=C 类型混流。</p>
                     * @param _streamType <p>推流类型，默认0。取值：<br>0-直播推流。<br>1-合成流，即 A+B=C 类型混流。</p>
                     * 
                     */
                    void SetStreamType(const uint64_t& _streamType);

                    /**
                     * 判断参数 StreamType 是否已赋值
                     * @return StreamType 是否已赋值
                     * 
                     */
                    bool StreamTypeHasBeenSet() const;

                    /**
                     * 获取<p>录制模板ID，CreateLiveRecordTemplate 返回值。如果不填或者传入错误ID，则默认录制 HLS 格式、永久存储至 VOD 主应用下。<br>示例值：0。</p>
                     * @return TemplateId <p>录制模板ID，CreateLiveRecordTemplate 返回值。如果不填或者传入错误ID，则默认录制 HLS 格式、永久存储至 VOD 主应用下。<br>示例值：0。</p>
                     * 
                     */
                    uint64_t GetTemplateId() const;

                    /**
                     * 设置<p>录制模板ID，CreateLiveRecordTemplate 返回值。如果不填或者传入错误ID，则默认录制 HLS 格式、永久存储至 VOD 主应用下。<br>示例值：0。</p>
                     * @param _templateId <p>录制模板ID，CreateLiveRecordTemplate 返回值。如果不填或者传入错误ID，则默认录制 HLS 格式、永久存储至 VOD 主应用下。<br>示例值：0。</p>
                     * 
                     */
                    void SetTemplateId(const uint64_t& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>扩展字段，暂无定义。默认为空。</p>
                     * @return Extension <p>扩展字段，暂无定义。默认为空。</p>
                     * 
                     */
                    std::string GetExtension() const;

                    /**
                     * 设置<p>扩展字段，暂无定义。默认为空。</p>
                     * @param _extension <p>扩展字段，暂无定义。默认为空。</p>
                     * 
                     */
                    void SetExtension(const std::string& _extension);

                    /**
                     * 判断参数 Extension 是否已赋值
                     * @return Extension 是否已赋值
                     * 
                     */
                    bool ExtensionHasBeenSet() const;

                private:

                    /**
                     * <p>流名称。</p>
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * <p>推流域名。</p>
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * <p>推流路径。</p>
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * <p>录制任务结束时间，Unix时间戳。设置时间必须大于StartTime及当前时间，且小于当前时间+7天。</p>
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>录制任务开始时间，Unix时间戳。如果不填表示立即启动录制。EndTime - StartTime不能超过24小时。</p>
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>推流类型，默认0。取值：<br>0-直播推流。<br>1-合成流，即 A+B=C 类型混流。</p>
                     */
                    uint64_t m_streamType;
                    bool m_streamTypeHasBeenSet;

                    /**
                     * <p>录制模板ID，CreateLiveRecordTemplate 返回值。如果不填或者传入错误ID，则默认录制 HLS 格式、永久存储至 VOD 主应用下。<br>示例值：0。</p>
                     */
                    uint64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>扩展字段，暂无定义。默认为空。</p>
                     */
                    std::string m_extension;
                    bool m_extensionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CREATERECORDTASKREQUEST_H_
