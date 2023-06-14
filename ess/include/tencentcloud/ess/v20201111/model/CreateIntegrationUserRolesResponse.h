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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEINTEGRATIONUSERROLESRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEINTEGRATIONUSERROLESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/FailedCreateRoleData.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * CreateIntegrationUserRoles返回参数结构体
                */
                class CreateIntegrationUserRolesResponse : public AbstractModel
                {
                public:
                    CreateIntegrationUserRolesResponse();
                    ~CreateIntegrationUserRolesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取绑定角色失败列表信息
                     * @return FailedCreateRoleData 绑定角色失败列表信息
                     * 
                     */
                    std::vector<FailedCreateRoleData> GetFailedCreateRoleData() const;

                    /**
                     * 判断参数 FailedCreateRoleData 是否已赋值
                     * @return FailedCreateRoleData 是否已赋值
                     * 
                     */
                    bool FailedCreateRoleDataHasBeenSet() const;

                private:

                    /**
                     * 绑定角色失败列表信息
                     */
                    std::vector<FailedCreateRoleData> m_failedCreateRoleData;
                    bool m_failedCreateRoleDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEINTEGRATIONUSERROLESRESPONSE_H_
