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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_UPDATEBATCHTASKPARAMETERREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_UPDATEBATCHTASKPARAMETERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/UpdateBatchTaskParameterDTO.h>
#include <tencentcloud/wedata/v20210820/model/TCHouseXTaskParameter.h>
#include <tencentcloud/wedata/v20210820/model/SparkParameterDTO.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * UpdateBatchTaskParameter请求参数结构体
                */
                class UpdateBatchTaskParameterRequest : public AbstractModel
                {
                public:
                    UpdateBatchTaskParameterRequest();
                    ~UpdateBatchTaskParameterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取1
                     * @return TaskIds 1
                     * 
                     */
                    std::vector<std::string> GetTaskIds() const;

                    /**
                     * 设置1
                     * @param _taskIds 1
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
                     * 获取DLC任务参数
                     * @return DlcParameterInfo DLC任务参数
                     * 
                     */
                    UpdateBatchTaskParameterDTO GetDlcParameterInfo() const;

                    /**
                     * 设置DLC任务参数
                     * @param _dlcParameterInfo DLC任务参数
                     * 
                     */
                    void SetDlcParameterInfo(const UpdateBatchTaskParameterDTO& _dlcParameterInfo);

                    /**
                     * 判断参数 DlcParameterInfo 是否已赋值
                     * @return DlcParameterInfo 是否已赋值
                     * 
                     */
                    bool DlcParameterInfoHasBeenSet() const;

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
                     * 获取TCHouse-X任务参数
                     * @return TCHouseXTaskParameter TCHouse-X任务参数
                     * 
                     */
                    TCHouseXTaskParameter GetTCHouseXTaskParameter() const;

                    /**
                     * 设置TCHouse-X任务参数
                     * @param _tCHouseXTaskParameter TCHouse-X任务参数
                     * 
                     */
                    void SetTCHouseXTaskParameter(const TCHouseXTaskParameter& _tCHouseXTaskParameter);

                    /**
                     * 判断参数 TCHouseXTaskParameter 是否已赋值
                     * @return TCHouseXTaskParameter 是否已赋值
                     * 
                     */
                    bool TCHouseXTaskParameterHasBeenSet() const;

                    /**
                     * 获取SparkSQL或者PySpark任务参数
                     * @return SparkParameterInfo SparkSQL或者PySpark任务参数
                     * 
                     */
                    SparkParameterDTO GetSparkParameterInfo() const;

                    /**
                     * 设置SparkSQL或者PySpark任务参数
                     * @param _sparkParameterInfo SparkSQL或者PySpark任务参数
                     * 
                     */
                    void SetSparkParameterInfo(const SparkParameterDTO& _sparkParameterInfo);

                    /**
                     * 判断参数 SparkParameterInfo 是否已赋值
                     * @return SparkParameterInfo 是否已赋值
                     * 
                     */
                    bool SparkParameterInfoHasBeenSet() const;

                private:

                    /**
                     * 1
                     */
                    std::vector<std::string> m_taskIds;
                    bool m_taskIdsHasBeenSet;

                    /**
                     * DLC任务参数
                     */
                    UpdateBatchTaskParameterDTO m_dlcParameterInfo;
                    bool m_dlcParameterInfoHasBeenSet;

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * TCHouse-X任务参数
                     */
                    TCHouseXTaskParameter m_tCHouseXTaskParameter;
                    bool m_tCHouseXTaskParameterHasBeenSet;

                    /**
                     * SparkSQL或者PySpark任务参数
                     */
                    SparkParameterDTO m_sparkParameterInfo;
                    bool m_sparkParameterInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_UPDATEBATCHTASKPARAMETERREQUEST_H_
