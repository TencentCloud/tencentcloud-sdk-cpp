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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTINFOVIDEODATA_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTINFOVIDEODATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/VideoDetailData.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * 核身视频信息。
                */
                class DetectInfoVideoData : public AbstractModel
                {
                public:
                    DetectInfoVideoData();
                    ~DetectInfoVideoData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取活体视频的base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LivenessVideo 活体视频的base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLivenessVideo() const;

                    /**
                     * 设置活体视频的base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _livenessVideo 活体视频的base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLivenessVideo(const std::string& _livenessVideo);

                    /**
                     * 判断参数 LivenessVideo 是否已赋值
                     * @return LivenessVideo 是否已赋值
                     * 
                     */
                    bool LivenessVideoHasBeenSet() const;

                    /**
                     * 获取当次token中所有用户活体视频的COS存储路径，仅当您开启数据存储服务且“IsReturnAllVideo”入参取值为true 时返回。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LivenessVideos 当次token中所有用户活体视频的COS存储路径，仅当您开启数据存储服务且“IsReturnAllVideo”入参取值为true 时返回。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<VideoDetailData> GetLivenessVideos() const;

                    /**
                     * 设置当次token中所有用户活体视频的COS存储路径，仅当您开启数据存储服务且“IsReturnAllVideo”入参取值为true 时返回。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _livenessVideos 当次token中所有用户活体视频的COS存储路径，仅当您开启数据存储服务且“IsReturnAllVideo”入参取值为true 时返回。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLivenessVideos(const std::vector<VideoDetailData>& _livenessVideos);

                    /**
                     * 判断参数 LivenessVideos 是否已赋值
                     * @return LivenessVideos 是否已赋值
                     * 
                     */
                    bool LivenessVideosHasBeenSet() const;

                private:

                    /**
                     * 活体视频的base64编码。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_livenessVideo;
                    bool m_livenessVideoHasBeenSet;

                    /**
                     * 当次token中所有用户活体视频的COS存储路径，仅当您开启数据存储服务且“IsReturnAllVideo”入参取值为true 时返回。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<VideoDetailData> m_livenessVideos;
                    bool m_livenessVideosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_DETECTINFOVIDEODATA_H_
