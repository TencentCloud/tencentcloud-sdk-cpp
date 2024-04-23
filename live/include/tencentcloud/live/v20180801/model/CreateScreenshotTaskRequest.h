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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CREATESCREENSHOTTASKREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CREATESCREENSHOTTASKREQUEST_H_

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
                * CreateScreenshotTask请求参数结构体
                */
                class CreateScreenshotTaskRequest : public AbstractModel
                {
                public:
                    CreateScreenshotTaskRequest();
                    ~CreateScreenshotTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取流名称。
                     * @return StreamName 流名称。
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置流名称。
                     * @param _streamName 流名称。
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
                     * 获取推流域名。
                     * @return DomainName 推流域名。
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置推流域名。
                     * @param _domainName 推流域名。
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
                     * 获取推流路径。
                     * @return AppName 推流路径。
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置推流路径。
                     * @param _appName 推流路径。
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
                     * 获取截图任务结束时间，Unix时间戳。设置时间必须大于StartTime及当前时间，且小于当前时间+7天。
                     * @return EndTime 截图任务结束时间，Unix时间戳。设置时间必须大于StartTime及当前时间，且小于当前时间+7天。
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置截图任务结束时间，Unix时间戳。设置时间必须大于StartTime及当前时间，且小于当前时间+7天。
                     * @param _endTime 截图任务结束时间，Unix时间戳。设置时间必须大于StartTime及当前时间，且小于当前时间+7天。
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
                     * 获取截图模板ID，CreateLiveSnapshotTemplate 返回值。如果传入错误ID，则不拉起截图。
                     * @return TemplateId 截图模板ID，CreateLiveSnapshotTemplate 返回值。如果传入错误ID，则不拉起截图。
                     * 
                     */
                    uint64_t GetTemplateId() const;

                    /**
                     * 设置截图模板ID，CreateLiveSnapshotTemplate 返回值。如果传入错误ID，则不拉起截图。
                     * @param _templateId 截图模板ID，CreateLiveSnapshotTemplate 返回值。如果传入错误ID，则不拉起截图。
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
                     * 获取截图任务开始时间，Unix时间戳。如果不填表示立即启动截图。EndTime - StartTime不能超过24小时。
                     * @return StartTime 截图任务开始时间，Unix时间戳。如果不填表示立即启动截图。EndTime - StartTime不能超过24小时。
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置截图任务开始时间，Unix时间戳。如果不填表示立即启动截图。EndTime - StartTime不能超过24小时。
                     * @param _startTime 截图任务开始时间，Unix时间戳。如果不填表示立即启动截图。EndTime - StartTime不能超过24小时。
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
                     * 获取推流类型，默认0。取值：
0-直播推流。
1-合成流，即 A+B=C 类型混流。
                     * @return StreamType 推流类型，默认0。取值：
0-直播推流。
1-合成流，即 A+B=C 类型混流。
                     * 
                     */
                    uint64_t GetStreamType() const;

                    /**
                     * 设置推流类型，默认0。取值：
0-直播推流。
1-合成流，即 A+B=C 类型混流。
                     * @param _streamType 推流类型，默认0。取值：
0-直播推流。
1-合成流，即 A+B=C 类型混流。
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
                     * 获取扩展字段，暂无定义。默认为空。
                     * @return Extension 扩展字段，暂无定义。默认为空。
                     * 
                     */
                    std::string GetExtension() const;

                    /**
                     * 设置扩展字段，暂无定义。默认为空。
                     * @param _extension 扩展字段，暂无定义。默认为空。
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
                     * 流名称。
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * 推流域名。
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * 推流路径。
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 截图任务结束时间，Unix时间戳。设置时间必须大于StartTime及当前时间，且小于当前时间+7天。
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 截图模板ID，CreateLiveSnapshotTemplate 返回值。如果传入错误ID，则不拉起截图。
                     */
                    uint64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 截图任务开始时间，Unix时间戳。如果不填表示立即启动截图。EndTime - StartTime不能超过24小时。
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 推流类型，默认0。取值：
0-直播推流。
1-合成流，即 A+B=C 类型混流。
                     */
                    uint64_t m_streamType;
                    bool m_streamTypeHasBeenSet;

                    /**
                     * 扩展字段，暂无定义。默认为空。
                     */
                    std::string m_extension;
                    bool m_extensionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CREATESCREENSHOTTASKREQUEST_H_
