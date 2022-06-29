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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_MEDIAFILTER_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_MEDIAFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * 媒资过滤条件


                */
                class MediaFilter : public AbstractModel
                {
                public:
                    MediaFilter();
                    ~MediaFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取媒资名称过滤条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MediaNameSet 媒资名称过滤条件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetMediaNameSet() const;

                    /**
                     * 设置媒资名称过滤条件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MediaNameSet 媒资名称过滤条件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMediaNameSet(const std::vector<std::string>& _mediaNameSet);

                    /**
                     * 判断参数 MediaNameSet 是否已赋值
                     * @return MediaNameSet 是否已赋值
                     */
                    bool MediaNameSetHasBeenSet() const;

                    /**
                     * 获取媒资状态数组，媒资状态可选值参见MediaInfo
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusSet 媒资状态数组，媒资状态可选值参见MediaInfo
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> GetStatusSet() const;

                    /**
                     * 设置媒资状态数组，媒资状态可选值参见MediaInfo
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StatusSet 媒资状态数组，媒资状态可选值参见MediaInfo
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatusSet(const std::vector<int64_t>& _statusSet);

                    /**
                     * 判断参数 StatusSet 是否已赋值
                     * @return StatusSet 是否已赋值
                     */
                    bool StatusSetHasBeenSet() const;

                    /**
                     * 获取媒资ID数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MediaIdSet 媒资ID数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetMediaIdSet() const;

                    /**
                     * 设置媒资ID数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MediaIdSet 媒资ID数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMediaIdSet(const std::vector<std::string>& _mediaIdSet);

                    /**
                     * 判断参数 MediaIdSet 是否已赋值
                     * @return MediaIdSet 是否已赋值
                     */
                    bool MediaIdSetHasBeenSet() const;

                    /**
                     * 获取媒资自定义标签数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LabelSet 媒资自定义标签数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetLabelSet() const;

                    /**
                     * 设置媒资自定义标签数组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LabelSet 媒资自定义标签数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLabelSet(const std::vector<std::string>& _labelSet);

                    /**
                     * 判断参数 LabelSet 是否已赋值
                     * @return LabelSet 是否已赋值
                     */
                    bool LabelSetHasBeenSet() const;

                private:

                    /**
                     * 媒资名称过滤条件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_mediaNameSet;
                    bool m_mediaNameSetHasBeenSet;

                    /**
                     * 媒资状态数组，媒资状态可选值参见MediaInfo
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_statusSet;
                    bool m_statusSetHasBeenSet;

                    /**
                     * 媒资ID数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_mediaIdSet;
                    bool m_mediaIdSetHasBeenSet;

                    /**
                     * 媒资自定义标签数组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_labelSet;
                    bool m_labelSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_MEDIAFILTER_H_
