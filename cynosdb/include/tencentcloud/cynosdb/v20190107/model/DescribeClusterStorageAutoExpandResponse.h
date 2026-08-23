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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBECLUSTERSTORAGEAUTOEXPANDRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBECLUSTERSTORAGEAUTOEXPANDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeClusterStorageAutoExpand返回参数结构体
                */
                class DescribeClusterStorageAutoExpandResponse : public AbstractModel
                {
                public:
                    DescribeClusterStorageAutoExpandResponse();
                    ~DescribeClusterStorageAutoExpandResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>存储使用率阈值</p>
                     * @return StorageUsageThreshold <p>存储使用率阈值</p>
                     * 
                     */
                    int64_t GetStorageUsageThreshold() const;

                    /**
                     * 判断参数 StorageUsageThreshold 是否已赋值
                     * @return StorageUsageThreshold 是否已赋值
                     * 
                     */
                    bool StorageUsageThresholdHasBeenSet() const;

                    /**
                     * 获取<p>扩容步长</p>
                     * @return ExpandStep <p>扩容步长</p>
                     * 
                     */
                    int64_t GetExpandStep() const;

                    /**
                     * 判断参数 ExpandStep 是否已赋值
                     * @return ExpandStep 是否已赋值
                     * 
                     */
                    bool ExpandStepHasBeenSet() const;

                    /**
                     * 获取<p>最大存储上限</p>
                     * @return MaxStorageLimit <p>最大存储上限</p>
                     * 
                     */
                    int64_t GetMaxStorageLimit() const;

                    /**
                     * 判断参数 MaxStorageLimit 是否已赋值
                     * @return MaxStorageLimit 是否已赋值
                     * 
                     */
                    bool MaxStorageLimitHasBeenSet() const;

                    /**
                     * 获取<p>是否开启：yes-开启，no-关闭</p>
                     * @return StorageAutoExpand <p>是否开启：yes-开启，no-关闭</p>
                     * 
                     */
                    std::string GetStorageAutoExpand() const;

                    /**
                     * 判断参数 StorageAutoExpand 是否已赋值
                     * @return StorageAutoExpand 是否已赋值
                     * 
                     */
                    bool StorageAutoExpandHasBeenSet() const;

                private:

                    /**
                     * <p>存储使用率阈值</p>
                     */
                    int64_t m_storageUsageThreshold;
                    bool m_storageUsageThresholdHasBeenSet;

                    /**
                     * <p>扩容步长</p>
                     */
                    int64_t m_expandStep;
                    bool m_expandStepHasBeenSet;

                    /**
                     * <p>最大存储上限</p>
                     */
                    int64_t m_maxStorageLimit;
                    bool m_maxStorageLimitHasBeenSet;

                    /**
                     * <p>是否开启：yes-开启，no-关闭</p>
                     */
                    std::string m_storageAutoExpand;
                    bool m_storageAutoExpandHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBECLUSTERSTORAGEAUTOEXPANDRESPONSE_H_
