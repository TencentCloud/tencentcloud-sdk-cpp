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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_MQPACKAGEVO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_MQPACKAGEVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * MQPackageVO
                */
                class MQPackageVO : public AbstractModel
                {
                public:
                    MQPackageVO();
                    ~MQPackageVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ckafka消息队列
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type ckafka消息队列
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置ckafka消息队列
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type ckafka消息队列
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取实例Id/集群Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 实例Id/集群Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例Id/集群Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceId 实例Id/集群Id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取实例名称/集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceName 实例名称/集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置实例名称/集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceName 实例名称/集群名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取局域网Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VpcId 局域网Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置局域网Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vpcId 局域网Id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取子网Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubnetId 子网Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置子网Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subnetId 子网Id
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取资源状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 资源状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置资源状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 资源状态
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取资源状态描述：保存创建失败，运行异常和更新失败的原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusDescription 资源状态描述：保存创建失败，运行异常和更新失败的原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatusDescription() const;

                    /**
                     * 设置资源状态描述：保存创建失败，运行异常和更新失败的原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statusDescription 资源状态描述：保存创建失败，运行异常和更新失败的原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatusDescription(const std::string& _statusDescription);

                    /**
                     * 判断参数 StatusDescription 是否已赋值
                     * @return StatusDescription 是否已赋值
                     * 
                     */
                    bool StatusDescriptionHasBeenSet() const;

                    /**
                     * 获取DataProxy规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataProxySpec DataProxy规格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataProxySpec() const;

                    /**
                     * 设置DataProxy规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataProxySpec DataProxy规格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataProxySpec(const std::string& _dataProxySpec);

                    /**
                     * 判断参数 DataProxySpec 是否已赋值
                     * @return DataProxySpec 是否已赋值
                     * 
                     */
                    bool DataProxySpecHasBeenSet() const;

                    /**
                     * 获取DataProxy数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataProxyNum DataProxy数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDataProxyNum() const;

                    /**
                     * 设置DataProxy数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataProxyNum DataProxy数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataProxyNum(const int64_t& _dataProxyNum);

                    /**
                     * 判断参数 DataProxyNum 是否已赋值
                     * @return DataProxyNum 是否已赋值
                     * 
                     */
                    bool DataProxyNumHasBeenSet() const;

                    /**
                     * 获取DataProxy状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataProxyStatus DataProxy状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDataProxyStatus() const;

                    /**
                     * 设置DataProxy状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataProxyStatus DataProxy状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataProxyStatus(const int64_t& _dataProxyStatus);

                    /**
                     * 判断参数 DataProxyStatus 是否已赋值
                     * @return DataProxyStatus 是否已赋值
                     * 
                     */
                    bool DataProxyStatusHasBeenSet() const;

                    /**
                     * 获取DataProxy状态描述：保存创建失败，运行异常和更新失败的原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataProxyStatusDescription DataProxy状态描述：保存创建失败，运行异常和更新失败的原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataProxyStatusDescription() const;

                    /**
                     * 设置DataProxy状态描述：保存创建失败，运行异常和更新失败的原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataProxyStatusDescription DataProxy状态描述：保存创建失败，运行异常和更新失败的原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataProxyStatusDescription(const std::string& _dataProxyStatusDescription);

                    /**
                     * 判断参数 DataProxyStatusDescription 是否已赋值
                     * @return DataProxyStatusDescription 是否已赋值
                     * 
                     */
                    bool DataProxyStatusDescriptionHasBeenSet() const;

                    /**
                     * 获取计费类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BillingType 计费类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBillingType() const;

                    /**
                     * 设置计费类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _billingType 计费类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBillingType(const std::string& _billingType);

                    /**
                     * 判断参数 BillingType 是否已赋值
                     * @return BillingType 是否已赋值
                     * 
                     */
                    bool BillingTypeHasBeenSet() const;

                    /**
                     * 获取资源到期时间，时间戳毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireTime 资源到期时间，时间戳毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置资源到期时间，时间戳毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expireTime 资源到期时间，时间戳毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpireTime(const int64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取资源生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LifeTime 资源生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLifeTime() const;

                    /**
                     * 设置资源生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lifeTime 资源生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLifeTime(const int64_t& _lifeTime);

                    /**
                     * 判断参数 LifeTime 是否已赋值
                     * @return LifeTime 是否已赋值
                     * 
                     */
                    bool LifeTimeHasBeenSet() const;

                private:

                    /**
                     * ckafka消息队列
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 实例Id/集群Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例名称/集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * 局域网Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 资源状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 资源状态描述：保存创建失败，运行异常和更新失败的原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_statusDescription;
                    bool m_statusDescriptionHasBeenSet;

                    /**
                     * DataProxy规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataProxySpec;
                    bool m_dataProxySpecHasBeenSet;

                    /**
                     * DataProxy数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_dataProxyNum;
                    bool m_dataProxyNumHasBeenSet;

                    /**
                     * DataProxy状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_dataProxyStatus;
                    bool m_dataProxyStatusHasBeenSet;

                    /**
                     * DataProxy状态描述：保存创建失败，运行异常和更新失败的原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataProxyStatusDescription;
                    bool m_dataProxyStatusDescriptionHasBeenSet;

                    /**
                     * 计费类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_billingType;
                    bool m_billingTypeHasBeenSet;

                    /**
                     * 资源到期时间，时间戳毫秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 资源生命周期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_lifeTime;
                    bool m_lifeTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_MQPACKAGEVO_H_
