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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_INSTANCEITEMEXTRAINFO_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_INSTANCEITEMEXTRAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * 4.x集群和5.0集群列表统一显示 4.x特殊数据承载接口
                */
                class InstanceItemExtraInfo : public AbstractModel
                {
                public:
                    InstanceItemExtraInfo();
                    ~InstanceItemExtraInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否vip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsVip 是否vip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsVip() const;

                    /**
                     * 设置是否vip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isVip 是否vip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsVip(const bool& _isVip);

                    /**
                     * 判断参数 IsVip 是否已赋值
                     * @return IsVip 是否已赋值
                     * 
                     */
                    bool IsVipHasBeenSet() const;

                    /**
                     * 获取4.x专享集群状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VipInstanceStatus 4.x专享集群状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetVipInstanceStatus() const;

                    /**
                     * 设置4.x专享集群状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vipInstanceStatus 4.x专享集群状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVipInstanceStatus(const int64_t& _vipInstanceStatus);

                    /**
                     * 判断参数 VipInstanceStatus 是否已赋值
                     * @return VipInstanceStatus 是否已赋值
                     * 
                     */
                    bool VipInstanceStatusHasBeenSet() const;

                    /**
                     * 获取专享集群峰值带宽
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxBandWidth 专享集群峰值带宽
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxBandWidth() const;

                    /**
                     * 设置专享集群峰值带宽
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxBandWidth 专享集群峰值带宽
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxBandWidth(const int64_t& _maxBandWidth);

                    /**
                     * 判断参数 MaxBandWidth 是否已赋值
                     * @return MaxBandWidth 是否已赋值
                     * 
                     */
                    bool MaxBandWidthHasBeenSet() const;

                    /**
                     * 获取专享集群规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SpecName 专享集群规格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置专享集群规格
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _specName 专享集群规格
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSpecName(const std::string& _specName);

                    /**
                     * 判断参数 SpecName 是否已赋值
                     * @return SpecName 是否已赋值
                     * 
                     */
                    bool SpecNameHasBeenSet() const;

                    /**
                     * 获取专享集群节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeCount 专享集群节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetNodeCount() const;

                    /**
                     * 设置专享集群节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeCount 专享集群节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeCount(const int64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取专享集群最大存储
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxStorage 专享集群最大存储
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxStorage() const;

                    /**
                     * 设置专享集群最大存储
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxStorage 专享集群最大存储
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxStorage(const int64_t& _maxStorage);

                    /**
                     * 判断参数 MaxStorage 是否已赋值
                     * @return MaxStorage 是否已赋值
                     * 
                     */
                    bool MaxStorageHasBeenSet() const;

                    /**
                     * 获取专享集群最大保留时间，单位：小时
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaxRetention 专享集群最大保留时间，单位：小时
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMaxRetention() const;

                    /**
                     * 设置专享集群最大保留时间，单位：小时
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _maxRetention 专享集群最大保留时间，单位：小时
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaxRetention(const int64_t& _maxRetention);

                    /**
                     * 判断参数 MaxRetention 是否已赋值
                     * @return MaxRetention 是否已赋值
                     * 
                     */
                    bool MaxRetentionHasBeenSet() const;

                    /**
                     * 获取专项集群最大保留时间，单位：小时
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MinRetention 专项集群最大保留时间，单位：小时
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMinRetention() const;

                    /**
                     * 设置专项集群最大保留时间，单位：小时
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _minRetention 专项集群最大保留时间，单位：小时
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMinRetention(const int64_t& _minRetention);

                    /**
                     * 判断参数 MinRetention 是否已赋值
                     * @return MinRetention 是否已赋值
                     * 
                     */
                    bool MinRetentionHasBeenSet() const;

                    /**
                     * 获取4.0共享集群状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceStatus 4.0共享集群状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetInstanceStatus() const;

                    /**
                     * 设置4.0共享集群状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceStatus 4.0共享集群状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceStatus(const int64_t& _instanceStatus);

                    /**
                     * 判断参数 InstanceStatus 是否已赋值
                     * @return InstanceStatus 是否已赋值
                     * 
                     */
                    bool InstanceStatusHasBeenSet() const;

                    /**
                     * 获取是否已冻结
                     * @return IsFrozen 是否已冻结
                     * 
                     */
                    bool GetIsFrozen() const;

                    /**
                     * 设置是否已冻结
                     * @param _isFrozen 是否已冻结
                     * 
                     */
                    void SetIsFrozen(const bool& _isFrozen);

                    /**
                     * 判断参数 IsFrozen 是否已赋值
                     * @return IsFrozen 是否已赋值
                     * 
                     */
                    bool IsFrozenHasBeenSet() const;

                private:

                    /**
                     * 是否vip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isVip;
                    bool m_isVipHasBeenSet;

                    /**
                     * 4.x专享集群状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_vipInstanceStatus;
                    bool m_vipInstanceStatusHasBeenSet;

                    /**
                     * 专享集群峰值带宽
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxBandWidth;
                    bool m_maxBandWidthHasBeenSet;

                    /**
                     * 专享集群规格
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * 专享集群节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * 专享集群最大存储
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxStorage;
                    bool m_maxStorageHasBeenSet;

                    /**
                     * 专享集群最大保留时间，单位：小时
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_maxRetention;
                    bool m_maxRetentionHasBeenSet;

                    /**
                     * 专项集群最大保留时间，单位：小时
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_minRetention;
                    bool m_minRetentionHasBeenSet;

                    /**
                     * 4.0共享集群状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_instanceStatus;
                    bool m_instanceStatusHasBeenSet;

                    /**
                     * 是否已冻结
                     */
                    bool m_isFrozen;
                    bool m_isFrozenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_INSTANCEITEMEXTRAINFO_H_
