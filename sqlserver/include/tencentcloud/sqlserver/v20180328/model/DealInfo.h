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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DEALINFO_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DEALINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * 订单信息
                */
                class DealInfo : public AbstractModel
                {
                public:
                    DealInfo();
                    ~DealInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取订单名
                     * @return DealName 订单名
                     * 
                     */
                    std::string GetDealName() const;

                    /**
                     * 设置订单名
                     * @param _dealName 订单名
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
                     * 获取商品数量
                     * @return Count 商品数量
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置商品数量
                     * @param _count 商品数量
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取关联的流程 ID，可用于查询流程执行状态
                     * @return FlowId 关联的流程 ID，可用于查询流程执行状态
                     * 
                     */
                    int64_t GetFlowId() const;

                    /**
                     * 设置关联的流程 ID，可用于查询流程执行状态
                     * @param _flowId 关联的流程 ID，可用于查询流程执行状态
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
                     * 获取只有创建实例的订单会填充该字段，表示该订单创建的实例的 ID。
                     * @return InstanceIdSet 只有创建实例的订单会填充该字段，表示该订单创建的实例的 ID。
                     * 
                     */
                    std::vector<std::string> GetInstanceIdSet() const;

                    /**
                     * 设置只有创建实例的订单会填充该字段，表示该订单创建的实例的 ID。
                     * @param _instanceIdSet 只有创建实例的订单会填充该字段，表示该订单创建的实例的 ID。
                     * 
                     */
                    void SetInstanceIdSet(const std::vector<std::string>& _instanceIdSet);

                    /**
                     * 判断参数 InstanceIdSet 是否已赋值
                     * @return InstanceIdSet 是否已赋值
                     * 
                     */
                    bool InstanceIdSetHasBeenSet() const;

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
                     * 获取实例付费类型
                     * @return InstanceChargeType 实例付费类型
                     * 
                     */
                    std::string GetInstanceChargeType() const;

                    /**
                     * 设置实例付费类型
                     * @param _instanceChargeType 实例付费类型
                     * 
                     */
                    void SetInstanceChargeType(const std::string& _instanceChargeType);

                    /**
                     * 判断参数 InstanceChargeType 是否已赋值
                     * @return InstanceChargeType 是否已赋值
                     * 
                     */
                    bool InstanceChargeTypeHasBeenSet() const;

                private:

                    /**
                     * 订单名
                     */
                    std::string m_dealName;
                    bool m_dealNameHasBeenSet;

                    /**
                     * 商品数量
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 关联的流程 ID，可用于查询流程执行状态
                     */
                    int64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 只有创建实例的订单会填充该字段，表示该订单创建的实例的 ID。
                     */
                    std::vector<std::string> m_instanceIdSet;
                    bool m_instanceIdSetHasBeenSet;

                    /**
                     * 所属账号
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 实例付费类型
                     */
                    std::string m_instanceChargeType;
                    bool m_instanceChargeTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DEALINFO_H_
