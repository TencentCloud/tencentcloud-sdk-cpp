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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CASTERINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CASTERINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 导播台信息
                */
                class CasterInfo : public AbstractModel
                {
                public:
                    CasterInfo();
                    ~CasterInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取<p>导播台上一次启动pgm的时间，值为unix时间戳。</p>
                     * @return StartLiveTime <p>导播台上一次启动pgm的时间，值为unix时间戳。</p>
                     * 
                     */
                    uint64_t GetStartLiveTime() const;

                    /**
                     * 设置<p>导播台上一次启动pgm的时间，值为unix时间戳。</p>
                     * @param _startLiveTime <p>导播台上一次启动pgm的时间，值为unix时间戳。</p>
                     * 
                     */
                    void SetStartLiveTime(const uint64_t& _startLiveTime);

                    /**
                     * 判断参数 StartLiveTime 是否已赋值
                     * @return StartLiveTime 是否已赋值
                     * 
                     */
                    bool StartLiveTimeHasBeenSet() const;

                    /**
                     * 获取<p>导播台的描述</p>
                     * @return Description <p>导播台的描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>导播台的描述</p>
                     * @param _description <p>导播台的描述</p>
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
                     * 获取<p>导播台创建时间，值为unix时间戳。</p>
                     * @return CreateTime <p>导播台创建时间，值为unix时间戳。</p>
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置<p>导播台创建时间，值为unix时间戳。</p>
                     * @param _createTime <p>导播台创建时间，值为unix时间戳。</p>
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>导播台状态<br>0：停止状态，无预监，无主监<br>1：无预监，有主监<br>2：有预监，无主监<br>3：有预监，有主监</p>
                     * @return Status <p>导播台状态<br>0：停止状态，无预监，无主监<br>1：无预监，有主监<br>2：有预监，无主监<br>3：有预监，有主监</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>导播台状态<br>0：停止状态，无预监，无主监<br>1：无预监，有主监<br>2：有预监，无主监<br>3：有预监，有主监</p>
                     * @param _status <p>导播台状态<br>0：停止状态，无预监，无主监<br>1：无预监，有主监<br>2：有预监，无主监<br>3：有预监，有主监</p>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>导播台的过期时间戳。值为-1或unix时间戳。<br>默认值为-1。 当值为-1时，表示该导播台永不过期。<br>当值为正常unix时间戳时，导播台将在该时间过期。<br>导播台过期后，预监与主监画面将自动停止，转推自动停止。<br>点播、直播url将停止转拉，推流url需自行停止推流。</p>
                     * @return ExpireTime <p>导播台的过期时间戳。值为-1或unix时间戳。<br>默认值为-1。 当值为-1时，表示该导播台永不过期。<br>当值为正常unix时间戳时，导播台将在该时间过期。<br>导播台过期后，预监与主监画面将自动停止，转推自动停止。<br>点播、直播url将停止转拉，推流url需自行停止推流。</p>
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置<p>导播台的过期时间戳。值为-1或unix时间戳。<br>默认值为-1。 当值为-1时，表示该导播台永不过期。<br>当值为正常unix时间戳时，导播台将在该时间过期。<br>导播台过期后，预监与主监画面将自动停止，转推自动停止。<br>点播、直播url将停止转拉，推流url需自行停止推流。</p>
                     * @param _expireTime <p>导播台的过期时间戳。值为-1或unix时间戳。<br>默认值为-1。 当值为-1时，表示该导播台永不过期。<br>当值为正常unix时间戳时，导播台将在该时间过期。<br>导播台过期后，预监与主监画面将自动停止，转推自动停止。<br>点播、直播url将停止转拉，推流url需自行停止推流。</p>
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
                     * 获取<p>导播台延时播放时间，单位为秒。</p>
                     * @return DelayTime <p>导播台延时播放时间，单位为秒。</p>
                     * 
                     */
                    uint64_t GetDelayTime() const;

                    /**
                     * 设置<p>导播台延时播放时间，单位为秒。</p>
                     * @param _delayTime <p>导播台延时播放时间，单位为秒。</p>
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
                     * 获取<p>导播台主监输出的宽度，单位为像素。</p>
                     * @return PgmWidth <p>导播台主监输出的宽度，单位为像素。</p>
                     * 
                     */
                    uint64_t GetPgmWidth() const;

                    /**
                     * 设置<p>导播台主监输出的宽度，单位为像素。</p>
                     * @param _pgmWidth <p>导播台主监输出的宽度，单位为像素。</p>
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
                     * 获取<p>导播台主监输出的高度，单位为像素。</p>
                     * @return PgmHeight <p>导播台主监输出的高度，单位为像素。</p>
                     * 
                     */
                    uint64_t GetPgmHeight() const;

                    /**
                     * 设置<p>导播台主监输出的高度，单位为像素。</p>
                     * @param _pgmHeight <p>导播台主监输出的高度，单位为像素。</p>
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
                     * 获取<p>导播台主监输出的帧率。</p>
                     * @return PgmFps <p>导播台主监输出的帧率。</p>
                     * 
                     */
                    uint64_t GetPgmFps() const;

                    /**
                     * 设置<p>导播台主监输出的帧率。</p>
                     * @param _pgmFps <p>导播台主监输出的帧率。</p>
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
                     * 获取<p>导播台主监输出的码率，单位为kbps</p>
                     * @return PgmBitRate <p>导播台主监输出的码率，单位为kbps</p>
                     * 
                     */
                    uint64_t GetPgmBitRate() const;

                    /**
                     * 设置<p>导播台主监输出的码率，单位为kbps</p>
                     * @param _pgmBitRate <p>导播台主监输出的码率，单位为kbps</p>
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
                     * 获取<p>导播台主监输出的音频码率，单位为kbps。</p>
                     * @return PgmAudioBitRate <p>导播台主监输出的音频码率，单位为kbps。</p>
                     * 
                     */
                    uint64_t GetPgmAudioBitRate() const;

                    /**
                     * 设置<p>导播台主监输出的音频码率，单位为kbps。</p>
                     * @param _pgmAudioBitRate <p>导播台主监输出的音频码率，单位为kbps。</p>
                     * 
                     */
                    void SetPgmAudioBitRate(const uint64_t& _pgmAudioBitRate);

                    /**
                     * 判断参数 PgmAudioBitRate 是否已赋值
                     * @return PgmAudioBitRate 是否已赋值
                     * 
                     */
                    bool PgmAudioBitRateHasBeenSet() const;

                    /**
                     * 获取<p>导播台的计费类型。<br>0 通用型 1 播单型。<br>注： 本参数暂无作用。</p>
                     * @return FeeType <p>导播台的计费类型。<br>0 通用型 1 播单型。<br>注： 本参数暂无作用。</p>
                     * 
                     */
                    int64_t GetFeeType() const;

                    /**
                     * 设置<p>导播台的计费类型。<br>0 通用型 1 播单型。<br>注： 本参数暂无作用。</p>
                     * @param _feeType <p>导播台的计费类型。<br>0 通用型 1 播单型。<br>注： 本参数暂无作用。</p>
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
                     * 获取<p>录制模板id。</p>
                     * @return RecordTemplateId <p>录制模板id。</p>
                     * 
                     */
                    uint64_t GetRecordTemplateId() const;

                    /**
                     * 设置<p>录制模板id。</p>
                     * @param _recordTemplateId <p>录制模板id。</p>
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
                     * 获取<p>录制状态。<br>0：未录制<br>1：录制中</p>
                     * @return RecordStatus <p>录制状态。<br>0：未录制<br>1：录制中</p>
                     * 
                     */
                    uint64_t GetRecordStatus() const;

                    /**
                     * 设置<p>录制状态。<br>0：未录制<br>1：录制中</p>
                     * @param _recordStatus <p>录制状态。<br>0：未录制<br>1：录制中</p>
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
                     * 获取<p>录制接口返回的taskid</p>
                     * @return RecordTaskId <p>录制接口返回的taskid</p>
                     * 
                     */
                    std::string GetRecordTaskId() const;

                    /**
                     * 设置<p>录制接口返回的taskid</p>
                     * @param _recordTaskId <p>录制接口返回的taskid</p>
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
                     * 获取<p>导播台主监输出的编码方式</p><p>枚举值：</p><ul><li>h264： h264编码</li><li>h265： h265编码</li></ul><p>默认值：h264</p>
                     * @return PgmVcodec <p>导播台主监输出的编码方式</p><p>枚举值：</p><ul><li>h264： h264编码</li><li>h265： h265编码</li></ul><p>默认值：h264</p>
                     * 
                     */
                    std::string GetPgmVcodec() const;

                    /**
                     * 设置<p>导播台主监输出的编码方式</p><p>枚举值：</p><ul><li>h264： h264编码</li><li>h265： h265编码</li></ul><p>默认值：h264</p>
                     * @param _pgmVcodec <p>导播台主监输出的编码方式</p><p>枚举值：</p><ul><li>h264： h264编码</li><li>h265： h265编码</li></ul><p>默认值：h264</p>
                     * 
                     */
                    void SetPgmVcodec(const std::string& _pgmVcodec);

                    /**
                     * 判断参数 PgmVcodec 是否已赋值
                     * @return PgmVcodec 是否已赋值
                     * 
                     */
                    bool PgmVcodecHasBeenSet() const;

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
                     * <p>导播台上一次启动pgm的时间，值为unix时间戳。</p>
                     */
                    uint64_t m_startLiveTime;
                    bool m_startLiveTimeHasBeenSet;

                    /**
                     * <p>导播台的描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>导播台创建时间，值为unix时间戳。</p>
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>导播台状态<br>0：停止状态，无预监，无主监<br>1：无预监，有主监<br>2：有预监，无主监<br>3：有预监，有主监</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>导播台的过期时间戳。值为-1或unix时间戳。<br>默认值为-1。 当值为-1时，表示该导播台永不过期。<br>当值为正常unix时间戳时，导播台将在该时间过期。<br>导播台过期后，预监与主监画面将自动停止，转推自动停止。<br>点播、直播url将停止转拉，推流url需自行停止推流。</p>
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>导播台延时播放时间，单位为秒。</p>
                     */
                    uint64_t m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * <p>导播台主监输出的宽度，单位为像素。</p>
                     */
                    uint64_t m_pgmWidth;
                    bool m_pgmWidthHasBeenSet;

                    /**
                     * <p>导播台主监输出的高度，单位为像素。</p>
                     */
                    uint64_t m_pgmHeight;
                    bool m_pgmHeightHasBeenSet;

                    /**
                     * <p>导播台主监输出的帧率。</p>
                     */
                    uint64_t m_pgmFps;
                    bool m_pgmFpsHasBeenSet;

                    /**
                     * <p>导播台主监输出的码率，单位为kbps</p>
                     */
                    uint64_t m_pgmBitRate;
                    bool m_pgmBitRateHasBeenSet;

                    /**
                     * <p>导播台主监输出的音频码率，单位为kbps。</p>
                     */
                    uint64_t m_pgmAudioBitRate;
                    bool m_pgmAudioBitRateHasBeenSet;

                    /**
                     * <p>导播台的计费类型。<br>0 通用型 1 播单型。<br>注： 本参数暂无作用。</p>
                     */
                    int64_t m_feeType;
                    bool m_feeTypeHasBeenSet;

                    /**
                     * <p>录制模板id。</p>
                     */
                    uint64_t m_recordTemplateId;
                    bool m_recordTemplateIdHasBeenSet;

                    /**
                     * <p>录制状态。<br>0：未录制<br>1：录制中</p>
                     */
                    uint64_t m_recordStatus;
                    bool m_recordStatusHasBeenSet;

                    /**
                     * <p>录制接口返回的taskid</p>
                     */
                    std::string m_recordTaskId;
                    bool m_recordTaskIdHasBeenSet;

                    /**
                     * <p>导播台主监输出的编码方式</p><p>枚举值：</p><ul><li>h264： h264编码</li><li>h265： h265编码</li></ul><p>默认值：h264</p>
                     */
                    std::string m_pgmVcodec;
                    bool m_pgmVcodecHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CASTERINFO_H_
