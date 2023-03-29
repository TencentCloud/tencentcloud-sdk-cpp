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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_RECORDTASKRESULT_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_RECORDTASKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiw/v20190919/model/VideoInfo.h>
#include <tencentcloud/tiw/v20190919/model/OmittedDuration.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * 实时录制结果
                */
                class RecordTaskResult : public AbstractModel
                {
                public:
                    RecordTaskResult();
                    ~RecordTaskResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取AUTO - 自动停止录制， USER_CALL - 用户主动调用停止录制
                     * @return FinishReason AUTO - 自动停止录制， USER_CALL - 用户主动调用停止录制
                     */
                    std::string GetFinishReason() const;

                    /**
                     * 设置AUTO - 自动停止录制， USER_CALL - 用户主动调用停止录制
                     * @param FinishReason AUTO - 自动停止录制， USER_CALL - 用户主动调用停止录制
                     */
                    void SetFinishReason(const std::string& _finishReason);

                    /**
                     * 判断参数 FinishReason 是否已赋值
                     * @return FinishReason 是否已赋值
                     */
                    bool FinishReasonHasBeenSet() const;

                    /**
                     * 获取异常数
                     * @return ExceptionCnt 异常数
                     */
                    int64_t GetExceptionCnt() const;

                    /**
                     * 设置异常数
                     * @param ExceptionCnt 异常数
                     */
                    void SetExceptionCnt(const int64_t& _exceptionCnt);

                    /**
                     * 判断参数 ExceptionCnt 是否已赋值
                     * @return ExceptionCnt 是否已赋值
                     */
                    bool ExceptionCntHasBeenSet() const;

                    /**
                     * 获取房间号
                     * @return RoomId 房间号
                     */
                    int64_t GetRoomId() const;

                    /**
                     * 设置房间号
                     * @param RoomId 房间号
                     */
                    void SetRoomId(const int64_t& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取分组
                     * @return GroupId 分组
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置分组
                     * @param GroupId 分组
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取录制真实开始时间
                     * @return RecordStartTime 录制真实开始时间
                     */
                    int64_t GetRecordStartTime() const;

                    /**
                     * 设置录制真实开始时间
                     * @param RecordStartTime 录制真实开始时间
                     */
                    void SetRecordStartTime(const int64_t& _recordStartTime);

                    /**
                     * 判断参数 RecordStartTime 是否已赋值
                     * @return RecordStartTime 是否已赋值
                     */
                    bool RecordStartTimeHasBeenSet() const;

                    /**
                     * 获取录制结束时间
                     * @return RecordStopTime 录制结束时间
                     */
                    int64_t GetRecordStopTime() const;

                    /**
                     * 设置录制结束时间
                     * @param RecordStopTime 录制结束时间
                     */
                    void SetRecordStopTime(const int64_t& _recordStopTime);

                    /**
                     * 判断参数 RecordStopTime 是否已赋值
                     * @return RecordStopTime 是否已赋值
                     */
                    bool RecordStopTimeHasBeenSet() const;

                    /**
                     * 获取录制总时长
                     * @return TotalTime 录制总时长
                     */
                    int64_t GetTotalTime() const;

                    /**
                     * 设置录制总时长
                     * @param TotalTime 录制总时长
                     */
                    void SetTotalTime(const int64_t& _totalTime);

                    /**
                     * 判断参数 TotalTime 是否已赋值
                     * @return TotalTime 是否已赋值
                     */
                    bool TotalTimeHasBeenSet() const;

                    /**
                     * 获取视频信息列表
                     * @return VideoInfos 视频信息列表
                     */
                    std::vector<VideoInfo> GetVideoInfos() const;

                    /**
                     * 设置视频信息列表
                     * @param VideoInfos 视频信息列表
                     */
                    void SetVideoInfos(const std::vector<VideoInfo>& _videoInfos);

                    /**
                     * 判断参数 VideoInfos 是否已赋值
                     * @return VideoInfos 是否已赋值
                     */
                    bool VideoInfosHasBeenSet() const;

                    /**
                     * 获取被忽略的视频时间段
                     * @return OmittedDurations 被忽略的视频时间段
                     */
                    std::vector<OmittedDuration> GetOmittedDurations() const;

                    /**
                     * 设置被忽略的视频时间段
                     * @param OmittedDurations 被忽略的视频时间段
                     */
                    void SetOmittedDurations(const std::vector<OmittedDuration>& _omittedDurations);

                    /**
                     * 判断参数 OmittedDurations 是否已赋值
                     * @return OmittedDurations 是否已赋值
                     */
                    bool OmittedDurationsHasBeenSet() const;

                    /**
                     * 获取详情
                     * @return Details 详情
                     */
                    std::string GetDetails() const;

                    /**
                     * 设置详情
                     * @param Details 详情
                     */
                    void SetDetails(const std::string& _details);

                    /**
                     * 判断参数 Details 是否已赋值
                     * @return Details 是否已赋值
                     */
                    bool DetailsHasBeenSet() const;

                    /**
                     * 获取任务失败错误码
                     * @return ErrorCode 任务失败错误码
                     */
                    int64_t GetErrorCode() const;

                    /**
                     * 设置任务失败错误码
                     * @param ErrorCode 任务失败错误码
                     */
                    void SetErrorCode(const int64_t& _errorCode);

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取错误信息
                     * @return ErrorMsg 错误信息
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 设置错误信息
                     * @param ErrorMsg 错误信息
                     */
                    void SetErrorMsg(const std::string& _errorMsg);

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     */
                    bool ErrorMsgHasBeenSet() const;

                private:

                    /**
                     * AUTO - 自动停止录制， USER_CALL - 用户主动调用停止录制
                     */
                    std::string m_finishReason;
                    bool m_finishReasonHasBeenSet;

                    /**
                     * 异常数
                     */
                    int64_t m_exceptionCnt;
                    bool m_exceptionCntHasBeenSet;

                    /**
                     * 房间号
                     */
                    int64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 分组
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 录制真实开始时间
                     */
                    int64_t m_recordStartTime;
                    bool m_recordStartTimeHasBeenSet;

                    /**
                     * 录制结束时间
                     */
                    int64_t m_recordStopTime;
                    bool m_recordStopTimeHasBeenSet;

                    /**
                     * 录制总时长
                     */
                    int64_t m_totalTime;
                    bool m_totalTimeHasBeenSet;

                    /**
                     * 视频信息列表
                     */
                    std::vector<VideoInfo> m_videoInfos;
                    bool m_videoInfosHasBeenSet;

                    /**
                     * 被忽略的视频时间段
                     */
                    std::vector<OmittedDuration> m_omittedDurations;
                    bool m_omittedDurationsHasBeenSet;

                    /**
                     * 详情
                     */
                    std::string m_details;
                    bool m_detailsHasBeenSet;

                    /**
                     * 任务失败错误码
                     */
                    int64_t m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * 错误信息
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_RECORDTASKRESULT_H_
