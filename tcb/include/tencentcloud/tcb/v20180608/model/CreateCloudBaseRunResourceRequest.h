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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_CREATECLOUDBASERUNRESOURCEREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_CREATECLOUDBASERUNRESOURCEREQUEST_H_

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
                * CreateCloudBaseRunResource请求参数结构体
                */
                class CreateCloudBaseRunResourceRequest : public AbstractModel
                {
                public:
                    CreateCloudBaseRunResourceRequest();
                    ~CreateCloudBaseRunResourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境ID
                     * @return EnvId 环境ID
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境ID
                     * @param _envId 环境ID
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取vpc的ID
                     * @return VpcId vpc的ID
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpc的ID
                     * @param _vpcId vpc的ID
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网ID列表，当VpcId不为空，SubnetIds也不能为空
                     * @return SubnetIds 子网ID列表，当VpcId不为空，SubnetIds也不能为空
                     * 
                     */
                    std::vector<std::string> GetSubnetIds() const;

                    /**
                     * 设置子网ID列表，当VpcId不为空，SubnetIds也不能为空
                     * @param _subnetIds 子网ID列表，当VpcId不为空，SubnetIds也不能为空
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
                     * 环境ID
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * vpc的ID
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网ID列表，当VpcId不为空，SubnetIds也不能为空
                     */
                    std::vector<std::string> m_subnetIds;
                    bool m_subnetIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_CREATECLOUDBASERUNRESOURCEREQUEST_H_
