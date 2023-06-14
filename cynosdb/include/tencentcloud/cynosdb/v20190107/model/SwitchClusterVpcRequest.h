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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SWITCHCLUSTERVPCREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SWITCHCLUSTERVPCREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * SwitchClusterVpc请求参数结构体
                */
                class SwitchClusterVpcRequest : public AbstractModel
                {
                public:
                    SwitchClusterVpcRequest();
                    ~SwitchClusterVpcRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取字符串vpc id
                     * @return UniqVpcId 字符串vpc id
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置字符串vpc id
                     * @param _uniqVpcId 字符串vpc id
                     * 
                     */
                    void SetUniqVpcId(const std::string& _uniqVpcId);

                    /**
                     * 判断参数 UniqVpcId 是否已赋值
                     * @return UniqVpcId 是否已赋值
                     * 
                     */
                    bool UniqVpcIdHasBeenSet() const;

                    /**
                     * 获取字符串子网id
                     * @return UniqSubnetId 字符串子网id
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置字符串子网id
                     * @param _uniqSubnetId 字符串子网id
                     * 
                     */
                    void SetUniqSubnetId(const std::string& _uniqSubnetId);

                    /**
                     * 判断参数 UniqSubnetId 是否已赋值
                     * @return UniqSubnetId 是否已赋值
                     * 
                     */
                    bool UniqSubnetIdHasBeenSet() const;

                    /**
                     * 获取旧地址回收时间
                     * @return OldIpReserveHours 旧地址回收时间
                     * 
                     */
                    int64_t GetOldIpReserveHours() const;

                    /**
                     * 设置旧地址回收时间
                     * @param _oldIpReserveHours 旧地址回收时间
                     * 
                     */
                    void SetOldIpReserveHours(const int64_t& _oldIpReserveHours);

                    /**
                     * 判断参数 OldIpReserveHours 是否已赋值
                     * @return OldIpReserveHours 是否已赋值
                     * 
                     */
                    bool OldIpReserveHoursHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 字符串vpc id
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * 字符串子网id
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * 旧地址回收时间
                     */
                    int64_t m_oldIpReserveHours;
                    bool m_oldIpReserveHoursHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_SWITCHCLUSTERVPCREQUEST_H_
