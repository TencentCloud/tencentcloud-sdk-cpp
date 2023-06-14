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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_RECORDTASKSEARCHRESULT_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_RECORDTASKSEARCHRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiw/v20190919/model/RecordTaskResult.h>


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
                class RecordTaskSearchResult : public AbstractModel
                {
                public:
                    RecordTaskSearchResult();
                    ~RecordTaskSearchResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务唯一ID
                     * @return TaskId 任务唯一ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务唯一ID
                     * @param _taskId 任务唯一ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取实时录制任务状态
- PAUSED: 录制已暂停
- PREPARED: 录制在准备阶段
- RECORDING: 正在录制
- STOPPED：录制已停止
- FINISHED: 录制已结束
                     * @return Status 实时录制任务状态
- PAUSED: 录制已暂停
- PREPARED: 录制在准备阶段
- RECORDING: 正在录制
- STOPPED：录制已停止
- FINISHED: 录制已结束
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置实时录制任务状态
- PAUSED: 录制已暂停
- PREPARED: 录制在准备阶段
- RECORDING: 正在录制
- STOPPED：录制已停止
- FINISHED: 录制已结束
                     * @param _status 实时录制任务状态
- PAUSED: 录制已暂停
- PREPARED: 录制在准备阶段
- RECORDING: 正在录制
- STOPPED：录制已停止
- FINISHED: 录制已结束
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取实时录制房间号
                     * @return RoomId 实时录制房间号
                     * 
                     */
                    int64_t GetRoomId() const;

                    /**
                     * 设置实时录制房间号
                     * @param _roomId 实时录制房间号
                     * 
                     */
                    void SetRoomId(const int64_t& _roomId);

                    /**
                     * 判断参数 RoomId 是否已赋值
                     * @return RoomId 是否已赋值
                     * 
                     */
                    bool RoomIdHasBeenSet() const;

                    /**
                     * 获取任务创建时间
                     * @return CreateTime 任务创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置任务创建时间
                     * @param _createTime 任务创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取用户应用SdkAppId
                     * @return SdkAppId 用户应用SdkAppId
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置用户应用SdkAppId
                     * @param _sdkAppId 用户应用SdkAppId
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取实时录制结果
                     * @return Result 实时录制结果
                     * 
                     */
                    RecordTaskResult GetResult() const;

                    /**
                     * 设置实时录制结果
                     * @param _result 实时录制结果
                     * 
                     */
                    void SetResult(const RecordTaskResult& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * 任务唯一ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 实时录制任务状态
- PAUSED: 录制已暂停
- PREPARED: 录制在准备阶段
- RECORDING: 正在录制
- STOPPED：录制已停止
- FINISHED: 录制已结束
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实时录制房间号
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
                     * 实时录制结果
                     */
                    RecordTaskResult m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_RECORDTASKSEARCHRESULT_H_
