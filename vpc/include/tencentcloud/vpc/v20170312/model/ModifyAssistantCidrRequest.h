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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYASSISTANTCIDRREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYASSISTANTCIDRREQUEST_H_

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
                * ModifyAssistantCidr请求参数结构体
                */
                class ModifyAssistantCidrRequest : public AbstractModel
                {
                public:
                    ModifyAssistantCidrRequest();
                    ~ModifyAssistantCidrRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取`VPC`实例`ID`。形如：`vpc-6v2ht8q5`。
                     * @return VpcId `VPC`实例`ID`。形如：`vpc-6v2ht8q5`。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置`VPC`实例`ID`。形如：`vpc-6v2ht8q5`。
                     * @param _vpcId `VPC`实例`ID`。形如：`vpc-6v2ht8q5`。
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
                     * 获取待添加的辅助CIDR。CIDR数组，格式如["10.0.0.0/16", "172.16.0.0/16"]，入参NewCidrBlocks和OldCidrBlocks至少需要其一。
                     * @return NewCidrBlocks 待添加的辅助CIDR。CIDR数组，格式如["10.0.0.0/16", "172.16.0.0/16"]，入参NewCidrBlocks和OldCidrBlocks至少需要其一。
                     * 
                     */
                    std::vector<std::string> GetNewCidrBlocks() const;

                    /**
                     * 设置待添加的辅助CIDR。CIDR数组，格式如["10.0.0.0/16", "172.16.0.0/16"]，入参NewCidrBlocks和OldCidrBlocks至少需要其一。
                     * @param _newCidrBlocks 待添加的辅助CIDR。CIDR数组，格式如["10.0.0.0/16", "172.16.0.0/16"]，入参NewCidrBlocks和OldCidrBlocks至少需要其一。
                     * 
                     */
                    void SetNewCidrBlocks(const std::vector<std::string>& _newCidrBlocks);

                    /**
                     * 判断参数 NewCidrBlocks 是否已赋值
                     * @return NewCidrBlocks 是否已赋值
                     * 
                     */
                    bool NewCidrBlocksHasBeenSet() const;

                    /**
                     * 获取待删除的辅助CIDR。CIDR数组，格式如["10.0.0.0/16", "172.16.0.0/16"]，入参NewCidrBlocks和OldCidrBlocks至少需要其一。
                     * @return OldCidrBlocks 待删除的辅助CIDR。CIDR数组，格式如["10.0.0.0/16", "172.16.0.0/16"]，入参NewCidrBlocks和OldCidrBlocks至少需要其一。
                     * 
                     */
                    std::vector<std::string> GetOldCidrBlocks() const;

                    /**
                     * 设置待删除的辅助CIDR。CIDR数组，格式如["10.0.0.0/16", "172.16.0.0/16"]，入参NewCidrBlocks和OldCidrBlocks至少需要其一。
                     * @param _oldCidrBlocks 待删除的辅助CIDR。CIDR数组，格式如["10.0.0.0/16", "172.16.0.0/16"]，入参NewCidrBlocks和OldCidrBlocks至少需要其一。
                     * 
                     */
                    void SetOldCidrBlocks(const std::vector<std::string>& _oldCidrBlocks);

                    /**
                     * 判断参数 OldCidrBlocks 是否已赋值
                     * @return OldCidrBlocks 是否已赋值
                     * 
                     */
                    bool OldCidrBlocksHasBeenSet() const;

                private:

                    /**
                     * `VPC`实例`ID`。形如：`vpc-6v2ht8q5`。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 待添加的辅助CIDR。CIDR数组，格式如["10.0.0.0/16", "172.16.0.0/16"]，入参NewCidrBlocks和OldCidrBlocks至少需要其一。
                     */
                    std::vector<std::string> m_newCidrBlocks;
                    bool m_newCidrBlocksHasBeenSet;

                    /**
                     * 待删除的辅助CIDR。CIDR数组，格式如["10.0.0.0/16", "172.16.0.0/16"]，入参NewCidrBlocks和OldCidrBlocks至少需要其一。
                     */
                    std::vector<std::string> m_oldCidrBlocks;
                    bool m_oldCidrBlocksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYASSISTANTCIDRREQUEST_H_
