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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASERUNCONFFORGATEWAYREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASERUNCONFFORGATEWAYREQUEST_H_

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
                * DescribeCloudBaseRunConfForGateWay请求参数结构体
                */
                class DescribeCloudBaseRunConfForGateWayRequest : public AbstractModel
                {
                public:
                    DescribeCloudBaseRunConfForGateWayRequest();
                    ~DescribeCloudBaseRunConfForGateWayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境ID
                     * @return EnvID 环境ID
                     * 
                     */
                    std::string GetEnvID() const;

                    /**
                     * 设置环境ID
                     * @param _envID 环境ID
                     * 
                     */
                    void SetEnvID(const std::string& _envID);

                    /**
                     * 判断参数 EnvID 是否已赋值
                     * @return EnvID 是否已赋值
                     * 
                     */
                    bool EnvIDHasBeenSet() const;

                    /**
                     * 获取vpc信息
                     * @return VpcID vpc信息
                     * 
                     */
                    std::string GetVpcID() const;

                    /**
                     * 设置vpc信息
                     * @param _vpcID vpc信息
                     * 
                     */
                    void SetVpcID(const std::string& _vpcID);

                    /**
                     * 判断参数 VpcID 是否已赋值
                     * @return VpcID 是否已赋值
                     * 
                     */
                    bool VpcIDHasBeenSet() const;

                private:

                    /**
                     * 环境ID
                     */
                    std::string m_envID;
                    bool m_envIDHasBeenSet;

                    /**
                     * vpc信息
                     */
                    std::string m_vpcID;
                    bool m_vpcIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDBASERUNCONFFORGATEWAYREQUEST_H_
