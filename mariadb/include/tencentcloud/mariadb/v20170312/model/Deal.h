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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_DEAL_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_DEAL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 订单信息
                */
                class Deal : public AbstractModel
                {
                public:
                    Deal();
                    ~Deal() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取订单号
                     * @return DealName 订单号
                     * 
                     */
                    std::string GetDealName() const;

                    /**
                     * 设置订单号
                     * @param _dealName 订单号
                     * 
                     */
                    void SetDealName(const std::string& _dealName);

                    /**
                     * 判断参数 DealName 是否已赋值
                     * @return DealName 是否已赋值
                     * 
                     */
                    bool DealNameHasBeenSet() const;

                    /**
                     * 获取所属账号
                     * @return OwnerUin 所属账号
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置所属账号
                     * @param _ownerUin 所属账号
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取商品数量
                     * @return Count 商品数量
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置商品数量
                     * @param _count 商品数量
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取关联的流程 Id，可用于查询流程执行状态
                     * @return FlowId 关联的流程 Id，可用于查询流程执行状态
                     * 
                     */
                    int64_t GetFlowId() const;

                    /**
                     * 设置关联的流程 Id，可用于查询流程执行状态
                     * @param _flowId 关联的流程 Id，可用于查询流程执行状态
                     * 
                     */
                    void SetFlowId(const int64_t& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取只有创建实例且已完成发货的订单会填充该字段，表示该订单创建的实例的 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceIds 只有创建实例且已完成发货的订单会填充该字段，表示该订单创建的实例的 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置只有创建实例且已完成发货的订单会填充该字段，表示该订单创建的实例的 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceIds 只有创建实例且已完成发货的订单会填充该字段，表示该订单创建的实例的 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取付费模式，0后付费/1预付费
                     * @return PayMode 付费模式，0后付费/1预付费
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置付费模式，0后付费/1预付费
                     * @param _payMode 付费模式，0后付费/1预付费
                     * 
                     */
                    void SetPayMode(const int64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                private:

                    /**
                     * 订单号
                     */
                    std::string m_dealName;
                    bool m_dealNameHasBeenSet;

                    /**
                     * 所属账号
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 商品数量
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 关联的流程 Id，可用于查询流程执行状态
                     */
                    int64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 只有创建实例且已完成发货的订单会填充该字段，表示该订单创建的实例的 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 付费模式，0后付费/1预付费
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_DEAL_H_
