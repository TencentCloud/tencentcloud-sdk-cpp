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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_SERVICEGROUP_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_SERVICEGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/Service.h>
#include <tencentcloud/tione/v20211111/model/Tag.h>
#include <tencentcloud/tione/v20211111/model/AuthToken.h>
#include <tencentcloud/tione/v20211111/model/LogConfig.h>
#include <tencentcloud/tione/v20211111/model/GatewayConfig.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 在线服务一个服务组的信息
                */
                class ServiceGroup : public AbstractModel
                {
                public:
                    ServiceGroup();
                    ~ServiceGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>服务组id</p>
                     * @return ServiceGroupId <p>服务组id</p>
                     * 
                     */
                    std::string GetServiceGroupId() const;

                    /**
                     * 设置<p>服务组id</p>
                     * @param _serviceGroupId <p>服务组id</p>
                     * 
                     */
                    void SetServiceGroupId(const std::string& _serviceGroupId);

                    /**
                     * 判断参数 ServiceGroupId 是否已赋值
                     * @return ServiceGroupId 是否已赋值
                     * 
                     */
                    bool ServiceGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>服务组名</p>
                     * @return ServiceGroupName <p>服务组名</p>
                     * 
                     */
                    std::string GetServiceGroupName() const;

                    /**
                     * 设置<p>服务组名</p>
                     * @param _serviceGroupName <p>服务组名</p>
                     * 
                     */
                    void SetServiceGroupName(const std::string& _serviceGroupName);

                    /**
                     * 判断参数 ServiceGroupName 是否已赋值
                     * @return ServiceGroupName 是否已赋值
                     * 
                     */
                    bool ServiceGroupNameHasBeenSet() const;

                    /**
                     * 获取<p>创建者</p>
                     * @return CreatedBy <p>创建者</p>
                     * 
                     */
                    std::string GetCreatedBy() const;

                    /**
                     * 设置<p>创建者</p>
                     * @param _createdBy <p>创建者</p>
                     * 
                     */
                    void SetCreatedBy(const std::string& _createdBy);

                    /**
                     * 判断参数 CreatedBy 是否已赋值
                     * @return CreatedBy 是否已赋值
                     * 
                     */
                    bool CreatedByHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>更新时间</p>
                     * @return UpdateTime <p>更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
                     * @param _updateTime <p>更新时间</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>主账号</p>
                     * @return Uin <p>主账号</p>
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>主账号</p>
                     * @param _uin <p>主账号</p>
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取<p>服务组下服务总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceCount <p>服务组下服务总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetServiceCount() const;

                    /**
                     * 设置<p>服务组下服务总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceCount <p>服务组下服务总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceCount(const uint64_t& _serviceCount);

                    /**
                     * 判断参数 ServiceCount 是否已赋值
                     * @return ServiceCount 是否已赋值
                     * 
                     */
                    bool ServiceCountHasBeenSet() const;

                    /**
                     * 获取<p>服务组下在运行的服务数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunningServiceCount <p>服务组下在运行的服务数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRunningServiceCount() const;

                    /**
                     * 设置<p>服务组下在运行的服务数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runningServiceCount <p>服务组下在运行的服务数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunningServiceCount(const uint64_t& _runningServiceCount);

                    /**
                     * 判断参数 RunningServiceCount 是否已赋值
                     * @return RunningServiceCount 是否已赋值
                     * 
                     */
                    bool RunningServiceCountHasBeenSet() const;

                    /**
                     * 获取<p>服务描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Services <p>服务描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Service> GetServices() const;

                    /**
                     * 设置<p>服务描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _services <p>服务描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServices(const std::vector<Service>& _services);

                    /**
                     * 判断参数 Services 是否已赋值
                     * @return Services 是否已赋值
                     * 
                     */
                    bool ServicesHasBeenSet() const;

                    /**
                     * 获取<p>服务组状态，与服务一致<br> CREATING 创建中<br>     CREATE_FAILED 创建失败<br>     Normal    正常运行中<br>     Stopped  已停止<br>     Stopping 停止中<br>     Abnormal 异常<br>     Pending 启动中<br>     Waiting 就绪中</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>服务组状态，与服务一致<br> CREATING 创建中<br>     CREATE_FAILED 创建失败<br>     Normal    正常运行中<br>     Stopped  已停止<br>     Stopping 停止中<br>     Abnormal 异常<br>     Pending 启动中<br>     Waiting 就绪中</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>服务组状态，与服务一致<br> CREATING 创建中<br>     CREATE_FAILED 创建失败<br>     Normal    正常运行中<br>     Stopped  已停止<br>     Stopping 停止中<br>     Abnormal 异常<br>     Pending 启动中<br>     Waiting 就绪中</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>服务组状态，与服务一致<br> CREATING 创建中<br>     CREATE_FAILED 创建失败<br>     Normal    正常运行中<br>     Stopped  已停止<br>     Stopping 停止中<br>     Abnormal 异常<br>     Pending 启动中<br>     Waiting 就绪中</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>服务组标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags <p>服务组标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>服务组标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags <p>服务组标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>服务组下最高版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LatestVersion <p>服务组下最高版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLatestVersion() const;

                    /**
                     * 设置<p>服务组下最高版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _latestVersion <p>服务组下最高版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLatestVersion(const std::string& _latestVersion);

                    /**
                     * 判断参数 LatestVersion 是否已赋值
                     * @return LatestVersion 是否已赋值
                     * 
                     */
                    bool LatestVersionHasBeenSet() const;

                    /**
                     * 获取<p>服务的业务状态<br>CREATING 创建中<br>     CREATE_FAILED 创建失败<br>     ARREARS_STOP 因欠费被强制停止<br>     BILLING 计费中<br>     WHITELIST_USING 白名单试用中<br>     WHITELIST_STOP 白名单额度不足</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BusinessStatus <p>服务的业务状态<br>CREATING 创建中<br>     CREATE_FAILED 创建失败<br>     ARREARS_STOP 因欠费被强制停止<br>     BILLING 计费中<br>     WHITELIST_USING 白名单试用中<br>     WHITELIST_STOP 白名单额度不足</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBusinessStatus() const;

                    /**
                     * 设置<p>服务的业务状态<br>CREATING 创建中<br>     CREATE_FAILED 创建失败<br>     ARREARS_STOP 因欠费被强制停止<br>     BILLING 计费中<br>     WHITELIST_USING 白名单试用中<br>     WHITELIST_STOP 白名单额度不足</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _businessStatus <p>服务的业务状态<br>CREATING 创建中<br>     CREATE_FAILED 创建失败<br>     ARREARS_STOP 因欠费被强制停止<br>     BILLING 计费中<br>     WHITELIST_USING 白名单试用中<br>     WHITELIST_STOP 白名单额度不足</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBusinessStatus(const std::string& _businessStatus);

                    /**
                     * 判断参数 BusinessStatus 是否已赋值
                     * @return BusinessStatus 是否已赋值
                     * 
                     */
                    bool BusinessStatusHasBeenSet() const;

                    /**
                     * 获取<p>服务的计费信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BillingInfo <p>服务的计费信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBillingInfo() const;

                    /**
                     * 设置<p>服务的计费信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _billingInfo <p>服务的计费信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBillingInfo(const std::string& _billingInfo);

                    /**
                     * 判断参数 BillingInfo 是否已赋值
                     * @return BillingInfo 是否已赋值
                     * 
                     */
                    bool BillingInfoHasBeenSet() const;

                    /**
                     * 获取<p>服务的创建来源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateSource <p>服务的创建来源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateSource() const;

                    /**
                     * 设置<p>服务的创建来源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createSource <p>服务的创建来源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateSource(const std::string& _createSource);

                    /**
                     * 判断参数 CreateSource 是否已赋值
                     * @return CreateSource 是否已赋值
                     * 
                     */
                    bool CreateSourceHasBeenSet() const;

                    /**
                     * 获取<p>服务组的权重更新状态<br>UPDATING 更新中<br>     UPDATED 更新成功<br>     UPDATE_FAILED 更新失败</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WeightUpdateStatus <p>服务组的权重更新状态<br>UPDATING 更新中<br>     UPDATED 更新成功<br>     UPDATE_FAILED 更新失败</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWeightUpdateStatus() const;

                    /**
                     * 设置<p>服务组的权重更新状态<br>UPDATING 更新中<br>     UPDATED 更新成功<br>     UPDATE_FAILED 更新失败</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _weightUpdateStatus <p>服务组的权重更新状态<br>UPDATING 更新中<br>     UPDATED 更新成功<br>     UPDATE_FAILED 更新失败</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWeightUpdateStatus(const std::string& _weightUpdateStatus);

                    /**
                     * 判断参数 WeightUpdateStatus 是否已赋值
                     * @return WeightUpdateStatus 是否已赋值
                     * 
                     */
                    bool WeightUpdateStatusHasBeenSet() const;

                    /**
                     * 获取<p>服务组下运行的pod数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReplicasCount <p>服务组下运行的pod数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetReplicasCount() const;

                    /**
                     * 设置<p>服务组下运行的pod数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _replicasCount <p>服务组下运行的pod数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReplicasCount(const uint64_t& _replicasCount);

                    /**
                     * 判断参数 ReplicasCount 是否已赋值
                     * @return ReplicasCount 是否已赋值
                     * 
                     */
                    bool ReplicasCountHasBeenSet() const;

                    /**
                     * 获取<p>服务组下期望的pod数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AvailableReplicasCount <p>服务组下期望的pod数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAvailableReplicasCount() const;

                    /**
                     * 设置<p>服务组下期望的pod数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _availableReplicasCount <p>服务组下期望的pod数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAvailableReplicasCount(const uint64_t& _availableReplicasCount);

                    /**
                     * 判断参数 AvailableReplicasCount 是否已赋值
                     * @return AvailableReplicasCount 是否已赋值
                     * 
                     */
                    bool AvailableReplicasCountHasBeenSet() const;

                    /**
                     * 获取<p>服务组的subuin</p>
                     * @return SubUin <p>服务组的subuin</p>
                     * 
                     */
                    std::string GetSubUin() const;

                    /**
                     * 设置<p>服务组的subuin</p>
                     * @param _subUin <p>服务组的subuin</p>
                     * 
                     */
                    void SetSubUin(const std::string& _subUin);

                    /**
                     * 判断参数 SubUin 是否已赋值
                     * @return SubUin 是否已赋值
                     * 
                     */
                    bool SubUinHasBeenSet() const;

                    /**
                     * 获取<p>服务组的app_id</p>
                     * @return AppId <p>服务组的app_id</p>
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置<p>服务组的app_id</p>
                     * @param _appId <p>服务组的app_id</p>
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
                     * 获取<p>是否开启鉴权</p>
                     * @return AuthorizationEnable <p>是否开启鉴权</p>
                     * 
                     */
                    bool GetAuthorizationEnable() const;

                    /**
                     * 设置<p>是否开启鉴权</p>
                     * @param _authorizationEnable <p>是否开启鉴权</p>
                     * 
                     */
                    void SetAuthorizationEnable(const bool& _authorizationEnable);

                    /**
                     * 判断参数 AuthorizationEnable 是否已赋值
                     * @return AuthorizationEnable 是否已赋值
                     * 
                     */
                    bool AuthorizationEnableHasBeenSet() const;

                    /**
                     * 获取<p>限流鉴权 token 列表</p>
                     * @return AuthTokens <p>限流鉴权 token 列表</p>
                     * 
                     */
                    std::vector<AuthToken> GetAuthTokens() const;

                    /**
                     * 设置<p>限流鉴权 token 列表</p>
                     * @param _authTokens <p>限流鉴权 token 列表</p>
                     * 
                     */
                    void SetAuthTokens(const std::vector<AuthToken>& _authTokens);

                    /**
                     * 判断参数 AuthTokens 是否已赋值
                     * @return AuthTokens 是否已赋值
                     * 
                     */
                    bool AuthTokensHasBeenSet() const;

                    /**
                     * 获取<p>用于监控的创建来源字段</p>
                     * @return MonitorSource <p>用于监控的创建来源字段</p>
                     * 
                     */
                    std::string GetMonitorSource() const;

                    /**
                     * 设置<p>用于监控的创建来源字段</p>
                     * @param _monitorSource <p>用于监控的创建来源字段</p>
                     * 
                     */
                    void SetMonitorSource(const std::string& _monitorSource);

                    /**
                     * 判断参数 MonitorSource 是否已赋值
                     * @return MonitorSource 是否已赋值
                     * 
                     */
                    bool MonitorSourceHasBeenSet() const;

                    /**
                     * 获取<p>子用户的 nickname</p>
                     * @return SubUinName <p>子用户的 nickname</p>
                     * 
                     */
                    std::string GetSubUinName() const;

                    /**
                     * 设置<p>子用户的 nickname</p>
                     * @param _subUinName <p>子用户的 nickname</p>
                     * 
                     */
                    void SetSubUinName(const std::string& _subUinName);

                    /**
                     * 判断参数 SubUinName 是否已赋值
                     * @return SubUinName 是否已赋值
                     * 
                     */
                    bool SubUinNameHasBeenSet() const;

                    /**
                     * 获取<p>网关日志投递相关配置</p>
                     * @return GatewayLogConfig <p>网关日志投递相关配置</p>
                     * 
                     */
                    LogConfig GetGatewayLogConfig() const;

                    /**
                     * 设置<p>网关日志投递相关配置</p>
                     * @param _gatewayLogConfig <p>网关日志投递相关配置</p>
                     * 
                     */
                    void SetGatewayLogConfig(const LogConfig& _gatewayLogConfig);

                    /**
                     * 判断参数 GatewayLogConfig 是否已赋值
                     * @return GatewayLogConfig 是否已赋值
                     * 
                     */
                    bool GatewayLogConfigHasBeenSet() const;

                    /**
                     * 获取<p>网关路由相关配置</p>
                     * @return GatewayConfig <p>网关路由相关配置</p>
                     * 
                     */
                    GatewayConfig GetGatewayConfig() const;

                    /**
                     * 设置<p>网关路由相关配置</p>
                     * @param _gatewayConfig <p>网关路由相关配置</p>
                     * 
                     */
                    void SetGatewayConfig(const GatewayConfig& _gatewayConfig);

                    /**
                     * 判断参数 GatewayConfig 是否已赋值
                     * @return GatewayConfig 是否已赋值
                     * 
                     */
                    bool GatewayConfigHasBeenSet() const;

                private:

                    /**
                     * <p>服务组id</p>
                     */
                    std::string m_serviceGroupId;
                    bool m_serviceGroupIdHasBeenSet;

                    /**
                     * <p>服务组名</p>
                     */
                    std::string m_serviceGroupName;
                    bool m_serviceGroupNameHasBeenSet;

                    /**
                     * <p>创建者</p>
                     */
                    std::string m_createdBy;
                    bool m_createdByHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>主账号</p>
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>服务组下服务总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_serviceCount;
                    bool m_serviceCountHasBeenSet;

                    /**
                     * <p>服务组下在运行的服务数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_runningServiceCount;
                    bool m_runningServiceCountHasBeenSet;

                    /**
                     * <p>服务描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Service> m_services;
                    bool m_servicesHasBeenSet;

                    /**
                     * <p>服务组状态，与服务一致<br> CREATING 创建中<br>     CREATE_FAILED 创建失败<br>     Normal    正常运行中<br>     Stopped  已停止<br>     Stopping 停止中<br>     Abnormal 异常<br>     Pending 启动中<br>     Waiting 就绪中</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>服务组标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>服务组下最高版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_latestVersion;
                    bool m_latestVersionHasBeenSet;

                    /**
                     * <p>服务的业务状态<br>CREATING 创建中<br>     CREATE_FAILED 创建失败<br>     ARREARS_STOP 因欠费被强制停止<br>     BILLING 计费中<br>     WHITELIST_USING 白名单试用中<br>     WHITELIST_STOP 白名单额度不足</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_businessStatus;
                    bool m_businessStatusHasBeenSet;

                    /**
                     * <p>服务的计费信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_billingInfo;
                    bool m_billingInfoHasBeenSet;

                    /**
                     * <p>服务的创建来源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createSource;
                    bool m_createSourceHasBeenSet;

                    /**
                     * <p>服务组的权重更新状态<br>UPDATING 更新中<br>     UPDATED 更新成功<br>     UPDATE_FAILED 更新失败</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_weightUpdateStatus;
                    bool m_weightUpdateStatusHasBeenSet;

                    /**
                     * <p>服务组下运行的pod数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_replicasCount;
                    bool m_replicasCountHasBeenSet;

                    /**
                     * <p>服务组下期望的pod数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_availableReplicasCount;
                    bool m_availableReplicasCountHasBeenSet;

                    /**
                     * <p>服务组的subuin</p>
                     */
                    std::string m_subUin;
                    bool m_subUinHasBeenSet;

                    /**
                     * <p>服务组的app_id</p>
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>是否开启鉴权</p>
                     */
                    bool m_authorizationEnable;
                    bool m_authorizationEnableHasBeenSet;

                    /**
                     * <p>限流鉴权 token 列表</p>
                     */
                    std::vector<AuthToken> m_authTokens;
                    bool m_authTokensHasBeenSet;

                    /**
                     * <p>用于监控的创建来源字段</p>
                     */
                    std::string m_monitorSource;
                    bool m_monitorSourceHasBeenSet;

                    /**
                     * <p>子用户的 nickname</p>
                     */
                    std::string m_subUinName;
                    bool m_subUinNameHasBeenSet;

                    /**
                     * <p>网关日志投递相关配置</p>
                     */
                    LogConfig m_gatewayLogConfig;
                    bool m_gatewayLogConfigHasBeenSet;

                    /**
                     * <p>网关路由相关配置</p>
                     */
                    GatewayConfig m_gatewayConfig;
                    bool m_gatewayConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_SERVICEGROUP_H_
