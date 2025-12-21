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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYCASTERREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYCASTERREQUEST_H_

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
                * ModifyCaster请求参数结构体
                */
                class ModifyCasterRequest : public AbstractModel
                {
                public:
                    ModifyCasterRequest();
                    ~ModifyCasterRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>导播台ID</p>
                     * @return CasterId <p>导播台ID</p>
                     * 
                     */
                    uint64_t GetCasterId() const;

                    /**
                     * 设置<p>导播台ID</p>
                     * @param _casterId <p>导播台ID</p>
                     * 
                     */
                    void SetCasterId(const uint64_t& _casterId);

                    /**
                     * 判断参数 CasterId 是否已赋值
                     * @return CasterId 是否已赋值
                     * 
                     */
                    bool CasterIdHasBeenSet() const;

                    /**
                     * 获取<p>导播台名称</p>
                     * @return CasterName <p>导播台名称</p>
                     * 
                     */
                    std::string GetCasterName() const;

                    /**
                     * 设置<p>导播台名称</p>
                     * @param _casterName <p>导播台名称</p>
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
                     * 获取<p>导播台的描述，最大允许长度256</p>
                     * @return Description <p>导播台的描述，最大允许长度256</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>导播台的描述，最大允许长度256</p>
                     * @param _description <p>导播台的描述，最大允许长度256</p>
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
                     * 获取<p>录制模板id。默认为0。当使用直播录制功能时，可将使用的录制模版填入。该接口仅保存字段，不涉及任何录制功能。</p>
                     * @return RecordTemplateId <p>录制模板id。默认为0。当使用直播录制功能时，可将使用的录制模版填入。该接口仅保存字段，不涉及任何录制功能。</p>
                     * 
                     */
                    uint64_t GetRecordTemplateId() const;

                    /**
                     * 设置<p>录制模板id。默认为0。当使用直播录制功能时，可将使用的录制模版填入。该接口仅保存字段，不涉及任何录制功能。</p>
                     * @param _recordTemplateId <p>录制模板id。默认为0。当使用直播录制功能时，可将使用的录制模版填入。该接口仅保存字段，不涉及任何录制功能。</p>
                     * 
                     */
                    void SetRecordTemplateId(const uint64_t& _recordTemplateId);

                    /**
                     * 判断参数 RecordTemplateId 是否已赋值
                     * @return RecordTemplateId 是否已赋值
                     * 
                     */
                    bool RecordTemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>录制状态，当调用录制接口后，可通过该字段保存录制状态。0：未录制 1：录制中该接口仅保存字段，不涉及任何录制处理。</p>
                     * @return RecordStatus <p>录制状态，当调用录制接口后，可通过该字段保存录制状态。0：未录制 1：录制中该接口仅保存字段，不涉及任何录制处理。</p>
                     * 
                     */
                    uint64_t GetRecordStatus() const;

                    /**
                     * 设置<p>录制状态，当调用录制接口后，可通过该字段保存录制状态。0：未录制 1：录制中该接口仅保存字段，不涉及任何录制处理。</p>
                     * @param _recordStatus <p>录制状态，当调用录制接口后，可通过该字段保存录制状态。0：未录制 1：录制中该接口仅保存字段，不涉及任何录制处理。</p>
                     * 
                     */
                    void SetRecordStatus(const uint64_t& _recordStatus);

                    /**
                     * 判断参数 RecordStatus 是否已赋值
                     * @return RecordStatus 是否已赋值
                     * 
                     */
                    bool RecordStatusHasBeenSet() const;

                    /**
                     * 获取<p>导播台的过期时间戳。值为-1或unix时间戳。默认值为-1。 当值为-1时，表示该导播台永不过期。 当值为正常unix时间戳时，导播台将在该时间过期。导播台过期后，预监与主监画面将自动停止，转推自动停止。 点播、直播url将停止转拉，推流url需自行停止推流。</p>
                     * @return ExpireTime <p>导播台的过期时间戳。值为-1或unix时间戳。默认值为-1。 当值为-1时，表示该导播台永不过期。 当值为正常unix时间戳时，导播台将在该时间过期。导播台过期后，预监与主监画面将自动停止，转推自动停止。 点播、直播url将停止转拉，推流url需自行停止推流。</p>
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置<p>导播台的过期时间戳。值为-1或unix时间戳。默认值为-1。 当值为-1时，表示该导播台永不过期。 当值为正常unix时间戳时，导播台将在该时间过期。导播台过期后，预监与主监画面将自动停止，转推自动停止。 点播、直播url将停止转拉，推流url需自行停止推流。</p>
                     * @param _expireTime <p>导播台的过期时间戳。值为-1或unix时间戳。默认值为-1。 当值为-1时，表示该导播台永不过期。 当值为正常unix时间戳时，导播台将在该时间过期。导播台过期后，预监与主监画面将自动停止，转推自动停止。 点播、直播url将停止转拉，推流url需自行停止推流。</p>
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
                     * 获取<p>导播台延时播放时间，单位为秒。 默认为0，最大支持300秒</p>
                     * @return DelayTime <p>导播台延时播放时间，单位为秒。 默认为0，最大支持300秒</p>
                     * 
                     */
                    uint64_t GetDelayTime() const;

                    /**
                     * 设置<p>导播台延时播放时间，单位为秒。 默认为0，最大支持300秒</p>
                     * @param _delayTime <p>导播台延时播放时间，单位为秒。 默认为0，最大支持300秒</p>
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
                     * 获取<p>导播台转场类型。 默认为空。 允许使用通过DescribeCasterTransitionTypes接口中查询到的转场类型。</p>
                     * @return TransitionType <p>导播台转场类型。 默认为空。 允许使用通过DescribeCasterTransitionTypes接口中查询到的转场类型。</p>
                     * 
                     */
                    std::string GetTransitionType() const;

                    /**
                     * 设置<p>导播台转场类型。 默认为空。 允许使用通过DescribeCasterTransitionTypes接口中查询到的转场类型。</p>
                     * @param _transitionType <p>导播台转场类型。 默认为空。 允许使用通过DescribeCasterTransitionTypes接口中查询到的转场类型。</p>
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
                     * 获取<p>导播台主监输出的宽度，单位为像素。 默认为1280，最大允许4096。</p>
                     * @return PgmWidth <p>导播台主监输出的宽度，单位为像素。 默认为1280，最大允许4096。</p>
                     * 
                     */
                    uint64_t GetPgmWidth() const;

                    /**
                     * 设置<p>导播台主监输出的宽度，单位为像素。 默认为1280，最大允许4096。</p>
                     * @param _pgmWidth <p>导播台主监输出的宽度，单位为像素。 默认为1280，最大允许4096。</p>
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
                     * 获取<p>导播台主监输出的高度，单位为像素。 默认为720，最大允许2160。</p>
                     * @return PgmHeight <p>导播台主监输出的高度，单位为像素。 默认为720，最大允许2160。</p>
                     * 
                     */
                    uint64_t GetPgmHeight() const;

                    /**
                     * 设置<p>导播台主监输出的高度，单位为像素。 默认为720，最大允许2160。</p>
                     * @param _pgmHeight <p>导播台主监输出的高度，单位为像素。 默认为720，最大允许2160。</p>
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
                     * 获取<p>导播台主监输出的帧率。 默认为0，表示随源输出。 最大支持60。</p>
                     * @return PgmFps <p>导播台主监输出的帧率。 默认为0，表示随源输出。 最大支持60。</p>
                     * 
                     */
                    uint64_t GetPgmFps() const;

                    /**
                     * 设置<p>导播台主监输出的帧率。 默认为0，表示随源输出。 最大支持60。</p>
                     * @param _pgmFps <p>导播台主监输出的帧率。 默认为0，表示随源输出。 最大支持60。</p>
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
                     * 获取<p>导播台主监输出的码率，单位为kbps。 默认为0，表示随源的码率输出。 最大允许10000kbps。</p>
                     * @return PgmBitRate <p>导播台主监输出的码率，单位为kbps。 默认为0，表示随源的码率输出。 最大允许10000kbps。</p>
                     * 
                     */
                    uint64_t GetPgmBitRate() const;

                    /**
                     * 设置<p>导播台主监输出的码率，单位为kbps。 默认为0，表示随源的码率输出。 最大允许10000kbps。</p>
                     * @param _pgmBitRate <p>导播台主监输出的码率，单位为kbps。 默认为0，表示随源的码率输出。 最大允许10000kbps。</p>
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
                     * 获取<p>导播台的计费类型。 0 通用型 1 播单型。 注： 本参数暂无作用。</p>
                     * @return FeeType <p>导播台的计费类型。 0 通用型 1 播单型。 注： 本参数暂无作用。</p>
                     * 
                     */
                    int64_t GetFeeType() const;

                    /**
                     * 设置<p>导播台的计费类型。 0 通用型 1 播单型。 注： 本参数暂无作用。</p>
                     * @param _feeType <p>导播台的计费类型。 0 通用型 1 播单型。 注： 本参数暂无作用。</p>
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
                     * 获取<p>录制接口返回的taskid注：该接口只做字段保存，不涉及录制操作。</p>
                     * @return RecordTaskId <p>录制接口返回的taskid注：该接口只做字段保存，不涉及录制操作。</p>
                     * 
                     */
                    std::string GetRecordTaskId() const;

                    /**
                     * 设置<p>录制接口返回的taskid注：该接口只做字段保存，不涉及录制操作。</p>
                     * @param _recordTaskId <p>录制接口返回的taskid注：该接口只做字段保存，不涉及录制操作。</p>
                     * 
                     */
                    void SetRecordTaskId(const std::string& _recordTaskId);

                    /**
                     * 判断参数 RecordTaskId 是否已赋值
                     * @return RecordTaskId 是否已赋值
                     * 
                     */
                    bool RecordTaskIdHasBeenSet() const;

                    /**
                     * 获取<p>导播台主监输出的音频码率，单位为kbps。 可选项：[0, 128, 192, 256] 默认值为0，表示随源的音频码率输出。</p>
                     * @return PgmAudioBitRate <p>导播台主监输出的音频码率，单位为kbps。 可选项：[0, 128, 192, 256] 默认值为0，表示随源的音频码率输出。</p>
                     * 
                     */
                    uint64_t GetPgmAudioBitRate() const;

                    /**
                     * 设置<p>导播台主监输出的音频码率，单位为kbps。 可选项：[0, 128, 192, 256] 默认值为0，表示随源的音频码率输出。</p>
                     * @param _pgmAudioBitRate <p>导播台主监输出的音频码率，单位为kbps。 可选项：[0, 128, 192, 256] 默认值为0，表示随源的音频码率输出。</p>
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
                     * <p>导播台ID</p>
                     */
                    uint64_t m_casterId;
                    bool m_casterIdHasBeenSet;

                    /**
                     * <p>导播台名称</p>
                     */
                    std::string m_casterName;
                    bool m_casterNameHasBeenSet;

                    /**
                     * <p>导播台的描述，最大允许长度256</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>录制模板id。默认为0。当使用直播录制功能时，可将使用的录制模版填入。该接口仅保存字段，不涉及任何录制功能。</p>
                     */
                    uint64_t m_recordTemplateId;
                    bool m_recordTemplateIdHasBeenSet;

                    /**
                     * <p>录制状态，当调用录制接口后，可通过该字段保存录制状态。0：未录制 1：录制中该接口仅保存字段，不涉及任何录制处理。</p>
                     */
                    uint64_t m_recordStatus;
                    bool m_recordStatusHasBeenSet;

                    /**
                     * <p>导播台的过期时间戳。值为-1或unix时间戳。默认值为-1。 当值为-1时，表示该导播台永不过期。 当值为正常unix时间戳时，导播台将在该时间过期。导播台过期后，预监与主监画面将自动停止，转推自动停止。 点播、直播url将停止转拉，推流url需自行停止推流。</p>
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>导播台延时播放时间，单位为秒。 默认为0，最大支持300秒</p>
                     */
                    uint64_t m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * <p>导播台转场类型。 默认为空。 允许使用通过DescribeCasterTransitionTypes接口中查询到的转场类型。</p>
                     */
                    std::string m_transitionType;
                    bool m_transitionTypeHasBeenSet;

                    /**
                     * <p>导播台主监输出的宽度，单位为像素。 默认为1280，最大允许4096。</p>
                     */
                    uint64_t m_pgmWidth;
                    bool m_pgmWidthHasBeenSet;

                    /**
                     * <p>导播台主监输出的高度，单位为像素。 默认为720，最大允许2160。</p>
                     */
                    uint64_t m_pgmHeight;
                    bool m_pgmHeightHasBeenSet;

                    /**
                     * <p>导播台主监输出的帧率。 默认为0，表示随源输出。 最大支持60。</p>
                     */
                    uint64_t m_pgmFps;
                    bool m_pgmFpsHasBeenSet;

                    /**
                     * <p>导播台主监输出的码率，单位为kbps。 默认为0，表示随源的码率输出。 最大允许10000kbps。</p>
                     */
                    uint64_t m_pgmBitRate;
                    bool m_pgmBitRateHasBeenSet;

                    /**
                     * <p>导播台的计费类型。 0 通用型 1 播单型。 注： 本参数暂无作用。</p>
                     */
                    int64_t m_feeType;
                    bool m_feeTypeHasBeenSet;

                    /**
                     * <p>录制接口返回的taskid注：该接口只做字段保存，不涉及录制操作。</p>
                     */
                    std::string m_recordTaskId;
                    bool m_recordTaskIdHasBeenSet;

                    /**
                     * <p>导播台主监输出的音频码率，单位为kbps。 可选项：[0, 128, 192, 256] 默认值为0，表示随源的音频码率输出。</p>
                     */
                    uint64_t m_pgmAudioBitRate;
                    bool m_pgmAudioBitRateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYCASTERREQUEST_H_
