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
                     * 获取服务id
                     * @return ServiceId 服务id
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置服务id
                     * @param _serviceId 服务id
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
                     * 获取服务描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceDescription 服务描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetServiceDescription() const;

                    /**
                     * 设置服务描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceDescription 服务描述
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
                     * 获取服务的详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceInfo 服务的详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ServiceInfo GetServiceInfo() const;

                    /**
                     * 设置服务的详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceInfo 服务的详细信息
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
                     * 获取集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId 集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterId 集群id
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
                     * 获取地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region 地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region 地域
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
                     * 获取命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Namespace 命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespace 命名空间
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
                     * 获取付费类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChargeType 付费类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChargeType() const;

                    /**
                     * 设置付费类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _chargeType 付费类型
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
                     * 获取包年包月服务的资源组id，按量计费的服务为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroupId 包年包月服务的资源组id，按量计费的服务为空
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置包年包月服务的资源组id，按量计费的服务为空
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroupId 包年包月服务的资源组id，按量计费的服务为空
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
                     * 获取包年包月服务对应的资源组名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroupName 包年包月服务对应的资源组名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceGroupName() const;

                    /**
                     * 设置包年包月服务对应的资源组名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroupName 包年包月服务对应的资源组名字
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
                     * 获取服务的标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 服务的标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置服务的标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 服务的标签
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
                     * 获取服务所在的 ingress 的 name
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IngressName 服务所在的 ingress 的 name
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIngressName() const;

                    /**
                     * 设置服务所在的 ingress 的 name
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ingressName 服务所在的 ingress 的 name
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
                     * 获取创建者
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedBy 创建者
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatedBy() const;

                    /**
                     * 设置创建者
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createdBy 创建者
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
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
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
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
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
                     * 获取主账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uin 主账号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置主账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uin 主账号
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
                     * 获取子账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubUin 子账号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubUin() const;

                    /**
                     * 设置子账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subUin 子账号
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
                     * 获取app_id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId app_id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置app_id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appId app_id
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
                     * 获取服务的业务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BusinessStatus 服务的业务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBusinessStatus() const;

                    /**
                     * 设置服务的业务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _businessStatus 服务的业务状态
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
                     * 获取已废弃,以ServiceInfo中的对应为准
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceLimit 已废弃,以ServiceInfo中的对应为准
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    ServiceLimit GetServiceLimit() const;

                    /**
                     * 设置已废弃,以ServiceInfo中的对应为准
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceLimit 已废弃,以ServiceInfo中的对应为准
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取已废弃,以ServiceInfo中的对应为准
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScheduledAction 已废弃,以ServiceInfo中的对应为准
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    ScheduledAction GetScheduledAction() const;

                    /**
                     * 设置已废弃,以ServiceInfo中的对应为准
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheduledAction 已废弃,以ServiceInfo中的对应为准
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取服务创建失败的原因，创建成功后该字段为默认值 CREATE_SUCCEED
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateFailedReason 服务创建失败的原因，创建成功后该字段为默认值 CREATE_SUCCEED
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateFailedReason() const;

                    /**
                     * 设置服务创建失败的原因，创建成功后该字段为默认值 CREATE_SUCCEED
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createFailedReason 服务创建失败的原因，创建成功后该字段为默认值 CREATE_SUCCEED
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
                     * 获取服务状态
CREATING 创建中
CREATE_FAILED 创建失败
Normal	正常运行中
Stopped  已停止
Stopping 停止中
Abnormal 异常
Pending 启动中
Waiting 就绪中
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 服务状态
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
                     * 设置服务状态
CREATING 创建中
CREATE_FAILED 创建失败
Normal	正常运行中
Stopped  已停止
Stopping 停止中
Abnormal 异常
Pending 启动中
Waiting 就绪中
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 服务状态
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
                     * 获取费用信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BillingInfo 费用信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBillingInfo() const;

                    /**
                     * 设置费用信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _billingInfo 费用信息
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
                     * 获取模型权重
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Weight 模型权重
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置模型权重
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _weight 模型权重
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
                     * 获取服务的创建来源
AUTO_ML: 来自自动学习的一键发布
DEFAULT: 其他来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateSource 服务的创建来源
AUTO_ML: 来自自动学习的一键发布
DEFAULT: 其他来源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateSource() const;

                    /**
                     * 设置服务的创建来源
AUTO_ML: 来自自动学习的一键发布
DEFAULT: 其他来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createSource 服务的创建来源
AUTO_ML: 来自自动学习的一键发布
DEFAULT: 其他来源
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
                     * 获取版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version 版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _version 版本号
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
                     * 获取服务组下服务的最高版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LatestVersion 服务组下服务的最高版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLatestVersion() const;

                    /**
                     * 设置服务组下服务的最高版本号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _latestVersion 服务组下服务的最高版本号
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
                     * 获取资源组类别 托管 NORMAL，纳管 SW
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceGroupSWType 资源组类别 托管 NORMAL，纳管 SW
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceGroupSWType() const;

                    /**
                     * 设置资源组类别 托管 NORMAL，纳管 SW
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceGroupSWType 资源组类别 托管 NORMAL，纳管 SW
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
                     * 获取服务的归档状态  Waiting 等待归档中，Archived 已归档
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ArchiveStatus 服务的归档状态  Waiting 等待归档中，Archived 已归档
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetArchiveStatus() const;

                    /**
                     * 设置服务的归档状态  Waiting 等待归档中，Archived 已归档
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _archiveStatus 服务的归档状态  Waiting 等待归档中，Archived 已归档
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
                     * 获取服务的部署类型 [STANDARD 标准部署，DIST 分布式多机部署] 默认STANDARD
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeployType 服务的部署类型 [STANDARD 标准部署，DIST 分布式多机部署] 默认STANDARD
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeployType() const;

                    /**
                     * 设置服务的部署类型 [STANDARD 标准部署，DIST 分布式多机部署] 默认STANDARD
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deployType 服务的部署类型 [STANDARD 标准部署，DIST 分布式多机部署] 默认STANDARD
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
                     * 获取单副本下的实例数，仅在部署类型为DIST时生效，默认1
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstancePerReplicas 单副本下的实例数，仅在部署类型为DIST时生效，默认1
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstancePerReplicas() const;

                    /**
                     * 设置单副本下的实例数，仅在部署类型为DIST时生效，默认1
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instancePerReplicas 单副本下的实例数，仅在部署类型为DIST时生效，默认1
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
                     * 获取用于监控查询的Source
枚举值，部分情况下与CreateSource不同，通过该字段兼容
                     * @return MonitorSource 用于监控查询的Source
枚举值，部分情况下与CreateSource不同，通过该字段兼容
                     * 
                     */
                    std::string GetMonitorSource() const;

                    /**
                     * 设置用于监控查询的Source
枚举值，部分情况下与CreateSource不同，通过该字段兼容
                     * @param _monitorSource 用于监控查询的Source
枚举值，部分情况下与CreateSource不同，通过该字段兼容
                     * 
                     */
                    void SetMonitorSource(const std::string& _monitorSource);

                    /**
                     * 判断参数 MonitorSource 是否已赋值
                     * @return MonitorSource 是否已赋值
                     * 
                     */
                    bool MonitorSourceHasBeenSet() const;

                private:

                    /**
                     * 服务组id
                     */
                    std::string m_serviceGroupId;
                    bool m_serviceGroupIdHasBeenSet;

                    /**
                     * 服务id
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 服务组名
                     */
                    std::string m_serviceGroupName;
                    bool m_serviceGroupNameHasBeenSet;

                    /**
                     * 服务描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serviceDescription;
                    bool m_serviceDescriptionHasBeenSet;

                    /**
                     * 服务的详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ServiceInfo m_serviceInfo;
                    bool m_serviceInfoHasBeenSet;

                    /**
                     * 集群id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 命名空间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * 付费类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_chargeType;
                    bool m_chargeTypeHasBeenSet;

                    /**
                     * 包年包月服务的资源组id，按量计费的服务为空
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * 包年包月服务对应的资源组名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroupName;
                    bool m_resourceGroupNameHasBeenSet;

                    /**
                     * 服务的标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 服务所在的 ingress 的 name
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ingressName;
                    bool m_ingressNameHasBeenSet;

                    /**
                     * 创建者
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createdBy;
                    bool m_createdByHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 主账号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 子账号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subUin;
                    bool m_subUinHasBeenSet;

                    /**
                     * app_id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 服务的业务状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_businessStatus;
                    bool m_businessStatusHasBeenSet;

                    /**
                     * 已废弃,以ServiceInfo中的对应为准
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ServiceLimit m_serviceLimit;
                    bool m_serviceLimitHasBeenSet;

                    /**
                     * 已废弃,以ServiceInfo中的对应为准
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ScheduledAction m_scheduledAction;
                    bool m_scheduledActionHasBeenSet;

                    /**
                     * 服务创建失败的原因，创建成功后该字段为默认值 CREATE_SUCCEED
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createFailedReason;
                    bool m_createFailedReasonHasBeenSet;

                    /**
                     * 服务状态
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
                     * 费用信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_billingInfo;
                    bool m_billingInfoHasBeenSet;

                    /**
                     * 模型权重
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 服务的创建来源
AUTO_ML: 来自自动学习的一键发布
DEFAULT: 其他来源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createSource;
                    bool m_createSourceHasBeenSet;

                    /**
                     * 版本号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 服务组下服务的最高版本号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_latestVersion;
                    bool m_latestVersionHasBeenSet;

                    /**
                     * 资源组类别 托管 NORMAL，纳管 SW
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceGroupSWType;
                    bool m_resourceGroupSWTypeHasBeenSet;

                    /**
                     * 服务的归档状态  Waiting 等待归档中，Archived 已归档
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_archiveStatus;
                    bool m_archiveStatusHasBeenSet;

                    /**
                     * 服务的部署类型 [STANDARD 标准部署，DIST 分布式多机部署] 默认STANDARD
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deployType;
                    bool m_deployTypeHasBeenSet;

                    /**
                     * 单副本下的实例数，仅在部署类型为DIST时生效，默认1
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instancePerReplicas;
                    bool m_instancePerReplicasHasBeenSet;

                    /**
                     * 用于监控查询的Source
枚举值，部分情况下与CreateSource不同，通过该字段兼容
                     */
                    std::string m_monitorSource;
                    bool m_monitorSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_SERVICE_H_
