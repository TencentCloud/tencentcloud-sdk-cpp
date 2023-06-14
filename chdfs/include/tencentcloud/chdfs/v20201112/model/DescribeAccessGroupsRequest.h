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

#ifndef TENCENTCLOUD_CHDFS_V20201112_MODEL_DESCRIBEACCESSGROUPSREQUEST_H_
#define TENCENTCLOUD_CHDFS_V20201112_MODEL_DESCRIBEACCESSGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chdfs
    {
        namespace V20201112
        {
            namespace Model
            {
                /**
                * DescribeAccessGroups请求参数结构体
                */
                class DescribeAccessGroupsRequest : public AbstractModel
                {
                public:
                    DescribeAccessGroupsRequest();
                    ~DescribeAccessGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VPC网络ID
备注：入参只能指定VpcId和OwnerUin的其中一个
                     * @return VpcId VPC网络ID
备注：入参只能指定VpcId和OwnerUin的其中一个
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC网络ID
备注：入参只能指定VpcId和OwnerUin的其中一个
                     * @param _vpcId VPC网络ID
备注：入参只能指定VpcId和OwnerUin的其中一个
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
                     * 获取资源所属者Uin
                     * @return OwnerUin 资源所属者Uin
                     * 
                     */
                    uint64_t GetOwnerUin() const;

                    /**
                     * 设置资源所属者Uin
                     * @param _ownerUin 资源所属者Uin
                     * 
                     */
                    void SetOwnerUin(const uint64_t& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                private:

                    /**
                     * VPC网络ID
备注：入参只能指定VpcId和OwnerUin的其中一个
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 资源所属者Uin
                     */
                    uint64_t m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20201112_MODEL_DESCRIBEACCESSGROUPSREQUEST_H_
