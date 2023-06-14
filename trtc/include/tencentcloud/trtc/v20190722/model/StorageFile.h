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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_STORAGEFILE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_STORAGEFILE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 云端录制查询接口，录制文件的信息
                */
                class StorageFile : public AbstractModel
                {
                public:
                    StorageFile();
                    ~StorageFile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取录制文件对应的UserId，如果是混流的话的这里返回的是空串。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserId 录制文件对应的UserId，如果是混流的话的这里返回的是空串。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置录制文件对应的UserId，如果是混流的话的这里返回的是空串。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userId 录制文件对应的UserId，如果是混流的话的这里返回的是空串。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取录制索引文件名。
                     * @return FileName 录制索引文件名。
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置录制索引文件名。
                     * @param _fileName 录制索引文件名。
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取录制文件流信息。
video：视频录制文件
audio：音频录制文件
audio_video：音视频录制文件
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrackType 录制文件流信息。
video：视频录制文件
audio：音频录制文件
audio_video：音视频录制文件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTrackType() const;

                    /**
                     * 设置录制文件流信息。
video：视频录制文件
audio：音频录制文件
audio_video：音视频录制文件
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _trackType 录制文件流信息。
video：视频录制文件
audio：音频录制文件
audio_video：音视频录制文件
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTrackType(const std::string& _trackType);

                    /**
                     * 判断参数 TrackType 是否已赋值
                     * @return TrackType 是否已赋值
                     * 
                     */
                    bool TrackTypeHasBeenSet() const;

                    /**
                     * 获取录制文件开始Unix时间戳。
                     * @return BeginTimeStamp 录制文件开始Unix时间戳。
                     * 
                     */
                    uint64_t GetBeginTimeStamp() const;

                    /**
                     * 设置录制文件开始Unix时间戳。
                     * @param _beginTimeStamp 录制文件开始Unix时间戳。
                     * 
                     */
                    void SetBeginTimeStamp(const uint64_t& _beginTimeStamp);

                    /**
                     * 判断参数 BeginTimeStamp 是否已赋值
                     * @return BeginTimeStamp 是否已赋值
                     * 
                     */
                    bool BeginTimeStampHasBeenSet() const;

                private:

                    /**
                     * 录制文件对应的UserId，如果是混流的话的这里返回的是空串。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 录制索引文件名。
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 录制文件流信息。
video：视频录制文件
audio：音频录制文件
audio_video：音视频录制文件
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_trackType;
                    bool m_trackTypeHasBeenSet;

                    /**
                     * 录制文件开始Unix时间戳。
                     */
                    uint64_t m_beginTimeStamp;
                    bool m_beginTimeStampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_STORAGEFILE_H_
