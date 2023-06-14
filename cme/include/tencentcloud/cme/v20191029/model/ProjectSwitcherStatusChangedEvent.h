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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_PROJECTSWITCHERSTATUSCHANGEDEVENT_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_PROJECTSWITCHERSTATUSCHANGEDEVENT_H_

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
                * 导播台项目状态变更事件
                */
                class ProjectSwitcherStatusChangedEvent : public AbstractModel
                {
                public:
                    ProjectSwitcherStatusChangedEvent();
                    ~ProjectSwitcherStatusChangedEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取导播台项目 Id。
                     * @return ProjectId 导播台项目 Id。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置导播台项目 Id。
                     * @param _projectId 导播台项目 Id。
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
                     * 获取导播台项目状态，可取值有：
<li>Started：导播台启动；</li>
<li>Stopped：导播台停止；</li>
<li>PvwStarted：导播台 PVW 开启；</li>
<li>PgmStarted：导播台 PGM 开启，输出推流开始；</li>
<li>PvwStopped：导播台 PVW 停止；</li>
<li>PgmStopped：导播台 PGM 停止，输出推流结束。</li>
                     * @return Status 导播台项目状态，可取值有：
<li>Started：导播台启动；</li>
<li>Stopped：导播台停止；</li>
<li>PvwStarted：导播台 PVW 开启；</li>
<li>PgmStarted：导播台 PGM 开启，输出推流开始；</li>
<li>PvwStopped：导播台 PVW 停止；</li>
<li>PgmStopped：导播台 PGM 停止，输出推流结束。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置导播台项目状态，可取值有：
<li>Started：导播台启动；</li>
<li>Stopped：导播台停止；</li>
<li>PvwStarted：导播台 PVW 开启；</li>
<li>PgmStarted：导播台 PGM 开启，输出推流开始；</li>
<li>PvwStopped：导播台 PVW 停止；</li>
<li>PgmStopped：导播台 PGM 停止，输出推流结束。</li>
                     * @param _status 导播台项目状态，可取值有：
<li>Started：导播台启动；</li>
<li>Stopped：导播台停止；</li>
<li>PvwStarted：导播台 PVW 开启；</li>
<li>PgmStarted：导播台 PGM 开启，输出推流开始；</li>
<li>PvwStopped：导播台 PVW 停止；</li>
<li>PgmStopped：导播台 PGM 停止，输出推流结束。</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 导播台项目 Id。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 导播台项目状态，可取值有：
<li>Started：导播台启动；</li>
<li>Stopped：导播台停止；</li>
<li>PvwStarted：导播台 PVW 开启；</li>
<li>PgmStarted：导播台 PGM 开启，输出推流开始；</li>
<li>PvwStopped：导播台 PVW 停止；</li>
<li>PgmStopped：导播台 PGM 停止，输出推流结束。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_PROJECTSWITCHERSTATUSCHANGEDEVENT_H_
