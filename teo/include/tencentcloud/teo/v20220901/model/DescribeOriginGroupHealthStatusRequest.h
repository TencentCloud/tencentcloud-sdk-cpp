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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEORIGINGROUPHEALTHSTATUSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEORIGINGROUPHEALTHSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeOriginGroupHealthStatus请求参数结构体
                */
                class DescribeOriginGroupHealthStatusRequest : public AbstractModel
                {
                public:
                    DescribeOriginGroupHealthStatusRequest();
                    ~DescribeOriginGroupHealthStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点 ID。
                     * @return ZoneId 站点 ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点 ID。
                     * @param _zoneId 站点 ID。
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
                     * 获取负载均衡实例 ID。
                     * @return LBInstanceId 负载均衡实例 ID。
                     * 
                     */
                    std::string GetLBInstanceId() const;

                    /**
                     * 设置负载均衡实例 ID。
                     * @param _lBInstanceId 负载均衡实例 ID。
                     * 
                     */
                    void SetLBInstanceId(const std::string& _lBInstanceId);

                    /**
                     * 判断参数 LBInstanceId 是否已赋值
                     * @return LBInstanceId 是否已赋值
                     * 
                     */
                    bool LBInstanceIdHasBeenSet() const;

                    /**
                     * 获取源站组 ID。不填写时默认获取负载均衡下所有源站组的健康状态。
                     * @return OriginGroupIds 源站组 ID。不填写时默认获取负载均衡下所有源站组的健康状态。
                     * 
                     */
                    std::vector<std::string> GetOriginGroupIds() const;

                    /**
                     * 设置源站组 ID。不填写时默认获取负载均衡下所有源站组的健康状态。
                     * @param _originGroupIds 源站组 ID。不填写时默认获取负载均衡下所有源站组的健康状态。
                     * 
                     */
                    void SetOriginGroupIds(const std::vector<std::string>& _originGroupIds);

                    /**
                     * 判断参数 OriginGroupIds 是否已赋值
                     * @return OriginGroupIds 是否已赋值
                     * 
                     */
                    bool OriginGroupIdsHasBeenSet() const;

                private:

                    /**
                     * 站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 负载均衡实例 ID。
                     */
                    std::string m_lBInstanceId;
                    bool m_lBInstanceIdHasBeenSet;

                    /**
                     * 源站组 ID。不填写时默认获取负载均衡下所有源站组的健康状态。
                     */
                    std::vector<std::string> m_originGroupIds;
                    bool m_originGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBEORIGINGROUPHEALTHSTATUSREQUEST_H_
