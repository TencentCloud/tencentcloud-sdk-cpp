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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_PARTITIONINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_PARTITIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 日志主题分区信息
                */
                class PartitionInfo : public AbstractModel
                {
                public:
                    PartitionInfo();
                    ~PartitionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分区ID
                     * @return PartitionId 分区ID
                     * 
                     */
                    int64_t GetPartitionId() const;

                    /**
                     * 设置分区ID
                     * @param _partitionId 分区ID
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
                     * 获取分区的状态（readwrite或者是readonly）
                     * @return Status 分区的状态（readwrite或者是readonly）
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置分区的状态（readwrite或者是readonly）
                     * @param _status 分区的状态（readwrite或者是readonly）
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取分区哈希键起始key
                     * @return InclusiveBeginKey 分区哈希键起始key
                     * 
                     */
                    std::string GetInclusiveBeginKey() const;

                    /**
                     * 设置分区哈希键起始key
                     * @param _inclusiveBeginKey 分区哈希键起始key
                     * 
                     */
                    void SetInclusiveBeginKey(const std::string& _inclusiveBeginKey);

                    /**
                     * 判断参数 InclusiveBeginKey 是否已赋值
                     * @return InclusiveBeginKey 是否已赋值
                     * 
                     */
                    bool InclusiveBeginKeyHasBeenSet() const;

                    /**
                     * 获取分区哈希键结束key
                     * @return ExclusiveEndKey 分区哈希键结束key
                     * 
                     */
                    std::string GetExclusiveEndKey() const;

                    /**
                     * 设置分区哈希键结束key
                     * @param _exclusiveEndKey 分区哈希键结束key
                     * 
                     */
                    void SetExclusiveEndKey(const std::string& _exclusiveEndKey);

                    /**
                     * 判断参数 ExclusiveEndKey 是否已赋值
                     * @return ExclusiveEndKey 是否已赋值
                     * 
                     */
                    bool ExclusiveEndKeyHasBeenSet() const;

                    /**
                     * 获取分区创建时间
                     * @return CreateTime 分区创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置分区创建时间
                     * @param _createTime 分区创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取只读分区数据停止写入时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastWriteTime 只读分区数据停止写入时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastWriteTime() const;

                    /**
                     * 设置只读分区数据停止写入时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastWriteTime 只读分区数据停止写入时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastWriteTime(const std::string& _lastWriteTime);

                    /**
                     * 判断参数 LastWriteTime 是否已赋值
                     * @return LastWriteTime 是否已赋值
                     * 
                     */
                    bool LastWriteTimeHasBeenSet() const;

                private:

                    /**
                     * 分区ID
                     */
                    int64_t m_partitionId;
                    bool m_partitionIdHasBeenSet;

                    /**
                     * 分区的状态（readwrite或者是readonly）
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 分区哈希键起始key
                     */
                    std::string m_inclusiveBeginKey;
                    bool m_inclusiveBeginKeyHasBeenSet;

                    /**
                     * 分区哈希键结束key
                     */
                    std::string m_exclusiveEndKey;
                    bool m_exclusiveEndKeyHasBeenSet;

                    /**
                     * 分区创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 只读分区数据停止写入时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastWriteTime;
                    bool m_lastWriteTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_PARTITIONINFO_H_
