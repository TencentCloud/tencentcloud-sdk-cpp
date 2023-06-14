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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBELIVEVIDEOLISTREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBELIVEVIDEOLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * DescribeLiveVideoList请求参数结构体
                */
                class DescribeLiveVideoListRequest : public AbstractModel
                {
                public:
                    DescribeLiveVideoListRequest();
                    ~DescribeLiveVideoListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页的每页数量
                     * @return Limit 分页的每页数量
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页的每页数量
                     * @param _limit 分页的每页数量
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取直播频道ID
                     * @return LiveChannelId 直播频道ID
                     * 
                     */
                    std::string GetLiveChannelId() const;

                    /**
                     * 设置直播频道ID
                     * @param _liveChannelId 直播频道ID
                     * 
                     */
                    void SetLiveChannelId(const std::string& _liveChannelId);

                    /**
                     * 判断参数 LiveChannelId 是否已赋值
                     * @return LiveChannelId 是否已赋值
                     * 
                     */
                    bool LiveChannelIdHasBeenSet() const;

                    /**
                     * 获取开始录制开始时间
                     * @return StartRecordTime 开始录制开始时间
                     * 
                     */
                    int64_t GetStartRecordTime() const;

                    /**
                     * 设置开始录制开始时间
                     * @param _startRecordTime 开始录制开始时间
                     * 
                     */
                    void SetStartRecordTime(const int64_t& _startRecordTime);

                    /**
                     * 判断参数 StartRecordTime 是否已赋值
                     * @return StartRecordTime 是否已赋值
                     * 
                     */
                    bool StartRecordTimeHasBeenSet() const;

                    /**
                     * 获取开始录制结束时间
                     * @return EndRecordTime 开始录制结束时间
                     * 
                     */
                    int64_t GetEndRecordTime() const;

                    /**
                     * 设置开始录制结束时间
                     * @param _endRecordTime 开始录制结束时间
                     * 
                     */
                    void SetEndRecordTime(const int64_t& _endRecordTime);

                    /**
                     * 判断参数 EndRecordTime 是否已赋值
                     * @return EndRecordTime 是否已赋值
                     * 
                     */
                    bool EndRecordTimeHasBeenSet() const;

                    /**
                     * 获取过期开始时间
                     * @return StartExpireTime 过期开始时间
                     * 
                     */
                    int64_t GetStartExpireTime() const;

                    /**
                     * 设置过期开始时间
                     * @param _startExpireTime 过期开始时间
                     * 
                     */
                    void SetStartExpireTime(const int64_t& _startExpireTime);

                    /**
                     * 判断参数 StartExpireTime 是否已赋值
                     * @return StartExpireTime 是否已赋值
                     * 
                     */
                    bool StartExpireTimeHasBeenSet() const;

                    /**
                     * 获取过期结束时间
                     * @return EndExpireTime 过期结束时间
                     * 
                     */
                    int64_t GetEndExpireTime() const;

                    /**
                     * 设置过期结束时间
                     * @param _endExpireTime 过期结束时间
                     * 
                     */
                    void SetEndExpireTime(const int64_t& _endExpireTime);

                    /**
                     * 判断参数 EndExpireTime 是否已赋值
                     * @return EndExpireTime 是否已赋值
                     * 
                     */
                    bool EndExpireTimeHasBeenSet() const;

                    /**
                     * 获取文件大小范围 Byte
                     * @return StartFileSize 文件大小范围 Byte
                     * 
                     */
                    int64_t GetStartFileSize() const;

                    /**
                     * 设置文件大小范围 Byte
                     * @param _startFileSize 文件大小范围 Byte
                     * 
                     */
                    void SetStartFileSize(const int64_t& _startFileSize);

                    /**
                     * 判断参数 StartFileSize 是否已赋值
                     * @return StartFileSize 是否已赋值
                     * 
                     */
                    bool StartFileSizeHasBeenSet() const;

                    /**
                     * 获取文件大小范围 Byte
                     * @return EndFileSize 文件大小范围 Byte
                     * 
                     */
                    int64_t GetEndFileSize() const;

                    /**
                     * 设置文件大小范围 Byte
                     * @param _endFileSize 文件大小范围 Byte
                     * 
                     */
                    void SetEndFileSize(const int64_t& _endFileSize);

                    /**
                     * 判断参数 EndFileSize 是否已赋值
                     * @return EndFileSize 是否已赋值
                     * 
                     */
                    bool EndFileSizeHasBeenSet() const;

                    /**
                     * 获取录制状态，5: 录制回写完
                     * @return IsRecording 录制状态，5: 录制回写完
                     * 
                     */
                    int64_t GetIsRecording() const;

                    /**
                     * 设置录制状态，5: 录制回写完
                     * @param _isRecording 录制状态，5: 录制回写完
                     * 
                     */
                    void SetIsRecording(const int64_t& _isRecording);

                    /**
                     * 判断参数 IsRecording 是否已赋值
                     * @return IsRecording 是否已赋值
                     * 
                     */
                    bool IsRecordingHasBeenSet() const;

                private:

                    /**
                     * 偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页的每页数量
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 直播频道ID
                     */
                    std::string m_liveChannelId;
                    bool m_liveChannelIdHasBeenSet;

                    /**
                     * 开始录制开始时间
                     */
                    int64_t m_startRecordTime;
                    bool m_startRecordTimeHasBeenSet;

                    /**
                     * 开始录制结束时间
                     */
                    int64_t m_endRecordTime;
                    bool m_endRecordTimeHasBeenSet;

                    /**
                     * 过期开始时间
                     */
                    int64_t m_startExpireTime;
                    bool m_startExpireTimeHasBeenSet;

                    /**
                     * 过期结束时间
                     */
                    int64_t m_endExpireTime;
                    bool m_endExpireTimeHasBeenSet;

                    /**
                     * 文件大小范围 Byte
                     */
                    int64_t m_startFileSize;
                    bool m_startFileSizeHasBeenSet;

                    /**
                     * 文件大小范围 Byte
                     */
                    int64_t m_endFileSize;
                    bool m_endFileSizeHasBeenSet;

                    /**
                     * 录制状态，5: 录制回写完
                     */
                    int64_t m_isRecording;
                    bool m_isRecordingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBELIVEVIDEOLISTREQUEST_H_
