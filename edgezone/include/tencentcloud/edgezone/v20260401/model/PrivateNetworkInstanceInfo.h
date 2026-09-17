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

#ifndef TENCENTCLOUD_EDGEZONE_V20260401_MODEL_PRIVATENETWORKINSTANCEINFO_H_
#define TENCENTCLOUD_EDGEZONE_V20260401_MODEL_PRIVATENETWORKINSTANCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 私网实例信息
                */
                class PrivateNetworkInstanceInfo : public AbstractModel
                {
                public:
                    PrivateNetworkInstanceInfo();
                    ~PrivateNetworkInstanceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取私网实例ID
                     * @return NetworkInstanceId 私网实例ID
                     * 
                     */
                    std::string GetNetworkInstanceId() const;

                    /**
                     * 设置私网实例ID
                     * @param _networkInstanceId 私网实例ID
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
                     * 获取私网实例名称
                     * @return NetworkInstanceName 私网实例名称
                     * 
                     */
                    std::string GetNetworkInstanceName() const;

                    /**
                     * 设置私网实例名称
                     * @param _networkInstanceName 私网实例名称
                     * 
                     */
                    void SetNetworkInstanceName(const std::string& _networkInstanceName);

                    /**
                     * 判断参数 NetworkInstanceName 是否已赋值
                     * @return NetworkInstanceName 是否已赋值
                     * 
                     */
                    bool NetworkInstanceNameHasBeenSet() const;

                    /**
                     * 获取可用区ID
                     * @return ZoneId 可用区ID
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置可用区ID
                     * @param _zoneId 可用区ID
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取网络地址
                     * @return Network 网络地址
                     * 
                     */
                    std::string GetNetwork() const;

                    /**
                     * 设置网络地址
                     * @param _network 网络地址
                     * 
                     */
                    void SetNetwork(const std::string& _network);

                    /**
                     * 判断参数 Network 是否已赋值
                     * @return Network 是否已赋值
                     * 
                     */
                    bool NetworkHasBeenSet() const;

                    /**
                     * 获取网络掩码
                     * @return Mask 网络掩码
                     * 
                     */
                    int64_t GetMask() const;

                    /**
                     * 设置网络掩码
                     * @param _mask 网络掩码
                     * 
                     */
                    void SetMask(const int64_t& _mask);

                    /**
                     * 判断参数 Mask 是否已赋值
                     * @return Mask 是否已赋值
                     * 
                     */
                    bool MaskHasBeenSet() const;

                    /**
                     * 获取关联物理机数量
                     * @return ServerCount 关联物理机数量
                     * 
                     */
                    int64_t GetServerCount() const;

                    /**
                     * 设置关联物理机数量
                     * @param _serverCount 关联物理机数量
                     * 
                     */
                    void SetServerCount(const int64_t& _serverCount);

                    /**
                     * 判断参数 ServerCount 是否已赋值
                     * @return ServerCount 是否已赋值
                     * 
                     */
                    bool ServerCountHasBeenSet() const;

                    /**
                     * 获取可用Ip数量
                     * @return AvailableIpCount 可用Ip数量
                     * 
                     */
                    int64_t GetAvailableIpCount() const;

                    /**
                     * 设置可用Ip数量
                     * @param _availableIpCount 可用Ip数量
                     * 
                     */
                    void SetAvailableIpCount(const int64_t& _availableIpCount);

                    /**
                     * 判断参数 AvailableIpCount 是否已赋值
                     * @return AvailableIpCount 是否已赋值
                     * 
                     */
                    bool AvailableIpCountHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedAt 创建时间
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置创建时间
                     * @param _createdAt 创建时间
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdatedAt 更新时间
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置更新时间
                     * @param _updatedAt 更新时间
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                private:

                    /**
                     * 私网实例ID
                     */
                    std::string m_networkInstanceId;
                    bool m_networkInstanceIdHasBeenSet;

                    /**
                     * 私网实例名称
                     */
                    std::string m_networkInstanceName;
                    bool m_networkInstanceNameHasBeenSet;

                    /**
                     * 可用区ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 网络地址
                     */
                    std::string m_network;
                    bool m_networkHasBeenSet;

                    /**
                     * 网络掩码
                     */
                    int64_t m_mask;
                    bool m_maskHasBeenSet;

                    /**
                     * 关联物理机数量
                     */
                    int64_t m_serverCount;
                    bool m_serverCountHasBeenSet;

                    /**
                     * 可用Ip数量
                     */
                    int64_t m_availableIpCount;
                    bool m_availableIpCountHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EDGEZONE_V20260401_MODEL_PRIVATENETWORKINSTANCEINFO_H_
