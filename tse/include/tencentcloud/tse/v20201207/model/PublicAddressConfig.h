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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_PUBLICADDRESSCONFIG_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_PUBLICADDRESSCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 公网地址信息
                */
                class PublicAddressConfig : public AbstractModel
                {
                public:
                    PublicAddressConfig();
                    ~PublicAddressConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取公网 ip
                     * @return Vip 公网 ip
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置公网 ip
                     * @param _vip 公网 ip
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取公网最大带宽
                     * @return InternetMaxBandwidthOut 公网最大带宽
                     * 
                     */
                    uint64_t GetInternetMaxBandwidthOut() const;

                    /**
                     * 设置公网最大带宽
                     * @param _internetMaxBandwidthOut 公网最大带宽
                     * 
                     */
                    void SetInternetMaxBandwidthOut(const uint64_t& _internetMaxBandwidthOut);

                    /**
                     * 判断参数 InternetMaxBandwidthOut 是否已赋值
                     * @return InternetMaxBandwidthOut 是否已赋值
                     * 
                     */
                    bool InternetMaxBandwidthOutHasBeenSet() const;

                    /**
                     * 获取公网所属分组 id
                     * @return GroupId 公网所属分组 id
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置公网所属分组 id
                     * @param _groupId 公网所属分组 id
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
                     * 获取公网所属分组名
                     * @return GroupName 公网所属分组名
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置公网所属分组名
                     * @param _groupName 公网所属分组名
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取公网负载均衡 id
                     * @return NetworkId 公网负载均衡 id
                     * 
                     */
                    std::string GetNetworkId() const;

                    /**
                     * 设置公网负载均衡 id
                     * @param _networkId 公网负载均衡 id
                     * 
                     */
                    void SetNetworkId(const std::string& _networkId);

                    /**
                     * 判断参数 NetworkId 是否已赋值
                     * @return NetworkId 是否已赋值
                     * 
                     */
                    bool NetworkIdHasBeenSet() const;

                    /**
                     * 获取公网负载均衡描述
                     * @return Description 公网负载均衡描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置公网负载均衡描述
                     * @param _description 公网负载均衡描述
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
                     * 公网 ip
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * 公网最大带宽
                     */
                    uint64_t m_internetMaxBandwidthOut;
                    bool m_internetMaxBandwidthOutHasBeenSet;

                    /**
                     * 公网所属分组 id
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 公网所属分组名
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 公网负载均衡 id
                     */
                    std::string m_networkId;
                    bool m_networkIdHasBeenSet;

                    /**
                     * 公网负载均衡描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_PUBLICADDRESSCONFIG_H_
