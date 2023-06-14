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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_PGDEAL_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_PGDEAL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 订单详情
                */
                class PgDeal : public AbstractModel
                {
                public:
                    PgDeal();
                    ~PgDeal() = default;
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
                     * 获取所属用户
                     * @return OwnerUin 所属用户
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置所属用户
                     * @param _ownerUin 所属用户
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
                     * 获取订单涉及多少个实例
                     * @return Count 订单涉及多少个实例
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置订单涉及多少个实例
                     * @param _count 订单涉及多少个实例
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
                     * 获取付费模式。1-预付费；0-后付费
                     * @return PayMode 付费模式。1-预付费；0-后付费
                     * 
                     */
                    int64_t GetPayMode() const;

                    /**
                     * 设置付费模式。1-预付费；0-后付费
                     * @param _payMode 付费模式。1-预付费；0-后付费
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
                     * 获取异步任务流程ID
                     * @return FlowId 异步任务流程ID
                     * 
                     */
                    int64_t GetFlowId() const;

                    /**
                     * 设置异步任务流程ID
                     * @param _flowId 异步任务流程ID
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
                     * 获取实例ID数组
                     * @return DBInstanceIdSet 实例ID数组
                     * 
                     */
                    std::vector<std::string> GetDBInstanceIdSet() const;

                    /**
                     * 设置实例ID数组
                     * @param _dBInstanceIdSet 实例ID数组
                     * 
                     */
                    void SetDBInstanceIdSet(const std::vector<std::string>& _dBInstanceIdSet);

                    /**
                     * 判断参数 DBInstanceIdSet 是否已赋值
                     * @return DBInstanceIdSet 是否已赋值
                     * 
                     */
                    bool DBInstanceIdSetHasBeenSet() const;

                private:

                    /**
                     * 订单名
                     */
                    std::string m_dealName;
                    bool m_dealNameHasBeenSet;

                    /**
                     * 所属用户
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 订单涉及多少个实例
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 付费模式。1-预付费；0-后付费
                     */
                    int64_t m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * 异步任务流程ID
                     */
                    int64_t m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 实例ID数组
                     */
                    std::vector<std::string> m_dBInstanceIdSet;
                    bool m_dBInstanceIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_PGDEAL_H_
