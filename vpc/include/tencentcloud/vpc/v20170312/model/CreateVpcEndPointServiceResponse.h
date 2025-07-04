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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPCENDPOINTSERVICERESPONSE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPCENDPOINTSERVICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/EndPointService.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateVpcEndPointService返回参数结构体
                */
                class CreateVpcEndPointServiceResponse : public AbstractModel
                {
                public:
                    CreateVpcEndPointServiceResponse();
                    ~CreateVpcEndPointServiceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取终端节点服务对象详细信息。
                     * @return EndPointService 终端节点服务对象详细信息。
                     * 
                     */
                    EndPointService GetEndPointService() const;

                    /**
                     * 判断参数 EndPointService 是否已赋值
                     * @return EndPointService 是否已赋值
                     * 
                     */
                    bool EndPointServiceHasBeenSet() const;

                private:

                    /**
                     * 终端节点服务对象详细信息。
                     */
                    EndPointService m_endPointService;
                    bool m_endPointServiceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEVPCENDPOINTSERVICERESPONSE_H_
