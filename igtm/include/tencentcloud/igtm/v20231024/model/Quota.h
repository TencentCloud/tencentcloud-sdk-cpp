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

#ifndef TENCENTCLOUD_IGTM_V20231024_MODEL_QUOTA_H_
#define TENCENTCLOUD_IGTM_V20231024_MODEL_QUOTA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Igtm
    {
        namespace V20231024
        {
            namespace Model
            {
                /**
                * 配额
                */
                class Quota : public AbstractModel
                {
                public:
                    Quota();
                    ~Quota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取探测任务配额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskQuota 探测任务配额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTaskQuota() const;

                    /**
                     * 设置探测任务配额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskQuota 探测任务配额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskQuota(const uint64_t& _taskQuota);

                    /**
                     * 判断参数 TaskQuota 是否已赋值
                     * @return TaskQuota 是否已赋值
                     * 
                     */
                    bool TaskQuotaHasBeenSet() const;

                    /**
                     * 获取地址池配额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PoolQuota 地址池配额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPoolQuota() const;

                    /**
                     * 设置地址池配额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _poolQuota 地址池配额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPoolQuota(const uint64_t& _poolQuota);

                    /**
                     * 判断参数 PoolQuota 是否已赋值
                     * @return PoolQuota 是否已赋值
                     * 
                     */
                    bool PoolQuotaHasBeenSet() const;

                    /**
                     * 获取地址配额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AddressQuota 地址配额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAddressQuota() const;

                    /**
                     * 设置地址配额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _addressQuota 地址配额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAddressQuota(const uint64_t& _addressQuota);

                    /**
                     * 判断参数 AddressQuota 是否已赋值
                     * @return AddressQuota 是否已赋值
                     * 
                     */
                    bool AddressQuotaHasBeenSet() const;

                    /**
                     * 获取探点资源数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MonitorQuota 探点资源数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMonitorQuota() const;

                    /**
                     * 设置探点资源数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _monitorQuota 探点资源数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMonitorQuota(const uint64_t& _monitorQuota);

                    /**
                     * 判断参数 MonitorQuota 是否已赋值
                     * @return MonitorQuota 是否已赋值
                     * 
                     */
                    bool MonitorQuotaHasBeenSet() const;

                    /**
                     * 获取消息资源数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MessageQuota 消息资源数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetMessageQuota() const;

                    /**
                     * 设置消息资源数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _messageQuota 消息资源数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMessageQuota(const uint64_t& _messageQuota);

                    /**
                     * 判断参数 MessageQuota 是否已赋值
                     * @return MessageQuota 是否已赋值
                     * 
                     */
                    bool MessageQuotaHasBeenSet() const;

                    /**
                     * 获取已使用探测任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UsedTaskQuota 已使用探测任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetUsedTaskQuota() const;

                    /**
                     * 设置已使用探测任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _usedTaskQuota 已使用探测任务数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUsedTaskQuota(const uint64_t& _usedTaskQuota);

                    /**
                     * 判断参数 UsedTaskQuota 是否已赋值
                     * @return UsedTaskQuota 是否已赋值
                     * 
                     */
                    bool UsedTaskQuotaHasBeenSet() const;

                    /**
                     * 获取已使用体验实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UsedFreeInstanceNum 已使用体验实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetUsedFreeInstanceNum() const;

                    /**
                     * 设置已使用体验实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _usedFreeInstanceNum 已使用体验实例数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUsedFreeInstanceNum(const uint64_t& _usedFreeInstanceNum);

                    /**
                     * 判断参数 UsedFreeInstanceNum 是否已赋值
                     * @return UsedFreeInstanceNum 是否已赋值
                     * 
                     */
                    bool UsedFreeInstanceNumHasBeenSet() const;

                    /**
                     * 获取已使用付费实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UsedBillInstanceNum 已使用付费实例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetUsedBillInstanceNum() const;

                    /**
                     * 设置已使用付费实例
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _usedBillInstanceNum 已使用付费实例
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUsedBillInstanceNum(const uint64_t& _usedBillInstanceNum);

                    /**
                     * 判断参数 UsedBillInstanceNum 是否已赋值
                     * @return UsedBillInstanceNum 是否已赋值
                     * 
                     */
                    bool UsedBillInstanceNumHasBeenSet() const;

                    /**
                     * 获取体验套餐总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FreePackageNum 体验套餐总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFreePackageNum() const;

                    /**
                     * 设置体验套餐总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _freePackageNum 体验套餐总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFreePackageNum(const uint64_t& _freePackageNum);

                    /**
                     * 判断参数 FreePackageNum 是否已赋值
                     * @return FreePackageNum 是否已赋值
                     * 
                     */
                    bool FreePackageNumHasBeenSet() const;

                    /**
                     * 获取已使用付费套餐数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UsedBillPackageNum 已使用付费套餐数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetUsedBillPackageNum() const;

                    /**
                     * 设置已使用付费套餐数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _usedBillPackageNum 已使用付费套餐数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUsedBillPackageNum(const uint64_t& _usedBillPackageNum);

                    /**
                     * 判断参数 UsedBillPackageNum 是否已赋值
                     * @return UsedBillPackageNum 是否已赋值
                     * 
                     */
                    bool UsedBillPackageNumHasBeenSet() const;

                    /**
                     * 获取付费套餐总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BillPackageNum 付费套餐总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetBillPackageNum() const;

                    /**
                     * 设置付费套餐总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _billPackageNum 付费套餐总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBillPackageNum(const uint64_t& _billPackageNum);

                    /**
                     * 判断参数 BillPackageNum 是否已赋值
                     * @return BillPackageNum 是否已赋值
                     * 
                     */
                    bool BillPackageNumHasBeenSet() const;

                private:

                    /**
                     * 探测任务配额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_taskQuota;
                    bool m_taskQuotaHasBeenSet;

                    /**
                     * 地址池配额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_poolQuota;
                    bool m_poolQuotaHasBeenSet;

                    /**
                     * 地址配额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_addressQuota;
                    bool m_addressQuotaHasBeenSet;

                    /**
                     * 探点资源数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_monitorQuota;
                    bool m_monitorQuotaHasBeenSet;

                    /**
                     * 消息资源数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_messageQuota;
                    bool m_messageQuotaHasBeenSet;

                    /**
                     * 已使用探测任务数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_usedTaskQuota;
                    bool m_usedTaskQuotaHasBeenSet;

                    /**
                     * 已使用体验实例数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_usedFreeInstanceNum;
                    bool m_usedFreeInstanceNumHasBeenSet;

                    /**
                     * 已使用付费实例
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_usedBillInstanceNum;
                    bool m_usedBillInstanceNumHasBeenSet;

                    /**
                     * 体验套餐总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_freePackageNum;
                    bool m_freePackageNumHasBeenSet;

                    /**
                     * 已使用付费套餐数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_usedBillPackageNum;
                    bool m_usedBillPackageNumHasBeenSet;

                    /**
                     * 付费套餐总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_billPackageNum;
                    bool m_billPackageNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IGTM_V20231024_MODEL_QUOTA_H_
