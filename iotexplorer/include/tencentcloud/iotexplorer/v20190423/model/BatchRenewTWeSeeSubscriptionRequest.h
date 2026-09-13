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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_BATCHRENEWTWESEESUBSCRIPTIONREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_BATCHRENEWTWESEESUBSCRIPTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/SeeRenewSubscriptionEntry.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * BatchRenewTWeSeeSubscription请求参数结构体
                */
                class BatchRenewTWeSeeSubscriptionRequest : public AbstractModel
                {
                public:
                    BatchRenewTWeSeeSubscriptionRequest();
                    ~BatchRenewTWeSeeSubscriptionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待续费的订阅列表
                     * @return Entries 待续费的订阅列表
                     * 
                     */
                    std::vector<SeeRenewSubscriptionEntry> GetEntries() const;

                    /**
                     * 设置待续费的订阅列表
                     * @param _entries 待续费的订阅列表
                     * 
                     */
                    void SetEntries(const std::vector<SeeRenewSubscriptionEntry>& _entries);

                    /**
                     * 判断参数 Entries 是否已赋值
                     * @return Entries 是否已赋值
                     * 
                     */
                    bool EntriesHasBeenSet() const;

                private:

                    /**
                     * 待续费的订阅列表
                     */
                    std::vector<SeeRenewSubscriptionEntry> m_entries;
                    bool m_entriesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_BATCHRENEWTWESEESUBSCRIPTIONREQUEST_H_
