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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_MEDIACASTPROJECTINFO_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_MEDIACASTPROJECTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/MediaCastSourceInfo.h>
#include <tencentcloud/cme/v20191029/model/MediaCastDestinationInfo.h>
#include <tencentcloud/cme/v20191029/model/MediaCastOutputMediaSetting.h>
#include <tencentcloud/cme/v20191029/model/MediaCastPlaySetting.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 点播转直播项目信息。
                */
                class MediaCastProjectInfo : public AbstractModel
                {
                public:
                    MediaCastProjectInfo();
                    ~MediaCastProjectInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取点播转直播项目状态，取值有：
<li>Working ：运行中；</li>
<li>Idle ：空闲。</li>
                     * @return Status 点播转直播项目状态，取值有：
<li>Working ：运行中；</li>
<li>Idle ：空闲。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置点播转直播项目状态，取值有：
<li>Working ：运行中；</li>
<li>Idle ：空闲。</li>
                     * @param _status 点播转直播项目状态，取值有：
<li>Working ：运行中；</li>
<li>Idle ：空闲。</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取输入源列表。
                     * @return SourceInfos 输入源列表。
                     * 
                     */
                    std::vector<MediaCastSourceInfo> GetSourceInfos() const;

                    /**
                     * 设置输入源列表。
                     * @param _sourceInfos 输入源列表。
                     * 
                     */
                    void SetSourceInfos(const std::vector<MediaCastSourceInfo>& _sourceInfos);

                    /**
                     * 判断参数 SourceInfos 是否已赋值
                     * @return SourceInfos 是否已赋值
                     * 
                     */
                    bool SourceInfosHasBeenSet() const;

                    /**
                     * 获取输出源列表。
                     * @return DestinationInfos 输出源列表。
                     * 
                     */
                    std::vector<MediaCastDestinationInfo> GetDestinationInfos() const;

                    /**
                     * 设置输出源列表。
                     * @param _destinationInfos 输出源列表。
                     * 
                     */
                    void SetDestinationInfos(const std::vector<MediaCastDestinationInfo>& _destinationInfos);

                    /**
                     * 判断参数 DestinationInfos 是否已赋值
                     * @return DestinationInfos 是否已赋值
                     * 
                     */
                    bool DestinationInfosHasBeenSet() const;

                    /**
                     * 获取输出媒体配置。
                     * @return OutputMediaSetting 输出媒体配置。
                     * 
                     */
                    MediaCastOutputMediaSetting GetOutputMediaSetting() const;

                    /**
                     * 设置输出媒体配置。
                     * @param _outputMediaSetting 输出媒体配置。
                     * 
                     */
                    void SetOutputMediaSetting(const MediaCastOutputMediaSetting& _outputMediaSetting);

                    /**
                     * 判断参数 OutputMediaSetting 是否已赋值
                     * @return OutputMediaSetting 是否已赋值
                     * 
                     */
                    bool OutputMediaSettingHasBeenSet() const;

                    /**
                     * 获取播放参数。
                     * @return PlaySetting 播放参数。
                     * 
                     */
                    MediaCastPlaySetting GetPlaySetting() const;

                    /**
                     * 设置播放参数。
                     * @param _playSetting 播放参数。
                     * 
                     */
                    void SetPlaySetting(const MediaCastPlaySetting& _playSetting);

                    /**
                     * 判断参数 PlaySetting 是否已赋值
                     * @return PlaySetting 是否已赋值
                     * 
                     */
                    bool PlaySettingHasBeenSet() const;

                    /**
                     * 获取项目启动时间。采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return StartTime 项目启动时间。采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置项目启动时间。采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _startTime 项目启动时间。采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
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
                     * 获取项目结束时间。采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。如果项目还在运行中，该字段为空。
                     * @return StopTime 项目结束时间。采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。如果项目还在运行中，该字段为空。
                     * 
                     */
                    std::string GetStopTime() const;

                    /**
                     * 设置项目结束时间。采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。如果项目还在运行中，该字段为空。
                     * @param _stopTime 项目结束时间。采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。如果项目还在运行中，该字段为空。
                     * 
                     */
                    void SetStopTime(const std::string& _stopTime);

                    /**
                     * 判断参数 StopTime 是否已赋值
                     * @return StopTime 是否已赋值
                     * 
                     */
                    bool StopTimeHasBeenSet() const;

                    /**
                     * 获取推流时长，单位：秒。项目结束后，返回上次项目运行时的推流时长。如果项目是 Working 状态，返回的时长是0。
                     * @return Duration 推流时长，单位：秒。项目结束后，返回上次项目运行时的推流时长。如果项目是 Working 状态，返回的时长是0。
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置推流时长，单位：秒。项目结束后，返回上次项目运行时的推流时长。如果项目是 Working 状态，返回的时长是0。
                     * @param _duration 推流时长，单位：秒。项目结束后，返回上次项目运行时的推流时长。如果项目是 Working 状态，返回的时长是0。
                     * 
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                private:

                    /**
                     * 点播转直播项目状态，取值有：
<li>Working ：运行中；</li>
<li>Idle ：空闲。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 输入源列表。
                     */
                    std::vector<MediaCastSourceInfo> m_sourceInfos;
                    bool m_sourceInfosHasBeenSet;

                    /**
                     * 输出源列表。
                     */
                    std::vector<MediaCastDestinationInfo> m_destinationInfos;
                    bool m_destinationInfosHasBeenSet;

                    /**
                     * 输出媒体配置。
                     */
                    MediaCastOutputMediaSetting m_outputMediaSetting;
                    bool m_outputMediaSettingHasBeenSet;

                    /**
                     * 播放参数。
                     */
                    MediaCastPlaySetting m_playSetting;
                    bool m_playSettingHasBeenSet;

                    /**
                     * 项目启动时间。采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 项目结束时间。采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。如果项目还在运行中，该字段为空。
                     */
                    std::string m_stopTime;
                    bool m_stopTimeHasBeenSet;

                    /**
                     * 推流时长，单位：秒。项目结束后，返回上次项目运行时的推流时长。如果项目是 Working 状态，返回的时长是0。
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_MEDIACASTPROJECTINFO_H_
