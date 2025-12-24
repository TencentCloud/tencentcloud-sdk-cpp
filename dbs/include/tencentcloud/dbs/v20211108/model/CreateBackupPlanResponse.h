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

#ifndef TENCENTCLOUD_DBS_V20211108_MODEL_CREATEBACKUPPLANRESPONSE_H_
#define TENCENTCLOUD_DBS_V20211108_MODEL_CREATEBACKUPPLANRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbs
    {
        namespace V20211108
        {
            namespace Model
            {
                /**
                * CreateBackupPlan返回参数结构体
                */
                class CreateBackupPlanResponse : public AbstractModel
                {
                public:
                    CreateBackupPlanResponse();
                    ~CreateBackupPlanResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取订单参数。
                     * @return OrderId 订单参数。
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取资源ID。
                     * @return BackupPlanIds 资源ID。
                     * 
                     */
                    std::vector<std::string> GetBackupPlanIds() const;

                    /**
                     * 判断参数 BackupPlanIds 是否已赋值
                     * @return BackupPlanIds 是否已赋值
                     * 
                     */
                    bool BackupPlanIdsHasBeenSet() const;

                private:

                    /**
                     * 订单参数。
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 资源ID。
                     */
                    std::vector<std::string> m_backupPlanIds;
                    bool m_backupPlanIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBS_V20211108_MODEL_CREATEBACKUPPLANRESPONSE_H_
