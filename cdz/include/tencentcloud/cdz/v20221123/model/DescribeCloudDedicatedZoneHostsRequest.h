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

#ifndef TENCENTCLOUD_CDZ_V20221123_MODEL_DESCRIBECLOUDDEDICATEDZONEHOSTSREQUEST_H_
#define TENCENTCLOUD_CDZ_V20221123_MODEL_DESCRIBECLOUDDEDICATEDZONEHOSTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdz
    {
        namespace V20221123
        {
            namespace Model
            {
                /**
                * DescribeCloudDedicatedZoneHosts请求参数结构体
                */
                class DescribeCloudDedicatedZoneHostsRequest : public AbstractModel
                {
                public:
                    DescribeCloudDedicatedZoneHostsRequest();
                    ~DescribeCloudDedicatedZoneHostsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取专属可用区ID 
                     * @return CloudDedicatedZoneID 专属可用区ID 
                     * 
                     */
                    std::string GetCloudDedicatedZoneID() const;

                    /**
                     * 设置专属可用区ID 
                     * @param _cloudDedicatedZoneID 专属可用区ID 
                     * 
                     */
                    void SetCloudDedicatedZoneID(const std::string& _cloudDedicatedZoneID);

                    /**
                     * 判断参数 CloudDedicatedZoneID 是否已赋值
                     * @return CloudDedicatedZoneID 是否已赋值
                     * 
                     */
                    bool CloudDedicatedZoneIDHasBeenSet() const;

                    /**
                     * 获取一个或多个Host面的CVM实例信息。最大支持查询100台Host。
                     * @return HostUuids 一个或多个Host面的CVM实例信息。最大支持查询100台Host。
                     * 
                     */
                    std::vector<std::string> GetHostUuids() const;

                    /**
                     * 设置一个或多个Host面的CVM实例信息。最大支持查询100台Host。
                     * @param _hostUuids 一个或多个Host面的CVM实例信息。最大支持查询100台Host。
                     * 
                     */
                    void SetHostUuids(const std::vector<std::string>& _hostUuids);

                    /**
                     * 判断参数 HostUuids 是否已赋值
                     * @return HostUuids 是否已赋值
                     * 
                     */
                    bool HostUuidsHasBeenSet() const;

                    /**
                     * 获取查询一个实例或者多个实例所在的Host上面的CVM实例信息。最大支持查询100台实例。
                     * @return InstanceIds 查询一个实例或者多个实例所在的Host上面的CVM实例信息。最大支持查询100台实例。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置查询一个实例或者多个实例所在的Host上面的CVM实例信息。最大支持查询100台实例。
                     * @param _instanceIds 查询一个实例或者多个实例所在的Host上面的CVM实例信息。最大支持查询100台实例。
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0。关于Offset的更进一步介绍请参考 API 简介中的相关小节。该参数仅与CloudDedicatedZoneID有关，传递了HostUuids和InstanceIds则会失效。
                     * @return Offset 偏移量，默认为0。关于Offset的更进一步介绍请参考 API 简介中的相关小节。该参数仅与CloudDedicatedZoneID有关，传递了HostUuids和InstanceIds则会失效。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。关于Offset的更进一步介绍请参考 API 简介中的相关小节。该参数仅与CloudDedicatedZoneID有关，传递了HostUuids和InstanceIds则会失效。
                     * @param _offset 偏移量，默认为0。关于Offset的更进一步介绍请参考 API 简介中的相关小节。该参数仅与CloudDedicatedZoneID有关，传递了HostUuids和InstanceIds则会失效。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API 简介中的相关小节。该参数仅与CloudDedicatedZoneID有关，传递了HostUuids和InstanceIds则会失效。
                     * @return Limit 返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API 简介中的相关小节。该参数仅与CloudDedicatedZoneID有关，传递了HostUuids和InstanceIds则会失效。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API 简介中的相关小节。该参数仅与CloudDedicatedZoneID有关，传递了HostUuids和InstanceIds则会失效。
                     * @param _limit 返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API 简介中的相关小节。该参数仅与CloudDedicatedZoneID有关，传递了HostUuids和InstanceIds则会失效。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 专属可用区ID 
                     */
                    std::string m_cloudDedicatedZoneID;
                    bool m_cloudDedicatedZoneIDHasBeenSet;

                    /**
                     * 一个或多个Host面的CVM实例信息。最大支持查询100台Host。
                     */
                    std::vector<std::string> m_hostUuids;
                    bool m_hostUuidsHasBeenSet;

                    /**
                     * 查询一个实例或者多个实例所在的Host上面的CVM实例信息。最大支持查询100台实例。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 偏移量，默认为0。关于Offset的更进一步介绍请参考 API 简介中的相关小节。该参数仅与CloudDedicatedZoneID有关，传递了HostUuids和InstanceIds则会失效。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API 简介中的相关小节。该参数仅与CloudDedicatedZoneID有关，传递了HostUuids和InstanceIds则会失效。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDZ_V20221123_MODEL_DESCRIBECLOUDDEDICATEDZONEHOSTSREQUEST_H_
