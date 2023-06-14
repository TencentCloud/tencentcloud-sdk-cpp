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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_EDGEUNITSTATISTICITEM_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_EDGEUNITSTATISTICITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * 单元内的统计信息
                */
                class EdgeUnitStatisticItem : public AbstractModel
                {
                public:
                    EdgeUnitStatisticItem();
                    ~EdgeUnitStatisticItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total 总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 设置总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _total 总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotal(const uint64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取在线数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Online 在线数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetOnline() const;

                    /**
                     * 设置在线数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _online 在线数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOnline(const uint64_t& _online);

                    /**
                     * 判断参数 Online 是否已赋值
                     * @return Online 是否已赋值
                     * 
                     */
                    bool OnlineHasBeenSet() const;

                    /**
                     * 获取异常数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Abnormal 异常数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAbnormal() const;

                    /**
                     * 设置异常数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _abnormal 异常数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAbnormal(const uint64_t& _abnormal);

                    /**
                     * 判断参数 Abnormal 是否已赋值
                     * @return Abnormal 是否已赋值
                     * 
                     */
                    bool AbnormalHasBeenSet() const;

                    /**
                     * 获取离线数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Offline 离线数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetOffline() const;

                    /**
                     * 设置离线数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _offline 离线数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOffline(const uint64_t& _offline);

                    /**
                     * 判断参数 Offline 是否已赋值
                     * @return Offline 是否已赋值
                     * 
                     */
                    bool OfflineHasBeenSet() const;

                    /**
                     * 获取未激活
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NotActive 未激活
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetNotActive() const;

                    /**
                     * 设置未激活
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _notActive 未激活
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNotActive(const uint64_t& _notActive);

                    /**
                     * 判断参数 NotActive 是否已赋值
                     * @return NotActive 是否已赋值
                     * 
                     */
                    bool NotActiveHasBeenSet() const;

                private:

                    /**
                     * 总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 在线数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_online;
                    bool m_onlineHasBeenSet;

                    /**
                     * 异常数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_abnormal;
                    bool m_abnormalHasBeenSet;

                    /**
                     * 离线数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_offline;
                    bool m_offlineHasBeenSet;

                    /**
                     * 未激活
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_notActive;
                    bool m_notActiveHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_EDGEUNITSTATISTICITEM_H_
