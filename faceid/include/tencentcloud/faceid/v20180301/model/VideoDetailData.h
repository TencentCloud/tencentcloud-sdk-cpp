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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_VIDEODETAILDATA_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_VIDEODETAILDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * 核身过程视频信息。
                */
                class VideoDetailData : public AbstractModel
                {
                public:
                    VideoDetailData();
                    ~VideoDetailData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取本次活体一比一请求的唯一标记。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Seq 本次活体一比一请求的唯一标记。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSeq() const;

                    /**
                     * 设置本次活体一比一请求的唯一标记。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _seq 本次活体一比一请求的唯一标记。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSeq(const std::string& _seq);

                    /**
                     * 判断参数 Seq 是否已赋值
                     * @return Seq 是否已赋值
                     * 
                     */
                    bool SeqHasBeenSet() const;

                    /**
                     * 获取活体视频的base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Video 活体视频的base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVideo() const;

                    /**
                     * 设置活体视频的base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _video 活体视频的base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVideo(const std::string& _video);

                    /**
                     * 判断参数 Video 是否已赋值
                     * @return Video 是否已赋值
                     * 
                     */
                    bool VideoHasBeenSet() const;

                private:

                    /**
                     * 本次活体一比一请求的唯一标记。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_seq;
                    bool m_seqHasBeenSet;

                    /**
                     * 活体视频的base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_video;
                    bool m_videoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_VIDEODETAILDATA_H_
