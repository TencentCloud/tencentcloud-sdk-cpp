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
                     * 获取实例名称。
                     * @return InstanceName 实例名称。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称。
                     * @param _instanceName 实例名称。
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取实例 ID。
                     * @return InstanceId 实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID。
                     * @param _instanceId 实例 ID。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取用户APPID。APPID是与账号ID有唯一对应关系的应用 ID，部分腾讯云产品会使用此 APPID。
                     * @return AppId 用户APPID。APPID是与账号ID有唯一对应关系的应用 ID，部分腾讯云产品会使用此 APPID。
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置用户APPID。APPID是与账号ID有唯一对应关系的应用 ID，部分腾讯云产品会使用此 APPID。
                     * @param _appId 用户APPID。APPID是与账号ID有唯一对应关系的应用 ID，部分腾讯云产品会使用此 APPID。
                     * 
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取实例所属项目 ID。
                     * @return ProjectId 实例所属项目 ID。
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置实例所属项目 ID。
                     * @param _projectId 实例所属项目 ID。
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
                     * 获取实例接入区域。
                     * @return Region 实例接入区域。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置实例接入区域。
                     * @param _region 实例接入区域。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取实例接入可用区。
                     * @return Zone 实例接入可用区。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置实例接入可用区。
                     * @param _zone 实例接入可用区。
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
                     * 获取实例私有网络 ID。
                     * @return VpcId 实例私有网络 ID。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置实例私有网络 ID。
                     * @param _vpcId 实例私有网络 ID。
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
                     * 获取私有网络所属子网 ID。
                     * @return SubnetId 私有网络所属子网 ID。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置私有网络所属子网 ID。
                     * @param _subnetId 私有网络所属子网 ID。
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
                     * 获取实例状态信息。
- 1-流程中。
- 2-运行中。
- -2-实例已隔离。
- -3-实例待回收。
- -4-实例已删除。
                     * @return Status 实例状态信息。
- 1-流程中。
- 2-运行中。
- -2-实例已隔离。
- -3-实例待回收。
- -4-实例已删除。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置实例状态信息。
- 1-流程中。
- 2-运行中。
- -2-实例已隔离。
- -3-实例待回收。
- -4-实例已删除。
                     * @param _status 实例状态信息。
- 1-流程中。
- 2-运行中。
- -2-实例已隔离。
- -3-实例待回收。
- -4-实例已删除。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取实例私有网络 IP 地址。
                     * @return Vips 实例私有网络 IP 地址。
                     * 
                     */
                    std::vector<std::string> GetVips() const;

                    /**
                     * 设置实例私有网络 IP 地址。
                     * @param _vips 实例私有网络 IP 地址。
                     * 
                     */
                    void SetVips(const std::vector<std::string>& _vips);

                    /**
                     * 判断参数 Vips 是否已赋值
                     * @return Vips 是否已赋值
                     * 
                     */
                    bool VipsHasBeenSet() const;

                    /**
                     * 获取实例网络端口。
                     * @return Vport 实例网络端口。
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置实例网络端口。
                     * @param _vport 实例网络端口。
                     * 
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                    /**
                     * 获取实例创建时间。
                     * @return Createtime 实例创建时间。
                     * 
                     */
                    std::string GetCreatetime() const;

                    /**
                     * 设置实例创建时间。
                     * @param _createtime 实例创建时间。
                     * 
                     */
                    void SetCreatetime(const std::string& _createtime);

                    /**
                     * 判断参数 Createtime 是否已赋值
                     * @return Createtime 是否已赋值
                     * 
                     */
                    bool CreatetimeHasBeenSet() const;

                    /**
                     * 获取计费类型。
- 0：按量计费。
- 1：包年包月。
                     * @return PayMode 计费类型。
- 0：按量计费。
- 1：包年包月。
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置计费类型。
- 0：按量计费。
- 1：包年包月。
                     * @param _payMode 计费类型。
- 0：按量计费。
- 1：包年包月。
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取网络类型。
- 0：基础网络。
- 1：VPC 网络。
                     * @return NetType 网络类型。
- 0：基础网络。
- 1：VPC 网络。
                     * 
                     */
                    int64_t GetNetType() const;

                    /**
                     * 设置网络类型。
- 0：基础网络。
- 1：VPC 网络。
                     * @param _netType 网络类型。
- 0：基础网络。
- 1：VPC 网络。
                     * 
                     */
                    void SetNetType(const int64_t& _netType);

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     * 
                     */
                    bool NetTypeHasBeenSet() const;

                private:

                    /**
                     * 实例名称。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 用户APPID。APPID是与账号ID有唯一对应关系的应用 ID，部分腾讯云产品会使用此 APPID。
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 实例所属项目 ID。
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 实例接入区域。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 实例接入可用区。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 实例私有网络 ID。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 私有网络所属子网 ID。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 实例状态信息。
- 1-流程中。
- 2-运行中。
- -2-实例已隔离。
- -3-实例待回收。
- -4-实例已删除。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例私有网络 IP 地址。
                     */
                    std::vector<std::string> m_vips;
                    bool m_vipsHasBeenSet;

                    /**
                     * 实例网络端口。
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                    /**
                     * 实例创建时间。
                     */
                    std::string m_createtime;
                    bool m_createtimeHasBeenSet;

                    /**
                     * 计费类型。
- 0：按量计费。
- 1：包年包月。
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 网络类型。
- 0：基础网络。
- 1：VPC 网络。
                     */
                    int64_t m_netType;
                    bool m_netTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_REDISCOMMONINSTANCELIST_H_
