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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEHPCCLUSTERSREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEHPCCLUSTERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeHpcClusters请求参数结构体
                */
                class DescribeHpcClustersRequest : public AbstractModel
                {
                public:
                    DescribeHpcClustersRequest();
                    ~DescribeHpcClustersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取高性能计算集群ID数组。
                     * @return HpcClusterIds 高性能计算集群ID数组。
                     * 
                     */
                    std::vector<std::string> GetHpcClusterIds() const;

                    /**
                     * 设置高性能计算集群ID数组。
                     * @param _hpcClusterIds 高性能计算集群ID数组。
                     * 
                     */
                    void SetHpcClusterIds(const std::vector<std::string>& _hpcClusterIds);

                    /**
                     * 判断参数 HpcClusterIds 是否已赋值
                     * @return HpcClusterIds 是否已赋值
                     * 
                     */
                    bool HpcClusterIdsHasBeenSet() const;

                    /**
                     * 获取高性能计算集群名称。
                     * @return Name 高性能计算集群名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置高性能计算集群名称。
                     * @param _name 高性能计算集群名称。
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
                     * 获取可用区。
                     * @return Zone 可用区。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区。
                     * @param _zone 可用区。
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取偏移量, 默认值0。
                     * @return Offset 偏移量, 默认值0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量, 默认值0。
                     * @param _offset 偏移量, 默认值0。
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
                     * 获取本次请求量, 默认值20。
                     * @return Limit 本次请求量, 默认值20。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置本次请求量, 默认值20。
                     * @param _limit 本次请求量, 默认值20。
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
                     * 高性能计算集群ID数组。
                     */
                    std::vector<std::string> m_hpcClusterIds;
                    bool m_hpcClusterIdsHasBeenSet;

                    /**
                     * 高性能计算集群名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 可用区。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 偏移量, 默认值0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 本次请求量, 默认值20。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEHPCCLUSTERSREQUEST_H_
