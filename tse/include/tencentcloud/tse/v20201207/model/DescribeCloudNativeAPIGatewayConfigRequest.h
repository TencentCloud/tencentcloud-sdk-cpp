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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYCONFIGREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * DescribeCloudNativeAPIGatewayConfig请求参数结构体
                */
                class DescribeCloudNativeAPIGatewayConfigRequest : public AbstractModel
                {
                public:
                    DescribeCloudNativeAPIGatewayConfigRequest();
                    ~DescribeCloudNativeAPIGatewayConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云原生API网关实例ID。
                     * @return GatewayId 云原生API网关实例ID。
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置云原生API网关实例ID。
                     * @param _gatewayId 云原生API网关实例ID。
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取分组id，不填时为默认分组
                     * @return GroupId 分组id，不填时为默认分组
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置分组id，不填时为默认分组
                     * @param _groupId 分组id，不填时为默认分组
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                private:

                    /**
                     * 云原生API网关实例ID。
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 分组id，不填时为默认分组
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYCONFIGREQUEST_H_
