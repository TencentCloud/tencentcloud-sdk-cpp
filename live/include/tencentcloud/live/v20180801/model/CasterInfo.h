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
                     * 获取导播台ID
                     * @return CasterId 导播台ID
                     * 
                     */
                    uint64_t GetCasterId() const;

                    /**
                     * 设置导播台ID
                     * @param _casterId 导播台ID
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
                     * 获取导播台上一次启动pgm的时间，值为unix时间戳。
                     * @return StartLiveTime 导播台上一次启动pgm的时间，值为unix时间戳。
                     * 
                     */
                    uint64_t GetStartLiveTime() const;

                    /**
                     * 设置导播台上一次启动pgm的时间，值为unix时间戳。
                     * @param _startLiveTime 导播台上一次启动pgm的时间，值为unix时间戳。
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
                     * 获取导播台的描述
                     * @return Description 导播台的描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置导播台的描述
                     * @param _description 导播台的描述
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
                     * 获取导播台创建时间，值为unix时间戳。
                     * @return CreateTime 导播台创建时间，值为unix时间戳。
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置导播台创建时间，值为unix时间戳。
                     * @param _createTime 导播台创建时间，值为unix时间戳。
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
                     * 获取导播台状态 
0：停止状态，无预监，无主监
1：无预监，有主监
2：有预监，无主监
3：有预监，有主监
                     * @return Status 导播台状态 
0：停止状态，无预监，无主监
1：无预监，有主监
2：有预监，无主监
3：有预监，有主监
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置导播台状态 
0：停止状态，无预监，无主监
1：无预监，有主监
2：有预监，无主监
3：有预监，有主监
                     * @param _status 导播台状态 
0：停止状态，无预监，无主监
1：无预监，有主监
2：有预监，无主监
3：有预监，有主监
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
                     * 获取导播台的过期时间戳。值为-1或unix时间戳。 
默认值为-1。 当值为-1时，表示该导播台永不过期。 
当值为正常unix时间戳时，导播台将在该时间过期。 
导播台过期后，预监与主监画面将自动停止，转推自动停止。 
点播、直播url将停止转拉，推流url需自行停止推流。
                     * @return ExpireTime 导播台的过期时间戳。值为-1或unix时间戳。 
默认值为-1。 当值为-1时，表示该导播台永不过期。 
当值为正常unix时间戳时，导播台将在该时间过期。 
导播台过期后，预监与主监画面将自动停止，转推自动停止。 
点播、直播url将停止转拉，推流url需自行停止推流。
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置导播台的过期时间戳。值为-1或unix时间戳。 
默认值为-1。 当值为-1时，表示该导播台永不过期。 
当值为正常unix时间戳时，导播台将在该时间过期。 
导播台过期后，预监与主监画面将自动停止，转推自动停止。 
点播、直播url将停止转拉，推流url需自行停止推流。
                     * @param _expireTime 导播台的过期时间戳。值为-1或unix时间戳。 
默认值为-1。 当值为-1时，表示该导播台永不过期。 
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
                     * @return DelayTime 导播台延时播放时间，单位为秒。 
                     * 
                     */
                    uint64_t GetDelayTime() const;

                    /**
                     * 设置导播台延时播放时间，单位为秒。 
                     * @param _delayTime 导播台延时播放时间，单位为秒。 
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
                     * 获取导播台主监输出的宽度，单位为像素。
                     * @return PgmWidth 导播台主监输出的宽度，单位为像素。
                     * 
                     */
                    uint64_t GetPgmWidth() const;

                    /**
                     * 设置导播台主监输出的宽度，单位为像素。
                     * @param _pgmWidth 导播台主监输出的宽度，单位为像素。
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
                     * @return PgmHeight 导播台主监输出的高度，单位为像素。
                     * 
                     */
                    uint64_t GetPgmHeight() const;

                    /**
                     * 设置导播台主监输出的高度，单位为像素。
                     * @param _pgmHeight 导播台主监输出的高度，单位为像素。
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
                     * @return PgmFps 导播台主监输出的帧率。
                     * 
                     */
                    uint64_t GetPgmFps() const;

                    /**
                     * 设置导播台主监输出的帧率。
                     * @param _pgmFps 导播台主监输出的帧率。
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
                     * 获取导播台主监输出的码率，单位为kbps
                     * @return PgmBitRate 导播台主监输出的码率，单位为kbps
                     * 
                     */
                    uint64_t GetPgmBitRate() const;

                    /**
                     * 设置导播台主监输出的码率，单位为kbps
                     * @param _pgmBitRate 导播台主监输出的码率，单位为kbps
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
                     * 获取导播台主监输出的音频码率，单位为kbps。
                     * @return PgmAudioBitRate 导播台主监输出的音频码率，单位为kbps。
                     * 
                     */
                    uint64_t GetPgmAudioBitRate() const;

                    /**
                     * 设置导播台主监输出的音频码率，单位为kbps。
                     * @param _pgmAudioBitRate 导播台主监输出的音频码率，单位为kbps。
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
                     * 获取导播台的计费类型。 
0 通用型 1 播单型。
注： 本参数暂无作用。
                     * @return FeeType 导播台的计费类型。 
0 通用型 1 播单型。
注： 本参数暂无作用。
                     * 
                     */
                    int64_t GetFeeType() const;

                    /**
                     * 设置导播台的计费类型。 
0 通用型 1 播单型。
注： 本参数暂无作用。
                     * @param _feeType 导播台的计费类型。 
0 通用型 1 播单型。
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
                     * 获取录制模板id。
                     * @return RecordTemplateId 录制模板id。
                     * 
                     */
                    uint64_t GetRecordTemplateId() const;

                    /**
                     * 设置录制模板id。
                     * @param _recordTemplateId 录制模板id。
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
                     * 获取录制状态。 
0：未录制 
1：录制中
                     * @return RecordStatus 录制状态。 
0：未录制 
1：录制中
                     * 
                     */
                    uint64_t GetRecordStatus() const;

                    /**
                     * 设置录制状态。 
0：未录制 
1：录制中
                     * @param _recordStatus 录制状态。 
0：未录制 
1：录制中
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
                     * 获取录制接口返回的taskid
                     * @return RecordTaskId 录制接口返回的taskid
                     * 
                     */
                    std::string GetRecordTaskId() const;

                    /**
                     * 设置录制接口返回的taskid
                     * @param _recordTaskId 录制接口返回的taskid
                     * 
                     */
                    void SetRecordTaskId(const std::string& _recordTaskId);

                    /**
                     * 判断参数 RecordTaskId 是否已赋值
                     * @return RecordTaskId 是否已赋值
                     * 
                     */
                    bool RecordTaskIdHasBeenSet() const;

                private:

                    /**
                     * 导播台ID
                     */
                    uint64_t m_casterId;
                    bool m_casterIdHasBeenSet;

                    /**
                     * 导播台名称
                     */
                    std::string m_casterName;
                    bool m_casterNameHasBeenSet;

                    /**
                     * 导播台上一次启动pgm的时间，值为unix时间戳。
                     */
                    uint64_t m_startLiveTime;
                    bool m_startLiveTimeHasBeenSet;

                    /**
                     * 导播台的描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 导播台创建时间，值为unix时间戳。
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 导播台状态 
0：停止状态，无预监，无主监
1：无预监，有主监
2：有预监，无主监
3：有预监，有主监
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 导播台的过期时间戳。值为-1或unix时间戳。 
默认值为-1。 当值为-1时，表示该导播台永不过期。 
当值为正常unix时间戳时，导播台将在该时间过期。 
导播台过期后，预监与主监画面将自动停止，转推自动停止。 
点播、直播url将停止转拉，推流url需自行停止推流。
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 导播台延时播放时间，单位为秒。 
                     */
                    uint64_t m_delayTime;
                    bool m_delayTimeHasBeenSet;

                    /**
                     * 导播台主监输出的宽度，单位为像素。
                     */
                    uint64_t m_pgmWidth;
                    bool m_pgmWidthHasBeenSet;

                    /**
                     * 导播台主监输出的高度，单位为像素。
                     */
                    uint64_t m_pgmHeight;
                    bool m_pgmHeightHasBeenSet;

                    /**
                     * 导播台主监输出的帧率。
                     */
                    uint64_t m_pgmFps;
                    bool m_pgmFpsHasBeenSet;

                    /**
                     * 导播台主监输出的码率，单位为kbps
                     */
                    uint64_t m_pgmBitRate;
                    bool m_pgmBitRateHasBeenSet;

                    /**
                     * 导播台主监输出的音频码率，单位为kbps。
                     */
                    uint64_t m_pgmAudioBitRate;
                    bool m_pgmAudioBitRateHasBeenSet;

                    /**
                     * 导播台的计费类型。 
0 通用型 1 播单型。
注： 本参数暂无作用。
                     */
                    int64_t m_feeType;
                    bool m_feeTypeHasBeenSet;

                    /**
                     * 录制模板id。
                     */
                    uint64_t m_recordTemplateId;
                    bool m_recordTemplateIdHasBeenSet;

                    /**
                     * 录制状态。 
0：未录制 
1：录制中
                     */
                    uint64_t m_recordStatus;
                    bool m_recordStatusHasBeenSet;

                    /**
                     * 录制接口返回的taskid
                     */
                    std::string m_recordTaskId;
                    bool m_recordTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CASTERINFO_H_
