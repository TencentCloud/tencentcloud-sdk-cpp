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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEBUSINESSDBINSTANCESREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEBUSINESSDBINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/ResourceTag.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * CreateBusinessDBInstances请求参数结构体
                */
                class CreateBusinessDBInstancesRequest : public AbstractModel
                {
                public:
                    CreateBusinessDBInstancesRequest();
                    ~CreateBusinessDBInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例可用区，类似ap-guangzhou-1（广州一区）；实例可售卖区域可以通过接口DescribeZones获取
                     * @return Zone 实例可用区，类似ap-guangzhou-1（广州一区）；实例可售卖区域可以通过接口DescribeZones获取
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置实例可用区，类似ap-guangzhou-1（广州一区）；实例可售卖区域可以通过接口DescribeZones获取
                     * @param _zone 实例可用区，类似ap-guangzhou-1（广州一区）；实例可售卖区域可以通过接口DescribeZones获取
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
                     * 获取实例内存大小，单位GB
                     * @return Memory 实例内存大小，单位GB
                     * 
                     */
                    int64_t GetMemory() const;

                    /**
                     * 设置实例内存大小，单位GB
                     * @param _memory 实例内存大小，单位GB
                     * 
                     */
                    void SetMemory(const int64_t& _memory);

                    /**
                     * 判断参数 Memory 是否已赋值
                     * @return Memory 是否已赋值
                     * 
                     */
                    bool MemoryHasBeenSet() const;

                    /**
                     * 获取实例磁盘大小，单位GB
                     * @return Storage 实例磁盘大小，单位GB
                     * 
                     */
                    int64_t GetStorage() const;

                    /**
                     * 设置实例磁盘大小，单位GB
                     * @param _storage 实例磁盘大小，单位GB
                     * 
                     */
                    void SetStorage(const int64_t& _storage);

                    /**
                     * 判断参数 Storage 是否已赋值
                     * @return Storage 是否已赋值
                     * 
                     */
                    bool StorageHasBeenSet() const;

                    /**
                     * 获取预购买实例的CPU核心数
                     * @return Cpu 预购买实例的CPU核心数
                     * 
                     */
                    int64_t GetCpu() const;

                    /**
                     * 设置预购买实例的CPU核心数
                     * @param _cpu 预购买实例的CPU核心数
                     * 
                     */
                    void SetCpu(const int64_t& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取购买实例的宿主机类型，CLOUD_PREMIUM-虚拟机高性能云盘，CLOUD_SSD-虚拟机SSD云盘
                     * @return MachineType 购买实例的宿主机类型，CLOUD_PREMIUM-虚拟机高性能云盘，CLOUD_SSD-虚拟机SSD云盘
                     * 
                     */
                    std::string GetMachineType() const;

                    /**
                     * 设置购买实例的宿主机类型，CLOUD_PREMIUM-虚拟机高性能云盘，CLOUD_SSD-虚拟机SSD云盘
                     * @param _machineType 购买实例的宿主机类型，CLOUD_PREMIUM-虚拟机高性能云盘，CLOUD_SSD-虚拟机SSD云盘
                     * 
                     */
                    void SetMachineType(const std::string& _machineType);

                    /**
                     * 判断参数 MachineType 是否已赋值
                     * @return MachineType 是否已赋值
                     * 
                     */
                    bool MachineTypeHasBeenSet() const;

                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取本次购买几个实例，默认值为1
                     * @return GoodsNum 本次购买几个实例，默认值为1
                     * 
                     */
                    int64_t GetGoodsNum() const;

                    /**
                     * 设置本次购买几个实例，默认值为1
                     * @param _goodsNum 本次购买几个实例，默认值为1
                     * 
                     */
                    void SetGoodsNum(const int64_t& _goodsNum);

                    /**
                     * 判断参数 GoodsNum 是否已赋值
                     * @return GoodsNum 是否已赋值
                     * 
                     */
                    bool GoodsNumHasBeenSet() const;

                    /**
                     * 获取VPC子网ID，形如subnet-bdoe83fa；SubnetId和VpcId需同时设置或者同时不设置
                     * @return SubnetId VPC子网ID，形如subnet-bdoe83fa；SubnetId和VpcId需同时设置或者同时不设置
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置VPC子网ID，形如subnet-bdoe83fa；SubnetId和VpcId需同时设置或者同时不设置
                     * @param _subnetId VPC子网ID，形如subnet-bdoe83fa；SubnetId和VpcId需同时设置或者同时不设置
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取VPC网络ID，形如vpc-dsp338hz；SubnetId和VpcId需同时设置或者同时不设置
                     * @return VpcId VPC网络ID，形如vpc-dsp338hz；SubnetId和VpcId需同时设置或者同时不设置
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC网络ID，形如vpc-dsp338hz；SubnetId和VpcId需同时设置或者同时不设置
                     * @param _vpcId VPC网络ID，形如vpc-dsp338hz；SubnetId和VpcId需同时设置或者同时不设置
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取商业智能服务器版本，目前只支持：201603（SQL Server 2016 Integration Services），201703（SQL Server 2017 Integration Services），201903（SQL Server 2019 Integration Services）版本。每个地域支持售卖的版本不同，可通过DescribeProductConfig接口来拉取每个地域可售卖的版本信息。不填，默认为版本201903。
                     * @return DBVersion 商业智能服务器版本，目前只支持：201603（SQL Server 2016 Integration Services），201703（SQL Server 2017 Integration Services），201903（SQL Server 2019 Integration Services）版本。每个地域支持售卖的版本不同，可通过DescribeProductConfig接口来拉取每个地域可售卖的版本信息。不填，默认为版本201903。
                     * 
                     */
                    std::string GetDBVersion() const;

                    /**
                     * 设置商业智能服务器版本，目前只支持：201603（SQL Server 2016 Integration Services），201703（SQL Server 2017 Integration Services），201903（SQL Server 2019 Integration Services）版本。每个地域支持售卖的版本不同，可通过DescribeProductConfig接口来拉取每个地域可售卖的版本信息。不填，默认为版本201903。
                     * @param _dBVersion 商业智能服务器版本，目前只支持：201603（SQL Server 2016 Integration Services），201703（SQL Server 2017 Integration Services），201903（SQL Server 2019 Integration Services）版本。每个地域支持售卖的版本不同，可通过DescribeProductConfig接口来拉取每个地域可售卖的版本信息。不填，默认为版本201903。
                     * 
                     */
                    void SetDBVersion(const std::string& _dBVersion);

                    /**
                     * 判断参数 DBVersion 是否已赋值
                     * @return DBVersion 是否已赋值
                     * 
                     */
                    bool DBVersionHasBeenSet() const;

                    /**
                     * 获取安全组列表，填写形如sg-xxx的安全组ID
                     * @return SecurityGroupList 安全组列表，填写形如sg-xxx的安全组ID
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupList() const;

                    /**
                     * 设置安全组列表，填写形如sg-xxx的安全组ID
                     * @param _securityGroupList 安全组列表，填写形如sg-xxx的安全组ID
                     * 
                     */
                    void SetSecurityGroupList(const std::vector<std::string>& _securityGroupList);

                    /**
                     * 判断参数 SecurityGroupList 是否已赋值
                     * @return SecurityGroupList 是否已赋值
                     * 
                     */
                    bool SecurityGroupListHasBeenSet() const;

                    /**
                     * 获取可维护时间窗配置，以周为单位，表示周几允许维护，1-7分别代表周一到周末
                     * @return Weekly 可维护时间窗配置，以周为单位，表示周几允许维护，1-7分别代表周一到周末
                     * 
                     */
                    std::vector<int64_t> GetWeekly() const;

                    /**
                     * 设置可维护时间窗配置，以周为单位，表示周几允许维护，1-7分别代表周一到周末
                     * @param _weekly 可维护时间窗配置，以周为单位，表示周几允许维护，1-7分别代表周一到周末
                     * 
                     */
                    void SetWeekly(const std::vector<int64_t>& _weekly);

                    /**
                     * 判断参数 Weekly 是否已赋值
                     * @return Weekly 是否已赋值
                     * 
                     */
                    bool WeeklyHasBeenSet() const;

                    /**
                     * 获取可维护时间窗配置，每天可维护的开始时间
                     * @return StartTime 可维护时间窗配置，每天可维护的开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置可维护时间窗配置，每天可维护的开始时间
                     * @param _startTime 可维护时间窗配置，每天可维护的开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取可维护时间窗配置，持续时间，单位：小时
                     * @return Span 可维护时间窗配置，持续时间，单位：小时
                     * 
                     */
                    int64_t GetSpan() const;

                    /**
                     * 设置可维护时间窗配置，持续时间，单位：小时
                     * @param _span 可维护时间窗配置，持续时间，单位：小时
                     * 
                     */
                    void SetSpan(const int64_t& _span);

                    /**
                     * 判断参数 Span 是否已赋值
                     * @return Span 是否已赋值
                     * 
                     */
                    bool SpanHasBeenSet() const;

                    /**
                     * 获取新建实例绑定的标签集合
                     * @return ResourceTags 新建实例绑定的标签集合
                     * 
                     */
                    std::vector<ResourceTag> GetResourceTags() const;

                    /**
                     * 设置新建实例绑定的标签集合
                     * @param _resourceTags 新建实例绑定的标签集合
                     * 
                     */
                    void SetResourceTags(const std::vector<ResourceTag>& _resourceTags);

                    /**
                     * 判断参数 ResourceTags 是否已赋值
                     * @return ResourceTags 是否已赋值
                     * 
                     */
                    bool ResourceTagsHasBeenSet() const;

                private:

                    /**
                     * 实例可用区，类似ap-guangzhou-1（广州一区）；实例可售卖区域可以通过接口DescribeZones获取
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 实例内存大小，单位GB
                     */
                    int64_t m_memory;
                    bool m_memoryHasBeenSet;

                    /**
                     * 实例磁盘大小，单位GB
                     */
                    int64_t m_storage;
                    bool m_storageHasBeenSet;

                    /**
                     * 预购买实例的CPU核心数
                     */
                    int64_t m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * 购买实例的宿主机类型，CLOUD_PREMIUM-虚拟机高性能云盘，CLOUD_SSD-虚拟机SSD云盘
                     */
                    std::string m_machineType;
                    bool m_machineTypeHasBeenSet;

                    /**
                     * 项目ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 本次购买几个实例，默认值为1
                     */
                    int64_t m_goodsNum;
                    bool m_goodsNumHasBeenSet;

                    /**
                     * VPC子网ID，形如subnet-bdoe83fa；SubnetId和VpcId需同时设置或者同时不设置
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * VPC网络ID，形如vpc-dsp338hz；SubnetId和VpcId需同时设置或者同时不设置
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 商业智能服务器版本，目前只支持：201603（SQL Server 2016 Integration Services），201703（SQL Server 2017 Integration Services），201903（SQL Server 2019 Integration Services）版本。每个地域支持售卖的版本不同，可通过DescribeProductConfig接口来拉取每个地域可售卖的版本信息。不填，默认为版本201903。
                     */
                    std::string m_dBVersion;
                    bool m_dBVersionHasBeenSet;

                    /**
                     * 安全组列表，填写形如sg-xxx的安全组ID
                     */
                    std::vector<std::string> m_securityGroupList;
                    bool m_securityGroupListHasBeenSet;

                    /**
                     * 可维护时间窗配置，以周为单位，表示周几允许维护，1-7分别代表周一到周末
                     */
                    std::vector<int64_t> m_weekly;
                    bool m_weeklyHasBeenSet;

                    /**
                     * 可维护时间窗配置，每天可维护的开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 可维护时间窗配置，持续时间，单位：小时
                     */
                    int64_t m_span;
                    bool m_spanHasBeenSet;

                    /**
                     * 新建实例绑定的标签集合
                     */
                    std::vector<ResourceTag> m_resourceTags;
                    bool m_resourceTagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_CREATEBUSINESSDBINSTANCESREQUEST_H_
