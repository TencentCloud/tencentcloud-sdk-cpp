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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_REPORTTASKLINEAGEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_REPORTTASKLINEAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/LineageTask.h>
#include <tencentcloud/wedata/v20210820/model/TableLineagePair.h>
#include <tencentcloud/wedata/v20210820/model/ColumnLineagePair.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * ReportTaskLineage请求参数结构体
                */
                class ReportTaskLineageRequest : public AbstractModel
                {
                public:
                    ReportTaskLineageRequest();
                    ~ReportTaskLineageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取上报渠道
                     * @return ChannelType 上报渠道
                     * 
                     */
                    std::string GetChannelType() const;

                    /**
                     * 设置上报渠道
                     * @param _channelType 上报渠道
                     * 
                     */
                    void SetChannelType(const std::string& _channelType);

                    /**
                     * 判断参数 ChannelType 是否已赋值
                     * @return ChannelType 是否已赋值
                     * 
                     */
                    bool ChannelTypeHasBeenSet() const;

                    /**
                     * 获取血缘任务
                     * @return Task 血缘任务
                     * 
                     */
                    LineageTask GetTask() const;

                    /**
                     * 设置血缘任务
                     * @param _task 血缘任务
                     * 
                     */
                    void SetTask(const LineageTask& _task);

                    /**
                     * 判断参数 Task 是否已赋值
                     * @return Task 是否已赋值
                     * 
                     */
                    bool TaskHasBeenSet() const;

                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
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
                     * 获取表血缘关系
                     * @return TableLineages 表血缘关系
                     * 
                     */
                    std::vector<TableLineagePair> GetTableLineages() const;

                    /**
                     * 设置表血缘关系
                     * @param _tableLineages 表血缘关系
                     * 
                     */
                    void SetTableLineages(const std::vector<TableLineagePair>& _tableLineages);

                    /**
                     * 判断参数 TableLineages 是否已赋值
                     * @return TableLineages 是否已赋值
                     * 
                     */
                    bool TableLineagesHasBeenSet() const;

                    /**
                     * 获取列血缘关系
                     * @return ColumnLineages 列血缘关系
                     * 
                     */
                    std::vector<ColumnLineagePair> GetColumnLineages() const;

                    /**
                     * 设置列血缘关系
                     * @param _columnLineages 列血缘关系
                     * 
                     */
                    void SetColumnLineages(const std::vector<ColumnLineagePair>& _columnLineages);

                    /**
                     * 判断参数 ColumnLineages 是否已赋值
                     * @return ColumnLineages 是否已赋值
                     * 
                     */
                    bool ColumnLineagesHasBeenSet() const;

                private:

                    /**
                     * 上报渠道
                     */
                    std::string m_channelType;
                    bool m_channelTypeHasBeenSet;

                    /**
                     * 血缘任务
                     */
                    LineageTask m_task;
                    bool m_taskHasBeenSet;

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 表血缘关系
                     */
                    std::vector<TableLineagePair> m_tableLineages;
                    bool m_tableLineagesHasBeenSet;

                    /**
                     * 列血缘关系
                     */
                    std::vector<ColumnLineagePair> m_columnLineages;
                    bool m_columnLineagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_REPORTTASKLINEAGEREQUEST_H_
