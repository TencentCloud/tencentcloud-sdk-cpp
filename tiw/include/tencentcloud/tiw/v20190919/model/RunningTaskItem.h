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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_RUNNINGTASKITEM_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_RUNNINGTASKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * 正在运行的任务列表项
                */
                class RunningTaskItem : public AbstractModel
                {
                public:
                    RunningTaskItem();
                    ~RunningTaskItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用SdkAppID
                     * @return SdkAppID 应用SdkAppID
                     * 
                     */
                    int64_t GetSdkAppID() const;

                    /**
                     * 设置应用SdkAppID
                     * @param _sdkAppID 应用SdkAppID
                     * 
                     */
                    void SetSdkAppID(const int64_t& _sdkAppID);

                    /**
                     * 判断参数 SdkAppID 是否已赋值
                     * @return SdkAppID 是否已赋值
                     * 
                     */
                    bool SdkAppIDHasBeenSet() const;

                    /**
                     * 获取任务ID
                     * @return TaskID 任务ID
                     * 
                     */
                    std::string GetTaskID() const;

                    /**
                     * 设置任务ID
                     * @param _taskID 任务ID
                     * 
                     */
                    void SetTaskID(const std::string& _taskID);

                    /**
                     * 判断参数 TaskID 是否已赋值
                     * @return TaskID 是否已赋值
                     * 
                     */
                    bool TaskIDHasBeenSet() const;

                    /**
                     * 获取任务类型
- TranscodeH5: 动态转码任务，文档转HTML5页面
- TranscodeJPG: 静态转码任务，文档转图片
- WhiteboardPush: 白板推流任务
- OnlineRecord: 实时录制任务
                     * @return TaskType 任务类型
- TranscodeH5: 动态转码任务，文档转HTML5页面
- TranscodeJPG: 静态转码任务，文档转图片
- WhiteboardPush: 白板推流任务
- OnlineRecord: 实时录制任务
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置任务类型
- TranscodeH5: 动态转码任务，文档转HTML5页面
- TranscodeJPG: 静态转码任务，文档转图片
- WhiteboardPush: 白板推流任务
- OnlineRecord: 实时录制任务
                     * @param _taskType 任务类型
- TranscodeH5: 动态转码任务，文档转HTML5页面
- TranscodeJPG: 静态转码任务，文档转图片
- WhiteboardPush: 白板推流任务
- OnlineRecord: 实时录制任务
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

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
                     * 获取任务取消时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CancelTime 任务取消时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCancelTime() const;

                    /**
                     * 设置任务取消时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cancelTime 任务取消时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCancelTime(const std::string& _cancelTime);

                    /**
                     * 判断参数 CancelTime 是否已赋值
                     * @return CancelTime 是否已赋值
                     * 
                     */
                    bool CancelTimeHasBeenSet() const;

                    /**
                     * 获取任务状态
- QUEUED: 任务正在排队等待执行中
- PROCESSING: 任务正在执行中 
- FINISHED: 任务已完成
                     * @return Status 任务状态
- QUEUED: 任务正在排队等待执行中
- PROCESSING: 任务正在执行中 
- FINISHED: 任务已完成
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态
- QUEUED: 任务正在排队等待执行中
- PROCESSING: 任务正在执行中 
- FINISHED: 任务已完成
                     * @param _status 任务状态
- QUEUED: 任务正在排队等待执行中
- PROCESSING: 任务正在执行中 
- FINISHED: 任务已完成
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
                     * 获取任务当前进度
                     * @return Progress 任务当前进度
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 设置任务当前进度
                     * @param _progress 任务当前进度
                     * 
                     */
                    void SetProgress(const int64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取转码任务中转码文件的原始URL
此参数只有任务类型为TranscodeH5、TranscodeJPG类型时才会有有效值。其他任务类型为空字符串。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileURL 转码任务中转码文件的原始URL
此参数只有任务类型为TranscodeH5、TranscodeJPG类型时才会有有效值。其他任务类型为空字符串。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileURL() const;

                    /**
                     * 设置转码任务中转码文件的原始URL
此参数只有任务类型为TranscodeH5、TranscodeJPG类型时才会有有效值。其他任务类型为空字符串。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileURL 转码任务中转码文件的原始URL
此参数只有任务类型为TranscodeH5、TranscodeJPG类型时才会有有效值。其他任务类型为空字符串。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileURL(const std::string& _fileURL);

                    /**
                     * 判断参数 FileURL 是否已赋值
                     * @return FileURL 是否已赋值
                     * 
                     */
                    bool FileURLHasBeenSet() const;

                    /**
                     * 获取房间号

当任务类型为TranscodeH5、TranscodeJPG时，房间号为0。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RoomID 房间号

当任务类型为TranscodeH5、TranscodeJPG时，房间号为0。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRoomID() const;

                    /**
                     * 设置房间号

当任务类型为TranscodeH5、TranscodeJPG时，房间号为0。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _roomID 房间号

当任务类型为TranscodeH5、TranscodeJPG时，房间号为0。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRoomID(const int64_t& _roomID);

                    /**
                     * 判断参数 RoomID 是否已赋值
                     * @return RoomID 是否已赋值
                     * 
                     */
                    bool RoomIDHasBeenSet() const;

                private:

                    /**
                     * 应用SdkAppID
                     */
                    int64_t m_sdkAppID;
                    bool m_sdkAppIDHasBeenSet;

                    /**
                     * 任务ID
                     */
                    std::string m_taskID;
                    bool m_taskIDHasBeenSet;

                    /**
                     * 任务类型
- TranscodeH5: 动态转码任务，文档转HTML5页面
- TranscodeJPG: 静态转码任务，文档转图片
- WhiteboardPush: 白板推流任务
- OnlineRecord: 实时录制任务
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 任务创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 任务取消时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cancelTime;
                    bool m_cancelTimeHasBeenSet;

                    /**
                     * 任务状态
- QUEUED: 任务正在排队等待执行中
- PROCESSING: 任务正在执行中 
- FINISHED: 任务已完成
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务当前进度
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 转码任务中转码文件的原始URL
此参数只有任务类型为TranscodeH5、TranscodeJPG类型时才会有有效值。其他任务类型为空字符串。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileURL;
                    bool m_fileURLHasBeenSet;

                    /**
                     * 房间号

当任务类型为TranscodeH5、TranscodeJPG时，房间号为0。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_roomID;
                    bool m_roomIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_RUNNINGTASKITEM_H_
