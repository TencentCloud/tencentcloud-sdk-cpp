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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_PARTITIONDETAIL_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_PARTITIONDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/ResourceQuota.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 资源分区详情
                */
                class PartitionDetail : public AbstractModel
                {
                public:
                    PartitionDetail();
                    ~PartitionDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>分区编码</p>
                     * @return PartitionCode <p>分区编码</p>
                     * 
                     */
                    std::string GetPartitionCode() const;

                    /**
                     * 设置<p>分区编码</p>
                     * @param _partitionCode <p>分区编码</p>
                     * 
                     */
                    void SetPartitionCode(const std::string& _partitionCode);

                    /**
                     * 判断参数 PartitionCode 是否已赋值
                     * @return PartitionCode 是否已赋值
                     * 
                     */
                    bool PartitionCodeHasBeenSet() const;

                    /**
                     * 获取<p>分区名称</p>
                     * @return PartitionName <p>分区名称</p>
                     * 
                     */
                    std::string GetPartitionName() const;

                    /**
                     * 设置<p>分区名称</p>
                     * @param _partitionName <p>分区名称</p>
                     * 
                     */
                    void SetPartitionName(const std::string& _partitionName);

                    /**
                     * 判断参数 PartitionName 是否已赋值
                     * @return PartitionName 是否已赋值
                     * 
                     */
                    bool PartitionNameHasBeenSet() const;

                    /**
                     * 获取<p>分区描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description <p>分区描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>分区描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description <p>分区描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>地域</p>
                     * @return Region <p>地域</p>
                     * 
                     */
                    int64_t GetRegion() const;

                    /**
                     * 设置<p>地域</p>
                     * @param _region <p>地域</p>
                     * 
                     */
                    void SetRegion(const int64_t& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>产品信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductInfo <p>产品信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProductInfo() const;

                    /**
                     * 设置<p>产品信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _productInfo <p>产品信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProductInfo(const std::string& _productInfo);

                    /**
                     * 判断参数 ProductInfo 是否已赋值
                     * @return ProductInfo 是否已赋值
                     * 
                     */
                    bool ProductInfoHasBeenSet() const;

                    /**
                     * 获取<p>资源池编码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourcePoolCode <p>资源池编码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourcePoolCode() const;

                    /**
                     * 设置<p>资源池编码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourcePoolCode <p>资源池编码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourcePoolCode(const std::string& _resourcePoolCode);

                    /**
                     * 判断参数 ResourcePoolCode 是否已赋值
                     * @return ResourcePoolCode 是否已赋值
                     * 
                     */
                    bool ResourcePoolCodeHasBeenSet() const;

                    /**
                     * 获取<p>资源配额列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceQuota <p>资源配额列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ResourceQuota> GetResourceQuota() const;

                    /**
                     * 设置<p>资源配额列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceQuota <p>资源配额列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceQuota(const std::vector<ResourceQuota>& _resourceQuota);

                    /**
                     * 判断参数 ResourceQuota 是否已赋值
                     * @return ResourceQuota 是否已赋值
                     * 
                     */
                    bool ResourceQuotaHasBeenSet() const;

                    /**
                     * 获取<p>付费模式</p>
                     * @return PayMode <p>付费模式</p>
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置<p>付费模式</p>
                     * @param _payMode <p>付费模式</p>
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
                     * 获取<p>续费标志</p>
                     * @return RenewFlag <p>续费标志</p>
                     * 
                     */
                    int64_t GetRenewFlag() const;

                    /**
                     * 设置<p>续费标志</p>
                     * @param _renewFlag <p>续费标志</p>
                     * 
                     */
                    void SetRenewFlag(const int64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取<p>调度器类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Scheduler <p>调度器类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScheduler() const;

                    /**
                     * 设置<p>调度器类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scheduler <p>调度器类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScheduler(const std::string& _scheduler);

                    /**
                     * 判断参数 Scheduler 是否已赋值
                     * @return Scheduler 是否已赋值
                     * 
                     */
                    bool SchedulerHasBeenSet() const;

                    /**
                     * 获取<p>状态</p>
                     * @return Status <p>状态</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>状态</p>
                     * @param _status <p>状态</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>分区编码</p>
                     */
                    std::string m_partitionCode;
                    bool m_partitionCodeHasBeenSet;

                    /**
                     * <p>分区名称</p>
                     */
                    std::string m_partitionName;
                    bool m_partitionNameHasBeenSet;

                    /**
                     * <p>分区描述</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>地域</p>
                     */
                    int64_t m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>产品信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productInfo;
                    bool m_productInfoHasBeenSet;

                    /**
                     * <p>资源池编码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourcePoolCode;
                    bool m_resourcePoolCodeHasBeenSet;

                    /**
                     * <p>资源配额列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ResourceQuota> m_resourceQuota;
                    bool m_resourceQuotaHasBeenSet;

                    /**
                     * <p>付费模式</p>
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>续费标志</p>
                     */
                    int64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * <p>调度器类型</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scheduler;
                    bool m_schedulerHasBeenSet;

                    /**
                     * <p>状态</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_PARTITIONDETAIL_H_
