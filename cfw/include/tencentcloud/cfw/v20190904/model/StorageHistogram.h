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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_STORAGEHISTOGRAM_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_STORAGEHISTOGRAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 日志存储统计柱形图
                */
                class StorageHistogram : public AbstractModel
                {
                public:
                    StorageHistogram();
                    ~StorageHistogram() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取访问控制日志存储量，单位B
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AclSize 访问控制日志存储量，单位B
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAclSize() const;

                    /**
                     * 设置访问控制日志存储量，单位B
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _aclSize 访问控制日志存储量，单位B
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAclSize(const int64_t& _aclSize);

                    /**
                     * 判断参数 AclSize 是否已赋值
                     * @return AclSize 是否已赋值
                     * 
                     */
                    bool AclSizeHasBeenSet() const;

                    /**
                     * 获取入侵防御日志存储量，单位B
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IdsSize 入侵防御日志存储量，单位B
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIdsSize() const;

                    /**
                     * 设置入侵防御日志存储量，单位B
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _idsSize 入侵防御日志存储量，单位B
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIdsSize(const int64_t& _idsSize);

                    /**
                     * 判断参数 IdsSize 是否已赋值
                     * @return IdsSize 是否已赋值
                     * 
                     */
                    bool IdsSizeHasBeenSet() const;

                    /**
                     * 获取流量日志存储量，单位B
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NetFlowSize 流量日志存储量，单位B
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetNetFlowSize() const;

                    /**
                     * 设置流量日志存储量，单位B
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _netFlowSize 流量日志存储量，单位B
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNetFlowSize(const int64_t& _netFlowSize);

                    /**
                     * 判断参数 NetFlowSize 是否已赋值
                     * @return NetFlowSize 是否已赋值
                     * 
                     */
                    bool NetFlowSizeHasBeenSet() const;

                    /**
                     * 获取操作日志存储量，单位B
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperateSize 操作日志存储量，单位B
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOperateSize() const;

                    /**
                     * 设置操作日志存储量，单位B
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operateSize 操作日志存储量，单位B
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperateSize(const int64_t& _operateSize);

                    /**
                     * 判断参数 OperateSize 是否已赋值
                     * @return OperateSize 是否已赋值
                     * 
                     */
                    bool OperateSizeHasBeenSet() const;

                    /**
                     * 获取统计时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Time 统计时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置统计时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _time 统计时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取NDR流量日志存储量，单位B
                     * @return NDRNetflowSize NDR流量日志存储量，单位B
                     * 
                     */
                    int64_t GetNDRNetflowSize() const;

                    /**
                     * 设置NDR流量日志存储量，单位B
                     * @param _nDRNetflowSize NDR流量日志存储量，单位B
                     * 
                     */
                    void SetNDRNetflowSize(const int64_t& _nDRNetflowSize);

                    /**
                     * 判断参数 NDRNetflowSize 是否已赋值
                     * @return NDRNetflowSize 是否已赋值
                     * 
                     */
                    bool NDRNetflowSizeHasBeenSet() const;

                    /**
                     * 获取NDR风险日志存储量，单位B
                     * @return NDRRiskSize NDR风险日志存储量，单位B
                     * 
                     */
                    int64_t GetNDRRiskSize() const;

                    /**
                     * 设置NDR风险日志存储量，单位B
                     * @param _nDRRiskSize NDR风险日志存储量，单位B
                     * 
                     */
                    void SetNDRRiskSize(const int64_t& _nDRRiskSize);

                    /**
                     * 判断参数 NDRRiskSize 是否已赋值
                     * @return NDRRiskSize 是否已赋值
                     * 
                     */
                    bool NDRRiskSizeHasBeenSet() const;

                private:

                    /**
                     * 访问控制日志存储量，单位B
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_aclSize;
                    bool m_aclSizeHasBeenSet;

                    /**
                     * 入侵防御日志存储量，单位B
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_idsSize;
                    bool m_idsSizeHasBeenSet;

                    /**
                     * 流量日志存储量，单位B
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_netFlowSize;
                    bool m_netFlowSizeHasBeenSet;

                    /**
                     * 操作日志存储量，单位B
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_operateSize;
                    bool m_operateSizeHasBeenSet;

                    /**
                     * 统计时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * NDR流量日志存储量，单位B
                     */
                    int64_t m_nDRNetflowSize;
                    bool m_nDRNetflowSizeHasBeenSet;

                    /**
                     * NDR风险日志存储量，单位B
                     */
                    int64_t m_nDRRiskSize;
                    bool m_nDRRiskSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_STORAGEHISTOGRAM_H_
