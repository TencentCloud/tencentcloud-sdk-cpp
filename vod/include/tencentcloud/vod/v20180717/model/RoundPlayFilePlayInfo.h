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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_ROUNDPLAYFILEPLAYINFO_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_ROUNDPLAYFILEPLAYINFO_H_

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
                * 轮播节目播放信息
                */
                class RoundPlayFilePlayInfo : public AbstractModel
                {
                public:
                    RoundPlayFilePlayInfo();
                    ~RoundPlayFilePlayInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取播单节目的 ID，由系统分配。
                     * @return ItemId 播单节目的 ID，由系统分配。
                     * 
                     */
                    std::string GetItemId() const;

                    /**
                     * 设置播单节目的 ID，由系统分配。
                     * @param _itemId 播单节目的 ID，由系统分配。
                     * 
                     */
                    void SetItemId(const std::string& _itemId);

                    /**
                     * 判断参数 ItemId 是否已赋值
                     * @return ItemId 是否已赋值
                     * 
                     */
                    bool ItemIdHasBeenSet() const;

                    /**
                     * 获取媒体文件标识。
                     * @return FileId 媒体文件标识。
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置媒体文件标识。
                     * @param _fileId 媒体文件标识。
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
                     * 获取启播时间，格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#52)。
                     * @return StartPlayTime 启播时间，格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#52)。
                     * 
                     */
                    std::string GetStartPlayTime() const;

                    /**
                     * 设置启播时间，格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#52)。
                     * @param _startPlayTime 启播时间，格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#52)。
                     * 
                     */
                    void SetStartPlayTime(const std::string& _startPlayTime);

                    /**
                     * 判断参数 StartPlayTime 是否已赋值
                     * @return StartPlayTime 是否已赋值
                     * 
                     */
                    bool StartPlayTimeHasBeenSet() const;

                    /**
                     * 获取播放时长，单位为秒。
                     * @return Duration 播放时长，单位为秒。
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置播放时长，单位为秒。
                     * @param _duration 播放时长，单位为秒。
                     * 
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取播放进度，单位为秒。
                     * @return Progress 播放进度，单位为秒。
                     * 
                     */
                    double GetProgress() const;

                    /**
                     * 设置播放进度，单位为秒。
                     * @param _progress 播放进度，单位为秒。
                     * 
                     */
                    void SetProgress(const double& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                private:

                    /**
                     * 播单节目的 ID，由系统分配。
                     */
                    std::string m_itemId;
                    bool m_itemIdHasBeenSet;

                    /**
                     * 媒体文件标识。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 启播时间，格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#52)。
                     */
                    std::string m_startPlayTime;
                    bool m_startPlayTimeHasBeenSet;

                    /**
                     * 播放时长，单位为秒。
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 播放进度，单位为秒。
                     */
                    double m_progress;
                    bool m_progressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ROUNDPLAYFILEPLAYINFO_H_
