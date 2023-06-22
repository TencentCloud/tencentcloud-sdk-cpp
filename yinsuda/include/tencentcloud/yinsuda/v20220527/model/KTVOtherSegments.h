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

#ifndef TENCENTCLOUD_YINSUDA_V20220527_MODEL_KTVOTHERSEGMENTS_H_
#define TENCENTCLOUD_YINSUDA_V20220527_MODEL_KTVOTHERSEGMENTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yinsuda
    {
        namespace V20220527
        {
            namespace Model
            {
                /**
                * 其它片段时间（可用于抢唱）
                */
                class KTVOtherSegments : public AbstractModel
                {
                public:
                    KTVOtherSegments();
                    ~KTVOtherSegments() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取片段开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SegmentBegin 片段开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSegmentBegin() const;

                    /**
                     * 设置片段开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _segmentBegin 片段开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSegmentBegin(const int64_t& _segmentBegin);

                    /**
                     * 判断参数 SegmentBegin 是否已赋值
                     * @return SegmentBegin 是否已赋值
                     * 
                     */
                    bool SegmentBeginHasBeenSet() const;

                    /**
                     * 获取片段结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SegmentEnd 片段结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSegmentEnd() const;

                    /**
                     * 设置片段结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _segmentEnd 片段结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSegmentEnd(const int64_t& _segmentEnd);

                    /**
                     * 判断参数 SegmentEnd 是否已赋值
                     * @return SegmentEnd 是否已赋值
                     * 
                     */
                    bool SegmentEndHasBeenSet() const;

                private:

                    /**
                     * 片段开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_segmentBegin;
                    bool m_segmentBeginHasBeenSet;

                    /**
                     * 片段结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_segmentEnd;
                    bool m_segmentEndHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YINSUDA_V20220527_MODEL_KTVOTHERSEGMENTS_H_
