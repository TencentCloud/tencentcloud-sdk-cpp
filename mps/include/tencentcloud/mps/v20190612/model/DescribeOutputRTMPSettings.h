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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEOUTPUTRTMPSETTINGS_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEOUTPUTRTMPSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/RTMPAddressDestination.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 查询输出的RTMP配置信息。
                */
                class DescribeOutputRTMPSettings : public AbstractModel
                {
                public:
                    DescribeOutputRTMPSettings();
                    ~DescribeOutputRTMPSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取空闲超时时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IdleTimeout 空闲超时时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIdleTimeout() const;

                    /**
                     * 设置空闲超时时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _idleTimeout 空闲超时时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIdleTimeout(const int64_t& _idleTimeout);

                    /**
                     * 判断参数 IdleTimeout 是否已赋值
                     * @return IdleTimeout 是否已赋值
                     * 
                     */
                    bool IdleTimeoutHasBeenSet() const;

                    /**
                     * 获取Chunk大小。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChunkSize Chunk大小。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetChunkSize() const;

                    /**
                     * 设置Chunk大小。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _chunkSize Chunk大小。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChunkSize(const int64_t& _chunkSize);

                    /**
                     * 判断参数 ChunkSize 是否已赋值
                     * @return ChunkSize 是否已赋值
                     * 
                     */
                    bool ChunkSizeHasBeenSet() const;

                    /**
                     * 获取转推RTMP的目标地址信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Destinations 转推RTMP的目标地址信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RTMPAddressDestination> GetDestinations() const;

                    /**
                     * 设置转推RTMP的目标地址信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _destinations 转推RTMP的目标地址信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDestinations(const std::vector<RTMPAddressDestination>& _destinations);

                    /**
                     * 判断参数 Destinations 是否已赋值
                     * @return Destinations 是否已赋值
                     * 
                     */
                    bool DestinationsHasBeenSet() const;

                private:

                    /**
                     * 空闲超时时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_idleTimeout;
                    bool m_idleTimeoutHasBeenSet;

                    /**
                     * Chunk大小。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_chunkSize;
                    bool m_chunkSizeHasBeenSet;

                    /**
                     * 转推RTMP的目标地址信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RTMPAddressDestination> m_destinations;
                    bool m_destinationsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEOUTPUTRTMPSETTINGS_H_
