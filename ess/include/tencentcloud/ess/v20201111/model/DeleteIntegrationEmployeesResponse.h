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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DELETEINTEGRATIONEMPLOYEESRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DELETEINTEGRATIONEMPLOYEESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/DeleteStaffsResult.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * DeleteIntegrationEmployees返回参数结构体
                */
                class DeleteIntegrationEmployeesResponse : public AbstractModel
                {
                public:
                    DeleteIntegrationEmployeesResponse();
                    ~DeleteIntegrationEmployeesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取员工删除结果。包含成功数据与失败数据。
<ul><li>**成功数据**：展示员工姓名、手机号与电子签平台UserId</li>
<li>**失败数据**：展示员工电子签平台UserId、第三方平台OpenId和失败原因</li></ul>
                     * @return DeleteEmployeeResult 员工删除结果。包含成功数据与失败数据。
<ul><li>**成功数据**：展示员工姓名、手机号与电子签平台UserId</li>
<li>**失败数据**：展示员工电子签平台UserId、第三方平台OpenId和失败原因</li></ul>
                     * 
                     */
                    DeleteStaffsResult GetDeleteEmployeeResult() const;

                    /**
                     * 判断参数 DeleteEmployeeResult 是否已赋值
                     * @return DeleteEmployeeResult 是否已赋值
                     * 
                     */
                    bool DeleteEmployeeResultHasBeenSet() const;

                private:

                    /**
                     * 员工删除结果。包含成功数据与失败数据。
<ul><li>**成功数据**：展示员工姓名、手机号与电子签平台UserId</li>
<li>**失败数据**：展示员工电子签平台UserId、第三方平台OpenId和失败原因</li></ul>
                     */
                    DeleteStaffsResult m_deleteEmployeeResult;
                    bool m_deleteEmployeeResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DELETEINTEGRATIONEMPLOYEESRESPONSE_H_
