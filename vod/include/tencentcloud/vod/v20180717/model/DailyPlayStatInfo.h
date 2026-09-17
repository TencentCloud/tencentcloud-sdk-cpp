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
                     * 获取<p>播放媒体文件的日期，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * @return Date <p>播放媒体文件的日期，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置<p>播放媒体文件的日期，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * @param _date <p>播放媒体文件的日期，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
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
                     * 获取<p>媒体文件ID。</p>
                     * @return FileId <p>媒体文件ID。</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>媒体文件ID。</p>
                     * @param _fileId <p>媒体文件ID。</p>
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
                     * 获取<p>播放次数。</p>
                     * @return PlayTimes <p>播放次数。</p>
                     * 
                     */
                    uint64_t GetPlayTimes() const;

                    /**
                     * 设置<p>播放次数。</p>
                     * @param _playTimes <p>播放次数。</p>
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
                     * 获取<p>播放流量，单位：字节。</p>
                     * @return Traffic <p>播放流量，单位：字节。</p>
                     * 
                     */
                    uint64_t GetTraffic() const;

                    /**
                     * 设置<p>播放流量，单位：字节。</p>
                     * @param _traffic <p>播放流量，单位：字节。</p>
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
                     * <p>播放媒体文件的日期，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * <p>媒体文件ID。</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p>播放次数。</p>
                     */
                    uint64_t m_playTimes;
                    bool m_playTimesHasBeenSet;

                    /**
                     * <p>播放流量，单位：字节。</p>
                     */
                    uint64_t m_traffic;
                    bool m_trafficHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DAILYPLAYSTATINFO_H_
