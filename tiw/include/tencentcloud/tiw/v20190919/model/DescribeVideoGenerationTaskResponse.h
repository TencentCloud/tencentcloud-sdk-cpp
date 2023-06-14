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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEVIDEOGENERATIONTASKRESPONSE_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEVIDEOGENERATIONTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiw/v20190919/model/VideoInfo.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * DescribeVideoGenerationTask返回参数结构体
                */
                class DescribeVideoGenerationTaskResponse : public AbstractModel
                {
                public:
                    DescribeVideoGenerationTaskResponse();
                    ~DescribeVideoGenerationTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务对应的群组Id
                     * @return GroupId 任务对应的群组Id
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取任务对应的房间号
                     * @return RoomId 任务对应的房间号
                     * 
                     */
                    int64_t GetRoomId() const;

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取任务的Id
                     * @return TaskId 任务的Id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取已废弃
                     * @return Progress 已废弃
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取录制视频生成任务状态
- QUEUED: 正在排队
- PROCESSING: 正在生成视频
- FINISHED: 生成视频结束（成功完成或失败结束，可以通过错误码和错误信息进一步判断）
                     * @return Status 录制视频生成任务状态
- QUEUED: 正在排队
- PROCESSING: 正在生成视频
- FINISHED: 生成视频结束（成功完成或失败结束，可以通过错误码和错误信息进一步判断）
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取回放视频总时长,单位：毫秒
                     * @return TotalTime 回放视频总时长,单位：毫秒
                     * 
                     */
                    int64_t GetTotalTime() const;

                    /**
                     * 判断参数 TotalTime 是否已赋值
                     * @return TotalTime 是否已赋值
                     * 
                     */
                    bool TotalTimeHasBeenSet() const;

                    /**
                     * 获取已废弃，请使用`VideoInfoList`参数
                     * @return VideoInfos 已废弃，请使用`VideoInfoList`参数
                     * 
                     */
                    VideoInfo GetVideoInfos() const;

                    /**
                     * 判断参数 VideoInfos 是否已赋值
                     * @return VideoInfos 是否已赋值
                     * 
                     */
                    bool VideoInfosHasBeenSet() const;

                    /**
                     * 获取录制视频生成视频列表
                     * @return VideoInfoList 录制视频生成视频列表
                     * 
                     */
                    std::vector<VideoInfo> GetVideoInfoList() const;

                    /**
                     * 判断参数 VideoInfoList 是否已赋值
                     * @return VideoInfoList 是否已赋值
                     * 
                     */
                    bool VideoInfoListHasBeenSet() const;

                private:

                    /**
                     * 任务对应的群组Id
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 任务对应的房间号
                     */
                    int64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 任务的Id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 已废弃
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 录制视频生成任务状态
- QUEUED: 正在排队
- PROCESSING: 正在生成视频
- FINISHED: 生成视频结束（成功完成或失败结束，可以通过错误码和错误信息进一步判断）
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 回放视频总时长,单位：毫秒
                     */
                    int64_t m_totalTime;
                    bool m_totalTimeHasBeenSet;

                    /**
                     * 已废弃，请使用`VideoInfoList`参数
                     */
                    VideoInfo m_videoInfos;
                    bool m_videoInfosHasBeenSet;

                    /**
                     * 录制视频生成视频列表
                     */
                    std::vector<VideoInfo> m_videoInfoList;
                    bool m_videoInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEVIDEOGENERATIONTASKRESPONSE_H_
