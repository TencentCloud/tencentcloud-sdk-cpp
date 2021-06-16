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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_PROJECTSTREAMCONNECTSTATUSCHANGEDEVENT_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_PROJECTSTREAMCONNECTSTATUSCHANGEDEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 云转推项目状态变更事件。
                */
                class ProjectStreamConnectStatusChangedEvent : public AbstractModel
                {
                public:
                    ProjectStreamConnectStatusChangedEvent();
                    ~ProjectStreamConnectStatusChangedEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取项目 Id。
                     * @return ProjectId 项目 Id。
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目 Id。
                     * @param ProjectId 项目 Id。
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取项目状态，取值有：
<li>Working：云转推推流开始；</li>
<li>Stopped：云转推推流结束。</li>
                     * @return Status 项目状态，取值有：
<li>Working：云转推推流开始；</li>
<li>Stopped：云转推推流结束。</li>
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置项目状态，取值有：
<li>Working：云转推推流开始；</li>
<li>Stopped：云转推推流结束。</li>
                     * @param Status 项目状态，取值有：
<li>Working：云转推推流开始；</li>
<li>Stopped：云转推推流结束。</li>
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 项目 Id。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 项目状态，取值有：
<li>Working：云转推推流开始；</li>
<li>Stopped：云转推推流结束。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_PROJECTSTREAMCONNECTSTATUSCHANGEDEVENT_H_
