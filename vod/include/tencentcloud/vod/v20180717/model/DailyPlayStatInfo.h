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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DAILYPLAYSTATINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DAILYPLAYSTATINFO_H_

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
                * 播放统计信息。
                */
                class DailyPlayStatInfo : public AbstractModel
                {
                public:
                    DailyPlayStatInfo();
                    ~DailyPlayStatInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取播放媒体文件的日期，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return Date 播放媒体文件的日期，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置播放媒体文件的日期，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _date 播放媒体文件的日期，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取媒体文件ID。
                     * @return FileId 媒体文件ID。
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置媒体文件ID。
                     * @param _fileId 媒体文件ID。
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取播放次数。
                     * @return PlayTimes 播放次数。
                     * 
                     */
                    uint64_t GetPlayTimes() const;

                    /**
                     * 设置播放次数。
                     * @param _playTimes 播放次数。
                     * 
                     */
                    void SetPlayTimes(const uint64_t& _playTimes);

                    /**
                     * 判断参数 PlayTimes 是否已赋值
                     * @return PlayTimes 是否已赋值
                     * 
                     */
                    bool PlayTimesHasBeenSet() const;

                    /**
                     * 获取播放流量，单位：字节。
                     * @return Traffic 播放流量，单位：字节。
                     * 
                     */
                    uint64_t GetTraffic() const;

                    /**
                     * 设置播放流量，单位：字节。
                     * @param _traffic 播放流量，单位：字节。
                     * 
                     */
                    void SetTraffic(const uint64_t& _traffic);

                    /**
                     * 判断参数 Traffic 是否已赋值
                     * @return Traffic 是否已赋值
                     * 
                     */
                    bool TrafficHasBeenSet() const;

                private:

                    /**
                     * 播放媒体文件的日期，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 媒体文件ID。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 播放次数。
                     */
                    uint64_t m_playTimes;
                    bool m_playTimesHasBeenSet;

                    /**
                     * 播放流量，单位：字节。
                     */
                    uint64_t m_traffic;
                    bool m_trafficHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DAILYPLAYSTATINFO_H_
