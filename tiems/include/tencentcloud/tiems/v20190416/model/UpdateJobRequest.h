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

#ifndef TENCENTCLOUD_TIEMS_V20190416_MODEL_UPDATEJOBREQUEST_H_
#define TENCENTCLOUD_TIEMS_V20190416_MODEL_UPDATEJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiems
    {
        namespace V20190416
        {
            namespace Model
            {
                /**
                * UpdateJob请求参数结构体
                */
                class UpdateJobRequest : public AbstractModel
                {
                public:
                    UpdateJobRequest();
                    ~UpdateJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务 Id
                     * @return JobId 任务 Id
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置任务 Id
                     * @param _jobId 任务 Id
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取任务更新动作，支持：Cancel
                     * @return JobAction 任务更新动作，支持：Cancel
                     * 
                     */
                    std::string GetJobAction() const;

                    /**
                     * 设置任务更新动作，支持：Cancel
                     * @param _jobAction 任务更新动作，支持：Cancel
                     * 
                     */
                    void SetJobAction(const std::string& _jobAction);

                    /**
                     * 判断参数 JobAction 是否已赋值
                     * @return JobAction 是否已赋值
                     * 
                     */
                    bool JobActionHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Description 备注
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置备注
                     * @param _description 备注
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 任务 Id
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 任务更新动作，支持：Cancel
                     */
                    std::string m_jobAction;
                    bool m_jobActionHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIEMS_V20190416_MODEL_UPDATEJOBREQUEST_H_
