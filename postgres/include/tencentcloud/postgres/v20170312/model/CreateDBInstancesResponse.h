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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEDBINSTANCESRESPONSE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEDBINSTANCESRESPONSE_H_

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
                * CreateDBInstances返回参数结构体
                */
                class CreateDBInstancesResponse : public AbstractModel
                {
                public:
                    CreateDBInstancesResponse();
                    ~CreateDBInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取订单号列表。每个实例对应一个订单号。
                     * @return DealNames 订单号列表。每个实例对应一个订单号。
                     */
                    std::vector<std::string> GetDealNames() const;

                    /**
                     * 判断参数 DealNames 是否已赋值
                     * @return DealNames 是否已赋值
                     */
                    bool DealNamesHasBeenSet() const;

                private:

                    /**
                     * 订单号列表。每个实例对应一个订单号。
                     */
                    std::vector<std::string> m_dealNames;
                    bool m_dealNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_CREATEDBINSTANCESRESPONSE_H_
