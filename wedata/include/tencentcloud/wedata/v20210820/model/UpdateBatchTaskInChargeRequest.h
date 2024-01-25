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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_UPDATEBATCHTASKINCHARGEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_UPDATEBATCHTASKINCHARGEREQUEST_H_

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
                * UpdateBatchTaskInCharge请求参数结构体
                */
                class UpdateBatchTaskInChargeRequest : public AbstractModel
                {
                public:
                    UpdateBatchTaskInChargeRequest();
                    ~UpdateBatchTaskInChargeRequest() = default;
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
                     * 获取责任人
                     * @return InCharge 责任人
                     * 
                     */
                    std::string GetInCharge() const;

                    /**
                     * 设置责任人
                     * @param _inCharge 责任人
                     * 
                     */
                    void SetInCharge(const std::string& _inCharge);

                    /**
                     * 判断参数 InCharge 是否已赋值
                     * @return InCharge 是否已赋值
                     * 
                     */
                    bool InChargeHasBeenSet() const;

                    /**
                     * 获取责任人Id
                     * @return InChargeId 责任人Id
                     * 
                     */
                    std::string GetInChargeId() const;

                    /**
                     * 设置责任人Id
                     * @param _inChargeId 责任人Id
                     * 
                     */
                    void SetInChargeId(const std::string& _inChargeId);

                    /**
                     * 判断参数 InChargeId 是否已赋值
                     * @return InChargeId 是否已赋值
                     * 
                     */
                    bool InChargeIdHasBeenSet() const;

                    /**
                     * 获取项目Id
                     * @return ProjectId 项目Id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目Id
                     * @param _projectId 项目Id
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
                     * 责任人
                     */
                    std::string m_inCharge;
                    bool m_inChargeHasBeenSet;

                    /**
                     * 责任人Id
                     */
                    std::string m_inChargeId;
                    bool m_inChargeIdHasBeenSet;

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_UPDATEBATCHTASKINCHARGEREQUEST_H_
