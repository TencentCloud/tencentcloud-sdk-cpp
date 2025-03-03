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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_LIVESTREAMMONITORINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_LIVESTREAMMONITORINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/LiveStreamMonitorOutputInfo.h>
#include <tencentcloud/live/v20180801/model/LiveStreamMonitorInputInfo.h>
#include <tencentcloud/live/v20180801/model/LiveStreamMonitorNotifyPolicy.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 直播监播任务信息。
                */
                class LiveStreamMonitorInfo : public AbstractModel
                {
                public:
                    LiveStreamMonitorInfo();
                    ~LiveStreamMonitorInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取监播任务ID。
                     * @return MonitorId 监播任务ID。
                     * 
                     */
                    std::string GetMonitorId() const;

                    /**
                     * 设置监播任务ID。
                     * @param _monitorId 监播任务ID。
                     * 
                     */
                    void SetMonitorId(const std::string& _monitorId);

                    /**
                     * 判断参数 MonitorId 是否已赋值
                     * @return MonitorId 是否已赋值
                     * 
                     */
                    bool MonitorIdHasBeenSet() const;

                    /**
                     * 获取监播任务名称。128字节以内。
                     * @return MonitorName 监播任务名称。128字节以内。
                     * 
                     */
                    std::string GetMonitorName() const;

                    /**
                     * 设置监播任务名称。128字节以内。
                     * @param _monitorName 监播任务名称。128字节以内。
                     * 
                     */
                    void SetMonitorName(const std::string& _monitorName);

                    /**
                     * 判断参数 MonitorName 是否已赋值
                     * @return MonitorName 是否已赋值
                     * 
                     */
                    bool MonitorNameHasBeenSet() const;

                    /**
                     * 获取监播任务输出信息。
                     * @return OutputInfo 监播任务输出信息。
                     * 
                     */
                    LiveStreamMonitorOutputInfo GetOutputInfo() const;

                    /**
                     * 设置监播任务输出信息。
                     * @param _outputInfo 监播任务输出信息。
                     * 
                     */
                    void SetOutputInfo(const LiveStreamMonitorOutputInfo& _outputInfo);

                    /**
                     * 判断参数 OutputInfo 是否已赋值
                     * @return OutputInfo 是否已赋值
                     * 
                     */
                    bool OutputInfoHasBeenSet() const;

                    /**
                     * 获取待监播的输入流信息。
                     * @return InputList 待监播的输入流信息。
                     * 
                     */
                    std::vector<LiveStreamMonitorInputInfo> GetInputList() const;

                    /**
                     * 设置待监播的输入流信息。
                     * @param _inputList 待监播的输入流信息。
                     * 
                     */
                    void SetInputList(const std::vector<LiveStreamMonitorInputInfo>& _inputList);

                    /**
                     * 判断参数 InputList 是否已赋值
                     * @return InputList 是否已赋值
                     * 
                     */
                    bool InputListHasBeenSet() const;

                    /**
                     * 获取监播任务状态。
0： 代表空闲
1： 代表监播中。
                     * @return Status 监播任务状态。
0： 代表空闲
1： 代表监播中。
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置监播任务状态。
0： 代表空闲
1： 代表监播中。
                     * @param _status 监播任务状态。
0： 代表空闲
1： 代表监播中。
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
                     * 获取上一次的启动时间，unix时间戳。
                     * @return StartTime 上一次的启动时间，unix时间戳。
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置上一次的启动时间，unix时间戳。
                     * @param _startTime 上一次的启动时间，unix时间戳。
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取上一次的停止时间，unix时间戳。
                     * @return StopTime 上一次的停止时间，unix时间戳。
                     * 
                     */
                    uint64_t GetStopTime() const;

                    /**
                     * 设置上一次的停止时间，unix时间戳。
                     * @param _stopTime 上一次的停止时间，unix时间戳。
                     * 
                     */
                    void SetStopTime(const uint64_t& _stopTime);

                    /**
                     * 判断参数 StopTime 是否已赋值
                     * @return StopTime 是否已赋值
                     * 
                     */
                    bool StopTimeHasBeenSet() const;

                    /**
                     * 获取监播任务创建时间，unix时间戳
                     * @return CreateTime 监播任务创建时间，unix时间戳
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置监播任务创建时间，unix时间戳
                     * @param _createTime 监播任务创建时间，unix时间戳
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
                     * 获取监播任务更新时间，unix时间戳
                     * @return UpdateTime 监播任务更新时间，unix时间戳
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置监播任务更新时间，unix时间戳
                     * @param _updateTime 监播任务更新时间，unix时间戳
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取监播事件通知策略。
                     * @return NotifyPolicy 监播事件通知策略。
                     * 
                     */
                    LiveStreamMonitorNotifyPolicy GetNotifyPolicy() const;

                    /**
                     * 设置监播事件通知策略。
                     * @param _notifyPolicy 监播事件通知策略。
                     * 
                     */
                    void SetNotifyPolicy(const LiveStreamMonitorNotifyPolicy& _notifyPolicy);

                    /**
                     * 判断参数 NotifyPolicy 是否已赋值
                     * @return NotifyPolicy 是否已赋值
                     * 
                     */
                    bool NotifyPolicyHasBeenSet() const;

                    /**
                     * 获取输出音频的输入Index列表。
                     * @return AudibleInputIndexList 输出音频的输入Index列表。
                     * 
                     */
                    std::vector<uint64_t> GetAudibleInputIndexList() const;

                    /**
                     * 设置输出音频的输入Index列表。
                     * @param _audibleInputIndexList 输出音频的输入Index列表。
                     * 
                     */
                    void SetAudibleInputIndexList(const std::vector<uint64_t>& _audibleInputIndexList);

                    /**
                     * 判断参数 AudibleInputIndexList 是否已赋值
                     * @return AudibleInputIndexList 是否已赋值
                     * 
                     */
                    bool AudibleInputIndexListHasBeenSet() const;

                    /**
                     * 获取开启智能语音识别的输入Index列表
                     * @return AiAsrInputIndexList 开启智能语音识别的输入Index列表
                     * 
                     */
                    std::vector<uint64_t> GetAiAsrInputIndexList() const;

                    /**
                     * 设置开启智能语音识别的输入Index列表
                     * @param _aiAsrInputIndexList 开启智能语音识别的输入Index列表
                     * 
                     */
                    void SetAiAsrInputIndexList(const std::vector<uint64_t>& _aiAsrInputIndexList);

                    /**
                     * 判断参数 AiAsrInputIndexList 是否已赋值
                     * @return AiAsrInputIndexList 是否已赋值
                     * 
                     */
                    bool AiAsrInputIndexListHasBeenSet() const;

                    /**
                     * 获取是否开启断流检测
                     * @return CheckStreamBroken 是否开启断流检测
                     * 
                     */
                    uint64_t GetCheckStreamBroken() const;

                    /**
                     * 设置是否开启断流检测
                     * @param _checkStreamBroken 是否开启断流检测
                     * 
                     */
                    void SetCheckStreamBroken(const uint64_t& _checkStreamBroken);

                    /**
                     * 判断参数 CheckStreamBroken 是否已赋值
                     * @return CheckStreamBroken 是否已赋值
                     * 
                     */
                    bool CheckStreamBrokenHasBeenSet() const;

                    /**
                     * 获取是否开启低帧率检测
                     * @return CheckStreamLowFrameRate 是否开启低帧率检测
                     * 
                     */
                    uint64_t GetCheckStreamLowFrameRate() const;

                    /**
                     * 设置是否开启低帧率检测
                     * @param _checkStreamLowFrameRate 是否开启低帧率检测
                     * 
                     */
                    void SetCheckStreamLowFrameRate(const uint64_t& _checkStreamLowFrameRate);

                    /**
                     * 判断参数 CheckStreamLowFrameRate 是否已赋值
                     * @return CheckStreamLowFrameRate 是否已赋值
                     * 
                     */
                    bool CheckStreamLowFrameRateHasBeenSet() const;

                    /**
                     * 获取智能语音识别语种：
0 关闭 1 中文 2 英文 3日文 4 韩文
                     * @return AsrLanguage 智能语音识别语种：
0 关闭 1 中文 2 英文 3日文 4 韩文
                     * 
                     */
                    uint64_t GetAsrLanguage() const;

                    /**
                     * 设置智能语音识别语种：
0 关闭 1 中文 2 英文 3日文 4 韩文
                     * @param _asrLanguage 智能语音识别语种：
0 关闭 1 中文 2 英文 3日文 4 韩文
                     * 
                     */
                    void SetAsrLanguage(const uint64_t& _asrLanguage);

                    /**
                     * 判断参数 AsrLanguage 是否已赋值
                     * @return AsrLanguage 是否已赋值
                     * 
                     */
                    bool AsrLanguageHasBeenSet() const;

                    /**
                     * 获取智能文字识别语种：
0 关闭 1 中、英文
                     * @return OcrLanguage 智能文字识别语种：
0 关闭 1 中、英文
                     * 
                     */
                    uint64_t GetOcrLanguage() const;

                    /**
                     * 设置智能文字识别语种：
0 关闭 1 中、英文
                     * @param _ocrLanguage 智能文字识别语种：
0 关闭 1 中、英文
                     * 
                     */
                    void SetOcrLanguage(const uint64_t& _ocrLanguage);

                    /**
                     * 判断参数 OcrLanguage 是否已赋值
                     * @return OcrLanguage 是否已赋值
                     * 
                     */
                    bool OcrLanguageHasBeenSet() const;

                    /**
                     * 获取开启智能文字识别的输入Index列表
                     * @return AiOcrInputIndexList 开启智能文字识别的输入Index列表
                     * 
                     */
                    std::vector<uint64_t> GetAiOcrInputIndexList() const;

                    /**
                     * 设置开启智能文字识别的输入Index列表
                     * @param _aiOcrInputIndexList 开启智能文字识别的输入Index列表
                     * 
                     */
                    void SetAiOcrInputIndexList(const std::vector<uint64_t>& _aiOcrInputIndexList);

                    /**
                     * 判断参数 AiOcrInputIndexList 是否已赋值
                     * @return AiOcrInputIndexList 是否已赋值
                     * 
                     */
                    bool AiOcrInputIndexListHasBeenSet() const;

                    /**
                     * 获取是否存储监播事件到监播报告，以及是否允许查询监播报告
                     * @return AllowMonitorReport 是否存储监播事件到监播报告，以及是否允许查询监播报告
                     * 
                     */
                    uint64_t GetAllowMonitorReport() const;

                    /**
                     * 设置是否存储监播事件到监播报告，以及是否允许查询监播报告
                     * @param _allowMonitorReport 是否存储监播事件到监播报告，以及是否允许查询监播报告
                     * 
                     */
                    void SetAllowMonitorReport(const uint64_t& _allowMonitorReport);

                    /**
                     * 判断参数 AllowMonitorReport 是否已赋值
                     * @return AllowMonitorReport 是否已赋值
                     * 
                     */
                    bool AllowMonitorReportHasBeenSet() const;

                    /**
                     * 获取是否开启格式诊断
                     * @return AiFormatDiagnose 是否开启格式诊断
                     * 
                     */
                    uint64_t GetAiFormatDiagnose() const;

                    /**
                     * 设置是否开启格式诊断
                     * @param _aiFormatDiagnose 是否开启格式诊断
                     * 
                     */
                    void SetAiFormatDiagnose(const uint64_t& _aiFormatDiagnose);

                    /**
                     * 判断参数 AiFormatDiagnose 是否已赋值
                     * @return AiFormatDiagnose 是否已赋值
                     * 
                     */
                    bool AiFormatDiagnoseHasBeenSet() const;

                    /**
                     * 获取是否开启内容质检。
                     * @return AiQualityControl 是否开启内容质检。
                     * 
                     */
                    uint64_t GetAiQualityControl() const;

                    /**
                     * 设置是否开启内容质检。
                     * @param _aiQualityControl 是否开启内容质检。
                     * 
                     */
                    void SetAiQualityControl(const uint64_t& _aiQualityControl);

                    /**
                     * 判断参数 AiQualityControl 是否已赋值
                     * @return AiQualityControl 是否已赋值
                     * 
                     */
                    bool AiQualityControlHasBeenSet() const;

                    /**
                     * 获取导播台监播对应的导播台场次id
                     * @return CasterId 导播台监播对应的导播台场次id
                     * 
                     */
                    std::string GetCasterId() const;

                    /**
                     * 设置导播台监播对应的导播台场次id
                     * @param _casterId 导播台监播对应的导播台场次id
                     * 
                     */
                    void SetCasterId(const std::string& _casterId);

                    /**
                     * 判断参数 CasterId 是否已赋值
                     * @return CasterId 是否已赋值
                     * 
                     */
                    bool CasterIdHasBeenSet() const;

                    /**
                     * 获取拉流转推监播对应的拉流转推任务id
                     * @return PullPushTaskId 拉流转推监播对应的拉流转推任务id
                     * 
                     */
                    std::string GetPullPushTaskId() const;

                    /**
                     * 设置拉流转推监播对应的拉流转推任务id
                     * @param _pullPushTaskId 拉流转推监播对应的拉流转推任务id
                     * 
                     */
                    void SetPullPushTaskId(const std::string& _pullPushTaskId);

                    /**
                     * 判断参数 PullPushTaskId 是否已赋值
                     * @return PullPushTaskId 是否已赋值
                     * 
                     */
                    bool PullPushTaskIdHasBeenSet() const;

                private:

                    /**
                     * 监播任务ID。
                     */
                    std::string m_monitorId;
                    bool m_monitorIdHasBeenSet;

                    /**
                     * 监播任务名称。128字节以内。
                     */
                    std::string m_monitorName;
                    bool m_monitorNameHasBeenSet;

                    /**
                     * 监播任务输出信息。
                     */
                    LiveStreamMonitorOutputInfo m_outputInfo;
                    bool m_outputInfoHasBeenSet;

                    /**
                     * 待监播的输入流信息。
                     */
                    std::vector<LiveStreamMonitorInputInfo> m_inputList;
                    bool m_inputListHasBeenSet;

                    /**
                     * 监播任务状态。
0： 代表空闲
1： 代表监播中。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 上一次的启动时间，unix时间戳。
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 上一次的停止时间，unix时间戳。
                     */
                    uint64_t m_stopTime;
                    bool m_stopTimeHasBeenSet;

                    /**
                     * 监播任务创建时间，unix时间戳
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 监播任务更新时间，unix时间戳
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 监播事件通知策略。
                     */
                    LiveStreamMonitorNotifyPolicy m_notifyPolicy;
                    bool m_notifyPolicyHasBeenSet;

                    /**
                     * 输出音频的输入Index列表。
                     */
                    std::vector<uint64_t> m_audibleInputIndexList;
                    bool m_audibleInputIndexListHasBeenSet;

                    /**
                     * 开启智能语音识别的输入Index列表
                     */
                    std::vector<uint64_t> m_aiAsrInputIndexList;
                    bool m_aiAsrInputIndexListHasBeenSet;

                    /**
                     * 是否开启断流检测
                     */
                    uint64_t m_checkStreamBroken;
                    bool m_checkStreamBrokenHasBeenSet;

                    /**
                     * 是否开启低帧率检测
                     */
                    uint64_t m_checkStreamLowFrameRate;
                    bool m_checkStreamLowFrameRateHasBeenSet;

                    /**
                     * 智能语音识别语种：
0 关闭 1 中文 2 英文 3日文 4 韩文
                     */
                    uint64_t m_asrLanguage;
                    bool m_asrLanguageHasBeenSet;

                    /**
                     * 智能文字识别语种：
0 关闭 1 中、英文
                     */
                    uint64_t m_ocrLanguage;
                    bool m_ocrLanguageHasBeenSet;

                    /**
                     * 开启智能文字识别的输入Index列表
                     */
                    std::vector<uint64_t> m_aiOcrInputIndexList;
                    bool m_aiOcrInputIndexListHasBeenSet;

                    /**
                     * 是否存储监播事件到监播报告，以及是否允许查询监播报告
                     */
                    uint64_t m_allowMonitorReport;
                    bool m_allowMonitorReportHasBeenSet;

                    /**
                     * 是否开启格式诊断
                     */
                    uint64_t m_aiFormatDiagnose;
                    bool m_aiFormatDiagnoseHasBeenSet;

                    /**
                     * 是否开启内容质检。
                     */
                    uint64_t m_aiQualityControl;
                    bool m_aiQualityControlHasBeenSet;

                    /**
                     * 导播台监播对应的导播台场次id
                     */
                    std::string m_casterId;
                    bool m_casterIdHasBeenSet;

                    /**
                     * 拉流转推监播对应的拉流转推任务id
                     */
                    std::string m_pullPushTaskId;
                    bool m_pullPushTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_LIVESTREAMMONITORINFO_H_
