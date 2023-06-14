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

#ifndef TENCENTCLOUD_WAV_V20210129_MODEL_CHATARCHIVINGMSGTYPEVIDEO_H_
#define TENCENTCLOUD_WAV_V20210129_MODEL_CHATARCHIVINGMSGTYPEVIDEO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wav
    {
        namespace V20210129
        {
            namespace Model
            {
                /**
                * 会话存档的视频消息类型
                */
                class ChatArchivingMsgTypeVideo : public AbstractModel
                {
                public:
                    ChatArchivingMsgTypeVideo();
                    ~ChatArchivingMsgTypeVideo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取视频时长，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PlayLength 视频时长，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetPlayLength() const;

                    /**
                     * 设置视频时长，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _playLength 视频时长，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPlayLength(const uint64_t& _playLength);

                    /**
                     * 判断参数 PlayLength 是否已赋值
                     * @return PlayLength 是否已赋值
                     * 
                     */
                    bool PlayLengthHasBeenSet() const;

                    /**
                     * 获取文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileSize 文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFileSize() const;

                    /**
                     * 设置文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileSize 文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileSize(const uint64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取视频资源对象Cos下载地址
                     * @return CosKey 视频资源对象Cos下载地址
                     * 
                     */
                    std::string GetCosKey() const;

                    /**
                     * 设置视频资源对象Cos下载地址
                     * @param _cosKey 视频资源对象Cos下载地址
                     * 
                     */
                    void SetCosKey(const std::string& _cosKey);

                    /**
                     * 判断参数 CosKey 是否已赋值
                     * @return CosKey 是否已赋值
                     * 
                     */
                    bool CosKeyHasBeenSet() const;

                private:

                    /**
                     * 视频时长，单位秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_playLength;
                    bool m_playLengthHasBeenSet;

                    /**
                     * 文件大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * 视频资源对象Cos下载地址
                     */
                    std::string m_cosKey;
                    bool m_cosKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_MODEL_CHATARCHIVINGMSGTYPEVIDEO_H_
