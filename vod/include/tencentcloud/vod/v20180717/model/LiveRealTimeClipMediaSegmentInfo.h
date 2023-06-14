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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_LIVEREALTIMECLIPMEDIASEGMENTINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_LIVEREALTIMECLIPMEDIASEGMENTINFO_H_

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
                * 即时剪辑后媒体的片段信息。
                */
                class LiveRealTimeClipMediaSegmentInfo : public AbstractModel
                {
                public:
                    LiveRealTimeClipMediaSegmentInfo();
                    ~LiveRealTimeClipMediaSegmentInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取片段的起始时间。格式参照 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return StartTime 片段的起始时间。格式参照 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置片段的起始时间。格式参照 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _startTime 片段的起始时间。格式参照 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取片段的结束时间。格式参照 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return EndTime 片段的结束时间。格式参照 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置片段的结束时间。格式参照 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _endTime 片段的结束时间。格式参照 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 片段的起始时间。格式参照 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 片段的结束时间。格式参照 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_LIVEREALTIMECLIPMEDIASEGMENTINFO_H_
