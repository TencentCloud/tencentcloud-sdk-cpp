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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYCONFIGRESULT_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYCONFIGRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/CloudNativeAPIGatewayConfig.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 获取云原生API网关实例网络配置结果。
                */
                class DescribeCloudNativeAPIGatewayConfigResult : public AbstractModel
                {
                public:
                    DescribeCloudNativeAPIGatewayConfigResult();
                    ~DescribeCloudNativeAPIGatewayConfigResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取网关实例ID。
                     * @return GatewayId 网关实例ID。
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置网关实例ID。
                     * @param _gatewayId 网关实例ID。
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
                     * 获取分组网络配置列表。
                     * @return ConfigList 分组网络配置列表。
                     * 
                     */
                    std::vector<CloudNativeAPIGatewayConfig> GetConfigList() const;

                    /**
                     * 设置分组网络配置列表。
                     * @param _configList 分组网络配置列表。
                     * 
                     */
                    void SetConfigList(const std::vector<CloudNativeAPIGatewayConfig>& _configList);

                    /**
                     * 判断参数 ConfigList 是否已赋值
                     * @return ConfigList 是否已赋值
                     * 
                     */
                    bool ConfigListHasBeenSet() const;

                    /**
                     * 获取分组子网信息
                     * @return GroupSubnetId 分组子网信息
                     * 
                     */
                    std::string GetGroupSubnetId() const;

                    /**
                     * 设置分组子网信息
                     * @param _groupSubnetId 分组子网信息
                     * 
                     */
                    void SetGroupSubnetId(const std::string& _groupSubnetId);

                    /**
                     * 判断参数 GroupSubnetId 是否已赋值
                     * @return GroupSubnetId 是否已赋值
                     * 
                     */
                    bool GroupSubnetIdHasBeenSet() const;

                    /**
                     * 获取分组VPC信息
                     * @return GroupVpcId 分组VPC信息
                     * 
                     */
                    std::string GetGroupVpcId() const;

                    /**
                     * 设置分组VPC信息
                     * @param _groupVpcId 分组VPC信息
                     * 
                     */
                    void SetGroupVpcId(const std::string& _groupVpcId);

                    /**
                     * 判断参数 GroupVpcId 是否已赋值
                     * @return GroupVpcId 是否已赋值
                     * 
                     */
                    bool GroupVpcIdHasBeenSet() const;

                    /**
                     * 获取分组ID
                     * @return GroupId 分组ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置分组ID
                     * @param _groupId 分组ID
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
                     * 网关实例ID。
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 分组网络配置列表。
                     */
                    std::vector<CloudNativeAPIGatewayConfig> m_configList;
                    bool m_configListHasBeenSet;

                    /**
                     * 分组子网信息
                     */
                    std::string m_groupSubnetId;
                    bool m_groupSubnetIdHasBeenSet;

                    /**
                     * 分组VPC信息
                     */
                    std::string m_groupVpcId;
                    bool m_groupVpcIdHasBeenSet;

                    /**
                     * 分组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBECLOUDNATIVEAPIGATEWAYCONFIGRESULT_H_
