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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_FAILURES_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_FAILURES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 索引备份失败的数据结构
                */
                class Failures : public AbstractModel
                {
                public:
                    Failures();
                    ~Failures() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取备份失败的索引名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Index 备份失败的索引名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndex() const;

                    /**
                     * 设置备份失败的索引名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _index 备份失败的索引名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndex(const std::string& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取快照失败的分片号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShardId 快照失败的分片号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetShardId() const;

                    /**
                     * 设置快照失败的分片号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _shardId 快照失败的分片号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShardId(const int64_t& _shardId);

                    /**
                     * 判断参数 ShardId 是否已赋值
                     * @return ShardId 是否已赋值
                     * 
                     */
                    bool ShardIdHasBeenSet() const;

                    /**
                     * 获取快照失败的原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Reason 快照失败的原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置快照失败的原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reason 快照失败的原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取快照失败的状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 快照失败的状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置快照失败的状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 快照失败的状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 备份失败的索引名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * 快照失败的分片号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_shardId;
                    bool m_shardIdHasBeenSet;

                    /**
                     * 快照失败的原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * 快照失败的状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_FAILURES_H_
