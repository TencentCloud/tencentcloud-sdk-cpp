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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_WHITEBOARDPUSHTASKSEARCHRESULT_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_WHITEBOARDPUSHTASKSEARCHRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiw/v20190919/model/WhiteboardPushResult.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * 实时录制任务搜索结果
                */
                class WhiteboardPushTaskSearchResult : public AbstractModel
                {
                public:
                    WhiteboardPushTaskSearchResult();
                    ~WhiteboardPushTaskSearchResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务唯一ID
                     * @return TaskId 任务唯一ID
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务唯一ID
                     * @param TaskId 任务唯一ID
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取白板推流任务状态
- PREPARED: 推流在准备阶段
- PUSHING: 正在推流
- STOPPED：推流已停止
                     * @return Status 白板推流任务状态
- PREPARED: 推流在准备阶段
- PUSHING: 正在推流
- STOPPED：推流已停止
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置白板推流任务状态
- PREPARED: 推流在准备阶段
- PUSHING: 正在推流
- STOPPED：推流已停止
                     * @param Status 白板推流任务状态
- PREPARED: 推流在准备阶段
- PUSHING: 正在推流
- STOPPED：推流已停止
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取白板推流房间号
                     * @return RoomId 白板推流房间号
                     */
                    int64_t GetRoomId() const;

                    /**
                     * 设置白板推流房间号
                     * @param RoomId 白板推流房间号
                     */
                    void SetRoomId(const int64_t& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取任务创建时间
                     * @return CreateTime 任务创建时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置任务创建时间
                     * @param CreateTime 任务创建时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取用户应用SdkAppId
                     * @return SdkAppId 用户应用SdkAppId
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置用户应用SdkAppId
                     * @param SdkAppId 用户应用SdkAppId
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取白板推流结果
                     * @return Result 白板推流结果
                     */
                    WhiteboardPushResult GetResult() const;

                    /**
                     * 设置白板推流结果
                     * @param Result 白板推流结果
                     */
                    void SetResult(const WhiteboardPushResult& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取白板推流用户ID
                     * @return PushUserId 白板推流用户ID
                     */
                    std::string GetPushUserId() const;

                    /**
                     * 设置白板推流用户ID
                     * @param PushUserId 白板推流用户ID
                     */
                    void SetPushUserId(const std::string& _pushUserId);

                    /**
                     * 判断参数 PushUserId 是否已赋值
                     * @return PushUserId 是否已赋值
                     */
                    bool PushUserIdHasBeenSet() const;

                private:

                    /**
                     * 任务唯一ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 白板推流任务状态
- PREPARED: 推流在准备阶段
- PUSHING: 正在推流
- STOPPED：推流已停止
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 白板推流房间号
                     */
                    int64_t m_roomId;
                    bool m_roomIdHasBeenSet;

                    /**
                     * 任务创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 用户应用SdkAppId
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 白板推流结果
                     */
                    WhiteboardPushResult m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 白板推流用户ID
                     */
                    std::string m_pushUserId;
                    bool m_pushUserIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_WHITEBOARDPUSHTASKSEARCHRESULT_H_
