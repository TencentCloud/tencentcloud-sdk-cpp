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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_SCREENSHOTTASK_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_SCREENSHOTTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 截图任务
                */
                class ScreenshotTask : public AbstractModel
                {
                public:
                    ScreenshotTask();
                    ~ScreenshotTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取截图任务ID。
                     * @return TaskId 截图任务ID。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置截图任务ID。
                     * @param _taskId 截图任务ID。
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
                     * 获取任务开始时间，Unix时间戳。
                     * @return StartTime 任务开始时间，Unix时间戳。
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置任务开始时间，Unix时间戳。
                     * @param _startTime 任务开始时间，Unix时间戳。
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
                     * 获取任务结束时间，Unix时间戳。
                     * @return EndTime 任务结束时间，Unix时间戳。
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置任务结束时间，Unix时间戳。
                     * @param _endTime 任务结束时间，Unix时间戳。
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
                     * 获取截图模板ID。
                     * @return TemplateId 截图模板ID。
                     * 
                     */
                    uint64_t GetTemplateId() const;

                    /**
                     * 设置截图模板ID。
                     * @param _templateId 截图模板ID。
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
                     * 获取调用 StopScreenshotTask 停止任务时间，Unix时间戳。值为0表示未曾调用接口停止任务。
                     * @return Stopped 调用 StopScreenshotTask 停止任务时间，Unix时间戳。值为0表示未曾调用接口停止任务。
                     * 
                     */
                    uint64_t GetStopped() const;

                    /**
                     * 设置调用 StopScreenshotTask 停止任务时间，Unix时间戳。值为0表示未曾调用接口停止任务。
                     * @param _stopped 调用 StopScreenshotTask 停止任务时间，Unix时间戳。值为0表示未曾调用接口停止任务。
                     * 
                     */
                    void SetStopped(const uint64_t& _stopped);

                    /**
                     * 判断参数 Stopped 是否已赋值
                     * @return Stopped 是否已赋值
                     * 
                     */
                    bool StoppedHasBeenSet() const;

                private:

                    /**
                     * 截图任务ID。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

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
                     * 流名称。
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * 任务开始时间，Unix时间戳。
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 任务结束时间，Unix时间戳。
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 截图模板ID。
                     */
                    uint64_t m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 调用 StopScreenshotTask 停止任务时间，Unix时间戳。值为0表示未曾调用接口停止任务。
                     */
                    uint64_t m_stopped;
                    bool m_stoppedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_SCREENSHOTTASK_H_
