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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYEXCEEDINGINFODATA_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYEXCEEDINGINFODATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 超额信息数据
                */
                class QueryExceedingInfoData : public AbstractModel
                {
                public:
                    QueryExceedingInfoData();
                    ~QueryExceedingInfoData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取代理商ID。
                     * @return AgentId 代理商ID。
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置代理商ID。
                     * @param _agentId 代理商ID。
                     * 
                     */
                    void SetAgentId(const std::string& _agentId);

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     * 
                     */
                    bool AgentIdHasBeenSet() const;

                    /**
                     * 获取代理商名称。
                     * @return AgentName 代理商名称。
                     * 
                     */
                    std::string GetAgentName() const;

                    /**
                     * 设置代理商名称。
                     * @param _agentName 代理商名称。
                     * 
                     */
                    void SetAgentName(const std::string& _agentName);

                    /**
                     * 判断参数 AgentName 是否已赋值
                     * @return AgentName 是否已赋值
                     * 
                     */
                    bool AgentNameHasBeenSet() const;

                    /**
                     * 获取主播ID。当入参Dimension为ANCHOR或ORDER时，该字段才会有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AnchorId 主播ID。当入参Dimension为ANCHOR或ORDER时，该字段才会有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAnchorId() const;

                    /**
                     * 设置主播ID。当入参Dimension为ANCHOR或ORDER时，该字段才会有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _anchorId 主播ID。当入参Dimension为ANCHOR或ORDER时，该字段才会有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAnchorId(const std::string& _anchorId);

                    /**
                     * 判断参数 AnchorId 是否已赋值
                     * @return AnchorId 是否已赋值
                     * 
                     */
                    bool AnchorIdHasBeenSet() const;

                    /**
                     * 获取主播名称。当入参Dimension为ANCHOR或ORDER时，该字段才会有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AnchorName 主播名称。当入参Dimension为ANCHOR或ORDER时，该字段才会有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAnchorName() const;

                    /**
                     * 设置主播名称。当入参Dimension为ANCHOR或ORDER时，该字段才会有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _anchorName 主播名称。当入参Dimension为ANCHOR或ORDER时，该字段才会有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAnchorName(const std::string& _anchorName);

                    /**
                     * 判断参数 AnchorName 是否已赋值
                     * @return AnchorName 是否已赋值
                     * 
                     */
                    bool AnchorNameHasBeenSet() const;

                    /**
                     * 获取订单号。当入参Dimension为ORDER时，该字段才会有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrderId 订单号。当入参Dimension为ORDER时，该字段才会有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置订单号。当入参Dimension为ORDER时，该字段才会有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _orderId 订单号。当入参Dimension为ORDER时，该字段才会有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取超额类型。目前支持 AGENT_EXCEED_100 和 ANCHOR_EXCEED_100_12 两种类型。
                     * @return ExceedingType 超额类型。目前支持 AGENT_EXCEED_100 和 ANCHOR_EXCEED_100_12 两种类型。
                     * 
                     */
                    std::string GetExceedingType() const;

                    /**
                     * 设置超额类型。目前支持 AGENT_EXCEED_100 和 ANCHOR_EXCEED_100_12 两种类型。
                     * @param _exceedingType 超额类型。目前支持 AGENT_EXCEED_100 和 ANCHOR_EXCEED_100_12 两种类型。
                     * 
                     */
                    void SetExceedingType(const std::string& _exceedingType);

                    /**
                     * 判断参数 ExceedingType 是否已赋值
                     * @return ExceedingType 是否已赋值
                     * 
                     */
                    bool ExceedingTypeHasBeenSet() const;

                private:

                    /**
                     * 代理商ID。
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * 代理商名称。
                     */
                    std::string m_agentName;
                    bool m_agentNameHasBeenSet;

                    /**
                     * 主播ID。当入参Dimension为ANCHOR或ORDER时，该字段才会有值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_anchorId;
                    bool m_anchorIdHasBeenSet;

                    /**
                     * 主播名称。当入参Dimension为ANCHOR或ORDER时，该字段才会有值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_anchorName;
                    bool m_anchorNameHasBeenSet;

                    /**
                     * 订单号。当入参Dimension为ORDER时，该字段才会有值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 超额类型。目前支持 AGENT_EXCEED_100 和 ANCHOR_EXCEED_100_12 两种类型。
                     */
                    std::string m_exceedingType;
                    bool m_exceedingTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYEXCEEDINGINFODATA_H_
