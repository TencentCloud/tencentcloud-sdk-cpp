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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_SERVICE_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_SERVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/ServiceInfo.h>
#include <tencentcloud/tione/v20211111/model/Tag.h>
#include <tencentcloud/tione/v20211111/model/ServiceLimit.h>
#include <tencentcloud/tione/v20211111/model/ScheduledAction.h>
#include <tencentcloud/tione/v20211111/model/SchedulingPolicy.h>
#include <tencentcloud/tione/v20211111/model/ResourceGroupInfo.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 描述在线服务
                */
                class Service : public AbstractModel
                {
                public:
                    Service();
                    ~Service() = default;
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
                     * 获取<p>服务id</p>
                     * @return ServiceId <p>服务id</p>
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置<p>服务id</p>
                     * @param _serviceId <p>服务id</p>
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

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
                     * 获取<p>服务描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceDescription <p>服务描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceDescription() const;

                    /**
                     * 设置<p>服务描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceDescription <p>服务描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceDescription(const std::string& _serviceDescription);

                    /**
                     * 判断参数 ServiceDescription 是否已赋值
                     * @return ServiceDescription 是否已赋值
                     * 
                     */
                    bool ServiceDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>服务的详细信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceInfo <p>服务的详细信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ServiceInfo GetServiceInfo() const;

                    /**
                     * 设置<p>服务的详细信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceInfo <p>服务的详细信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceInfo(const ServiceInfo& _serviceInfo);

                    /**
                     * 判断参数 ServiceInfo 是否已赋值
                     * @return ServiceInfo 是否已赋值
                     * 
                     */
                    bool ServiceInfoHasBeenSet() const;

                    /**
                     * 获取<p>集群id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId <p>集群id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterId <p>集群id</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region <p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region <p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>命名空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Namespace <p>命名空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置<p>命名空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespace <p>命名空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取<p>付费类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChargeType <p>付费类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置<p>付费类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _chargeType <p>付费类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChargeType(const std::string& _chargeType);

                    /**
                     * 判断参数 ChargeType 是否已赋值
                     * @return ChargeType 是否已赋值
                     * 
                     */
                    bool ChargeTypeHasBeenSet() const;

                    /**
                     * 获取<p>包年包月服务的资源组id，按量计费的服务为空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroupId <p>包年包月服务的资源组id，按量计费的服务为空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置<p>包年包月服务的资源组id，按量计费的服务为空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroupId <p>包年包月服务的资源组id，按量计费的服务为空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceGroupId(const std::string& _resourceGroupId);

                    /**
                     * 判断参数 ResourceGroupId 是否已赋值
                     * @return ResourceGroupId 是否已赋值
                     * 
                     */
                    bool ResourceGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>包年包月服务对应的资源组名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroupName <p>包年包月服务对应的资源组名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceGroupName() const;

                    /**
                     * 设置<p>包年包月服务对应的资源组名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroupName <p>包年包月服务对应的资源组名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceGroupName(const std::string& _resourceGroupName);

                    /**
                     * 判断参数 ResourceGroupName 是否已赋值
                     * @return ResourceGroupName 是否已赋值
                     * 
                     */
                    bool ResourceGroupNameHasBeenSet() const;

                    /**
                     * 获取<p>服务的标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags <p>服务的标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>服务的标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags <p>服务的标签</p>
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
                     * 获取<p>服务所在的 ingress 的 name</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IngressName <p>服务所在的 ingress 的 name</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIngressName() const;

                    /**
                     * 设置<p>服务所在的 ingress 的 name</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ingressName <p>服务所在的 ingress 的 name</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIngressName(const std::string& _ingressName);

                    /**
                     * 判断参数 IngressName 是否已赋值
                     * @return IngressName 是否已赋值
                     * 
                     */
                    bool IngressNameHasBeenSet() const;

                    /**
                     * 获取<p>创建者</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedBy <p>创建者</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedBy() const;

                    /**
                     * 设置<p>创建者</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdBy <p>创建者</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uin <p>主账号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置<p>主账号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uin <p>主账号</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>子账号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubUin <p>子账号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubUin() const;

                    /**
                     * 设置<p>子账号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subUin <p>子账号</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>app_id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId <p>app_id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置<p>app_id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId <p>app_id</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>服务的业务状态<br>CREATING 创建中<br>CREATE_FAILED 创建失败<br>CREATE_SUCCEED 创建成功<br>ARREARS_STOP 因欠费停止<br>WHITELIST_STOP 白名单额度不足<br>RELEASE_FAILED 资源释放失败<br>WHITELIST_RELEASE_FAILED 白名单资源释放失败<br>TIMEOUT_EXCEPTION 创建超时异常<br>BILLING 计费中<br>WHITELIST_USING 白名单试用中</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BusinessStatus <p>服务的业务状态<br>CREATING 创建中<br>CREATE_FAILED 创建失败<br>CREATE_SUCCEED 创建成功<br>ARREARS_STOP 因欠费停止<br>WHITELIST_STOP 白名单额度不足<br>RELEASE_FAILED 资源释放失败<br>WHITELIST_RELEASE_FAILED 白名单资源释放失败<br>TIMEOUT_EXCEPTION 创建超时异常<br>BILLING 计费中<br>WHITELIST_USING 白名单试用中</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBusinessStatus() const;

                    /**
                     * 设置<p>服务的业务状态<br>CREATING 创建中<br>CREATE_FAILED 创建失败<br>CREATE_SUCCEED 创建成功<br>ARREARS_STOP 因欠费停止<br>WHITELIST_STOP 白名单额度不足<br>RELEASE_FAILED 资源释放失败<br>WHITELIST_RELEASE_FAILED 白名单资源释放失败<br>TIMEOUT_EXCEPTION 创建超时异常<br>BILLING 计费中<br>WHITELIST_USING 白名单试用中</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _businessStatus <p>服务的业务状态<br>CREATING 创建中<br>CREATE_FAILED 创建失败<br>CREATE_SUCCEED 创建成功<br>ARREARS_STOP 因欠费停止<br>WHITELIST_STOP 白名单额度不足<br>RELEASE_FAILED 资源释放失败<br>WHITELIST_RELEASE_FAILED 白名单资源释放失败<br>TIMEOUT_EXCEPTION 创建超时异常<br>BILLING 计费中<br>WHITELIST_USING 白名单试用中</p>
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
                     * 获取<p>已废弃,以ServiceInfo中的对应为准</p>
                     * @return ServiceLimit <p>已废弃,以ServiceInfo中的对应为准</p>
                     * @deprecated
                     */
                    ServiceLimit GetServiceLimit() const;

                    /**
                     * 设置<p>已废弃,以ServiceInfo中的对应为准</p>
                     * @param _serviceLimit <p>已废弃,以ServiceInfo中的对应为准</p>
                     * @deprecated
                     */
                    void SetServiceLimit(const ServiceLimit& _serviceLimit);

                    /**
                     * 判断参数 ServiceLimit 是否已赋值
                     * @return ServiceLimit 是否已赋值
                     * @deprecated
                     */
                    bool ServiceLimitHasBeenSet() const;

                    /**
                     * 获取<p>已废弃,以ServiceInfo中的对应为准</p>
                     * @return ScheduledAction <p>已废弃,以ServiceInfo中的对应为准</p>
                     * @deprecated
                     */
                    ScheduledAction GetScheduledAction() const;

                    /**
                     * 设置<p>已废弃,以ServiceInfo中的对应为准</p>
                     * @param _scheduledAction <p>已废弃,以ServiceInfo中的对应为准</p>
                     * @deprecated
                     */
                    void SetScheduledAction(const ScheduledAction& _scheduledAction);

                    /**
                     * 判断参数 ScheduledAction 是否已赋值
                     * @return ScheduledAction 是否已赋值
                     * @deprecated
                     */
                    bool ScheduledActionHasBeenSet() const;

                    /**
                     * 获取<p>服务创建失败的原因，创建成功后该字段为默认值 CREATE_SUCCEED</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateFailedReason <p>服务创建失败的原因，创建成功后该字段为默认值 CREATE_SUCCEED</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateFailedReason() const;

                    /**
                     * 设置<p>服务创建失败的原因，创建成功后该字段为默认值 CREATE_SUCCEED</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createFailedReason <p>服务创建失败的原因，创建成功后该字段为默认值 CREATE_SUCCEED</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateFailedReason(const std::string& _createFailedReason);

                    /**
                     * 判断参数 CreateFailedReason 是否已赋值
                     * @return CreateFailedReason 是否已赋值
                     * 
                     */
                    bool CreateFailedReasonHasBeenSet() const;

                    /**
                     * 获取<p>服务状态<br>CREATING 创建中<br>CREATE_FAILED 创建失败<br>TIMEOUT_EXCEPTION 创建超时异常<br>Normal 正常运行中<br>Stopped 已停止<br>Stopping 停止中<br>Abnormal 异常<br>Pending 启动中<br>Waiting 就绪中</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>服务状态<br>CREATING 创建中<br>CREATE_FAILED 创建失败<br>TIMEOUT_EXCEPTION 创建超时异常<br>Normal 正常运行中<br>Stopped 已停止<br>Stopping 停止中<br>Abnormal 异常<br>Pending 启动中<br>Waiting 就绪中</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>服务状态<br>CREATING 创建中<br>CREATE_FAILED 创建失败<br>TIMEOUT_EXCEPTION 创建超时异常<br>Normal 正常运行中<br>Stopped 已停止<br>Stopping 停止中<br>Abnormal 异常<br>Pending 启动中<br>Waiting 就绪中</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>服务状态<br>CREATING 创建中<br>CREATE_FAILED 创建失败<br>TIMEOUT_EXCEPTION 创建超时异常<br>Normal 正常运行中<br>Stopped 已停止<br>Stopping 停止中<br>Abnormal 异常<br>Pending 启动中<br>Waiting 就绪中</p>
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
                     * 获取<p>费用信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BillingInfo <p>费用信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBillingInfo() const;

                    /**
                     * 设置<p>费用信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _billingInfo <p>费用信息</p>
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
                     * 获取<p>模型权重</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Weight <p>模型权重</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置<p>模型权重</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _weight <p>模型权重</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取<p>服务的创建来源<br>AUTO_ML: 来自自动学习的一键发布<br>DEFAULT: 其他来源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateSource <p>服务的创建来源<br>AUTO_ML: 来自自动学习的一键发布<br>DEFAULT: 其他来源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateSource() const;

                    /**
                     * 设置<p>服务的创建来源<br>AUTO_ML: 来自自动学习的一键发布<br>DEFAULT: 其他来源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createSource <p>服务的创建来源<br>AUTO_ML: 来自自动学习的一键发布<br>DEFAULT: 其他来源</p>
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
                     * 获取<p>版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version <p>版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _version <p>版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取<p>服务组下服务的最高版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LatestVersion <p>服务组下服务的最高版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLatestVersion() const;

                    /**
                     * 设置<p>服务组下服务的最高版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _latestVersion <p>服务组下服务的最高版本号</p>
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
                     * 获取<p>资源组类别 托管 NORMAL，纳管 SW</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroupSWType <p>资源组类别 托管 NORMAL，纳管 SW</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceGroupSWType() const;

                    /**
                     * 设置<p>资源组类别 托管 NORMAL，纳管 SW</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroupSWType <p>资源组类别 托管 NORMAL，纳管 SW</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceGroupSWType(const std::string& _resourceGroupSWType);

                    /**
                     * 判断参数 ResourceGroupSWType 是否已赋值
                     * @return ResourceGroupSWType 是否已赋值
                     * 
                     */
                    bool ResourceGroupSWTypeHasBeenSet() const;

                    /**
                     * 获取<p>服务的归档状态  Waiting 等待归档中，Archived 已归档</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ArchiveStatus <p>服务的归档状态  Waiting 等待归档中，Archived 已归档</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetArchiveStatus() const;

                    /**
                     * 设置<p>服务的归档状态  Waiting 等待归档中，Archived 已归档</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _archiveStatus <p>服务的归档状态  Waiting 等待归档中，Archived 已归档</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetArchiveStatus(const std::string& _archiveStatus);

                    /**
                     * 判断参数 ArchiveStatus 是否已赋值
                     * @return ArchiveStatus 是否已赋值
                     * 
                     */
                    bool ArchiveStatusHasBeenSet() const;

                    /**
                     * 获取<p>服务的部署类型 [STANDARD 标准部署，DIST 分布式多机部署] 默认STANDARD</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeployType <p>服务的部署类型 [STANDARD 标准部署，DIST 分布式多机部署] 默认STANDARD</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeployType() const;

                    /**
                     * 设置<p>服务的部署类型 [STANDARD 标准部署，DIST 分布式多机部署] 默认STANDARD</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deployType <p>服务的部署类型 [STANDARD 标准部署，DIST 分布式多机部署] 默认STANDARD</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeployType(const std::string& _deployType);

                    /**
                     * 判断参数 DeployType 是否已赋值
                     * @return DeployType 是否已赋值
                     * 
                     */
                    bool DeployTypeHasBeenSet() const;

                    /**
                     * 获取<p>单副本下的实例数，仅在部署类型为DIST时生效，默认1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstancePerReplicas <p>单副本下的实例数，仅在部署类型为DIST时生效，默认1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstancePerReplicas() const;

                    /**
                     * 设置<p>单副本下的实例数，仅在部署类型为DIST时生效，默认1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instancePerReplicas <p>单副本下的实例数，仅在部署类型为DIST时生效，默认1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstancePerReplicas(const std::string& _instancePerReplicas);

                    /**
                     * 判断参数 InstancePerReplicas 是否已赋值
                     * @return InstancePerReplicas 是否已赋值
                     * 
                     */
                    bool InstancePerReplicasHasBeenSet() const;

                    /**
                     * 获取<p>用于监控查询的Source<br>枚举值，部分情况下与CreateSource不同，通过该字段兼容</p>
                     * @return MonitorSource <p>用于监控查询的Source<br>枚举值，部分情况下与CreateSource不同，通过该字段兼容</p>
                     * 
                     */
                    std::string GetMonitorSource() const;

                    /**
                     * 设置<p>用于监控查询的Source<br>枚举值，部分情况下与CreateSource不同，通过该字段兼容</p>
                     * @param _monitorSource <p>用于监控查询的Source<br>枚举值，部分情况下与CreateSource不同，通过该字段兼容</p>
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
                     * 获取<p>服务创建者的子账号名称</p>
                     * @return SubUinName <p>服务创建者的子账号名称</p>
                     * 
                     */
                    std::string GetSubUinName() const;

                    /**
                     * 设置<p>服务创建者的子账号名称</p>
                     * @param _subUinName <p>服务创建者的子账号名称</p>
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
                     * 获取<p>服务的调度策略</p>
                     * @return SchedulingPolicy <p>服务的调度策略</p>
                     * 
                     */
                    SchedulingPolicy GetSchedulingPolicy() const;

                    /**
                     * 设置<p>服务的调度策略</p>
                     * @param _schedulingPolicy <p>服务的调度策略</p>
                     * 
                     */
                    void SetSchedulingPolicy(const SchedulingPolicy& _schedulingPolicy);

                    /**
                     * 判断参数 SchedulingPolicy 是否已赋值
                     * @return SchedulingPolicy 是否已赋值
                     * 
                     */
                    bool SchedulingPolicyHasBeenSet() const;

                    /**
                     * 获取<p>外部的资源组信息，表示借调了哪些资源组的资源</p>
                     * @return ExternalResourceGroups <p>外部的资源组信息，表示借调了哪些资源组的资源</p>
                     * 
                     */
                    std::vector<ResourceGroupInfo> GetExternalResourceGroups() const;

                    /**
                     * 设置<p>外部的资源组信息，表示借调了哪些资源组的资源</p>
                     * @param _externalResourceGroups <p>外部的资源组信息，表示借调了哪些资源组的资源</p>
                     * 
                     */
                    void SetExternalResourceGroups(const std::vector<ResourceGroupInfo>& _externalResourceGroups);

                    /**
                     * 判断参数 ExternalResourceGroups 是否已赋值
                     * @return ExternalResourceGroups 是否已赋值
                     * 
                     */
                    bool ExternalResourceGroupsHasBeenSet() const;

                    /**
                     * 获取<p>服务所属的项目 id,0表示默认空间</p>
                     * @return ProjectId <p>服务所属的项目 id,0表示默认空间</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>服务所属的项目 id,0表示默认空间</p>
                     * @param _projectId <p>服务所属的项目 id,0表示默认空间</p>
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>变更服务的子账户</p>
                     * @return Changer <p>变更服务的子账户</p>
                     * 
                     */
                    std::string GetChanger() const;

                    /**
                     * 设置<p>变更服务的子账户</p>
                     * @param _changer <p>变更服务的子账户</p>
                     * 
                     */
                    void SetChanger(const std::string& _changer);

                    /**
                     * 判断参数 Changer 是否已赋值
                     * @return Changer 是否已赋值
                     * 
                     */
                    bool ChangerHasBeenSet() const;

                    /**
                     * 获取<p>变更服务的子账户名称</p>
                     * @return ChangerName <p>变更服务的子账户名称</p>
                     * 
                     */
                    std::string GetChangerName() const;

                    /**
                     * 设置<p>变更服务的子账户名称</p>
                     * @param _changerName <p>变更服务的子账户名称</p>
                     * 
                     */
                    void SetChangerName(const std::string& _changerName);

                    /**
                     * 判断参数 ChangerName 是否已赋值
                     * @return ChangerName 是否已赋值
                     * 
                     */
                    bool ChangerNameHasBeenSet() const;

                private:

                    /**
                     * <p>服务组id</p>
                     */
                    std::string m_serviceGroupId;
                    bool m_serviceGroupIdHasBeenSet;

                    /**
                     * <p>服务id</p>
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * <p>服务组名</p>
                     */
                    std::string m_serviceGroupName;
                    bool m_serviceGroupNameHasBeenSet;

                    /**
                     * <p>服务描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceDescription;
                    bool m_serviceDescriptionHasBeenSet;

                    /**
                     * <p>服务的详细信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ServiceInfo m_serviceInfo;
                    bool m_serviceInfoHasBeenSet;

                    /**
                     * <p>集群id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>命名空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * <p>付费类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * <p>包年包月服务的资源组id，按量计费的服务为空</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * <p>包年包月服务对应的资源组名字</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroupName;
                    bool m_resourceGroupNameHasBeenSet;

                    /**
                     * <p>服务的标签</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>服务所在的 ingress 的 name</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ingressName;
                    bool m_ingressNameHasBeenSet;

                    /**
                     * <p>创建者</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdBy;
                    bool m_createdByHasBeenSet;

                    /**
                     * <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>主账号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>子账号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subUin;
                    bool m_subUinHasBeenSet;

                    /**
                     * <p>app_id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>服务的业务状态<br>CREATING 创建中<br>CREATE_FAILED 创建失败<br>CREATE_SUCCEED 创建成功<br>ARREARS_STOP 因欠费停止<br>WHITELIST_STOP 白名单额度不足<br>RELEASE_FAILED 资源释放失败<br>WHITELIST_RELEASE_FAILED 白名单资源释放失败<br>TIMEOUT_EXCEPTION 创建超时异常<br>BILLING 计费中<br>WHITELIST_USING 白名单试用中</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_businessStatus;
                    bool m_businessStatusHasBeenSet;

                    /**
                     * <p>已废弃,以ServiceInfo中的对应为准</p>
                     */
                    ServiceLimit m_serviceLimit;
                    bool m_serviceLimitHasBeenSet;

                    /**
                     * <p>已废弃,以ServiceInfo中的对应为准</p>
                     */
                    ScheduledAction m_scheduledAction;
                    bool m_scheduledActionHasBeenSet;

                    /**
                     * <p>服务创建失败的原因，创建成功后该字段为默认值 CREATE_SUCCEED</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createFailedReason;
                    bool m_createFailedReasonHasBeenSet;

                    /**
                     * <p>服务状态<br>CREATING 创建中<br>CREATE_FAILED 创建失败<br>TIMEOUT_EXCEPTION 创建超时异常<br>Normal 正常运行中<br>Stopped 已停止<br>Stopping 停止中<br>Abnormal 异常<br>Pending 启动中<br>Waiting 就绪中</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>费用信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_billingInfo;
                    bool m_billingInfoHasBeenSet;

                    /**
                     * <p>模型权重</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * <p>服务的创建来源<br>AUTO_ML: 来自自动学习的一键发布<br>DEFAULT: 其他来源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createSource;
                    bool m_createSourceHasBeenSet;

                    /**
                     * <p>版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>服务组下服务的最高版本号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_latestVersion;
                    bool m_latestVersionHasBeenSet;

                    /**
                     * <p>资源组类别 托管 NORMAL，纳管 SW</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroupSWType;
                    bool m_resourceGroupSWTypeHasBeenSet;

                    /**
                     * <p>服务的归档状态  Waiting 等待归档中，Archived 已归档</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_archiveStatus;
                    bool m_archiveStatusHasBeenSet;

                    /**
                     * <p>服务的部署类型 [STANDARD 标准部署，DIST 分布式多机部署] 默认STANDARD</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deployType;
                    bool m_deployTypeHasBeenSet;

                    /**
                     * <p>单副本下的实例数，仅在部署类型为DIST时生效，默认1</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instancePerReplicas;
                    bool m_instancePerReplicasHasBeenSet;

                    /**
                     * <p>用于监控查询的Source<br>枚举值，部分情况下与CreateSource不同，通过该字段兼容</p>
                     */
                    std::string m_monitorSource;
                    bool m_monitorSourceHasBeenSet;

                    /**
                     * <p>服务创建者的子账号名称</p>
                     */
                    std::string m_subUinName;
                    bool m_subUinNameHasBeenSet;

                    /**
                     * <p>服务的调度策略</p>
                     */
                    SchedulingPolicy m_schedulingPolicy;
                    bool m_schedulingPolicyHasBeenSet;

                    /**
                     * <p>外部的资源组信息，表示借调了哪些资源组的资源</p>
                     */
                    std::vector<ResourceGroupInfo> m_externalResourceGroups;
                    bool m_externalResourceGroupsHasBeenSet;

                    /**
                     * <p>服务所属的项目 id,0表示默认空间</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>变更服务的子账户</p>
                     */
                    std::string m_changer;
                    bool m_changerHasBeenSet;

                    /**
                     * <p>变更服务的子账户名称</p>
                     */
                    std::string m_changerName;
                    bool m_changerNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_SERVICE_H_
