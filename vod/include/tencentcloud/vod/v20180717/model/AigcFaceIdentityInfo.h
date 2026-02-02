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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_AIGCFACEIDENTITYINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_AIGCFACEIDENTITYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 人脸身份信息。
                */
                class AigcFaceIdentityInfo : public AbstractModel
                {
                public:
                    AigcFaceIdentityInfo();
                    ~AigcFaceIdentityInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频中的人脸 ID。同一个人脸在视频中间隔超过1s时会视作不同 ID。
                     * @return FaceId 视频中的人脸 ID。同一个人脸在视频中间隔超过1s时会视作不同 ID。
                     * 
                     */
                    std::string GetFaceId() const;

                    /**
                     * 设置视频中的人脸 ID。同一个人脸在视频中间隔超过1s时会视作不同 ID。
                     * @param _faceId 视频中的人脸 ID。同一个人脸在视频中间隔超过1s时会视作不同 ID。
                     * 
                     */
                    void SetFaceId(const std::string& _faceId);

                    /**
                     * 判断参数 FaceId 是否已赋值
                     * @return FaceId 是否已赋值
                     * 
                     */
                    bool FaceIdHasBeenSet() const;

                    /**
                     * 获取从视频中截取的人脸示意图。
                     * @return FaceImage 从视频中截取的人脸示意图。
                     * 
                     */
                    std::string GetFaceImage() const;

                    /**
                     * 设置从视频中截取的人脸示意图。
                     * @param _faceImage 从视频中截取的人脸示意图。
                     * 
                     */
                    void SetFaceImage(const std::string& _faceImage);

                    /**
                     * 判断参数 FaceImage 是否已赋值
                     * @return FaceImage 是否已赋值
                     * 
                     */
                    bool FaceImageHasBeenSet() const;

                    /**
                     * 获取该人脸可对口型区间的起点时间，可作为对口型最佳开始时间。单位：毫秒。
                     * @return StartTime 该人脸可对口型区间的起点时间，可作为对口型最佳开始时间。单位：毫秒。
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置该人脸可对口型区间的起点时间，可作为对口型最佳开始时间。单位：毫秒。
                     * @param _startTime 该人脸可对口型区间的起点时间，可作为对口型最佳开始时间。单位：毫秒。
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取该人脸可对口型区间的终点时间；注：此结果存在毫秒级误差，会长于实际区间终点。单位：毫秒。
                     * @return EndTime 该人脸可对口型区间的终点时间；注：此结果存在毫秒级误差，会长于实际区间终点。单位：毫秒。
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置该人脸可对口型区间的终点时间；注：此结果存在毫秒级误差，会长于实际区间终点。单位：毫秒。
                     * @param _endTime 该人脸可对口型区间的终点时间；注：此结果存在毫秒级误差，会长于实际区间终点。单位：毫秒。
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 视频中的人脸 ID。同一个人脸在视频中间隔超过1s时会视作不同 ID。
                     */
                    std::string m_faceId;
                    bool m_faceIdHasBeenSet;

                    /**
                     * 从视频中截取的人脸示意图。
                     */
                    std::string m_faceImage;
                    bool m_faceImageHasBeenSet;

                    /**
                     * 该人脸可对口型区间的起点时间，可作为对口型最佳开始时间。单位：毫秒。
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 该人脸可对口型区间的终点时间；注：此结果存在毫秒级误差，会长于实际区间终点。单位：毫秒。
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_AIGCFACEIDENTITYINFO_H_
