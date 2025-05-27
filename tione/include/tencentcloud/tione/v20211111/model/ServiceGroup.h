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
                     * 获取服务组id
                     * @return ServiceGroupId 服务组id
                     * 
                     */
                    std::string GetServiceGroupId() const;

                    /**
                     * 设置服务组id
                     * @param _serviceGroupId 服务组id
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
                     * 获取服务组名
                     * @return ServiceGroupName 服务组名
                     * 
                     */
                    std::string GetServiceGroupName() const;

                    /**
                     * 设置服务组名
                     * @param _serviceGroupName 服务组名
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
                     * 获取创建者
                     * @return CreatedBy 创建者
                     * 
                     */
                    std::string GetCreatedBy() const;

                    /**
                     * 设置创建者
                     * @param _createdBy 创建者
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
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param _updateTime 更新时间
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
                     * 获取主账号
                     * @return Uin 主账号
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置主账号
                     * @param _uin 主账号
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
                     * 获取服务组下服务总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceCount 服务组下服务总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetServiceCount() const;

                    /**
                     * 设置服务组下服务总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceCount 服务组下服务总数
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
                     * 获取服务组下在运行的服务数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunningServiceCount 服务组下在运行的服务数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetRunningServiceCount() const;

                    /**
                     * 设置服务组下在运行的服务数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runningServiceCount 服务组下在运行的服务数量
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
                     * 获取服务描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Services 服务描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Service> GetServices() const;

                    /**
                     * 设置服务描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _services 服务描述
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
                     * 获取服务组状态，与服务一致
 CREATING 创建中
     CREATE_FAILED 创建失败
     Normal	正常运行中
     Stopped  已停止
     Stopping 停止中
     Abnormal 异常
     Pending 启动中
     Waiting 就绪中
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 服务组状态，与服务一致
 CREATING 创建中
     CREATE_FAILED 创建失败
     Normal	正常运行中
     Stopped  已停止
     Stopping 停止中
     Abnormal 异常
     Pending 启动中
     Waiting 就绪中
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置服务组状态，与服务一致
 CREATING 创建中
     CREATE_FAILED 创建失败
     Normal	正常运行中
     Stopped  已停止
     Stopping 停止中
     Abnormal 异常
     Pending 启动中
     Waiting 就绪中
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 服务组状态，与服务一致
 CREATING 创建中
     CREATE_FAILED 创建失败
     Normal	正常运行中
     Stopped  已停止
     Stopping 停止中
     Abnormal 异常
     Pending 启动中
     Waiting 就绪中
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
                     * 获取服务组标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 服务组标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置服务组标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 服务组标签
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
                     * 获取服务组下最高版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LatestVersion 服务组下最高版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLatestVersion() const;

                    /**
                     * 设置服务组下最高版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _latestVersion 服务组下最高版本
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
                     * 获取服务的业务状态
CREATING 创建中
     CREATE_FAILED 创建失败
     ARREARS_STOP 因欠费被强制停止
     BILLING 计费中
     WHITELIST_USING 白名单试用中
     WHITELIST_STOP 白名单额度不足
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BusinessStatus 服务的业务状态
CREATING 创建中
     CREATE_FAILED 创建失败
     ARREARS_STOP 因欠费被强制停止
     BILLING 计费中
     WHITELIST_USING 白名单试用中
     WHITELIST_STOP 白名单额度不足
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBusinessStatus() const;

                    /**
                     * 设置服务的业务状态
CREATING 创建中
     CREATE_FAILED 创建失败
     ARREARS_STOP 因欠费被强制停止
     BILLING 计费中
     WHITELIST_USING 白名单试用中
     WHITELIST_STOP 白名单额度不足
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _businessStatus 服务的业务状态
CREATING 创建中
     CREATE_FAILED 创建失败
     ARREARS_STOP 因欠费被强制停止
     BILLING 计费中
     WHITELIST_USING 白名单试用中
     WHITELIST_STOP 白名单额度不足
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
                     * 获取服务的计费信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BillingInfo 服务的计费信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBillingInfo() const;

                    /**
                     * 设置服务的计费信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _billingInfo 服务的计费信息
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
                     * 获取服务的创建来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateSource 服务的创建来源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateSource() const;

                    /**
                     * 设置服务的创建来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createSource 服务的创建来源
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
                     * 获取服务组的权重更新状态 
UPDATING 更新中
     UPDATED 更新成功
     UPDATE_FAILED 更新失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WeightUpdateStatus 服务组的权重更新状态 
UPDATING 更新中
     UPDATED 更新成功
     UPDATE_FAILED 更新失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWeightUpdateStatus() const;

                    /**
                     * 设置服务组的权重更新状态 
UPDATING 更新中
     UPDATED 更新成功
     UPDATE_FAILED 更新失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _weightUpdateStatus 服务组的权重更新状态 
UPDATING 更新中
     UPDATED 更新成功
     UPDATE_FAILED 更新失败
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
                     * 获取服务组下运行的pod数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReplicasCount 服务组下运行的pod数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetReplicasCount() const;

                    /**
                     * 设置服务组下运行的pod数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _replicasCount 服务组下运行的pod数量
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
                     * 获取服务组下期望的pod数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AvailableReplicasCount 服务组下期望的pod数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAvailableReplicasCount() const;

                    /**
                     * 设置服务组下期望的pod数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _availableReplicasCount 服务组下期望的pod数
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
                     * 获取服务组的subuin
                     * @return SubUin 服务组的subuin
                     * 
                     */
                    std::string GetSubUin() const;

                    /**
                     * 设置服务组的subuin
                     * @param _subUin 服务组的subuin
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
                     * 获取服务组的app_id
                     * @return AppId 服务组的app_id
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置服务组的app_id
                     * @param _appId 服务组的app_id
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
                     * 获取是否开启鉴权
                     * @return AuthorizationEnable 是否开启鉴权
                     * 
                     */
                    bool GetAuthorizationEnable() const;

                    /**
                     * 设置是否开启鉴权
                     * @param _authorizationEnable 是否开启鉴权
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
                     * 获取限流鉴权 token 列表
                     * @return AuthTokens 限流鉴权 token 列表
                     * 
                     */
                    std::vector<AuthToken> GetAuthTokens() const;

                    /**
                     * 设置限流鉴权 token 列表
                     * @param _authTokens 限流鉴权 token 列表
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
                     * 获取用于监控的创建来源字段
                     * @return MonitorSource 用于监控的创建来源字段
                     * 
                     */
                    std::string GetMonitorSource() const;

                    /**
                     * 设置用于监控的创建来源字段
                     * @param _monitorSource 用于监控的创建来源字段
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
                     * 获取子用户的 nickname
                     * @return SubUinName 子用户的 nickname
                     * 
                     */
                    std::string GetSubUinName() const;

                    /**
                     * 设置子用户的 nickname
                     * @param _subUinName 子用户的 nickname
                     * 
                     */
                    void SetSubUinName(const std::string& _subUinName);

                    /**
                     * 判断参数 SubUinName 是否已赋值
                     * @return SubUinName 是否已赋值
                     * 
                     */
                    bool SubUinNameHasBeenSet() const;

                private:

                    /**
                     * 服务组id
                     */
                    std::string m_serviceGroupId;
                    bool m_serviceGroupIdHasBeenSet;

                    /**
                     * 服务组名
                     */
                    std::string m_serviceGroupName;
                    bool m_serviceGroupNameHasBeenSet;

                    /**
                     * 创建者
                     */
                    std::string m_createdBy;
                    bool m_createdByHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 主账号
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 服务组下服务总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_serviceCount;
                    bool m_serviceCountHasBeenSet;

                    /**
                     * 服务组下在运行的服务数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_runningServiceCount;
                    bool m_runningServiceCountHasBeenSet;

                    /**
                     * 服务描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Service> m_services;
                    bool m_servicesHasBeenSet;

                    /**
                     * 服务组状态，与服务一致
 CREATING 创建中
     CREATE_FAILED 创建失败
     Normal	正常运行中
     Stopped  已停止
     Stopping 停止中
     Abnormal 异常
     Pending 启动中
     Waiting 就绪中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 服务组标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 服务组下最高版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_latestVersion;
                    bool m_latestVersionHasBeenSet;

                    /**
                     * 服务的业务状态
CREATING 创建中
     CREATE_FAILED 创建失败
     ARREARS_STOP 因欠费被强制停止
     BILLING 计费中
     WHITELIST_USING 白名单试用中
     WHITELIST_STOP 白名单额度不足
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_businessStatus;
                    bool m_businessStatusHasBeenSet;

                    /**
                     * 服务的计费信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_billingInfo;
                    bool m_billingInfoHasBeenSet;

                    /**
                     * 服务的创建来源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createSource;
                    bool m_createSourceHasBeenSet;

                    /**
                     * 服务组的权重更新状态 
UPDATING 更新中
     UPDATED 更新成功
     UPDATE_FAILED 更新失败
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_weightUpdateStatus;
                    bool m_weightUpdateStatusHasBeenSet;

                    /**
                     * 服务组下运行的pod数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_replicasCount;
                    bool m_replicasCountHasBeenSet;

                    /**
                     * 服务组下期望的pod数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_availableReplicasCount;
                    bool m_availableReplicasCountHasBeenSet;

                    /**
                     * 服务组的subuin
                     */
                    std::string m_subUin;
                    bool m_subUinHasBeenSet;

                    /**
                     * 服务组的app_id
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 是否开启鉴权
                     */
                    bool m_authorizationEnable;
                    bool m_authorizationEnableHasBeenSet;

                    /**
                     * 限流鉴权 token 列表
                     */
                    std::vector<AuthToken> m_authTokens;
                    bool m_authTokensHasBeenSet;

                    /**
                     * 用于监控的创建来源字段
                     */
                    std::string m_monitorSource;
                    bool m_monitorSourceHasBeenSet;

                    /**
                     * 子用户的 nickname
                     */
                    std::string m_subUinName;
                    bool m_subUinNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_SERVICEGROUP_H_
