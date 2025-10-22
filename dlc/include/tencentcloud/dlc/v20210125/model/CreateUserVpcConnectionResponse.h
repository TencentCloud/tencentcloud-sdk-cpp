/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATEUSERVPCCONNECTIONRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATEUSERVPCCONNECTIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CreateUserVpcConnection返回参数结构体
                */
                class CreateUserVpcConnectionResponse : public AbstractModel
                {
                public:
                    CreateUserVpcConnectionResponse();
                    ~CreateUserVpcConnectionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取终端节点IP
                     * @return UserVpcEndpointId 终端节点IP
                     * 
                     */
                    std::string GetUserVpcEndpointId() const;

                    /**
                     * 判断参数 UserVpcEndpointId 是否已赋值
                     * @return UserVpcEndpointId 是否已赋值
                     * 
                     */
                    bool UserVpcEndpointIdHasBeenSet() const;

                private:

                    /**
                     * 终端节点IP
                     */
                    std::string m_userVpcEndpointId;
                    bool m_userVpcEndpointIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATEUSERVPCCONNECTIONRESPONSE_H_
