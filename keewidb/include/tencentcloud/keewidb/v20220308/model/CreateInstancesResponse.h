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

#ifndef TENCENTCLOUD_KEEWIDB_V20220308_MODEL_CREATEINSTANCESRESPONSE_H_
#define TENCENTCLOUD_KEEWIDB_V20220308_MODEL_CREATEINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Keewidb
    {
        namespace V20220308
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
                     * 获取<p>交易 ID。</p>
                     * @return DealId <p>交易 ID。</p>
                     * @deprecated
                     */
                    std::string GetDealId() const;

                    /**
                     * 判断参数 DealId 是否已赋值
                     * @return DealId 是否已赋值
                     * @deprecated
                     */
                    bool DealIdHasBeenSet() const;

                    /**
                     * 获取<p>实例 ID 。</p>
                     * @return InstanceIds <p>实例 ID 。</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取<p>订单号。    </p>
                     * @return DealName <p>订单号。    </p>
                     * 
                     */
                    std::string GetDealName() const;

                    /**
                     * 判断参数 DealName 是否已赋值
                     * @return DealName 是否已赋值
                     * 
                     */
                    bool DealNameHasBeenSet() const;

                private:

                    /**
                     * <p>交易 ID。</p>
                     */
                    std::string m_dealId;
                    bool m_dealIdHasBeenSet;

                    /**
                     * <p>实例 ID 。</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>订单号。    </p>
                     */
                    std::string m_dealName;
                    bool m_dealNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KEEWIDB_V20220308_MODEL_CREATEINSTANCESRESPONSE_H_
