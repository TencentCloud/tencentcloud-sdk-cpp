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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_OPSTASKCANVASINFOLIST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_OPSTASKCANVASINFOLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/OpsTaskCanvasDto.h>
#include <tencentcloud/wedata/v20210820/model/OpsTaskLinkInfoDto.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 画布所需的信息
                */
                class OpsTaskCanvasInfoList : public AbstractModel
                {
                public:
                    OpsTaskCanvasInfoList();
                    ~OpsTaskCanvasInfoList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取画布任务信息
                     * @return TasksList 画布任务信息
                     * 
                     */
                    std::vector<OpsTaskCanvasDto> GetTasksList() const;

                    /**
                     * 设置画布任务信息
                     * @param _tasksList 画布任务信息
                     * 
                     */
                    void SetTasksList(const std::vector<OpsTaskCanvasDto>& _tasksList);

                    /**
                     * 判断参数 TasksList 是否已赋值
                     * @return TasksList 是否已赋值
                     * 
                     */
                    bool TasksListHasBeenSet() const;

                    /**
                     * 获取画布任务链接信息
                     * @return LinksList 画布任务链接信息
                     * 
                     */
                    std::vector<OpsTaskLinkInfoDto> GetLinksList() const;

                    /**
                     * 设置画布任务链接信息
                     * @param _linksList 画布任务链接信息
                     * 
                     */
                    void SetLinksList(const std::vector<OpsTaskLinkInfoDto>& _linksList);

                    /**
                     * 判断参数 LinksList 是否已赋值
                     * @return LinksList 是否已赋值
                     * 
                     */
                    bool LinksListHasBeenSet() const;

                    /**
                     * 获取画布循环依赖任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CirculateTaskList 画布循环依赖任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<OpsTaskCanvasDto> GetCirculateTaskList() const;

                    /**
                     * 设置画布循环依赖任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _circulateTaskList 画布循环依赖任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCirculateTaskList(const std::vector<OpsTaskCanvasDto>& _circulateTaskList);

                    /**
                     * 判断参数 CirculateTaskList 是否已赋值
                     * @return CirculateTaskList 是否已赋值
                     * 
                     */
                    bool CirculateTaskListHasBeenSet() const;

                private:

                    /**
                     * 画布任务信息
                     */
                    std::vector<OpsTaskCanvasDto> m_tasksList;
                    bool m_tasksListHasBeenSet;

                    /**
                     * 画布任务链接信息
                     */
                    std::vector<OpsTaskLinkInfoDto> m_linksList;
                    bool m_linksListHasBeenSet;

                    /**
                     * 画布循环依赖任务信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<OpsTaskCanvasDto> m_circulateTaskList;
                    bool m_circulateTaskListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_OPSTASKCANVASINFOLIST_H_
