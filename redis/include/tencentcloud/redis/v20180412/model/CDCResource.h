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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_CDCRESOURCE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_CDCRESOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/ResourceBundle.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * redis独享集群详细信息
                */
                class CDCResource : public AbstractModel
                {
                public:
                    CDCResource();
                    ~CDCResource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户的Appid
                     * @return AppId 用户的Appid
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置用户的Appid
                     * @param _appId 用户的Appid
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
                     * 获取地域id
                     * @return RegionId 地域id
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置地域id
                     * @param _regionId 地域id
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
                     * 获取可用区id
                     * @return ZoneId 可用区id
                     * 
                     */
                    int64_t GetZoneId() const;

                    /**
                     * 设置可用区id
                     * @param _zoneId 可用区id
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
                     * 获取redis独享集群id
                     * @return RedisClusterId redis独享集群id
                     * 
                     */
                    std::string GetRedisClusterId() const;

                    /**
                     * 设置redis独享集群id
                     * @param _redisClusterId redis独享集群id
                     * 
                     */
                    void SetRedisClusterId(const std::string& _redisClusterId);

                    /**
                     * 判断参数 RedisClusterId 是否已赋值
                     * @return RedisClusterId 是否已赋值
                     * 
                     */
                    bool RedisClusterIdHasBeenSet() const;

                    /**
                     * 获取计费模式，1-包年包月，0-按量计费
                     * @return PayMode 计费模式，1-包年包月，0-按量计费
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置计费模式，1-包年包月，0-按量计费
                     * @param _payMode 计费模式，1-包年包月，0-按量计费
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
                     * 获取项目id
                     * @return ProjectId 项目id
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目id
                     * @param _projectId 项目id
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
                     * 获取自动续费标识，0 - 默认状态（手动续费）；1 - 自动续费；2 - 明确不自动续费
                     * @return AutoRenewFlag 自动续费标识，0 - 默认状态（手动续费）；1 - 自动续费；2 - 明确不自动续费
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置自动续费标识，0 - 默认状态（手动续费）；1 - 自动续费；2 - 明确不自动续费
                     * @param _autoRenewFlag 自动续费标识，0 - 默认状态（手动续费）；1 - 自动续费；2 - 明确不自动续费
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
                     * 获取独享集群名称
                     * @return ClusterName 独享集群名称
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置独享集群名称
                     * @param _clusterName 独享集群名称
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取实例创建时间
                     * @return StartTime 实例创建时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置实例创建时间
                     * @param _startTime 实例创建时间
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
                     * 获取实例到期时间
                     * @return EndTime 实例到期时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置实例到期时间
                     * @param _endTime 实例到期时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取集群状态：1-流程中，2-运行中，3-已隔离
                     * @return Status 集群状态：1-流程中，2-运行中，3-已隔离
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置集群状态：1-流程中，2-运行中，3-已隔离
                     * @param _status 集群状态：1-流程中，2-运行中，3-已隔离
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
                     * 获取基础管控资源包
                     * @return BaseBundles 基础管控资源包
                     * 
                     */
                    std::vector<ResourceBundle> GetBaseBundles() const;

                    /**
                     * 设置基础管控资源包
                     * @param _baseBundles 基础管控资源包
                     * 
                     */
                    void SetBaseBundles(const std::vector<ResourceBundle>& _baseBundles);

                    /**
                     * 判断参数 BaseBundles 是否已赋值
                     * @return BaseBundles 是否已赋值
                     * 
                     */
                    bool BaseBundlesHasBeenSet() const;

                    /**
                     * 获取资源包列表
                     * @return ResourceBundles 资源包列表
                     * 
                     */
                    std::vector<ResourceBundle> GetResourceBundles() const;

                    /**
                     * 设置资源包列表
                     * @param _resourceBundles 资源包列表
                     * 
                     */
                    void SetResourceBundles(const std::vector<ResourceBundle>& _resourceBundles);

                    /**
                     * 判断参数 ResourceBundles 是否已赋值
                     * @return ResourceBundles 是否已赋值
                     * 
                     */
                    bool ResourceBundlesHasBeenSet() const;

                    /**
                     * 获取所属本地专有集群id
                     * @return DedicatedClusterId 所属本地专有集群id
                     * 
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置所属本地专有集群id
                     * @param _dedicatedClusterId 所属本地专有集群id
                     * 
                     */
                    void SetDedicatedClusterId(const std::string& _dedicatedClusterId);

                    /**
                     * 判断参数 DedicatedClusterId 是否已赋值
                     * @return DedicatedClusterId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterIdHasBeenSet() const;

                private:

                    /**
                     * 用户的Appid
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 地域id
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 可用区id
                     */
                    int64_t m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * redis独享集群id
                     */
                    std::string m_redisClusterId;
                    bool m_redisClusterIdHasBeenSet;

                    /**
                     * 计费模式，1-包年包月，0-按量计费
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 项目id
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 自动续费标识，0 - 默认状态（手动续费）；1 - 自动续费；2 - 明确不自动续费
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 独享集群名称
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 实例创建时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 实例到期时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 集群状态：1-流程中，2-运行中，3-已隔离
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 基础管控资源包
                     */
                    std::vector<ResourceBundle> m_baseBundles;
                    bool m_baseBundlesHasBeenSet;

                    /**
                     * 资源包列表
                     */
                    std::vector<ResourceBundle> m_resourceBundles;
                    bool m_resourceBundlesHasBeenSet;

                    /**
                     * 所属本地专有集群id
                     */
                    std::string m_dedicatedClusterId;
                    bool m_dedicatedClusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_CDCRESOURCE_H_
