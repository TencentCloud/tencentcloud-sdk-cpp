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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_MEDIACASTPROJECTINPUT_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_MEDIACASTPROJECTINPUT_H_

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
                * 点播转直播项目输入信息。
                */
                class MediaCastProjectInput : public AbstractModel
                {
                public:
                    MediaCastProjectInput();
                    ~MediaCastProjectInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输入源列表。输入源列表最大个数为100.
                     * @return SourceInfos 输入源列表。输入源列表最大个数为100.
                     * 
                     */
                    std::vector<MediaCastSourceInfo> GetSourceInfos() const;

                    /**
                     * 设置输入源列表。输入源列表最大个数为100.
                     * @param _sourceInfos 输入源列表。输入源列表最大个数为100.
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
                     * 获取输出源列表。输出源列表最大个数为10.
                     * @return DestinationInfos 输出源列表。输出源列表最大个数为10.
                     * 
                     */
                    std::vector<MediaCastDestinationInfo> GetDestinationInfos() const;

                    /**
                     * 设置输出源列表。输出源列表最大个数为10.
                     * @param _destinationInfos 输出源列表。输出源列表最大个数为10.
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
                     * 获取播放控制参数。
                     * @return PlaySetting 播放控制参数。
                     * 
                     */
                    MediaCastPlaySetting GetPlaySetting() const;

                    /**
                     * 设置播放控制参数。
                     * @param _playSetting 播放控制参数。
                     * 
                     */
                    void SetPlaySetting(const MediaCastPlaySetting& _playSetting);

                    /**
                     * 判断参数 PlaySetting 是否已赋值
                     * @return PlaySetting 是否已赋值
                     * 
                     */
                    bool PlaySettingHasBeenSet() const;

                private:

                    /**
                     * 输入源列表。输入源列表最大个数为100.
                     */
                    std::vector<MediaCastSourceInfo> m_sourceInfos;
                    bool m_sourceInfosHasBeenSet;

                    /**
                     * 输出源列表。输出源列表最大个数为10.
                     */
                    std::vector<MediaCastDestinationInfo> m_destinationInfos;
                    bool m_destinationInfosHasBeenSet;

                    /**
                     * 输出媒体配置。
                     */
                    MediaCastOutputMediaSetting m_outputMediaSetting;
                    bool m_outputMediaSettingHasBeenSet;

                    /**
                     * 播放控制参数。
                     */
                    MediaCastPlaySetting m_playSetting;
                    bool m_playSettingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_MEDIACASTPROJECTINPUT_H_
