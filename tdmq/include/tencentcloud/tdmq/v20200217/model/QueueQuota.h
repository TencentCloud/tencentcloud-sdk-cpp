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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_QUEUEQUOTA_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_QUEUEQUOTA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * queue使用配额信息
                */
                class QueueQuota : public AbstractModel
                {
                public:
                    QueueQuota();
                    ~QueueQuota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取可创建最大Queue数
                     * @return MaxQueue 可创建最大Queue数
                     * 
                     */
                    int64_t GetMaxQueue() const;

                    /**
                     * 设置可创建最大Queue数
                     * @param _maxQueue 可创建最大Queue数
                     * 
                     */
                    void SetMaxQueue(const int64_t& _maxQueue);

                    /**
                     * 判断参数 MaxQueue 是否已赋值
                     * @return MaxQueue 是否已赋值
                     * 
                     */
                    bool MaxQueueHasBeenSet() const;

                    /**
                     * 获取已创建Queue数
                     * @return UsedQueue 已创建Queue数
                     * 
                     */
                    int64_t GetUsedQueue() const;

                    /**
                     * 设置已创建Queue数
                     * @param _usedQueue 已创建Queue数
                     * 
                     */
                    void SetUsedQueue(const int64_t& _usedQueue);

                    /**
                     * 判断参数 UsedQueue 是否已赋值
                     * @return UsedQueue 是否已赋值
                     * 
                     */
                    bool UsedQueueHasBeenSet() const;

                private:

                    /**
                     * 可创建最大Queue数
                     */
                    int64_t m_maxQueue;
                    bool m_maxQueueHasBeenSet;

                    /**
                     * 已创建Queue数
                     */
                    int64_t m_usedQueue;
                    bool m_usedQueueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_QUEUEQUOTA_H_
