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

#ifndef TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_CLOUDSTORAGEEVENT_H_
#define TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_CLOUDSTORAGEEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20211125
        {
            namespace Model
            {
                /**
                * 云存事件
                */
                class CloudStorageEvent : public AbstractModel
                {
                public:
                    CloudStorageEvent();
                    ~CloudStorageEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件起始时间（Unix 时间戳，秒级
                     * @return StartTime 事件起始时间（Unix 时间戳，秒级
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置事件起始时间（Unix 时间戳，秒级
                     * @param _startTime 事件起始时间（Unix 时间戳，秒级
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取事件结束时间（Unix 时间戳，秒级
                     * @return EndTime 事件结束时间（Unix 时间戳，秒级
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置事件结束时间（Unix 时间戳，秒级
                     * @param _endTime 事件结束时间（Unix 时间戳，秒级
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取事件缩略图
                     * @return Thumbnail 事件缩略图
                     * 
                     */
                    std::string GetThumbnail() const;

                    /**
                     * 设置事件缩略图
                     * @param _thumbnail 事件缩略图
                     * 
                     */
                    void SetThumbnail(const std::string& _thumbnail);

                    /**
                     * 判断参数 Thumbnail 是否已赋值
                     * @return Thumbnail 是否已赋值
                     * 
                     */
                    bool ThumbnailHasBeenSet() const;

                    /**
                     * 获取事件ID
                     * @return EventId 事件ID
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置事件ID
                     * @param _eventId 事件ID
                     * 
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取事件录像上传状态，Finished: 全部上传成功 Partial: 部分上传成功 Failed: 上传失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UploadStatus 事件录像上传状态，Finished: 全部上传成功 Partial: 部分上传成功 Failed: 上传失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUploadStatus() const;

                    /**
                     * 设置事件录像上传状态，Finished: 全部上传成功 Partial: 部分上传成功 Failed: 上传失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _uploadStatus 事件录像上传状态，Finished: 全部上传成功 Partial: 部分上传成功 Failed: 上传失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUploadStatus(const std::string& _uploadStatus);

                    /**
                     * 判断参数 UploadStatus 是否已赋值
                     * @return UploadStatus 是否已赋值
                     * 
                     */
                    bool UploadStatusHasBeenSet() const;

                    /**
                     * 获取事件自定义数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data 事件自定义数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 设置事件自定义数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _data 事件自定义数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetData(const std::string& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 事件起始时间（Unix 时间戳，秒级
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 事件结束时间（Unix 时间戳，秒级
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 事件缩略图
                     */
                    std::string m_thumbnail;
                    bool m_thumbnailHasBeenSet;

                    /**
                     * 事件ID
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * 事件录像上传状态，Finished: 全部上传成功 Partial: 部分上传成功 Failed: 上传失败
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uploadStatus;
                    bool m_uploadStatusHasBeenSet;

                    /**
                     * 事件自定义数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_CLOUDSTORAGEEVENT_H_
