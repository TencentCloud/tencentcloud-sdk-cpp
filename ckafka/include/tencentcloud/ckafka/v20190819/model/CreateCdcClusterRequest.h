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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATECDCCLUSTERREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATECDCCLUSTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * CreateCdcCluster请求参数结构体
                */
                class CreateCdcClusterRequest : public AbstractModel
                {
                public:
                    CreateCdcClusterRequest();
                    ~CreateCdcClusterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取cdc的id
                     * @return CdcId cdc的id
                     * 
                     */
                    std::string GetCdcId() const;

                    /**
                     * 设置cdc的id
                     * @param _cdcId cdc的id
                     * 
                     */
                    void SetCdcId(const std::string& _cdcId);

                    /**
                     * 判断参数 CdcId 是否已赋值
                     * @return CdcId 是否已赋值
                     * 
                     */
                    bool CdcIdHasBeenSet() const;

                    /**
                     * 获取vpcId,一个地域只有唯一一个vpcid用于CDC
                     * @return CdcVpcId vpcId,一个地域只有唯一一个vpcid用于CDC
                     * 
                     */
                    std::string GetCdcVpcId() const;

                    /**
                     * 设置vpcId,一个地域只有唯一一个vpcid用于CDC
                     * @param _cdcVpcId vpcId,一个地域只有唯一一个vpcid用于CDC
                     * 
                     */
                    void SetCdcVpcId(const std::string& _cdcVpcId);

                    /**
                     * 判断参数 CdcVpcId 是否已赋值
                     * @return CdcVpcId 是否已赋值
                     * 
                     */
                    bool CdcVpcIdHasBeenSet() const;

                    /**
                     * 获取每个CDC集群有唯一一个子网ID
                     * @return CdcSubnetId 每个CDC集群有唯一一个子网ID
                     * 
                     */
                    std::string GetCdcSubnetId() const;

                    /**
                     * 设置每个CDC集群有唯一一个子网ID
                     * @param _cdcSubnetId 每个CDC集群有唯一一个子网ID
                     * 
                     */
                    void SetCdcSubnetId(const std::string& _cdcSubnetId);

                    /**
                     * 判断参数 CdcSubnetId 是否已赋值
                     * @return CdcSubnetId 是否已赋值
                     * 
                     */
                    bool CdcSubnetIdHasBeenSet() const;

                    /**
                     * 获取所在可用区ID
                     * @return ZoneId 所在可用区ID
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置所在可用区ID
                     * @param _zoneId 所在可用区ID
                     * 
                     */
                    void SetZoneId(const int64_t& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取实例带宽,单位MB/s; 最小值:20MB/s, 高级版最大值:360MB/s,专业版最大值:100000MB/s  标准版固定带宽规格: 40MB/s, 100MB/s, 150MB/s
                     * @return Bandwidth 实例带宽,单位MB/s; 最小值:20MB/s, 高级版最大值:360MB/s,专业版最大值:100000MB/s  标准版固定带宽规格: 40MB/s, 100MB/s, 150MB/s
                     * 
                     */
                    int64_t GetBandwidth() const;

                    /**
                     * 设置实例带宽,单位MB/s; 最小值:20MB/s, 高级版最大值:360MB/s,专业版最大值:100000MB/s  标准版固定带宽规格: 40MB/s, 100MB/s, 150MB/s
                     * @param _bandwidth 实例带宽,单位MB/s; 最小值:20MB/s, 高级版最大值:360MB/s,专业版最大值:100000MB/s  标准版固定带宽规格: 40MB/s, 100MB/s, 150MB/s
                     * 
                     */
                    void SetBandwidth(const int64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取cdc集群的总磁盘
                     * @return DiskSize cdc集群的总磁盘
                     * 
                     */
                    int64_t GetDiskSize() const;

                    /**
                     * 设置cdc集群的总磁盘
                     * @param _diskSize cdc集群的总磁盘
                     * 
                     */
                    void SetDiskSize(const int64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     * 
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取ckafka集群实例磁盘类型
                     * @return DiskType ckafka集群实例磁盘类型
                     * 
                     */
                    std::string GetDiskType() const;

                    /**
                     * 设置ckafka集群实例磁盘类型
                     * @param _diskType ckafka集群实例磁盘类型
                     * 
                     */
                    void SetDiskType(const std::string& _diskType);

                    /**
                     * 判断参数 DiskType 是否已赋值
                     * @return DiskType 是否已赋值
                     * 
                     */
                    bool DiskTypeHasBeenSet() const;

                    /**
                     * 获取系统盘类型
                     * @return SystemDiskType 系统盘类型
                     * 
                     */
                    std::string GetSystemDiskType() const;

                    /**
                     * 设置系统盘类型
                     * @param _systemDiskType 系统盘类型
                     * 
                     */
                    void SetSystemDiskType(const std::string& _systemDiskType);

                    /**
                     * 判断参数 SystemDiskType 是否已赋值
                     * @return SystemDiskType 是否已赋值
                     * 
                     */
                    bool SystemDiskTypeHasBeenSet() const;

                private:

                    /**
                     * cdc的id
                     */
                    std::string m_cdcId;
                    bool m_cdcIdHasBeenSet;

                    /**
                     * vpcId,一个地域只有唯一一个vpcid用于CDC
                     */
                    std::string m_cdcVpcId;
                    bool m_cdcVpcIdHasBeenSet;

                    /**
                     * 每个CDC集群有唯一一个子网ID
                     */
                    std::string m_cdcSubnetId;
                    bool m_cdcSubnetIdHasBeenSet;

                    /**
                     * 所在可用区ID
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 实例带宽,单位MB/s; 最小值:20MB/s, 高级版最大值:360MB/s,专业版最大值:100000MB/s  标准版固定带宽规格: 40MB/s, 100MB/s, 150MB/s
                     */
                    int64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * cdc集群的总磁盘
                     */
                    int64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * ckafka集群实例磁盘类型
                     */
                    std::string m_diskType;
                    bool m_diskTypeHasBeenSet;

                    /**
                     * 系统盘类型
                     */
                    std::string m_systemDiskType;
                    bool m_systemDiskTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATECDCCLUSTERREQUEST_H_
