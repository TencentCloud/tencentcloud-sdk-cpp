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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEINSTANCESRESPONSE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateInstances返回参数结构体
                */
                class CreateInstancesResponse : public AbstractModel
                {
                public:
                    CreateInstancesResponse();
                    ~CreateInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取订单号列表。每个实例对应一个订单号。
                     * @return DealNames 订单号列表。每个实例对应一个订单号。
                     * 
                     */
                    std::vector<std::string> GetDealNames() const;

                    /**
                     * 判断参数 DealNames 是否已赋值
                     * @return DealNames 是否已赋值
                     * 
                     */
                    bool DealNamesHasBeenSet() const;

                    /**
                     * 获取冻结流水号。
                     * @return BillId 冻结流水号。
                     * 
                     */
                    std::string GetBillId() const;

                    /**
                     * 判断参数 BillId 是否已赋值
                     * @return BillId 是否已赋值
                     * 
                     */
                    bool BillIdHasBeenSet() const;

                    /**
                     * 获取创建成功的实例ID集合，只在后付费情景下有返回值。
                     * @return DBInstanceIdSet 创建成功的实例ID集合，只在后付费情景下有返回值。
                     * 
                     */
                    std::vector<std::string> GetDBInstanceIdSet() const;

                    /**
                     * 判断参数 DBInstanceIdSet 是否已赋值
                     * @return DBInstanceIdSet 是否已赋值
                     * 
                     */
                    bool DBInstanceIdSetHasBeenSet() const;

                private:

                    /**
                     * 订单号列表。每个实例对应一个订单号。
                     */
                    std::vector<std::string> m_dealNames;
                    bool m_dealNamesHasBeenSet;

                    /**
                     * 冻结流水号。
                     */
                    std::string m_billId;
                    bool m_billIdHasBeenSet;

                    /**
                     * 创建成功的实例ID集合，只在后付费情景下有返回值。
                     */
                    std::vector<std::string> m_dBInstanceIdSet;
                    bool m_dBInstanceIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEINSTANCESRESPONSE_H_
