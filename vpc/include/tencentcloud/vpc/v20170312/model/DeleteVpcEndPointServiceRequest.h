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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DELETEVPCENDPOINTSERVICEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DELETEVPCENDPOINTSERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DeleteVpcEndPointService请求参数结构体
                */
                class DeleteVpcEndPointServiceRequest : public AbstractModel
                {
                public:
                    DeleteVpcEndPointServiceRequest();
                    ~DeleteVpcEndPointServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取终端节点ID。
                     * @return EndPointServiceId 终端节点ID。
                     */
                    std::string GetEndPointServiceId() const;

                    /**
                     * 设置终端节点ID。
                     * @param EndPointServiceId 终端节点ID。
                     */
                    void SetEndPointServiceId(const std::string& _endPointServiceId);

                    /**
                     * 判断参数 EndPointServiceId 是否已赋值
                     * @return EndPointServiceId 是否已赋值
                     */
                    bool EndPointServiceIdHasBeenSet() const;

                private:

                    /**
                     * 终端节点ID。
                     */
                    std::string m_endPointServiceId;
                    bool m_endPointServiceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DELETEVPCENDPOINTSERVICEREQUEST_H_
