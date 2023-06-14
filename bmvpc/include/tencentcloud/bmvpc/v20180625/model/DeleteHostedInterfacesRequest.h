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

#ifndef TENCENTCLOUD_BMVPC_V20180625_MODEL_DELETEHOSTEDINTERFACESREQUEST_H_
#define TENCENTCLOUD_BMVPC_V20180625_MODEL_DELETEHOSTEDINTERFACESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmvpc
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * DeleteHostedInterfaces请求参数结构体
                */
                class DeleteHostedInterfacesRequest : public AbstractModel
                {
                public:
                    DeleteHostedInterfacesRequest();
                    ~DeleteHostedInterfacesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取物理机ID
                     * @return InstanceId 物理机ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置物理机ID
                     * @param _instanceId 物理机ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取物理机ID
                     * @return SubnetIds 物理机ID
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置物理机ID
                     * @param _subnetIds 物理机ID
                     * 
                     */
                    void SetSubnetIds(const std::vector<std::string>& _subnetIds);

                    /**
                     * 判断参数 SubnetIds 是否已赋值
                     * @return SubnetIds 是否已赋值
                     * 
                     */
                    bool SubnetIdsHasBeenSet() const;

                private:

                    /**
                     * 物理机ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 物理机ID
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_MODEL_DELETEHOSTEDINTERFACESREQUEST_H_
