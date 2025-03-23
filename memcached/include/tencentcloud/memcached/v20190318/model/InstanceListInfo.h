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

#ifndef TENCENTCLOUD_MEMCACHED_V20190318_MODEL_INSTANCELISTINFO_H_
#define TENCENTCLOUD_MEMCACHED_V20190318_MODEL_INSTANCELISTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/memcached/v20190318/model/TagInfo.h>


namespace TencentCloud
{
    namespace Memcached
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * 实例详细信息列表
                */
                class InstanceListInfo : public AbstractModel
                {
                public:
                    InstanceListInfo();
                    ~InstanceListInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例修改时间
                     * @return ModTimeStamp 实例修改时间
                     * 
                     */
                    std::string GetModTimeStamp() const;

                    /**
                     * 设置实例修改时间
                     * @param _modTimeStamp 实例修改时间
                     * 
                     */
                    void SetModTimeStamp(const std::string& _modTimeStamp);

                    /**
                     * 判断参数 ModTimeStamp 是否已赋值
                     * @return ModTimeStamp 是否已赋值
                     * 
                     */
                    bool ModTimeStampHasBeenSet() const;

                    /**
                     * 获取实例隔离时间
                     * @return IsolateTimeStamp 实例隔离时间
                     * 
                     */
                    std::string GetIsolateTimeStamp() const;

                    /**
                     * 设置实例隔离时间
                     * @param _isolateTimeStamp 实例隔离时间
                     * 
                     */
                    void SetIsolateTimeStamp(const std::string& _isolateTimeStamp);

                    /**
                     * 判断参数 IsolateTimeStamp 是否已赋值
                     * @return IsolateTimeStamp 是否已赋值
                     * 
                     */
                    bool IsolateTimeStampHasBeenSet() const;

                    /**
                     * 获取实例是否设置自动续费标识，1：设置自动续费；0：未设置自动续费
                     * @return AutoRenewFlag 实例是否设置自动续费标识，1：设置自动续费；0：未设置自动续费
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置实例是否设置自动续费标识，1：设置自动续费；0：未设置自动续费
                     * @param _autoRenewFlag 实例是否设置自动续费标识，1：设置自动续费；0：未设置自动续费
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取仓库ID
                     * @return SetId 仓库ID
                     * 
                     */
                    int64_t GetSetId() const;

                    /**
                     * 设置仓库ID
                     * @param _setId 仓库ID
                     * 
                     */
                    void SetSetId(const int64_t& _setId);

                    /**
                     * 判断参数 SetId 是否已赋值
                     * @return SetId 是否已赋值
                     * 
                     */
                    bool SetIdHasBeenSet() const;

                    /**
                     * 获取实例当前状态，0：发货中；1：运行中；2：创建失败；4：销毁中；5：隔离中；6：下线中
                     * @return Status 实例当前状态，0：发货中；1：运行中；2：创建失败；4：销毁中；5：隔离中；6：下线中
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置实例当前状态，0：发货中；1：运行中；2：创建失败；4：销毁中；5：隔离中；6：下线中
                     * @param _status 实例当前状态，0：发货中；1：运行中；2：创建失败；4：销毁中；5：隔离中；6：下线中
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取实例内置ID
                     * @return CmemId 实例内置ID
                     * 
                     */
                    int64_t GetCmemId() const;

                    /**
                     * 设置实例内置ID
                     * @param _cmemId 实例内置ID
                     * 
                     */
                    void SetCmemId(const int64_t& _cmemId);

                    /**
                     * 判断参数 CmemId 是否已赋值
                     * @return CmemId 是否已赋值
                     * 
                     */
                    bool CmemIdHasBeenSet() const;

                    /**
                     * 获取实例关联的标签信息
                     * @return Tags 实例关联的标签信息
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置实例关联的标签信息
                     * @param _tags 实例关联的标签信息
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取地域id。1--广州 4--上海 5-- 香港 6--多伦多 7--上海金融 8--北京 9-- 新加坡 11--深圳金融 15--美西（硅谷）16--成都 17--德国 18--韩国 19--重庆 22--美东（弗吉尼亚）23--泰国   25--日本
                     * @return RegionId 地域id。1--广州 4--上海 5-- 香港 6--多伦多 7--上海金融 8--北京 9-- 新加坡 11--深圳金融 15--美西（硅谷）16--成都 17--德国 18--韩国 19--重庆 22--美东（弗吉尼亚）23--泰国   25--日本
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置地域id。1--广州 4--上海 5-- 香港 6--多伦多 7--上海金融 8--北京 9-- 新加坡 11--深圳金融 15--美西（硅谷）16--成都 17--德国 18--韩国 19--重庆 22--美东（弗吉尼亚）23--泰国   25--日本
                     * @param _regionId 地域id。1--广州 4--上海 5-- 香港 6--多伦多 7--上海金融 8--北京 9-- 新加坡 11--深圳金融 15--美西（硅谷）16--成都 17--德国 18--韩国 19--重庆 22--美东（弗吉尼亚）23--泰国   25--日本
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取实例描述信息
                     * @return InstanceDesc 实例描述信息
                     * 
                     */
                    std::string GetInstanceDesc() const;

                    /**
                     * 设置实例描述信息
                     * @param _instanceDesc 实例描述信息
                     * 
                     */
                    void SetInstanceDesc(const std::string& _instanceDesc);

                    /**
                     * 判断参数 InstanceDesc 是否已赋值
                     * @return InstanceDesc 是否已赋值
                     * 
                     */
                    bool InstanceDescHasBeenSet() const;

                    /**
                     * 获取过期策略
                     * @return Expire 过期策略
                     * 
                     */
                    int64_t GetExpire() const;

                    /**
                     * 设置过期策略
                     * @param _expire 过期策略
                     * 
                     */
                    void SetExpire(const int64_t& _expire);

                    /**
                     * 判断参数 Expire 是否已赋值
                     * @return Expire 是否已赋值
                     * 
                     */
                    bool ExpireHasBeenSet() const;

                    /**
                     * 获取vpc网络下子网id 如：46315
                     * @return SubnetId vpc网络下子网id 如：46315
                     * 
                     */
                    int64_t GetSubnetId() const;

                    /**
                     * 设置vpc网络下子网id 如：46315
                     * @param _subnetId vpc网络下子网id 如：46315
                     * 
                     */
                    void SetSubnetId(const int64_t& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

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
                     * 获取实例创建时间
                     * @return AddTimeStamp 实例创建时间
                     * 
                     */
                    std::string GetAddTimeStamp() const;

                    /**
                     * 设置实例创建时间
                     * @param _addTimeStamp 实例创建时间
                     * 
                     */
                    void SetAddTimeStamp(const std::string& _addTimeStamp);

                    /**
                     * 判断参数 AddTimeStamp 是否已赋值
                     * @return AddTimeStamp 是否已赋值
                     * 
                     */
                    bool AddTimeStampHasBeenSet() const;

                    /**
                     * 获取区域ID
                     * @return ZoneId 区域ID
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置区域ID
                     * @param _zoneId 区域ID
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
                     * 获取计费模式：0-按量计费，1-包年包月
                     * @return PayMode 计费模式：0-按量计费，1-包年包月
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置计费模式：0-按量计费，1-包年包月
                     * @param _payMode 计费模式：0-按量计费，1-包年包月
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
                     * 获取vpc网络id 如：75101
                     * @return VpcId vpc网络id 如：75101
                     * 
                     */
                    int64_t GetVpcId() const;

                    /**
                     * 设置vpc网络id 如：75101
                     * @param _vpcId vpc网络id 如：75101
                     * 
                     */
                    void SetVpcId(const int64_t& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取实例名称
                     * @return InstanceName 实例名称
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称
                     * @param _instanceName 实例名称
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
                     * 获取实例截止时间
                     * @return DeadlineTimeStamp 实例截止时间
                     * 
                     */
                    std::string GetDeadlineTimeStamp() const;

                    /**
                     * 设置实例截止时间
                     * @param _deadlineTimeStamp 实例截止时间
                     * 
                     */
                    void SetDeadlineTimeStamp(const std::string& _deadlineTimeStamp);

                    /**
                     * 判断参数 DeadlineTimeStamp 是否已赋值
                     * @return DeadlineTimeStamp 是否已赋值
                     * 
                     */
                    bool DeadlineTimeStampHasBeenSet() const;

                    /**
                     * 获取vpc网络id 如：vpc-fk33jsf43kgv
                     * @return UniqVpcId vpc网络id 如：vpc-fk33jsf43kgv
                     * 
                     */
                    std::string GetUniqVpcId() const;

                    /**
                     * 设置vpc网络id 如：vpc-fk33jsf43kgv
                     * @param _uniqVpcId vpc网络id 如：vpc-fk33jsf43kgv
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
                     * 获取实例vip
                     * @return Vip 实例vip
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置实例vip
                     * @param _vip 实例vip
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                    /**
                     * 获取vpc网络下子网id 如：subnet-fd3j6l35mm0
                     * @return UniqSubnetId vpc网络下子网id 如：subnet-fd3j6l35mm0
                     * 
                     */
                    std::string GetUniqSubnetId() const;

                    /**
                     * 设置vpc网络下子网id 如：subnet-fd3j6l35mm0
                     * @param _uniqSubnetId vpc网络下子网id 如：subnet-fd3j6l35mm0
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
                     * 获取用户AppID
                     * @return AppId 用户AppID
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置用户AppID
                     * @param _appId 用户AppID
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
                     * 获取实例端口号
                     * @return Vport 实例端口号
                     * 
                     */
                    int64_t GetVport() const;

                    /**
                     * 设置实例端口号
                     * @param _vport 实例端口号
                     * 
                     */
                    void SetVport(const int64_t& _vport);

                    /**
                     * 判断参数 Vport 是否已赋值
                     * @return Vport 是否已赋值
                     * 
                     */
                    bool VportHasBeenSet() const;

                private:

                    /**
                     * 实例修改时间
                     */
                    std::string m_modTimeStamp;
                    bool m_modTimeStampHasBeenSet;

                    /**
                     * 实例隔离时间
                     */
                    std::string m_isolateTimeStamp;
                    bool m_isolateTimeStampHasBeenSet;

                    /**
                     * 实例是否设置自动续费标识，1：设置自动续费；0：未设置自动续费
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 仓库ID
                     */
                    int64_t m_setId;
                    bool m_setIdHasBeenSet;

                    /**
                     * 实例当前状态，0：发货中；1：运行中；2：创建失败；4：销毁中；5：隔离中；6：下线中
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例内置ID
                     */
                    int64_t m_cmemId;
                    bool m_cmemIdHasBeenSet;

                    /**
                     * 实例关联的标签信息
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 地域id。1--广州 4--上海 5-- 香港 6--多伦多 7--上海金融 8--北京 9-- 新加坡 11--深圳金融 15--美西（硅谷）16--成都 17--德国 18--韩国 19--重庆 22--美东（弗吉尼亚）23--泰国   25--日本
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 实例描述信息
                     */
                    std::string m_instanceDesc;
                    bool m_instanceDescHasBeenSet;

                    /**
                     * 过期策略
                     */
                    int64_t m_expire;
                    bool m_expireHasBeenSet;

                    /**
                     * vpc网络下子网id 如：46315
                     */
                    int64_t m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 项目ID
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 实例创建时间
                     */
                    std::string m_addTimeStamp;
                    bool m_addTimeStampHasBeenSet;

                    /**
                     * 区域ID
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 计费模式：0-按量计费，1-包年包月
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * vpc网络id 如：75101
                     */
                    int64_t m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 实例名称
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 实例截止时间
                     */
                    std::string m_deadlineTimeStamp;
                    bool m_deadlineTimeStampHasBeenSet;

                    /**
                     * vpc网络id 如：vpc-fk33jsf43kgv
                     */
                    std::string m_uniqVpcId;
                    bool m_uniqVpcIdHasBeenSet;

                    /**
                     * 实例vip
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                    /**
                     * vpc网络下子网id 如：subnet-fd3j6l35mm0
                     */
                    std::string m_uniqSubnetId;
                    bool m_uniqSubnetIdHasBeenSet;

                    /**
                     * 用户AppID
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 实例端口号
                     */
                    int64_t m_vport;
                    bool m_vportHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MEMCACHED_V20190318_MODEL_INSTANCELISTINFO_H_
