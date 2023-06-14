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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATEOUTPUTRTMPSETTINGS_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATEOUTPUTRTMPSETTINGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/CreateOutputRtmpSettingsDestinations.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 创建媒体传输流的输出的RTMP配置。
                */
                class CreateOutputRTMPSettings : public AbstractModel
                {
                public:
                    CreateOutputRTMPSettings();
                    ~CreateOutputRTMPSettings() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转推的目标地址，可填1~2个。
                     * @return Destinations 转推的目标地址，可填1~2个。
                     * 
                     */
                    std::vector<CreateOutputRtmpSettingsDestinations> GetDestinations() const;

                    /**
                     * 设置转推的目标地址，可填1~2个。
                     * @param _destinations 转推的目标地址，可填1~2个。
                     * 
                     */
                    void SetDestinations(const std::vector<CreateOutputRtmpSettingsDestinations>& _destinations);

                    /**
                     * 判断参数 Destinations 是否已赋值
                     * @return Destinations 是否已赋值
                     * 
                     */
                    bool DestinationsHasBeenSet() const;

                    /**
                     * 获取RTMP的Chunk大小，范围为[4096, 40960]。
                     * @return ChunkSize RTMP的Chunk大小，范围为[4096, 40960]。
                     * 
                     */
                    int64_t GetChunkSize() const;

                    /**
                     * 设置RTMP的Chunk大小，范围为[4096, 40960]。
                     * @param _chunkSize RTMP的Chunk大小，范围为[4096, 40960]。
                     * 
                     */
                    void SetChunkSize(const int64_t& _chunkSize);

                    /**
                     * 判断参数 ChunkSize 是否已赋值
                     * @return ChunkSize 是否已赋值
                     * 
                     */
                    bool ChunkSizeHasBeenSet() const;

                private:

                    /**
                     * 转推的目标地址，可填1~2个。
                     */
                    std::vector<CreateOutputRtmpSettingsDestinations> m_destinations;
                    bool m_destinationsHasBeenSet;

                    /**
                     * RTMP的Chunk大小，范围为[4096, 40960]。
                     */
                    int64_t m_chunkSize;
                    bool m_chunkSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEOUTPUTRTMPSETTINGS_H_
