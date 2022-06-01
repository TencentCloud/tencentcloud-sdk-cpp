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

#ifndef TENCENTCLOUD_DASB_V20191018_MODEL_DESCRIBERESOURCESREQUEST_H_
#define TENCENTCLOUD_DASB_V20191018_MODEL_DESCRIBERESOURCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dasb
    {
        namespace V20191018
        {
            namespace Model
            {
                /**
                * DescribeResources请求参数结构体
                */
                class DescribeResourcesRequest : public AbstractModel
                {
                public:
                    DescribeResourcesRequest();
                    ~DescribeResourcesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取地域码, 如: ap-guangzhou
                     * @return ApCode 地域码, 如: ap-guangzhou
                     */
                    std::string GetApCode() const;

                    /**
                     * 设置地域码, 如: ap-guangzhou
                     * @param ApCode 地域码, 如: ap-guangzhou
                     */
                    void SetApCode(const std::string& _apCode);

                    /**
                     * 判断参数 ApCode 是否已赋值
                     * @return ApCode 是否已赋值
                     */
                    bool ApCodeHasBeenSet() const;

                    /**
                     * 获取按照堡垒机开通的 VPC 实例ID查询
                     * @return VpcId 按照堡垒机开通的 VPC 实例ID查询
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置按照堡垒机开通的 VPC 实例ID查询
                     * @param VpcId 按照堡垒机开通的 VPC 实例ID查询
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取资源ID集合，当传入ID集合时忽略 ApCode 和 VpcId
                     * @return ResourceIds 资源ID集合，当传入ID集合时忽略 ApCode 和 VpcId
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置资源ID集合，当传入ID集合时忽略 ApCode 和 VpcId
                     * @param ResourceIds 资源ID集合，当传入ID集合时忽略 ApCode 和 VpcId
                     */
                    void SetResourceIds(const std::vector<std::string>& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     */
                    bool ResourceIdsHasBeenSet() const;

                private:

                    /**
                     * 地域码, 如: ap-guangzhou
                     */
                    std::string m_apCode;
                    bool m_apCodeHasBeenSet;

                    /**
                     * 按照堡垒机开通的 VPC 实例ID查询
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 资源ID集合，当传入ID集合时忽略 ApCode 和 VpcId
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DASB_V20191018_MODEL_DESCRIBERESOURCESREQUEST_H_
