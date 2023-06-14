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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_CREATESERVICELINKEDROLERESPONSE_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_CREATESERVICELINKEDROLERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * CreateServiceLinkedRole返回参数结构体
                */
                class CreateServiceLinkedRoleResponse : public AbstractModel
                {
                public:
                    CreateServiceLinkedRoleResponse();
                    ~CreateServiceLinkedRoleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取角色ID
                     * @return RoleId 角色ID
                     * 
                     */
                    std::string GetRoleId() const;

                    /**
                     * 判断参数 RoleId 是否已赋值
                     * @return RoleId 是否已赋值
                     * 
                     */
                    bool RoleIdHasBeenSet() const;

                private:

                    /**
                     * 角色ID
                     */
                    std::string m_roleId;
                    bool m_roleIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_CREATESERVICELINKEDROLERESPONSE_H_
