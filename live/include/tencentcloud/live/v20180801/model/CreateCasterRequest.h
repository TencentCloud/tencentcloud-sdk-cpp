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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CREATECASTERREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CREATECASTERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * CreateCaster请求参数结构体
                */
                class CreateCasterRequest : public AbstractModel
                {
                public:
                    CreateCasterRequest();
                    ~CreateCasterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取导播台名称
                     * @return CasterName 导播台名称
                     * 
                     */
                    std::string GetCasterName() const;

                    /**
                     * 设置导播台名称
                     * @param _casterName 导播台名称
                     * 
                     */
                    void SetCasterName(const std::string& _casterName);

                    /**
                     * 判断参数 CasterName 是否已赋值
                     * @return CasterName 是否已赋值
                     * 
                     */
                    bool CasterNameHasBeenSet() const;

                    /**
                     * 获取导播台的描述
最大允许长度256
                     * @return Description 导播台的描述
最大允许长度256
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置导播台的描述
最大允许长度256
                     * @param _description 导播台的描述
最大允许长度256
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取导播台的过期时间戳。值为-1或unix时间戳。
默认值为-1。
当值为-1时，表示该导播台永不过期。
当值为正常unix时间戳时，导播台将在该时间过期。
导播台过期后，预监与主监画面将自动停止，转推自动停止。
点播、直播url将停止转拉，推流url需自行停止推流。
                     * @return ExpireTime 导播台的过期时间戳。值为-1或unix时间戳。
默认值为-1。
当值为-1时，表示该导播台永不过期。
当值为正常unix时间戳时，导播台将在该时间过期。
导播台过期后，预监与主监画面将自动停止，转推自动停止。
点播、直播url将停止转拉，推流url需自行停止推流。
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置导播台的过期时间戳。值为-1或unix时间戳。
默认值为-1。
当值为-1时，表示该导播台永不过期。
当值为正常unix时间戳时，导播台将在该时间过期。
导播台过期后，预监与主监画面将自动停止，转推自动停止。
点播、直播url将停止转拉，推流url需自行停止推流。
                     * @param _expireTime 导播台的过期时间戳。值为-1或unix时间戳。
默认值为-1。
当值为-1时，表示该导播台永不过期。
当值为正常unix时间戳时，导播台将在该时间过期。
导播台过期后，预监与主监画面将自动停止，转推自动停止。
点播、直播url将停止转拉，推流url需自行停止推流。
                     * 
                     */
                    void SetExpireTime(const int64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取导播台延时播放时间，单位为秒。
默认为0，最大支持300秒
                     * @return DelayTime 导播台延时播放时间，单位为秒。
默认为0，最大支持300秒
                     * 
                     */
                    uint64_t GetDelayTime() const;

                    /**
                     * 设置导播台延时播放时间，单位为秒。
默认为0，最大支持300秒
                     * @param _delayTime 导播台延时播放时间，单位为秒。
默认为0，最大支持300秒
                     * 
                     */
                    void SetDelayTime(const uint64_t& _delayTime);

                    /**
                     * 判断参数 DelayTime 是否已赋值
                     * @return DelayTime 是否已赋值
                     * 
                     */
                    bool DelayTimeHasBeenSet() const;

                    /**
                     * 获取导播台转场类型。
默认为空。
允许使用通过DescribeCasterTransitionTypes接口中查询到的转场类型。
                     * @return TransitionType 导播台转场类型。
默认为空。
允许使用通过DescribeCasterTransitionTypes接口中查询到的转场类型。
                     * 
                     */
                    std::string GetTransitionType() const;

                    /**
                     * 设置导播台转场类型。
默认为空。
允许使用通过DescribeCasterTransitionTypes接口中查询到的转场类型。
                     * @param _transitionType 导播台转场类型。
默认为空。
允许使用通过DescribeCasterTransitionTypes接口中查询到的转场类型。
                     * 
                     */
                    void SetTransitionType(const std::string& _transitionType);

                    /**
                     * 判断参数 TransitionType 是否已赋值
                     * @return TransitionType 是否已赋值
                     * 
                     */
                    bool TransitionTypeHasBeenSet() const;

                    /**
                     * 获取导播台主监输出的宽度，单位为像素。
默认为1280，最大允许4096。
                     * @return PgmWidth 导播台主监输出的宽度，单位为像素。
默认为1280，最大允许4096。
                     * 
                     */
                    uint64_t GetPgmWidth() const;

                    /**
                     * 设置导播台主监输出的宽度，单位为像素。
默认为1280，最大允许4096。
                     * @param _pgmWidth 导播台主监输出的宽度，单位为像素。
默认为1280，最大允许4096。
                     * 
                     */
                    void SetPgmWidth(const uint64_t& _pgmWidth);

                    /**
                     * 判断参数 PgmWidth 是否已赋值
                     * @return PgmWidth 是否已赋值
                     * 
                     */
                    bool PgmWidthHasBeenSet() const;

                    /**
                     * 获取导播台主监输出的高度，单位为像素。
默认为720，最大允许2160。
                     * @return PgmHeight 导播台主监输出的高度，单位为像素。
默认为720，最大允许2160。
                     * 
                     */
                    uint64_t GetPgmHeight() const;

                    /**
                     * 设置导播台主监输出的高度，单位为像素。
默认为720，最大允许2160。
                     * @param _pgmHeight 导播台主监输出的高度，单位为像素。
默认为720，最大允许2160。
                     * 
                     */
                    void SetPgmHeight(const uint64_t& _pgmHeight);

                    /**
                     * 判断参数 PgmHeight 是否已赋值
                     * @return PgmHeight 是否已赋值
                     * 
                     */
                    bool PgmHeightHasBeenSet() const;

                    /**
                     * 获取导播台主监输出的帧率。
默认为0，表示随源输出。
最大支持60。
                     * @return PgmFps 导播台主监输出的帧率。
默认为0，表示随源输出。
最大支持60。
                     * 
                     */
                    uint64_t GetPgmFps() const;

                    /**
                     * 设置导播台主监输出的帧率。
默认为0，表示随源输出。
最大支持60。
                     * @param _pgmFps 导播台主监输出的帧率。
默认为0，表示随源输出。
最大支持60。
                     * 
                     */
                    void SetPgmFps(const uint64_t& _pgmFps);

                    /**
                     * 判断参数 PgmFps 是否已赋值
                     * @return PgmFps 是否已赋值
                     * 
                     */
                    bool PgmFpsHasBeenSet() const;

                    /**
                     * 获取导播台主监输出的码率，单位为kbps。
默认为0，表示随源的码率输出。
最大允许10000kbps。
                     * @return PgmBitRate 导播台主监输出的码率，单位为kbps。
默认为0，表示随源的码率输出。
最大允许10000kbps。
                     * 
                     */
                    uint64_t GetPgmBitRate() const;

                    /**
                     * 设置导播台主监输出的码率，单位为kbps。
默认为0，表示随源的码率输出。
最大允许10000kbps。
                     * @param _pgmBitRate 导播台主监输出的码率，单位为kbps。
默认为0，表示随源的码率输出。
最大允许10000kbps。
                     * 
                     */
                    void SetPgmBitRate(const uint64_t& _pgmBitRate);

                    /**
                     * 判断参数 PgmBitRate 是否已赋值
                     * @return PgmBitRate 是否已赋值
                     * 
                     */
                    bool PgmBitRateHasBeenSet() const;

                    /**
                     * 获取导播台的计费类型。
0 通用型 
1 播单型。
注： 本参数暂无作用。
                     * @return FeeType 导播台的计费类型。
0 通用型 
1 播单型。
注： 本参数暂无作用。
                     * 
                     */
                    int64_t GetFeeType() const;

                    /**
                     * 设置导播台的计费类型。
0 通用型 
1 播单型。
注： 本参数暂无作用。
                     * @param _feeType 导播台的计费类型。
0 通用型 
1 播单型。
注： 本参数暂无作用。
                     * 
                     */
                    void SetFeeType(const int64_t& _feeType);

                    /**
                     * 判断参数 FeeType 是否已赋值
                     * @return FeeType 是否已赋值
                     * 
                     */
                    bool FeeTypeHasBeenSet() const;

                    /**
                     * 获取导播台主监输出的音频码率，单位为kbps。
可选项：[0, 128, 192, 256]
默认值为0，表示随源的音频码率输出。
                     * @return PgmAudioBitRate 导播台主监输出的音频码率，单位为kbps。
可选项：[0, 128, 192, 256]
默认值为0，表示随源的音频码率输出。
                     * 
                     */
                    uint64_t GetPgmAudioBitRate() const;

                    /**
                     * 设置导播台主监输出的音频码率，单位为kbps。
可选项：[0, 128, 192, 256]
默认值为0，表示随源的音频码率输出。
                     * @param _pgmAudioBitRate 导播台主监输出的音频码率，单位为kbps。
可选项：[0, 128, 192, 256]
默认值为0，表示随源的音频码率输出。
                     * 
                     */
                    void SetPgmAudioBitRate(const uint64_t& _pgmAudioBitRate);

                    /**
                     * 判断参数 PgmAudioBitRate 是否已赋值
                     * @return PgmAudioBitRate 是否已赋值
                     * 
                     */
                    bool PgmAudioBitRateHasBeenSet() const;

                private:

                    /**
                     * 导播台名称
                     */
                    std::string m_casterName;
                    bool m_casterNameHasBeenSet;

                    /**
                     * 导播台的描述
最大允许长度256
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 导播台的过期时间戳。值为-1或unix时间戳。
默认值为-1。
当值为-1时，表示该导播台永不过期。
当值为正常unix时间戳时，导播台将在该时间过期。
导播台过期后，预监与主监画面将自动停止，转推自动停止。
点播、直播url将停止转拉，推流url需自行停止推流。
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 导播台延时播放时间，单位为秒。
默认为0，最大支持300秒
                     */
                    uint64_t m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * 导播台转场类型。
默认为空。
允许使用通过DescribeCasterTransitionTypes接口中查询到的转场类型。
                     */
                    std::string m_transitionType;
                    bool m_transitionTypeHasBeenSet;

                    /**
                     * 导播台主监输出的宽度，单位为像素。
默认为1280，最大允许4096。
                     */
                    uint64_t m_pgmWidth;
                    bool m_pgmWidthHasBeenSet;

                    /**
                     * 导播台主监输出的高度，单位为像素。
默认为720，最大允许2160。
                     */
                    uint64_t m_pgmHeight;
                    bool m_pgmHeightHasBeenSet;

                    /**
                     * 导播台主监输出的帧率。
默认为0，表示随源输出。
最大支持60。
                     */
                    uint64_t m_pgmFps;
                    bool m_pgmFpsHasBeenSet;

                    /**
                     * 导播台主监输出的码率，单位为kbps。
默认为0，表示随源的码率输出。
最大允许10000kbps。
                     */
                    uint64_t m_pgmBitRate;
                    bool m_pgmBitRateHasBeenSet;

                    /**
                     * 导播台的计费类型。
0 通用型 
1 播单型。
注： 本参数暂无作用。
                     */
                    int64_t m_feeType;
                    bool m_feeTypeHasBeenSet;

                    /**
                     * 导播台主监输出的音频码率，单位为kbps。
可选项：[0, 128, 192, 256]
默认值为0，表示随源的音频码率输出。
                     */
                    uint64_t m_pgmAudioBitRate;
                    bool m_pgmAudioBitRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CREATECASTERREQUEST_H_
