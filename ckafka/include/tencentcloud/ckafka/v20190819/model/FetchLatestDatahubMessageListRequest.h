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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_FETCHLATESTDATAHUBMESSAGELISTREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_FETCHLATESTDATAHUBMESSAGELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * FetchLatestDatahubMessageList请求参数结构体
                */
                class FetchLatestDatahubMessageListRequest : public AbstractModel
                {
                public:
                    FetchLatestDatahubMessageListRequest();
                    ~FetchLatestDatahubMessageListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>弹性topic名称</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/86863">DescribeDatahubTopics</a></p>
                     * @return Name <p>弹性topic名称</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/86863">DescribeDatahubTopics</a></p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>弹性topic名称</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/86863">DescribeDatahubTopics</a></p>
                     * @param _name <p>弹性topic名称</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/86863">DescribeDatahubTopics</a></p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>分区id</p>
                     * @return Partition <p>分区id</p>
                     * 
                     */
                    int64_t GetPartition() const;

                    /**
                     * 设置<p>分区id</p>
                     * @param _partition <p>分区id</p>
                     * 
                     */
                    void SetPartition(const int64_t& _partition);

                    /**
                     * 判断参数 Partition 是否已赋值
                     * @return Partition 是否已赋值
                     * 
                     */
                    bool PartitionHasBeenSet() const;

                    /**
                     * 获取<p>位点信息</p>
                     * @return Offset <p>位点信息</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>位点信息</p>
                     * @param _offset <p>位点信息</p>
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>最大查询条数</p><p>取值范围：[1, 100]</p>
                     * @return MessageCount <p>最大查询条数</p><p>取值范围：[1, 100]</p>
                     * 
                     */
                    int64_t GetMessageCount() const;

                    /**
                     * 设置<p>最大查询条数</p><p>取值范围：[1, 100]</p>
                     * @param _messageCount <p>最大查询条数</p><p>取值范围：[1, 100]</p>
                     * 
                     */
                    void SetMessageCount(const int64_t& _messageCount);

                    /**
                     * 判断参数 MessageCount 是否已赋值
                     * @return MessageCount 是否已赋值
                     * 
                     */
                    bool MessageCountHasBeenSet() const;

                private:

                    /**
                     * <p>弹性topic名称</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/86863">DescribeDatahubTopics</a></p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>分区id</p>
                     */
                    int64_t m_partition;
                    bool m_partitionHasBeenSet;

                    /**
                     * <p>位点信息</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>最大查询条数</p><p>取值范围：[1, 100]</p>
                     */
                    int64_t m_messageCount;
                    bool m_messageCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_FETCHLATESTDATAHUBMESSAGELISTREQUEST_H_
