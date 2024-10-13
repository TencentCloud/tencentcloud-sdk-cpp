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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_VIDEODBENTRYTASKRESULT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_VIDEODBENTRYTASKRESULT_H_

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
                * 视频检索入库任务的结果
                */
                class VideoDBEntryTaskResult : public AbstractModel
                {
                public:
                    VideoDBEntryTaskResult();
                    ~VideoDBEntryTaskResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取入库的视频ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VideoId 入库的视频ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVideoId() const;

                    /**
                     * 设置入库的视频ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _videoId 入库的视频ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVideoId(const std::string& _videoId);

                    /**
                     * 判断参数 VideoId 是否已赋值
                     * @return VideoId 是否已赋值
                     * 
                     */
                    bool VideoIdHasBeenSet() const;

                private:

                    /**
                     * 入库的视频ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_videoId;
                    bool m_videoIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_VIDEODBENTRYTASKRESULT_H_
