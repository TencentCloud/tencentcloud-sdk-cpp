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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DELETEROCKETMQROLESRESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DELETEROCKETMQROLESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DeleteRocketMQRoles返回参数结构体
                */
                class DeleteRocketMQRolesResponse : public AbstractModel
                {
                public:
                    DeleteRocketMQRolesResponse();
                    ~DeleteRocketMQRolesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取成功删除的角色名称数组。
                     * @return RoleNames 成功删除的角色名称数组。
                     * 
                     */
                    std::vector<std::string> GetRoleNames() const;

                    /**
                     * 判断参数 RoleNames 是否已赋值
                     * @return RoleNames 是否已赋值
                     * 
                     */
                    bool RoleNamesHasBeenSet() const;

                private:

                    /**
                     * 成功删除的角色名称数组。
                     */
                    std::vector<std::string> m_roleNames;
                    bool m_roleNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DELETEROCKETMQROLESRESPONSE_H_
