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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_INDEXOPTIONSFIELD_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_INDEXOPTIONSFIELD_H_

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
                * 索引自治字段
                */
                class IndexOptionsField : public AbstractModel
                {
                public:
                    IndexOptionsField();
                    ~IndexOptionsField() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireMaxAge 过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpireMaxAge() const;

                    /**
                     * 设置过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expireMaxAge 过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpireMaxAge(const std::string& _expireMaxAge);

                    /**
                     * 判断参数 ExpireMaxAge 是否已赋值
                     * @return ExpireMaxAge 是否已赋值
                     * 
                     */
                    bool ExpireMaxAgeHasBeenSet() const;

                    /**
                     * 获取过期大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpireMaxSize 过期大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExpireMaxSize() const;

                    /**
                     * 设置过期大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expireMaxSize 过期大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpireMaxSize(const std::string& _expireMaxSize);

                    /**
                     * 判断参数 ExpireMaxSize 是否已赋值
                     * @return ExpireMaxSize 是否已赋值
                     * 
                     */
                    bool ExpireMaxSizeHasBeenSet() const;

                    /**
                     * 获取滚动周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RolloverMaxAge 滚动周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRolloverMaxAge() const;

                    /**
                     * 设置滚动周期
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rolloverMaxAge 滚动周期
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRolloverMaxAge(const std::string& _rolloverMaxAge);

                    /**
                     * 判断参数 RolloverMaxAge 是否已赋值
                     * @return RolloverMaxAge 是否已赋值
                     * 
                     */
                    bool RolloverMaxAgeHasBeenSet() const;

                    /**
                     * 获取是否开启动态滚动
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RolloverDynamic 是否开启动态滚动
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRolloverDynamic() const;

                    /**
                     * 设置是否开启动态滚动
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rolloverDynamic 是否开启动态滚动
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRolloverDynamic(const std::string& _rolloverDynamic);

                    /**
                     * 判断参数 RolloverDynamic 是否已赋值
                     * @return RolloverDynamic 是否已赋值
                     * 
                     */
                    bool RolloverDynamicHasBeenSet() const;

                    /**
                     * 获取是否开启动态分片
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShardNumDynamic 是否开启动态分片
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetShardNumDynamic() const;

                    /**
                     * 设置是否开启动态分片
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _shardNumDynamic 是否开启动态分片
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShardNumDynamic(const std::string& _shardNumDynamic);

                    /**
                     * 判断参数 ShardNumDynamic 是否已赋值
                     * @return ShardNumDynamic 是否已赋值
                     * 
                     */
                    bool ShardNumDynamicHasBeenSet() const;

                    /**
                     * 获取时间分区字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimestampField 时间分区字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTimestampField() const;

                    /**
                     * 设置时间分区字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timestampField 时间分区字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimestampField(const std::string& _timestampField);

                    /**
                     * 判断参数 TimestampField 是否已赋值
                     * @return TimestampField 是否已赋值
                     * 
                     */
                    bool TimestampFieldHasBeenSet() const;

                    /**
                     * 获取写入模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WriteMode 写入模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWriteMode() const;

                    /**
                     * 设置写入模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _writeMode 写入模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWriteMode(const std::string& _writeMode);

                    /**
                     * 判断参数 WriteMode 是否已赋值
                     * @return WriteMode 是否已赋值
                     * 
                     */
                    bool WriteModeHasBeenSet() const;

                private:

                    /**
                     * 过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireMaxAge;
                    bool m_expireMaxAgeHasBeenSet;

                    /**
                     * 过期大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireMaxSize;
                    bool m_expireMaxSizeHasBeenSet;

                    /**
                     * 滚动周期
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rolloverMaxAge;
                    bool m_rolloverMaxAgeHasBeenSet;

                    /**
                     * 是否开启动态滚动
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_rolloverDynamic;
                    bool m_rolloverDynamicHasBeenSet;

                    /**
                     * 是否开启动态分片
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_shardNumDynamic;
                    bool m_shardNumDynamicHasBeenSet;

                    /**
                     * 时间分区字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timestampField;
                    bool m_timestampFieldHasBeenSet;

                    /**
                     * 写入模式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_writeMode;
                    bool m_writeModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_INDEXOPTIONSFIELD_H_
