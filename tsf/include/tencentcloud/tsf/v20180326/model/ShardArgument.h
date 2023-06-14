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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_SHARDARGUMENT_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_SHARDARGUMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 分片参数
                */
                class ShardArgument : public AbstractModel
                {
                public:
                    ShardArgument();
                    ~ShardArgument() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分片参数 KEY，整形, 范围 [1,1000]
                     * @return ShardKey 分片参数 KEY，整形, 范围 [1,1000]
                     * 
                     */
                    uint64_t GetShardKey() const;

                    /**
                     * 设置分片参数 KEY，整形, 范围 [1,1000]
                     * @param _shardKey 分片参数 KEY，整形, 范围 [1,1000]
                     * 
                     */
                    void SetShardKey(const uint64_t& _shardKey);

                    /**
                     * 判断参数 ShardKey 是否已赋值
                     * @return ShardKey 是否已赋值
                     * 
                     */
                    bool ShardKeyHasBeenSet() const;

                    /**
                     * 获取分片参数 VALUE
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShardValue 分片参数 VALUE
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetShardValue() const;

                    /**
                     * 设置分片参数 VALUE
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _shardValue 分片参数 VALUE
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShardValue(const std::string& _shardValue);

                    /**
                     * 判断参数 ShardValue 是否已赋值
                     * @return ShardValue 是否已赋值
                     * 
                     */
                    bool ShardValueHasBeenSet() const;

                private:

                    /**
                     * 分片参数 KEY，整形, 范围 [1,1000]
                     */
                    uint64_t m_shardKey;
                    bool m_shardKeyHasBeenSet;

                    /**
                     * 分片参数 VALUE
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_shardValue;
                    bool m_shardValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_SHARDARGUMENT_H_
