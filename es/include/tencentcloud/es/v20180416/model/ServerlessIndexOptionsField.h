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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_SERVERLESSINDEXOPTIONSFIELD_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_SERVERLESSINDEXOPTIONSFIELD_H_

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
                class ServerlessIndexOptionsField : public AbstractModel
                {
                public:
                    ServerlessIndexOptionsField();
                    ~ServerlessIndexOptionsField() = default;
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
                     * 获取标准存储时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SinkCycleAge 标准存储时长
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSinkCycleAge() const;

                    /**
                     * 设置标准存储时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sinkCycleAge 标准存储时长
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSinkCycleAge(const std::string& _sinkCycleAge);

                    /**
                     * 判断参数 SinkCycleAge 是否已赋值
                     * @return SinkCycleAge 是否已赋值
                     * 
                     */
                    bool SinkCycleAgeHasBeenSet() const;

                    /**
                     * 获取标准存储时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StandardStorageAge 标准存储时长
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStandardStorageAge() const;

                    /**
                     * 设置标准存储时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _standardStorageAge 标准存储时长
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStandardStorageAge(const std::string& _standardStorageAge);

                    /**
                     * 判断参数 StandardStorageAge 是否已赋值
                     * @return StandardStorageAge 是否已赋值
                     * 
                     */
                    bool StandardStorageAgeHasBeenSet() const;

                private:

                    /**
                     * 过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expireMaxAge;
                    bool m_expireMaxAgeHasBeenSet;

                    /**
                     * 时间分区字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_timestampField;
                    bool m_timestampFieldHasBeenSet;

                    /**
                     * 标准存储时长
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sinkCycleAge;
                    bool m_sinkCycleAgeHasBeenSet;

                    /**
                     * 标准存储时长
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_standardStorageAge;
                    bool m_standardStorageAgeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_SERVERLESSINDEXOPTIONSFIELD_H_
