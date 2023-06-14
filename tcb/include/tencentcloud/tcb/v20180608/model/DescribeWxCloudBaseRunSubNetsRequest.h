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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEWXCLOUDBASERUNSUBNETSREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEWXCLOUDBASERUNSUBNETSREQUEST_H_

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
                * DescribeWxCloudBaseRunSubNets请求参数结构体
                */
                class DescribeWxCloudBaseRunSubNetsRequest : public AbstractModel
                {
                public:
                    DescribeWxCloudBaseRunSubNetsRequest();
                    ~DescribeWxCloudBaseRunSubNetsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VPC id
                     * @return VpcId VPC id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC id
                     * @param _vpcId VPC id
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
                     * 获取查询个数限制，不填或小于等于0，等于不限制
                     * @return Limit 查询个数限制，不填或小于等于0，等于不限制
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置查询个数限制，不填或小于等于0，等于不限制
                     * @param _limit 查询个数限制，不填或小于等于0，等于不限制
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * VPC id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 查询个数限制，不填或小于等于0，等于不限制
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEWXCLOUDBASERUNSUBNETSREQUEST_H_
