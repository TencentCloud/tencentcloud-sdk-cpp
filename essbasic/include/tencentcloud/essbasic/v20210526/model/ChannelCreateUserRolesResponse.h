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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEUSERROLESRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEUSERROLESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/FailedCreateRoleData.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * ChannelCreateUserRoles返回参数结构体
                */
                class ChannelCreateUserRolesResponse : public AbstractModel
                {
                public:
                    ChannelCreateUserRolesResponse();
                    ~ChannelCreateUserRolesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取绑定失败的用户角色列表
                     * @return FailedCreateRoleData 绑定失败的用户角色列表
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
                     * 绑定失败的用户角色列表
                     */
                    std::vector<FailedCreateRoleData> m_failedCreateRoleData;
                    bool m_failedCreateRoleDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CHANNELCREATEUSERROLESRESPONSE_H_
