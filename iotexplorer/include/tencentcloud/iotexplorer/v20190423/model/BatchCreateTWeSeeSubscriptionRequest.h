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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_BATCHCREATETWESEESUBSCRIPTIONREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_BATCHCREATETWESEESUBSCRIPTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/SeeCreateSubscriptionEntry.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * BatchCreateTWeSeeSubscription请求参数结构体
                */
                class BatchCreateTWeSeeSubscriptionRequest : public AbstractModel
                {
                public:
                    BatchCreateTWeSeeSubscriptionRequest();
                    ~BatchCreateTWeSeeSubscriptionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待开通的订阅列表
                     * @return Entries 待开通的订阅列表
                     * 
                     */
                    std::vector<SeeCreateSubscriptionEntry> GetEntries() const;

                    /**
                     * 设置待开通的订阅列表
                     * @param _entries 待开通的订阅列表
                     * 
                     */
                    void SetEntries(const std::vector<SeeCreateSubscriptionEntry>& _entries);

                    /**
                     * 判断参数 Entries 是否已赋值
                     * @return Entries 是否已赋值
                     * 
                     */
                    bool EntriesHasBeenSet() const;

                private:

                    /**
                     * 待开通的订阅列表
                     */
                    std::vector<SeeCreateSubscriptionEntry> m_entries;
                    bool m_entriesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_BATCHCREATETWESEESUBSCRIPTIONREQUEST_H_
