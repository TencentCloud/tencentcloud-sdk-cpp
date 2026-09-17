/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_EDGEZONE_V20260401_MODEL_RELEASEPUBLICIPREQUEST_H_
#define TENCENTCLOUD_EDGEZONE_V20260401_MODEL_RELEASEPUBLICIPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Edgezone
    {
        namespace V20260401
        {
            namespace Model
            {
                /**
                * ReleasePublicIp请求参数结构体
                */
                class ReleasePublicIpRequest : public AbstractModel
                {
                public:
                    ReleasePublicIpRequest();
                    ~ReleasePublicIpRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取公网实例 ID（路由发布模式为 STATIC ）
                     * @return NetworkInstanceId 公网实例 ID（路由发布模式为 STATIC ）
                     * 
                     */
                    std::string GetNetworkInstanceId() const;

                    /**
                     * 设置公网实例 ID（路由发布模式为 STATIC ）
                     * @param _networkInstanceId 公网实例 ID（路由发布模式为 STATIC ）
                     * 
                     */
                    void SetNetworkInstanceId(const std::string& _networkInstanceId);

                    /**
                     * 判断参数 NetworkInstanceId 是否已赋值
                     * @return NetworkInstanceId 是否已赋值
                     * 
                     */
                    bool NetworkInstanceIdHasBeenSet() const;

                    /**
                     * 获取待释放的Ip类型，枚举值：ipv4、ipv6
                     * @return Type 待释放的Ip类型，枚举值：ipv4、ipv6
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置待释放的Ip类型，枚举值：ipv4、ipv6
                     * @param _type 待释放的Ip类型，枚举值：ipv4、ipv6
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取待释放的 Ip 地址列表
                     * @return IpList 待释放的 Ip 地址列表
                     * 
                     */
                    std::vector<std::string> GetIpList() const;

                    /**
                     * 设置待释放的 Ip 地址列表
                     * @param _ipList 待释放的 Ip 地址列表
                     * 
                     */
                    void SetIpList(const std::vector<std::string>& _ipList);

                    /**
                     * 判断参数 IpList 是否已赋值
                     * @return IpList 是否已赋值
                     * 
                     */
                    bool IpListHasBeenSet() const;

                private:

                    /**
                     * 公网实例 ID（路由发布模式为 STATIC ）
                     */
                    std::string m_networkInstanceId;
                    bool m_networkInstanceIdHasBeenSet;

                    /**
                     * 待释放的Ip类型，枚举值：ipv4、ipv6
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 待释放的 Ip 地址列表
                     */
                    std::vector<std::string> m_ipList;
                    bool m_ipListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EDGEZONE_V20260401_MODEL_RELEASEPUBLICIPREQUEST_H_
