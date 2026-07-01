/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_EDRALERTITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_EDRALERTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * EDR告警列表信息
                */
                class EdrAlertItem : public AbstractModel
                {
                public:
                    EdrAlertItem();
                    ~EdrAlertItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>告警表id</p>
                     * @return Id <p>告警表id</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>告警表id</p>
                     * @param _id <p>告警表id</p>
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>APPID</p>
                     * @return AppId <p>APPID</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>APPID</p>
                     * @param _appId <p>APPID</p>
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>告警ID</p>
                     * @return AlertId <p>告警ID</p>
                     * 
                     */
                    std::string GetAlertId() const;

                    /**
                     * 设置<p>告警ID</p>
                     * @param _alertId <p>告警ID</p>
                     * 
                     */
                    void SetAlertId(const std::string& _alertId);

                    /**
                     * 判断参数 AlertId 是否已赋值
                     * @return AlertId 是否已赋值
                     * 
                     */
                    bool AlertIdHasBeenSet() const;

                    /**
                     * 获取<p>告警大类</p>
                     * @return AlertCategory <p>告警大类</p>
                     * 
                     */
                    std::string GetAlertCategory() const;

                    /**
                     * 设置<p>告警大类</p>
                     * @param _alertCategory <p>告警大类</p>
                     * 
                     */
                    void SetAlertCategory(const std::string& _alertCategory);

                    /**
                     * 判断参数 AlertCategory 是否已赋值
                     * @return AlertCategory 是否已赋值
                     * 
                     */
                    bool AlertCategoryHasBeenSet() const;

                    /**
                     * 获取<p>告警子类</p>
                     * @return AlertSubType <p>告警子类</p>
                     * 
                     */
                    std::string GetAlertSubType() const;

                    /**
                     * 设置<p>告警子类</p>
                     * @param _alertSubType <p>告警子类</p>
                     * 
                     */
                    void SetAlertSubType(const std::string& _alertSubType);

                    /**
                     * 判断参数 AlertSubType 是否已赋值
                     * @return AlertSubType 是否已赋值
                     * 
                     */
                    bool AlertSubTypeHasBeenSet() const;

                    /**
                     * 获取<p>策略ID</p>
                     * @return RuleId <p>策略ID</p>
                     * 
                     */
                    std::string GetRuleId() const;

                    /**
                     * 设置<p>策略ID</p>
                     * @param _ruleId <p>策略ID</p>
                     * 
                     */
                    void SetRuleId(const std::string& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取<p>策略类型</p>
                     * @return RuleType <p>策略类型</p>
                     * 
                     */
                    int64_t GetRuleType() const;

                    /**
                     * 设置<p>策略类型</p>
                     * @param _ruleType <p>策略类型</p>
                     * 
                     */
                    void SetRuleType(const int64_t& _ruleType);

                    /**
                     * 判断参数 RuleType 是否已赋值
                     * @return RuleType 是否已赋值
                     * 
                     */
                    bool RuleTypeHasBeenSet() const;

                    /**
                     * 获取<p>告警等级</p>
                     * @return Level <p>告警等级</p>
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置<p>告警等级</p>
                     * @param _level <p>告警等级</p>
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取<p>告警状态</p>
                     * @return Status <p>告警状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>告警状态</p>
                     * @param _status <p>告警状态</p>
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
                     * 获取<p>攻击阶段</p>
                     * @return AttackStage <p>攻击阶段</p>
                     * 
                     */
                    std::string GetAttackStage() const;

                    /**
                     * 设置<p>攻击阶段</p>
                     * @param _attackStage <p>攻击阶段</p>
                     * 
                     */
                    void SetAttackStage(const std::string& _attackStage);

                    /**
                     * 判断参数 AttackStage 是否已赋值
                     * @return AttackStage 是否已赋值
                     * 
                     */
                    bool AttackStageHasBeenSet() const;

                    /**
                     * 获取<p>检测模式</p>
                     * @return DetectMode <p>检测模式</p>
                     * 
                     */
                    std::string GetDetectMode() const;

                    /**
                     * 设置<p>检测模式</p>
                     * @param _detectMode <p>检测模式</p>
                     * 
                     */
                    void SetDetectMode(const std::string& _detectMode);

                    /**
                     * 判断参数 DetectMode 是否已赋值
                     * @return DetectMode 是否已赋值
                     * 
                     */
                    bool DetectModeHasBeenSet() const;

                    /**
                     * 获取<p>实例ID</p>
                     * @return InstanceId <p>实例ID</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID</p>
                     * @param _instanceId <p>实例ID</p>
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
                     * 获取<p>QUUID</p>
                     * @return Quuid <p>QUUID</p>
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置<p>QUUID</p>
                     * @param _quuid <p>QUUID</p>
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取<p>是否付费</p>
                     * @return IsProVersion <p>是否付费</p>
                     * 
                     */
                    int64_t GetIsProVersion() const;

                    /**
                     * 设置<p>是否付费</p>
                     * @param _isProVersion <p>是否付费</p>
                     * 
                     */
                    void SetIsProVersion(const int64_t& _isProVersion);

                    /**
                     * 判断参数 IsProVersion 是否已赋值
                     * @return IsProVersion 是否已赋值
                     * 
                     */
                    bool IsProVersionHasBeenSet() const;

                    /**
                     * 获取<p>告警来源</p>
                     * @return AlertSource <p>告警来源</p>
                     * 
                     */
                    std::string GetAlertSource() const;

                    /**
                     * 设置<p>告警来源</p>
                     * @param _alertSource <p>告警来源</p>
                     * 
                     */
                    void SetAlertSource(const std::string& _alertSource);

                    /**
                     * 判断参数 AlertSource 是否已赋值
                     * @return AlertSource 是否已赋值
                     * 
                     */
                    bool AlertSourceHasBeenSet() const;

                    /**
                     * 获取<p>镜像ID</p>
                     * @return ImageId <p>镜像ID</p>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置<p>镜像ID</p>
                     * @param _imageId <p>镜像ID</p>
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取<p>容器id</p>
                     * @return ContainerId <p>容器id</p>
                     * 
                     */
                    std::string GetContainerId() const;

                    /**
                     * 设置<p>容器id</p>
                     * @param _containerId <p>容器id</p>
                     * 
                     */
                    void SetContainerId(const std::string& _containerId);

                    /**
                     * 判断参数 ContainerId 是否已赋值
                     * @return ContainerId 是否已赋值
                     * 
                     */
                    bool ContainerIdHasBeenSet() const;

                    /**
                     * 获取<p>集群ID</p>
                     * @return ClusterId <p>集群ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群ID</p>
                     * @param _clusterId <p>集群ID</p>
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
                     * 获取<p>告警数量</p>
                     * @return EventCount <p>告警数量</p>
                     * 
                     */
                    int64_t GetEventCount() const;

                    /**
                     * 设置<p>告警数量</p>
                     * @param _eventCount <p>告警数量</p>
                     * 
                     */
                    void SetEventCount(const int64_t& _eventCount);

                    /**
                     * 判断参数 EventCount 是否已赋值
                     * @return EventCount 是否已赋值
                     * 
                     */
                    bool EventCountHasBeenSet() const;

                    /**
                     * 获取<p>最初发现时间</p>
                     * @return FirstDetectTime <p>最初发现时间</p>
                     * 
                     */
                    std::string GetFirstDetectTime() const;

                    /**
                     * 设置<p>最初发现时间</p>
                     * @param _firstDetectTime <p>最初发现时间</p>
                     * 
                     */
                    void SetFirstDetectTime(const std::string& _firstDetectTime);

                    /**
                     * 判断参数 FirstDetectTime 是否已赋值
                     * @return FirstDetectTime 是否已赋值
                     * 
                     */
                    bool FirstDetectTimeHasBeenSet() const;

                    /**
                     * 获取<p>最近发现时间</p>
                     * @return LatestDetectTime <p>最近发现时间</p>
                     * 
                     */
                    std::string GetLatestDetectTime() const;

                    /**
                     * 设置<p>最近发现时间</p>
                     * @param _latestDetectTime <p>最近发现时间</p>
                     * 
                     */
                    void SetLatestDetectTime(const std::string& _latestDetectTime);

                    /**
                     * 判断参数 LatestDetectTime 是否已赋值
                     * @return LatestDetectTime 是否已赋值
                     * 
                     */
                    bool LatestDetectTimeHasBeenSet() const;

                    /**
                     * 获取<p>规则名</p>
                     * @return RuleName <p>规则名</p>
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置<p>规则名</p>
                     * @param _ruleName <p>规则名</p>
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取<p>策略类型</p>
                     * @return ContentType <p>策略类型</p>
                     * 
                     */
                    std::string GetContentType() const;

                    /**
                     * 设置<p>策略类型</p>
                     * @param _contentType <p>策略类型</p>
                     * 
                     */
                    void SetContentType(const std::string& _contentType);

                    /**
                     * 判断参数 ContentType 是否已赋值
                     * @return ContentType 是否已赋值
                     * 
                     */
                    bool ContentTypeHasBeenSet() const;

                    /**
                     * 获取<p>实例名</p>
                     * @return InstanceName <p>实例名</p>
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置<p>实例名</p>
                     * @param _instanceName <p>实例名</p>
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
                     * 获取<p>公共IP</p>
                     * @return PublicIp <p>公共IP</p>
                     * 
                     */
                    std::string GetPublicIp() const;

                    /**
                     * 设置<p>公共IP</p>
                     * @param _publicIp <p>公共IP</p>
                     * 
                     */
                    void SetPublicIp(const std::string& _publicIp);

                    /**
                     * 判断参数 PublicIp 是否已赋值
                     * @return PublicIp 是否已赋值
                     * 
                     */
                    bool PublicIpHasBeenSet() const;

                    /**
                     * 获取<p>内网IP</p>
                     * @return PrivateIp <p>内网IP</p>
                     * 
                     */
                    std::string GetPrivateIp() const;

                    /**
                     * 设置<p>内网IP</p>
                     * @param _privateIp <p>内网IP</p>
                     * 
                     */
                    void SetPrivateIp(const std::string& _privateIp);

                    /**
                     * 判断参数 PrivateIp 是否已赋值
                     * @return PrivateIp 是否已赋值
                     * 
                     */
                    bool PrivateIpHasBeenSet() const;

                    /**
                     * 获取<p>该机器是否开启应用防护</p>
                     * @return RaspOpen <p>该机器是否开启应用防护</p>
                     * 
                     */
                    bool GetRaspOpen() const;

                    /**
                     * 设置<p>该机器是否开启应用防护</p>
                     * @param _raspOpen <p>该机器是否开启应用防护</p>
                     * 
                     */
                    void SetRaspOpen(const bool& _raspOpen);

                    /**
                     * 判断参数 RaspOpen 是否已赋值
                     * @return RaspOpen 是否已赋值
                     * 
                     */
                    bool RaspOpenHasBeenSet() const;

                private:

                    /**
                     * <p>告警表id</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>APPID</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>告警ID</p>
                     */
                    std::string m_alertId;
                    bool m_alertIdHasBeenSet;

                    /**
                     * <p>告警大类</p>
                     */
                    std::string m_alertCategory;
                    bool m_alertCategoryHasBeenSet;

                    /**
                     * <p>告警子类</p>
                     */
                    std::string m_alertSubType;
                    bool m_alertSubTypeHasBeenSet;

                    /**
                     * <p>策略ID</p>
                     */
                    std::string m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * <p>策略类型</p>
                     */
                    int64_t m_ruleType;
                    bool m_ruleTypeHasBeenSet;

                    /**
                     * <p>告警等级</p>
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>告警状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>攻击阶段</p>
                     */
                    std::string m_attackStage;
                    bool m_attackStageHasBeenSet;

                    /**
                     * <p>检测模式</p>
                     */
                    std::string m_detectMode;
                    bool m_detectModeHasBeenSet;

                    /**
                     * <p>实例ID</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>QUUID</p>
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * <p>是否付费</p>
                     */
                    int64_t m_isProVersion;
                    bool m_isProVersionHasBeenSet;

                    /**
                     * <p>告警来源</p>
                     */
                    std::string m_alertSource;
                    bool m_alertSourceHasBeenSet;

                    /**
                     * <p>镜像ID</p>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * <p>容器id</p>
                     */
                    std::string m_containerId;
                    bool m_containerIdHasBeenSet;

                    /**
                     * <p>集群ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>告警数量</p>
                     */
                    int64_t m_eventCount;
                    bool m_eventCountHasBeenSet;

                    /**
                     * <p>最初发现时间</p>
                     */
                    std::string m_firstDetectTime;
                    bool m_firstDetectTimeHasBeenSet;

                    /**
                     * <p>最近发现时间</p>
                     */
                    std::string m_latestDetectTime;
                    bool m_latestDetectTimeHasBeenSet;

                    /**
                     * <p>规则名</p>
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * <p>策略类型</p>
                     */
                    std::string m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * <p>实例名</p>
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * <p>公共IP</p>
                     */
                    std::string m_publicIp;
                    bool m_publicIpHasBeenSet;

                    /**
                     * <p>内网IP</p>
                     */
                    std::string m_privateIp;
                    bool m_privateIpHasBeenSet;

                    /**
                     * <p>该机器是否开启应用防护</p>
                     */
                    bool m_raspOpen;
                    bool m_raspOpenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_EDRALERTITEM_H_
