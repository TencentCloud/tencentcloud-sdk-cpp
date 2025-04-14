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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_TRACKINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_TRACKINFO_H_

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
                * 音轨信息
                */
                class TrackInfo : public AbstractModel
                {
                public:
                    TrackInfo();
                    ~TrackInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取音轨和声道数字，说明：
当：SelectType值为track，此值为整数类型，例如：1；
当：SelectType值为track_channel，此值为小数类型，例如：1.0；
默认值：1.0
注意：整数部分代表音轨序号，以小数部分代表声道。音轨序号即为音轨的stream index，支持输入0和正整数。小数部分最多支持2位小数，并且仅支持0-63，但是如果Codec为aac/eac3/ac3时，小数部分仅支持0-15。例如：对于stream index为1的音轨，1.0代表这个音轨的第1个声道，1.1代表这个音轨的第2个声道。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrackNum 音轨和声道数字，说明：
当：SelectType值为track，此值为整数类型，例如：1；
当：SelectType值为track_channel，此值为小数类型，例如：1.0；
默认值：1.0
注意：整数部分代表音轨序号，以小数部分代表声道。音轨序号即为音轨的stream index，支持输入0和正整数。小数部分最多支持2位小数，并且仅支持0-63，但是如果Codec为aac/eac3/ac3时，小数部分仅支持0-15。例如：对于stream index为1的音轨，1.0代表这个音轨的第1个声道，1.1代表这个音轨的第2个声道。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTrackNum() const;

                    /**
                     * 设置音轨和声道数字，说明：
当：SelectType值为track，此值为整数类型，例如：1；
当：SelectType值为track_channel，此值为小数类型，例如：1.0；
默认值：1.0
注意：整数部分代表音轨序号，以小数部分代表声道。音轨序号即为音轨的stream index，支持输入0和正整数。小数部分最多支持2位小数，并且仅支持0-63，但是如果Codec为aac/eac3/ac3时，小数部分仅支持0-15。例如：对于stream index为1的音轨，1.0代表这个音轨的第1个声道，1.1代表这个音轨的第2个声道。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _trackNum 音轨和声道数字，说明：
当：SelectType值为track，此值为整数类型，例如：1；
当：SelectType值为track_channel，此值为小数类型，例如：1.0；
默认值：1.0
注意：整数部分代表音轨序号，以小数部分代表声道。音轨序号即为音轨的stream index，支持输入0和正整数。小数部分最多支持2位小数，并且仅支持0-63，但是如果Codec为aac/eac3/ac3时，小数部分仅支持0-15。例如：对于stream index为1的音轨，1.0代表这个音轨的第1个声道，1.1代表这个音轨的第2个声道。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTrackNum(const std::string& _trackNum);

                    /**
                     * 判断参数 TrackNum 是否已赋值
                     * @return TrackNum 是否已赋值
                     * 
                     */
                    bool TrackNumHasBeenSet() const;

                    /**
                     * 获取声道音量大小，说明：
当：AudioChannel的值为1时，此数组长度为1，例如：[6]；
当：AudioChannel的值为2时，此数组长度为2，例如：[0,6]；
当：AudioChannel的值为6时，此数组长度大于2小于16，例如：[-60,0,0,6]。
此值数组值取值范围：[-60, 6]，其中-60代表静音、0代表保持原音量，6表示原音量增加一倍，默认值为-60。
注意：支持3位小数。

注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelVolume 声道音量大小，说明：
当：AudioChannel的值为1时，此数组长度为1，例如：[6]；
当：AudioChannel的值为2时，此数组长度为2，例如：[0,6]；
当：AudioChannel的值为6时，此数组长度大于2小于16，例如：[-60,0,0,6]。
此值数组值取值范围：[-60, 6]，其中-60代表静音、0代表保持原音量，6表示原音量增加一倍，默认值为-60。
注意：支持3位小数。

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<double> GetChannelVolume() const;

                    /**
                     * 设置声道音量大小，说明：
当：AudioChannel的值为1时，此数组长度为1，例如：[6]；
当：AudioChannel的值为2时，此数组长度为2，例如：[0,6]；
当：AudioChannel的值为6时，此数组长度大于2小于16，例如：[-60,0,0,6]。
此值数组值取值范围：[-60, 6]，其中-60代表静音、0代表保持原音量，6表示原音量增加一倍，默认值为-60。
注意：支持3位小数。

注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channelVolume 声道音量大小，说明：
当：AudioChannel的值为1时，此数组长度为1，例如：[6]；
当：AudioChannel的值为2时，此数组长度为2，例如：[0,6]；
当：AudioChannel的值为6时，此数组长度大于2小于16，例如：[-60,0,0,6]。
此值数组值取值范围：[-60, 6]，其中-60代表静音、0代表保持原音量，6表示原音量增加一倍，默认值为-60。
注意：支持3位小数。

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChannelVolume(const std::vector<double>& _channelVolume);

                    /**
                     * 判断参数 ChannelVolume 是否已赋值
                     * @return ChannelVolume 是否已赋值
                     * 
                     */
                    bool ChannelVolumeHasBeenSet() const;

                private:

                    /**
                     * 音轨和声道数字，说明：
当：SelectType值为track，此值为整数类型，例如：1；
当：SelectType值为track_channel，此值为小数类型，例如：1.0；
默认值：1.0
注意：整数部分代表音轨序号，以小数部分代表声道。音轨序号即为音轨的stream index，支持输入0和正整数。小数部分最多支持2位小数，并且仅支持0-63，但是如果Codec为aac/eac3/ac3时，小数部分仅支持0-15。例如：对于stream index为1的音轨，1.0代表这个音轨的第1个声道，1.1代表这个音轨的第2个声道。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_trackNum;
                    bool m_trackNumHasBeenSet;

                    /**
                     * 声道音量大小，说明：
当：AudioChannel的值为1时，此数组长度为1，例如：[6]；
当：AudioChannel的值为2时，此数组长度为2，例如：[0,6]；
当：AudioChannel的值为6时，此数组长度大于2小于16，例如：[-60,0,0,6]。
此值数组值取值范围：[-60, 6]，其中-60代表静音、0代表保持原音量，6表示原音量增加一倍，默认值为-60。
注意：支持3位小数。

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<double> m_channelVolume;
                    bool m_channelVolumeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_TRACKINFO_H_
