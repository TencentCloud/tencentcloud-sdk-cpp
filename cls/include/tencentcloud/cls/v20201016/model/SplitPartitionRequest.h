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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_SPLITPARTITIONREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_SPLITPARTITIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * SplitPartition请求参数结构体
                */
                class SplitPartitionRequest : public AbstractModel
                {
                public:
                    SplitPartitionRequest();
                    ~SplitPartitionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取日志主题Id
- 通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。
                     * @return TopicId 日志主题Id
- 通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置日志主题Id
- 通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。
                     * @param _topicId 日志主题Id
- 通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取待分裂分区Id
- 通过[获取分区列表](https://cloud.tencent.com/document/product/614/56470)获取待分裂分区Id。
                     * @return PartitionId 待分裂分区Id
- 通过[获取分区列表](https://cloud.tencent.com/document/product/614/56470)获取待分裂分区Id。
                     * 
                     */
                    int64_t GetPartitionId() const;

                    /**
                     * 设置待分裂分区Id
- 通过[获取分区列表](https://cloud.tencent.com/document/product/614/56470)获取待分裂分区Id。
                     * @param _partitionId 待分裂分区Id
- 通过[获取分区列表](https://cloud.tencent.com/document/product/614/56470)获取待分裂分区Id。
                     * 
                     */
                    void SetPartitionId(const int64_t& _partitionId);

                    /**
                     * 判断参数 PartitionId 是否已赋值
                     * @return PartitionId 是否已赋值
                     * 
                     */
                    bool PartitionIdHasBeenSet() const;

                    /**
                     * 获取分区切分的哈希key的位置，只在Number=2时有意义
                     * @return SplitKey 分区切分的哈希key的位置，只在Number=2时有意义
                     * 
                     */
                    std::string GetSplitKey() const;

                    /**
                     * 设置分区切分的哈希key的位置，只在Number=2时有意义
                     * @param _splitKey 分区切分的哈希key的位置，只在Number=2时有意义
                     * 
                     */
                    void SetSplitKey(const std::string& _splitKey);

                    /**
                     * 判断参数 SplitKey 是否已赋值
                     * @return SplitKey 是否已赋值
                     * 
                     */
                    bool SplitKeyHasBeenSet() const;

                    /**
                     * 获取分区分裂个数(可选)，默认等于2
                     * @return Number 分区分裂个数(可选)，默认等于2
                     * 
                     */
                    int64_t GetNumber() const;

                    /**
                     * 设置分区分裂个数(可选)，默认等于2
                     * @param _number 分区分裂个数(可选)，默认等于2
                     * 
                     */
                    void SetNumber(const int64_t& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                private:

                    /**
                     * 日志主题Id
- 通过[获取日志主题列表](https://cloud.tencent.com/document/product/614/56454)获取日志主题Id。
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 待分裂分区Id
- 通过[获取分区列表](https://cloud.tencent.com/document/product/614/56470)获取待分裂分区Id。
                     */
                    int64_t m_partitionId;
                    bool m_partitionIdHasBeenSet;

                    /**
                     * 分区切分的哈希key的位置，只在Number=2时有意义
                     */
                    std::string m_splitKey;
                    bool m_splitKeyHasBeenSet;

                    /**
                     * 分区分裂个数(可选)，默认等于2
                     */
                    int64_t m_number;
                    bool m_numberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_SPLITPARTITIONREQUEST_H_
