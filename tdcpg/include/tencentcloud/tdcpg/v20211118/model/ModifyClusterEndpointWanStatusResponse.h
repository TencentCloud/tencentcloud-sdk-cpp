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

#ifndef TENCENTCLOUD_TDCPG_V20211118_MODEL_MODIFYCLUSTERENDPOINTWANSTATUSRESPONSE_H_
#define TENCENTCLOUD_TDCPG_V20211118_MODEL_MODIFYCLUSTERENDPOINTWANSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdcpg
    {
        namespace V20211118
        {
            namespace Model
            {
                /**
                * ModifyClusterEndpointWanStatus返回参数结构体
                */
                class ModifyClusterEndpointWanStatusResponse : public AbstractModel
                {
                public:
                    ModifyClusterEndpointWanStatusResponse();
                    ~ModifyClusterEndpointWanStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                private:

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDCPG_V20211118_MODEL_MODIFYCLUSTERENDPOINTWANSTATUSRESPONSE_H_
