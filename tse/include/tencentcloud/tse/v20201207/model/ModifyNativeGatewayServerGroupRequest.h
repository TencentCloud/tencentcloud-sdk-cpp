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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYNATIVEGATEWAYSERVERGROUPREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYNATIVEGATEWAYSERVERGROUPREQUEST_H_

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
                * ModifyNativeGatewayServerGroup请求参数结构体
                */
                class ModifyNativeGatewayServerGroupRequest : public AbstractModel
                {
                public:
                    ModifyNativeGatewayServerGroupRequest();
                    ~ModifyNativeGatewayServerGroupRequest() = default;
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
                     * 获取网关分组 id
                     * @return GroupId 网关分组 id
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置网关分组 id
                     * @param _groupId 网关分组 id
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取云原生API网关名字, 最多支持60个字符。
                     * @return Name 云原生API网关名字, 最多支持60个字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置云原生API网关名字, 最多支持60个字符。
                     * @param _name 云原生API网关名字, 最多支持60个字符。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取云原生API网关描述信息, 最多支持120个字符。
                     * @return Description 云原生API网关描述信息, 最多支持120个字符。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置云原生API网关描述信息, 最多支持120个字符。
                     * @param _description 云原生API网关描述信息, 最多支持120个字符。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 云原生API网关实例ID。
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 网关分组 id
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 云原生API网关名字, 最多支持60个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 云原生API网关描述信息, 最多支持120个字符。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_MODIFYNATIVEGATEWAYSERVERGROUPREQUEST_H_
