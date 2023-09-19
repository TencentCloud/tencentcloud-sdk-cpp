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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSESOURCEMEDIA_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSESOURCEMEDIA_H_

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
                * 视频编辑/合成任务  媒体素材源信息。
                */
                class ComposeSourceMedia : public AbstractModel
                {
                public:
                    ComposeSourceMedia();
                    ~ComposeSourceMedia() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取媒体对应的素材ID，即 FileInfos 列表中对应素材的 ID。
                     * @return FileId 媒体对应的素材ID，即 FileInfos 列表中对应素材的 ID。
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置媒体对应的素材ID，即 FileInfos 列表中对应素材的 ID。
                     * @param _fileId 媒体对应的素材ID，即 FileInfos 列表中对应素材的 ID。
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
                     * 获取媒体位于素材的起始时间，时间点支持 s、% 两种格式：
<li>当字符串以 s 结尾，表示时间点单位为秒，如 3.5s 表示时间点为第3.5秒；</li>
<li>当字符串以 % 结尾，表示时间点为素材时长的百分比大小，如10%表示时间点为素材第10% 的时刻。</li>
默认：0s
                     * @return StartTime 媒体位于素材的起始时间，时间点支持 s、% 两种格式：
<li>当字符串以 s 结尾，表示时间点单位为秒，如 3.5s 表示时间点为第3.5秒；</li>
<li>当字符串以 % 结尾，表示时间点为素材时长的百分比大小，如10%表示时间点为素材第10% 的时刻。</li>
默认：0s
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置媒体位于素材的起始时间，时间点支持 s、% 两种格式：
<li>当字符串以 s 结尾，表示时间点单位为秒，如 3.5s 表示时间点为第3.5秒；</li>
<li>当字符串以 % 结尾，表示时间点为素材时长的百分比大小，如10%表示时间点为素材第10% 的时刻。</li>
默认：0s
                     * @param _startTime 媒体位于素材的起始时间，时间点支持 s、% 两种格式：
<li>当字符串以 s 结尾，表示时间点单位为秒，如 3.5s 表示时间点为第3.5秒；</li>
<li>当字符串以 % 结尾，表示时间点为素材时长的百分比大小，如10%表示时间点为素材第10% 的时刻。</li>
默认：0s
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
                     * 获取媒体位于素材的结束时间，和 StartTime 构成媒体在源素材的时间区间，时间点支持 s、% 两种格式：
<li>当字符串以 s 结尾，表示时间点单位为秒，如 3.5s 表示时间点为第3.5秒；</li>
<li>当字符串以 % 结尾，表示时间点为素材时长的百分比大小，如10%表示时间点为素材第10%的时间。</li>
默认：如果对应轨道时长有设置，则默认轨道时长，否则为素材时长，无时长的素材默认为 1 秒。
注意：至少需要大于 StartTime 0.02 秒。

                     * @return EndTime 媒体位于素材的结束时间，和 StartTime 构成媒体在源素材的时间区间，时间点支持 s、% 两种格式：
<li>当字符串以 s 结尾，表示时间点单位为秒，如 3.5s 表示时间点为第3.5秒；</li>
<li>当字符串以 % 结尾，表示时间点为素材时长的百分比大小，如10%表示时间点为素材第10%的时间。</li>
默认：如果对应轨道时长有设置，则默认轨道时长，否则为素材时长，无时长的素材默认为 1 秒。
注意：至少需要大于 StartTime 0.02 秒。

                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置媒体位于素材的结束时间，和 StartTime 构成媒体在源素材的时间区间，时间点支持 s、% 两种格式：
<li>当字符串以 s 结尾，表示时间点单位为秒，如 3.5s 表示时间点为第3.5秒；</li>
<li>当字符串以 % 结尾，表示时间点为素材时长的百分比大小，如10%表示时间点为素材第10%的时间。</li>
默认：如果对应轨道时长有设置，则默认轨道时长，否则为素材时长，无时长的素材默认为 1 秒。
注意：至少需要大于 StartTime 0.02 秒。

                     * @param _endTime 媒体位于素材的结束时间，和 StartTime 构成媒体在源素材的时间区间，时间点支持 s、% 两种格式：
<li>当字符串以 s 结尾，表示时间点单位为秒，如 3.5s 表示时间点为第3.5秒；</li>
<li>当字符串以 % 结尾，表示时间点为素材时长的百分比大小，如10%表示时间点为素材第10%的时间。</li>
默认：如果对应轨道时长有设置，则默认轨道时长，否则为素材时长，无时长的素材默认为 1 秒。
注意：至少需要大于 StartTime 0.02 秒。

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
                     * 媒体对应的素材ID，即 FileInfos 列表中对应素材的 ID。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 媒体位于素材的起始时间，时间点支持 s、% 两种格式：
<li>当字符串以 s 结尾，表示时间点单位为秒，如 3.5s 表示时间点为第3.5秒；</li>
<li>当字符串以 % 结尾，表示时间点为素材时长的百分比大小，如10%表示时间点为素材第10% 的时刻。</li>
默认：0s
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 媒体位于素材的结束时间，和 StartTime 构成媒体在源素材的时间区间，时间点支持 s、% 两种格式：
<li>当字符串以 s 结尾，表示时间点单位为秒，如 3.5s 表示时间点为第3.5秒；</li>
<li>当字符串以 % 结尾，表示时间点为素材时长的百分比大小，如10%表示时间点为素材第10%的时间。</li>
默认：如果对应轨道时长有设置，则默认轨道时长，否则为素材时长，无时长的素材默认为 1 秒。
注意：至少需要大于 StartTime 0.02 秒。

                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_COMPOSESOURCEMEDIA_H_
