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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_EXECUTORRESOURCEPACKAGEEXTINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_EXECUTORRESOURCEPACKAGEEXTINFO_H_

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
                * 执行资源包额外信息
                */
                class ExecutorResourcePackageExtInfo : public AbstractModel
                {
                public:
                    ExecutorResourcePackageExtInfo();
                    ~ExecutorResourcePackageExtInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集成资源组：InLong集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InlongGroupId 集成资源组：InLong集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInlongGroupId() const;

                    /**
                     * 设置集成资源组：InLong集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inlongGroupId 集成资源组：InLong集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInlongGroupId(const std::string& _inlongGroupId);

                    /**
                     * 判断参数 InlongGroupId 是否已赋值
                     * @return InlongGroupId 是否已赋值
                     * 
                     */
                    bool InlongGroupIdHasBeenSet() const;

                    /**
                     * 获取集成资源组：oceanus集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OceanusClusterId 集成资源组：oceanus集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOceanusClusterId() const;

                    /**
                     * 设置集成资源组：oceanus集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _oceanusClusterId 集成资源组：oceanus集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOceanusClusterId(const std::string& _oceanusClusterId);

                    /**
                     * 判断参数 OceanusClusterId 是否已赋值
                     * @return OceanusClusterId 是否已赋值
                     * 
                     */
                    bool OceanusClusterIdHasBeenSet() const;

                    /**
                     * 获取计费相关：产品资源id列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductResourceIdList 计费相关：产品资源id列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetProductResourceIdList() const;

                    /**
                     * 设置计费相关：产品资源id列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productResourceIdList 计费相关：产品资源id列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProductResourceIdList(const std::vector<std::string>& _productResourceIdList);

                    /**
                     * 判断参数 ProductResourceIdList 是否已赋值
                     * @return ProductResourceIdList 是否已赋值
                     * 
                     */
                    bool ProductResourceIdListHasBeenSet() const;

                    /**
                     * 获取当前资源包对应订单是否发货成功
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BillingSuccess 当前资源包对应订单是否发货成功
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetBillingSuccess() const;

                    /**
                     * 设置当前资源包对应订单是否发货成功
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _billingSuccess 当前资源包对应订单是否发货成功
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBillingSuccess(const bool& _billingSuccess);

                    /**
                     * 判断参数 BillingSuccess 是否已赋值
                     * @return BillingSuccess 是否已赋值
                     * 
                     */
                    bool BillingSuccessHasBeenSet() const;

                    /**
                     * 获取apigw服务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApigwServiceId apigw服务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApigwServiceId() const;

                    /**
                     * 设置apigw服务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apigwServiceId apigw服务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApigwServiceId(const std::string& _apigwServiceId);

                    /**
                     * 判断参数 ApigwServiceId 是否已赋值
                     * @return ApigwServiceId 是否已赋值
                     * 
                     */
                    bool ApigwServiceIdHasBeenSet() const;

                    /**
                     * 获取apigw服务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApigwServiceName apigw服务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetApigwServiceName() const;

                    /**
                     * 设置apigw服务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _apigwServiceName apigw服务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetApigwServiceName(const std::string& _apigwServiceName);

                    /**
                     * 判断参数 ApigwServiceName 是否已赋值
                     * @return ApigwServiceName 是否已赋值
                     * 
                     */
                    bool ApigwServiceNameHasBeenSet() const;

                    /**
                     * 获取数据集成相关：dataProxy配置规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataProxySpec 数据集成相关：dataProxy配置规格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDataProxySpec() const;

                    /**
                     * 设置数据集成相关：dataProxy配置规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataProxySpec 数据集成相关：dataProxy配置规格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataProxySpec(const int64_t& _dataProxySpec);

                    /**
                     * 判断参数 DataProxySpec 是否已赋值
                     * @return DataProxySpec 是否已赋值
                     * 
                     */
                    bool DataProxySpecHasBeenSet() const;

                    /**
                     * 获取dataProxy数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataProxyNum dataProxy数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDataProxyNum() const;

                    /**
                     * 设置dataProxy数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataProxyNum dataProxy数量
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
                     * 获取dataProxy状态，同ExecutorGroupStatus
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataProxyStatus dataProxy状态，同ExecutorGroupStatus
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDataProxyStatus() const;

                    /**
                     * 设置dataProxy状态，同ExecutorGroupStatus
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataProxyStatus dataProxy状态，同ExecutorGroupStatus
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
                     * 获取inlongManager地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InLongManagerUrl inlongManager地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInLongManagerUrl() const;

                    /**
                     * 设置inlongManager地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inLongManagerUrl inlongManager地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInLongManagerUrl(const std::string& _inLongManagerUrl);

                    /**
                     * 判断参数 InLongManagerUrl 是否已赋值
                     * @return InLongManagerUrl 是否已赋值
                     * 
                     */
                    bool InLongManagerUrlHasBeenSet() const;

                    /**
                     * 获取inlong版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InLongVersion inlong版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInLongVersion() const;

                    /**
                     * 设置inlong版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inLongVersion inlong版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInLongVersion(const std::string& _inLongVersion);

                    /**
                     * 判断参数 InLongVersion 是否已赋值
                     * @return InLongVersion 是否已赋值
                     * 
                     */
                    bool InLongVersionHasBeenSet() const;

                    /**
                     * 获取私有化资源组相关: 执行及机器ip列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutorMachineIpList 私有化资源组相关: 执行及机器ip列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutorMachineIpList() const;

                    /**
                     * 设置私有化资源组相关: 执行及机器ip列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executorMachineIpList 私有化资源组相关: 执行及机器ip列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutorMachineIpList(const std::string& _executorMachineIpList);

                    /**
                     * 判断参数 ExecutorMachineIpList 是否已赋值
                     * @return ExecutorMachineIpList 是否已赋值
                     * 
                     */
                    bool ExecutorMachineIpListHasBeenSet() const;

                private:

                    /**
                     * 集成资源组：InLong集群id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inlongGroupId;
                    bool m_inlongGroupIdHasBeenSet;

                    /**
                     * 集成资源组：oceanus集群id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_oceanusClusterId;
                    bool m_oceanusClusterIdHasBeenSet;

                    /**
                     * 计费相关：产品资源id列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_productResourceIdList;
                    bool m_productResourceIdListHasBeenSet;

                    /**
                     * 当前资源包对应订单是否发货成功
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_billingSuccess;
                    bool m_billingSuccessHasBeenSet;

                    /**
                     * apigw服务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apigwServiceId;
                    bool m_apigwServiceIdHasBeenSet;

                    /**
                     * apigw服务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_apigwServiceName;
                    bool m_apigwServiceNameHasBeenSet;

                    /**
                     * 数据集成相关：dataProxy配置规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_dataProxySpec;
                    bool m_dataProxySpecHasBeenSet;

                    /**
                     * dataProxy数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_dataProxyNum;
                    bool m_dataProxyNumHasBeenSet;

                    /**
                     * dataProxy状态，同ExecutorGroupStatus
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_dataProxyStatus;
                    bool m_dataProxyStatusHasBeenSet;

                    /**
                     * inlongManager地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inLongManagerUrl;
                    bool m_inLongManagerUrlHasBeenSet;

                    /**
                     * inlong版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inLongVersion;
                    bool m_inLongVersionHasBeenSet;

                    /**
                     * 私有化资源组相关: 执行及机器ip列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executorMachineIpList;
                    bool m_executorMachineIpListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_EXECUTORRESOURCEPACKAGEEXTINFO_H_
