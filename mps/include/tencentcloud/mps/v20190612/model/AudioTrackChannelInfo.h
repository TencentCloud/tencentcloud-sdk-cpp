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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_AUDIOTRACKCHANNELINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_AUDIOTRACKCHANNELINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/TrackInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 音轨信息
                */
                class AudioTrackChannelInfo : public AbstractModel
                {
                public:
                    AudioTrackChannelInfo();
                    ~AudioTrackChannelInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启混音，可选值：
0：表示不开启混音
1：表示开启混音
默认值：0
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelsRemix 是否开启混音，可选值：
0：表示不开启混音
1：表示开启混音
默认值：0
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetChannelsRemix() const;

                    /**
                     * 设置是否开启混音，可选值：
0：表示不开启混音
1：表示开启混音
默认值：0
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channelsRemix 是否开启混音，可选值：
0：表示不开启混音
1：表示开启混音
默认值：0
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChannelsRemix(const int64_t& _channelsRemix);

                    /**
                     * 判断参数 ChannelsRemix 是否已赋值
                     * @return ChannelsRemix 是否已赋值
                     * 
                     */
                    bool ChannelsRemixHasBeenSet() const;

                    /**
                     * 获取合并音轨输入类型，可选值：
track：表示使用音轨id；
track_channel： 表示使用音轨id和声道id；
默认：track。
注意：如果原视频是多声道，建议使用track_channel。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SelectType 合并音轨输入类型，可选值：
track：表示使用音轨id；
track_channel： 表示使用音轨id和声道id；
默认：track。
注意：如果原视频是多声道，建议使用track_channel。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSelectType() const;

                    /**
                     * 设置合并音轨输入类型，可选值：
track：表示使用音轨id；
track_channel： 表示使用音轨id和声道id；
默认：track。
注意：如果原视频是多声道，建议使用track_channel。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _selectType 合并音轨输入类型，可选值：
track：表示使用音轨id；
track_channel： 表示使用音轨id和声道id；
默认：track。
注意：如果原视频是多声道，建议使用track_channel。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSelectType(const std::string& _selectType);

                    /**
                     * 判断参数 SelectType 是否已赋值
                     * @return SelectType 是否已赋值
                     * 
                     */
                    bool SelectTypeHasBeenSet() const;

                    /**
                     * 获取音轨信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InputTrackInfo 音轨信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TrackInfo> GetInputTrackInfo() const;

                    /**
                     * 设置音轨信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inputTrackInfo 音轨信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInputTrackInfo(const std::vector<TrackInfo>& _inputTrackInfo);

                    /**
                     * 判断参数 InputTrackInfo 是否已赋值
                     * @return InputTrackInfo 是否已赋值
                     * 
                     */
                    bool InputTrackInfoHasBeenSet() const;

                private:

                    /**
                     * 是否开启混音，可选值：
0：表示不开启混音
1：表示开启混音
默认值：0
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_channelsRemix;
                    bool m_channelsRemixHasBeenSet;

                    /**
                     * 合并音轨输入类型，可选值：
track：表示使用音轨id；
track_channel： 表示使用音轨id和声道id；
默认：track。
注意：如果原视频是多声道，建议使用track_channel。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_selectType;
                    bool m_selectTypeHasBeenSet;

                    /**
                     * 音轨信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TrackInfo> m_inputTrackInfo;
                    bool m_inputTrackInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_AUDIOTRACKCHANNELINFO_H_
