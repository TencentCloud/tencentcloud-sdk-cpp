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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_PARTITIONASSIGNMENT_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_PARTITIONASSIGNMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 数据订阅中kafka消费者组的分区分配情况。该数据是实时查询的，如果需要最新数据，需重新掉接口查询。
                */
                class PartitionAssignment : public AbstractModel
                {
                public:
                    PartitionAssignment();
                    ~PartitionAssignment() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取消费者的clientId
                     * @return ClientId 消费者的clientId
                     * 
                     */
                    std::string GetClientId() const;

                    /**
                     * 设置消费者的clientId
                     * @param _clientId 消费者的clientId
                     * 
                     */
                    void SetClientId(const std::string& _clientId);

                    /**
                     * 判断参数 ClientId 是否已赋值
                     * @return ClientId 是否已赋值
                     * 
                     */
                    bool ClientIdHasBeenSet() const;

                    /**
                     * 获取该消费者正在消费的分区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PartitionNo 该消费者正在消费的分区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<uint64_t> GetPartitionNo() const;

                    /**
                     * 设置该消费者正在消费的分区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _partitionNo 该消费者正在消费的分区
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPartitionNo(const std::vector<uint64_t>& _partitionNo);

                    /**
                     * 判断参数 PartitionNo 是否已赋值
                     * @return PartitionNo 是否已赋值
                     * 
                     */
                    bool PartitionNoHasBeenSet() const;

                private:

                    /**
                     * 消费者的clientId
                     */
                    std::string m_clientId;
                    bool m_clientIdHasBeenSet;

                    /**
                     * 该消费者正在消费的分区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<uint64_t> m_partitionNo;
                    bool m_partitionNoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_PARTITIONASSIGNMENT_H_
