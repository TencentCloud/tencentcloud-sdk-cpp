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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKOBJECTRESULTITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKOBJECTRESULTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskObjectSeqmentItem.h>
#include <tencentcloud/vod/v20180717/model/AiRecognitionTaskObjectSegmentItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 单个物体识别结果。
                */
                class AiRecognitionTaskObjectResultItem : public AbstractModel
                {
                public:
                    AiRecognitionTaskObjectResultItem();
                    ~AiRecognitionTaskObjectResultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取识别的物体名称。
                     * @return Name 识别的物体名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置识别的物体名称。
                     * @param _name 识别的物体名称。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取物体出现的片段列表。
                     * @return SegmentSet 物体出现的片段列表。
                     * @deprecated
                     */
                    std::vector<AiRecognitionTaskObjectSeqmentItem> GetSegmentSet() const;

                    /**
                     * 设置物体出现的片段列表。
                     * @param _segmentSet 物体出现的片段列表。
                     * @deprecated
                     */
                    void SetSegmentSet(const std::vector<AiRecognitionTaskObjectSeqmentItem>& _segmentSet);

                    /**
                     * 判断参数 SegmentSet 是否已赋值
                     * @return SegmentSet 是否已赋值
                     * @deprecated
                     */
                    bool SegmentSetHasBeenSet() const;

                    /**
                     * 获取物体出现的片段列表。
                     * @return RecognitionSegmentSet 物体出现的片段列表。
                     * 
                     */
                    std::vector<AiRecognitionTaskObjectSegmentItem> GetRecognitionSegmentSet() const;

                    /**
                     * 设置物体出现的片段列表。
                     * @param _recognitionSegmentSet 物体出现的片段列表。
                     * 
                     */
                    void SetRecognitionSegmentSet(const std::vector<AiRecognitionTaskObjectSegmentItem>& _recognitionSegmentSet);

                    /**
                     * 判断参数 RecognitionSegmentSet 是否已赋值
                     * @return RecognitionSegmentSet 是否已赋值
                     * 
                     */
                    bool RecognitionSegmentSetHasBeenSet() const;

                private:

                    /**
                     * 识别的物体名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 物体出现的片段列表。
                     */
                    std::vector<AiRecognitionTaskObjectSeqmentItem> m_segmentSet;
                    bool m_segmentSetHasBeenSet;

                    /**
                     * 物体出现的片段列表。
                     */
                    std::vector<AiRecognitionTaskObjectSegmentItem> m_recognitionSegmentSet;
                    bool m_recognitionSegmentSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIRECOGNITIONTASKOBJECTRESULTITEM_H_
