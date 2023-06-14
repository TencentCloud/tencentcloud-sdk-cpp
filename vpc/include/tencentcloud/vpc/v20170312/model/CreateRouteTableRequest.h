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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CREATEROUTETABLEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CREATEROUTETABLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CreateRouteTable请求参数结构体
                */
                class CreateRouteTableRequest : public AbstractModel
                {
                public:
                    CreateRouteTableRequest();
                    ~CreateRouteTableRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待操作的VPC实例ID。可通过DescribeVpcs接口返回值中的VpcId获取。
                     * @return VpcId 待操作的VPC实例ID。可通过DescribeVpcs接口返回值中的VpcId获取。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置待操作的VPC实例ID。可通过DescribeVpcs接口返回值中的VpcId获取。
                     * @param _vpcId 待操作的VPC实例ID。可通过DescribeVpcs接口返回值中的VpcId获取。
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
                     * 获取路由表名称，最大长度不能超过60个字节。
                     * @return RouteTableName 路由表名称，最大长度不能超过60个字节。
                     * 
                     */
                    std::string GetRouteTableName() const;

                    /**
                     * 设置路由表名称，最大长度不能超过60个字节。
                     * @param _routeTableName 路由表名称，最大长度不能超过60个字节。
                     * 
                     */
                    void SetRouteTableName(const std::string& _routeTableName);

                    /**
                     * 判断参数 RouteTableName 是否已赋值
                     * @return RouteTableName 是否已赋值
                     * 
                     */
                    bool RouteTableNameHasBeenSet() const;

                    /**
                     * 获取指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]
                     * @return Tags 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]
                     * @param _tags 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 待操作的VPC实例ID。可通过DescribeVpcs接口返回值中的VpcId获取。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 路由表名称，最大长度不能超过60个字节。
                     */
                    std::string m_routeTableName;
                    bool m_routeTableNameHasBeenSet;

                    /**
                     * 指定绑定的标签列表，例如：[{"Key": "city", "Value": "shanghai"}]
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CREATEROUTETABLEREQUEST_H_
