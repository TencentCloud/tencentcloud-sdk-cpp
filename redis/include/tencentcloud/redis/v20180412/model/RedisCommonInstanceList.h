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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_REDISCOMMONINSTANCELIST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_REDISCOMMONINSTANCELIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * 单个实例信息
                */
                class RedisCommonInstanceList : public AbstractModel
                {
                public:
                    RedisCommonInstanceList();
                    ~RedisCommonInstanceList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例名称
                     * @return InstanceName 实例名称
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param InstanceName 实例名称
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param InstanceId 实例id
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取用户id
                     * @return AppId 用户id
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置用户id
                     * @param AppId 用户id
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取实例所属项目id
                     * @return ProjectId 实例所属项目id
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置实例所属项目id
                     * @param ProjectId 实例所属项目id
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取实例接入区域
                     * @return Region 实例接入区域
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置实例接入区域
                     * @param Region 实例接入区域
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取实例接入zone
                     * @return Zone 实例接入zone
                     */
                    std::string GetZone() const;

                    /**
                     * 设置实例接入zone
                     * @param Zone 实例接入zone
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取实例网络id
                     * @return VpcId 实例网络id
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置实例网络id
                     * @param VpcId 实例网络id
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网id
                     * @return SubnetId 子网id
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网id
                     * @param SubnetId 子网id
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取实例状态信息，0-创建中，1-运行中
                     * @return Status 实例状态信息，0-创建中，1-运行中
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置实例状态信息，0-创建中，1-运行中
                     * @param Status 实例状态信息，0-创建中，1-运行中
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取实例网络ip
                     * @return Vips 实例网络ip
                     */
                    std::vector<std::string> GetVips() const;

                    /**
                     * 设置实例网络ip
                     * @param Vips 实例网络ip
                     */
                    void SetVips(const std::vector<std::string>& _vips);

                    /**
                     * 判断参数 Vips 是否已赋值
                     * @return Vips 是否已赋值
                     */
                    bool VipsHasBeenSet() const;

                    /**
                     * 获取实例网络端口
                     * @return Vport 实例网络端口
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置实例网络端口
                     * @param Vport 实例网络端口
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取实例创建时间
                     * @return Createtime 实例创建时间
                     */
                    std::string GetCreatetime() const;

                    /**
                     * 设置实例创建时间
                     * @param Createtime 实例创建时间
                     */
                    void SetCreatetime(const std::string& _createtime);

                    /**
                     * 判断参数 Createtime 是否已赋值
                     * @return Createtime 是否已赋值
                     */
                    bool CreatetimeHasBeenSet() const;

                    /**
                     * 获取计费类型，0-按量计费，1-包年包月
                     * @return PayMode 计费类型，0-按量计费，1-包年包月
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置计费类型，0-按量计费，1-包年包月
                     * @param PayMode 计费类型，0-按量计费，1-包年包月
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取网络类型，0-基础网络，1-VPC网络
                     * @return NetType 网络类型，0-基础网络，1-VPC网络
                     */
                    int64_t GetNetType() const;

                    /**
                     * 设置网络类型，0-基础网络，1-VPC网络
                     * @param NetType 网络类型，0-基础网络，1-VPC网络
                     */
                    void SetNetType(const int64_t& _netType);

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     */
                    bool NetTypeHasBeenSet() const;

                private:

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 用户id
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 实例所属项目id
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 实例接入区域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 实例接入zone
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 实例网络id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网id
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 实例状态信息，0-创建中，1-运行中
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例网络ip
                     */
                    std::vector<std::string> m_vips;
                    bool m_vipsHasBeenSet;

                    /**
                     * 实例网络端口
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * 实例创建时间
                     */
                    std::string m_createtime;
                    bool m_createtimeHasBeenSet;

                    /**
                     * 计费类型，0-按量计费，1-包年包月
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 网络类型，0-基础网络，1-VPC网络
                     */
                    int64_t m_netType;
                    bool m_netTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_REDISCOMMONINSTANCELIST_H_
