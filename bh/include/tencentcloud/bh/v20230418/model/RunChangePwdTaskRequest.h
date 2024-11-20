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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_RUNCHANGEPWDTASKREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_RUNCHANGEPWDTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bh/v20230418/model/RunChangePwdTaskDetail.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * RunChangePwdTask请求参数结构体
                */
                class RunChangePwdTaskRequest : public AbstractModel
                {
                public:
                    RunChangePwdTaskRequest();
                    ~RunChangePwdTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务Id
                     * @return OperationId 任务Id
                     * 
                     */
                    std::string GetOperationId() const;

                    /**
                     * 设置任务Id
                     * @param _operationId 任务Id
                     * 
                     */
                    void SetOperationId(const std::string& _operationId);

                    /**
                     * 判断参数 OperationId 是否已赋值
                     * @return OperationId 是否已赋值
                     * 
                     */
                    bool OperationIdHasBeenSet() const;

                    /**
                     * 获取部门id
                     * @return DepartmentId 部门id
                     * 
                     */
                    std::string GetDepartmentId() const;

                    /**
                     * 设置部门id
                     * @param _departmentId 部门id
                     * 
                     */
                    void SetDepartmentId(const std::string& _departmentId);

                    /**
                     * 判断参数 DepartmentId 是否已赋值
                     * @return DepartmentId 是否已赋值
                     * 
                     */
                    bool DepartmentIdHasBeenSet() const;

                    /**
                     * 获取改密任务详情
                     * @return Details 改密任务详情
                     * 
                     */
                    std::vector<RunChangePwdTaskDetail> GetDetails() const;

                    /**
                     * 设置改密任务详情
                     * @param _details 改密任务详情
                     * 
                     */
                    void SetDetails(const std::vector<RunChangePwdTaskDetail>& _details);

                    /**
                     * 判断参数 Details 是否已赋值
                     * @return Details 是否已赋值
                     * 
                     */
                    bool DetailsHasBeenSet() const;

                private:

                    /**
                     * 任务Id
                     */
                    std::string m_operationId;
                    bool m_operationIdHasBeenSet;

                    /**
                     * 部门id
                     */
                    std::string m_departmentId;
                    bool m_departmentIdHasBeenSet;

                    /**
                     * 改密任务详情
                     */
                    std::vector<RunChangePwdTaskDetail> m_details;
                    bool m_detailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_RUNCHANGEPWDTASKREQUEST_H_
