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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SNAPSHOTBYTIMEOFFSETTASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SNAPSHOTBYTIMEOFFSETTASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/WatermarkInput.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 对视频按指定时间点截图任务输入参数类型
                */
                class SnapshotByTimeOffsetTaskInput : public AbstractModel
                {
                public:
                    SnapshotByTimeOffsetTaskInput();
                    ~SnapshotByTimeOffsetTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取指定时间点截图模板 ID。
                     * @return Definition 指定时间点截图模板 ID。
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置指定时间点截图模板 ID。
                     * @param Definition 指定时间点截图模板 ID。
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取截图时间点列表，单位为<font color=red>毫秒</font>。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeOffsetSet 截图时间点列表，单位为<font color=red>毫秒</font>。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<double> GetTimeOffsetSet() const;

                    /**
                     * 设置截图时间点列表，单位为<font color=red>毫秒</font>。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param TimeOffsetSet 截图时间点列表，单位为<font color=red>毫秒</font>。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTimeOffsetSet(const std::vector<double>& _timeOffsetSet);

                    /**
                     * 判断参数 TimeOffsetSet 是否已赋值
                     * @return TimeOffsetSet 是否已赋值
                     */
                    bool TimeOffsetSetHasBeenSet() const;

                    /**
                     * 获取水印列表，支持多张图片或文字水印，最大可支持 10 张。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WatermarkSet 水印列表，支持多张图片或文字水印，最大可支持 10 张。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<WatermarkInput> GetWatermarkSet() const;

                    /**
                     * 设置水印列表，支持多张图片或文字水印，最大可支持 10 张。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param WatermarkSet 水印列表，支持多张图片或文字水印，最大可支持 10 张。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetWatermarkSet(const std::vector<WatermarkInput>& _watermarkSet);

                    /**
                     * 判断参数 WatermarkSet 是否已赋值
                     * @return WatermarkSet 是否已赋值
                     */
                    bool WatermarkSetHasBeenSet() const;

                private:

                    /**
                     * 指定时间点截图模板 ID。
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 截图时间点列表，单位为<font color=red>毫秒</font>。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<double> m_timeOffsetSet;
                    bool m_timeOffsetSetHasBeenSet;

                    /**
                     * 水印列表，支持多张图片或文字水印，最大可支持 10 张。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<WatermarkInput> m_watermarkSet;
                    bool m_watermarkSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SNAPSHOTBYTIMEOFFSETTASKINPUT_H_
