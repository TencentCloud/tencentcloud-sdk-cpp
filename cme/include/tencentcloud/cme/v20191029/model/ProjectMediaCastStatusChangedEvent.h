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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_PROJECTMEDIACASTSTATUSCHANGEDEVENT_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_PROJECTMEDIACASTSTATUSCHANGEDEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/MediaCastSourceInterruptInfo.h>
#include <tencentcloud/cme/v20191029/model/MediaCastDestinationInterruptInfo.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                *  点播转直播项目状态变更事件。
                */
                class ProjectMediaCastStatusChangedEvent : public AbstractModel
                {
                public:
                    ProjectMediaCastStatusChangedEvent();
                    ~ProjectMediaCastStatusChangedEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取项目 Id。
                     * @return ProjectId 项目 Id。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目 Id。
                     * @param _projectId 项目 Id。
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取项目状态，取值有：
<li>Started：点播转直播开始；</li>
<li>Stopped：点播转直播结束；</li>
<li>SourceInterrupted：点播转直播输入断流；</li>
<li>DestinationInterrupted：点播转直播输出断流。</li>
                     * @return Status 项目状态，取值有：
<li>Started：点播转直播开始；</li>
<li>Stopped：点播转直播结束；</li>
<li>SourceInterrupted：点播转直播输入断流；</li>
<li>DestinationInterrupted：点播转直播输出断流。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置项目状态，取值有：
<li>Started：点播转直播开始；</li>
<li>Stopped：点播转直播结束；</li>
<li>SourceInterrupted：点播转直播输入断流；</li>
<li>DestinationInterrupted：点播转直播输出断流。</li>
                     * @param _status 项目状态，取值有：
<li>Started：点播转直播开始；</li>
<li>Stopped：点播转直播结束；</li>
<li>SourceInterrupted：点播转直播输入断流；</li>
<li>DestinationInterrupted：点播转直播输出断流。</li>
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
                     * 获取点播转直播输入断流信息，仅当 Status 取值 SourceInterrupted 时有效。
                     * @return SourceInterruptInfo 点播转直播输入断流信息，仅当 Status 取值 SourceInterrupted 时有效。
                     * 
                     */
                    MediaCastSourceInterruptInfo GetSourceInterruptInfo() const;

                    /**
                     * 设置点播转直播输入断流信息，仅当 Status 取值 SourceInterrupted 时有效。
                     * @param _sourceInterruptInfo 点播转直播输入断流信息，仅当 Status 取值 SourceInterrupted 时有效。
                     * 
                     */
                    void SetSourceInterruptInfo(const MediaCastSourceInterruptInfo& _sourceInterruptInfo);

                    /**
                     * 判断参数 SourceInterruptInfo 是否已赋值
                     * @return SourceInterruptInfo 是否已赋值
                     * 
                     */
                    bool SourceInterruptInfoHasBeenSet() const;

                    /**
                     * 获取点播转直播输出断流信息，仅当 Status 取值 DestinationInterrupted 时有效。
                     * @return DestinationInterruptInfo 点播转直播输出断流信息，仅当 Status 取值 DestinationInterrupted 时有效。
                     * 
                     */
                    MediaCastDestinationInterruptInfo GetDestinationInterruptInfo() const;

                    /**
                     * 设置点播转直播输出断流信息，仅当 Status 取值 DestinationInterrupted 时有效。
                     * @param _destinationInterruptInfo 点播转直播输出断流信息，仅当 Status 取值 DestinationInterrupted 时有效。
                     * 
                     */
                    void SetDestinationInterruptInfo(const MediaCastDestinationInterruptInfo& _destinationInterruptInfo);

                    /**
                     * 判断参数 DestinationInterruptInfo 是否已赋值
                     * @return DestinationInterruptInfo 是否已赋值
                     * 
                     */
                    bool DestinationInterruptInfoHasBeenSet() const;

                private:

                    /**
                     * 项目 Id。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 项目状态，取值有：
<li>Started：点播转直播开始；</li>
<li>Stopped：点播转直播结束；</li>
<li>SourceInterrupted：点播转直播输入断流；</li>
<li>DestinationInterrupted：点播转直播输出断流。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 点播转直播输入断流信息，仅当 Status 取值 SourceInterrupted 时有效。
                     */
                    MediaCastSourceInterruptInfo m_sourceInterruptInfo;
                    bool m_sourceInterruptInfoHasBeenSet;

                    /**
                     * 点播转直播输出断流信息，仅当 Status 取值 DestinationInterrupted 时有效。
                     */
                    MediaCastDestinationInterruptInfo m_destinationInterruptInfo;
                    bool m_destinationInterruptInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_PROJECTMEDIACASTSTATUSCHANGEDEVENT_H_
