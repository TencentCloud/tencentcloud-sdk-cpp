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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_EXTRACTBLINDWATERMARKTASKCONFIG_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_EXTRACTBLINDWATERMARKTASKCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 提取视频转码数字水印任务配置
                */
                class ExtractBlindWatermarkTaskConfig : public AbstractModel
                {
                public:
                    ExtractBlindWatermarkTaskConfig();
                    ~ExtractBlindWatermarkTaskConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当提取数字水印类型为blind-abseq时有效，用于指定输入视频的切片时长，单位：毫秒。
如果不填默认切片时长为5秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SegmentDuration 当提取数字水印类型为blind-abseq时有效，用于指定输入视频的切片时长，单位：毫秒。
如果不填默认切片时长为5秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSegmentDuration() const;

                    /**
                     * 设置当提取数字水印类型为blind-abseq时有效，用于指定输入视频的切片时长，单位：毫秒。
如果不填默认切片时长为5秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _segmentDuration 当提取数字水印类型为blind-abseq时有效，用于指定输入视频的切片时长，单位：毫秒。
如果不填默认切片时长为5秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSegmentDuration(const int64_t& _segmentDuration);

                    /**
                     * 判断参数 SegmentDuration 是否已赋值
                     * @return SegmentDuration 是否已赋值
                     * 
                     */
                    bool SegmentDurationHasBeenSet() const;

                private:

                    /**
                     * 当提取数字水印类型为blind-abseq时有效，用于指定输入视频的切片时长，单位：毫秒。
如果不填默认切片时长为5秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_segmentDuration;
                    bool m_segmentDurationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_EXTRACTBLINDWATERMARKTASKCONFIG_H_
