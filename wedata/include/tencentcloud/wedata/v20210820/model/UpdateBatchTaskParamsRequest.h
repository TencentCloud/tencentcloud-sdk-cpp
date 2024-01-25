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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_UPDATEBATCHTASKPARAMSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_UPDATEBATCHTASKPARAMSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/ParamMapDsDto.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * UpdateBatchTaskParams请求参数结构体
                */
                class UpdateBatchTaskParamsRequest : public AbstractModel
                {
                public:
                    UpdateBatchTaskParamsRequest();
                    ~UpdateBatchTaskParamsRequest() = default;
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
                     * 获取调度参数键值对
                     * @return MapParamList 调度参数键值对
                     * 
                     */
                    std::vector<ParamMapDsDto> GetMapParamList() const;

                    /**
                     * 设置调度参数键值对
                     * @param _mapParamList 调度参数键值对
                     * 
                     */
                    void SetMapParamList(const std::vector<ParamMapDsDto>& _mapParamList);

                    /**
                     * 判断参数 MapParamList 是否已赋值
                     * @return MapParamList 是否已赋值
                     * 
                     */
                    bool MapParamListHasBeenSet() const;

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

                private:

                    /**
                     * 待更新的任务ID
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * 调度参数键值对
                     */
                    std::vector<ParamMapDsDto> m_mapParamList;
                    bool m_mapParamListHasBeenSet;

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_UPDATEBATCHTASKPARAMSREQUEST_H_
