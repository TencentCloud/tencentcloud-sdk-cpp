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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_UPDATEBATCHTASKDATASOURCEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_UPDATEBATCHTASKDATASOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * UpdateBatchTaskDatasource请求参数结构体
                */
                class UpdateBatchTaskDatasourceRequest : public AbstractModel
                {
                public:
                    UpdateBatchTaskDatasourceRequest();
                    ~UpdateBatchTaskDatasourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待更新的任务ID
                     * @return TaskIds 待更新的任务ID
                     * 
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 设置待更新的任务ID
                     * @param _taskIds 待更新的任务ID
                     * 
                     */
                    void SetTaskIds(const std::vector<std::string>& _taskIds);

                    /**
                     * 判断参数 TaskIds 是否已赋值
                     * @return TaskIds 是否已赋值
                     * 
                     */
                    bool TaskIdsHasBeenSet() const;

                    /**
                     * 获取数据源ID
                     * @return DatasourceId 数据源ID
                     * 
                     */
                    std::string GetDatasourceId() const;

                    /**
                     * 设置数据源ID
                     * @param _datasourceId 数据源ID
                     * 
                     */
                    void SetDatasourceId(const std::string& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     * 
                     */
                    bool DatasourceIdHasBeenSet() const;

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
                     * 获取数据源类型
                     * @return DatasourceType 数据源类型
                     * 
                     */
                    std::string GetDatasourceType() const;

                    /**
                     * 设置数据源类型
                     * @param _datasourceType 数据源类型
                     * 
                     */
                    void SetDatasourceType(const std::string& _datasourceType);

                    /**
                     * 判断参数 DatasourceType 是否已赋值
                     * @return DatasourceType 是否已赋值
                     * 
                     */
                    bool DatasourceTypeHasBeenSet() const;

                private:

                    /**
                     * 待更新的任务ID
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * 数据源ID
                     */
                    std::string m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 数据源类型
                     */
                    std::string m_datasourceType;
                    bool m_datasourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_UPDATEBATCHTASKDATASOURCEREQUEST_H_
