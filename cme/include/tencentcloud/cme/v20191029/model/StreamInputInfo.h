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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_STREAMINPUTINFO_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_STREAMINPUTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/VodPullInputInfo.h>
#include <tencentcloud/cme/v20191029/model/LivePullInputInfo.h>
#include <tencentcloud/cme/v20191029/model/RtmpPushInputInfo.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 输入流信息。
                */
                class StreamInputInfo : public AbstractModel
                {
                public:
                    StreamInputInfo();
                    ~StreamInputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取流输入类型，取值：
<li>VodPull ： 点播拉流；</li>
<li>LivePull ：直播拉流；</li>
<li>RtmpPush ： 直播推流。</li>
                     * @return InputType 流输入类型，取值：
<li>VodPull ： 点播拉流；</li>
<li>LivePull ：直播拉流；</li>
<li>RtmpPush ： 直播推流。</li>
                     * 
                     */
                    std::string GetInputType() const;

                    /**
                     * 设置流输入类型，取值：
<li>VodPull ： 点播拉流；</li>
<li>LivePull ：直播拉流；</li>
<li>RtmpPush ： 直播推流。</li>
                     * @param _inputType 流输入类型，取值：
<li>VodPull ： 点播拉流；</li>
<li>LivePull ：直播拉流；</li>
<li>RtmpPush ： 直播推流。</li>
                     * 
                     */
                    void SetInputType(const std::string& _inputType);

                    /**
                     * 判断参数 InputType 是否已赋值
                     * @return InputType 是否已赋值
                     * 
                     */
                    bool InputTypeHasBeenSet() const;

                    /**
                     * 获取点播拉流信息，当 InputType = VodPull 时必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VodPullInputInfo 点播拉流信息，当 InputType = VodPull 时必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    VodPullInputInfo GetVodPullInputInfo() const;

                    /**
                     * 设置点播拉流信息，当 InputType = VodPull 时必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vodPullInputInfo 点播拉流信息，当 InputType = VodPull 时必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVodPullInputInfo(const VodPullInputInfo& _vodPullInputInfo);

                    /**
                     * 判断参数 VodPullInputInfo 是否已赋值
                     * @return VodPullInputInfo 是否已赋值
                     * 
                     */
                    bool VodPullInputInfoHasBeenSet() const;

                    /**
                     * 获取直播拉流信息，当 InputType = LivePull  时必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LivePullInputInfo 直播拉流信息，当 InputType = LivePull  时必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LivePullInputInfo GetLivePullInputInfo() const;

                    /**
                     * 设置直播拉流信息，当 InputType = LivePull  时必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _livePullInputInfo 直播拉流信息，当 InputType = LivePull  时必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLivePullInputInfo(const LivePullInputInfo& _livePullInputInfo);

                    /**
                     * 判断参数 LivePullInputInfo 是否已赋值
                     * @return LivePullInputInfo 是否已赋值
                     * 
                     */
                    bool LivePullInputInfoHasBeenSet() const;

                    /**
                     * 获取直播推流信息，当 InputType = RtmpPush 时必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RtmpPushInputInfo 直播推流信息，当 InputType = RtmpPush 时必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    RtmpPushInputInfo GetRtmpPushInputInfo() const;

                    /**
                     * 设置直播推流信息，当 InputType = RtmpPush 时必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rtmpPushInputInfo 直播推流信息，当 InputType = RtmpPush 时必填。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRtmpPushInputInfo(const RtmpPushInputInfo& _rtmpPushInputInfo);

                    /**
                     * 判断参数 RtmpPushInputInfo 是否已赋值
                     * @return RtmpPushInputInfo 是否已赋值
                     * 
                     */
                    bool RtmpPushInputInfoHasBeenSet() const;

                private:

                    /**
                     * 流输入类型，取值：
<li>VodPull ： 点播拉流；</li>
<li>LivePull ：直播拉流；</li>
<li>RtmpPush ： 直播推流。</li>
                     */
                    std::string m_inputType;
                    bool m_inputTypeHasBeenSet;

                    /**
                     * 点播拉流信息，当 InputType = VodPull 时必填。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VodPullInputInfo m_vodPullInputInfo;
                    bool m_vodPullInputInfoHasBeenSet;

                    /**
                     * 直播拉流信息，当 InputType = LivePull  时必填。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LivePullInputInfo m_livePullInputInfo;
                    bool m_livePullInputInfoHasBeenSet;

                    /**
                     * 直播推流信息，当 InputType = RtmpPush 时必填。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    RtmpPushInputInfo m_rtmpPushInputInfo;
                    bool m_rtmpPushInputInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_STREAMINPUTINFO_H_
