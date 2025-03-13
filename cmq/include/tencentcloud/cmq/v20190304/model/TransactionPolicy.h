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

#ifndef TENCENTCLOUD_CMQ_V20190304_MODEL_TRANSACTIONPOLICY_H_
#define TENCENTCLOUD_CMQ_V20190304_MODEL_TRANSACTIONPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cmq
    {
        namespace V20190304
        {
            namespace Model
            {
                /**
                * 事务消息策略
                */
                class TransactionPolicy : public AbstractModel
                {
                public:
                    TransactionPolicy();
                    ~TransactionPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取最大查询次数。
                     * @return MaxQueryCount 最大查询次数。
                     * 
                     */
                    uint64_t GetMaxQueryCount() const;

                    /**
                     * 设置最大查询次数。
                     * @param _maxQueryCount 最大查询次数。
                     * 
                     */
                    void SetMaxQueryCount(const uint64_t& _maxQueryCount);

                    /**
                     * 判断参数 MaxQueryCount 是否已赋值
                     * @return MaxQueryCount 是否已赋值
                     * 
                     */
                    bool MaxQueryCountHasBeenSet() const;

                    /**
                     * 获取第一次回查时间。
                     * @return FirstQueryInterval 第一次回查时间。
                     * 
                     */
                    uint64_t GetFirstQueryInterval() const;

                    /**
                     * 设置第一次回查时间。
                     * @param _firstQueryInterval 第一次回查时间。
                     * 
                     */
                    void SetFirstQueryInterval(const uint64_t& _firstQueryInterval);

                    /**
                     * 判断参数 FirstQueryInterval 是否已赋值
                     * @return FirstQueryInterval 是否已赋值
                     * 
                     */
                    bool FirstQueryIntervalHasBeenSet() const;

                private:

                    /**
                     * 最大查询次数。
                     */
                    uint64_t m_maxQueryCount;
                    bool m_maxQueryCountHasBeenSet;

                    /**
                     * 第一次回查时间。
                     */
                    uint64_t m_firstQueryInterval;
                    bool m_firstQueryIntervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMQ_V20190304_MODEL_TRANSACTIONPOLICY_H_
