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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_UPDATEINTEGRATIONEMPLOYEESRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_UPDATEINTEGRATIONEMPLOYEESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/SuccessUpdateStaffData.h>
#include <tencentcloud/ess/v20201111/model/FailedUpdateStaffData.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * UpdateIntegrationEmployees返回参数结构体
                */
                class UpdateIntegrationEmployeesResponse : public AbstractModel
                {
                public:
                    UpdateIntegrationEmployeesResponse();
                    ~UpdateIntegrationEmployeesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取更新成功的用户列表
                     * @return SuccessEmployeeData 更新成功的用户列表
                     * 
                     */
                    std::vector<SuccessUpdateStaffData> GetSuccessEmployeeData() const;

                    /**
                     * 判断参数 SuccessEmployeeData 是否已赋值
                     * @return SuccessEmployeeData 是否已赋值
                     * 
                     */
                    bool SuccessEmployeeDataHasBeenSet() const;

                    /**
                     * 获取更新失败的用户列表
                     * @return FailedEmployeeData 更新失败的用户列表
                     * 
                     */
                    std::vector<FailedUpdateStaffData> GetFailedEmployeeData() const;

                    /**
                     * 判断参数 FailedEmployeeData 是否已赋值
                     * @return FailedEmployeeData 是否已赋值
                     * 
                     */
                    bool FailedEmployeeDataHasBeenSet() const;

                private:

                    /**
                     * 更新成功的用户列表
                     */
                    std::vector<SuccessUpdateStaffData> m_successEmployeeData;
                    bool m_successEmployeeDataHasBeenSet;

                    /**
                     * 更新失败的用户列表
                     */
                    std::vector<FailedUpdateStaffData> m_failedEmployeeData;
                    bool m_failedEmployeeDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_UPDATEINTEGRATIONEMPLOYEESRESPONSE_H_
