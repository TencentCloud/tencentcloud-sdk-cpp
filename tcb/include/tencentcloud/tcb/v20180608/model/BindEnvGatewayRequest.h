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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_BINDENVGATEWAYREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_BINDENVGATEWAYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * BindEnvGateway请求参数结构体
                */
                class BindEnvGatewayRequest : public AbstractModel
                {
                public:
                    BindEnvGatewayRequest();
                    ~BindEnvGatewayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取子环境id
                     * @return SubEnvId 子环境id
                     * 
                     */
                    std::string GetSubEnvId() const;

                    /**
                     * 设置子环境id
                     * @param _subEnvId 子环境id
                     * 
                     */
                    void SetSubEnvId(const std::string& _subEnvId);

                    /**
                     * 判断参数 SubEnvId 是否已赋值
                     * @return SubEnvId 是否已赋值
                     * 
                     */
                    bool SubEnvIdHasBeenSet() const;

                private:

                    /**
                     * 子环境id
                     */
                    std::string m_subEnvId;
                    bool m_subEnvIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_BINDENVGATEWAYREQUEST_H_
