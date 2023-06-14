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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_GETROLERESPONSE_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_GETROLERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cam/v20190116/model/RoleInfo.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * GetRole返回参数结构体
                */
                class GetRoleResponse : public AbstractModel
                {
                public:
                    GetRoleResponse();
                    ~GetRoleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取角色详情
                     * @return RoleInfo 角色详情
                     * 
                     */
                    RoleInfo GetRoleInfo() const;

                    /**
                     * 判断参数 RoleInfo 是否已赋值
                     * @return RoleInfo 是否已赋值
                     * 
                     */
                    bool RoleInfoHasBeenSet() const;

                private:

                    /**
                     * 角色详情
                     */
                    RoleInfo m_roleInfo;
                    bool m_roleInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_GETROLERESPONSE_H_
