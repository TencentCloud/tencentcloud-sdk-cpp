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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBECLOUDRECORDINGRESPONSE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBECLOUDRECORDINGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/StorageFile.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * DescribeCloudRecording返回参数结构体
                */
                class DescribeCloudRecordingResponse : public AbstractModel
                {
                public:
                    DescribeCloudRecordingResponse();
                    ~DescribeCloudRecordingResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取录制任务的唯一Id。
                     * @return TaskId 录制任务的唯一Id。
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
                     * 获取云端录制任务的状态信息。
Idle：表示当前录制任务空闲中
InProgress：表示当前录制任务正在进行中。
Exited：表示当前录制任务正在退出的过程中。
                     * @return Status 云端录制任务的状态信息。
Idle：表示当前录制任务空闲中
InProgress：表示当前录制任务正在进行中。
Exited：表示当前录制任务正在退出的过程中。
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
                     * 获取录制文件信息。
                     * @return StorageFileList 录制文件信息。
                     * 
                     */
                    std::vector<StorageFile> GetStorageFileList() const;

                    /**
                     * 判断参数 StorageFileList 是否已赋值
                     * @return StorageFileList 是否已赋值
                     * 
                     */
                    bool StorageFileListHasBeenSet() const;

                    /**
                     * 获取转推录制任务发起时所填，标识一次录制
                     * @return RecorderKey 转推录制任务发起时所填，标识一次录制
                     * 
                     */
                    std::string GetRecorderKey() const;

                    /**
                     * 判断参数 RecorderKey 是否已赋值
                     * @return RecorderKey 是否已赋值
                     * 
                     */
                    bool RecorderKeyHasBeenSet() const;

                private:

                    /**
                     * 录制任务的唯一Id。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 云端录制任务的状态信息。
Idle：表示当前录制任务空闲中
InProgress：表示当前录制任务正在进行中。
Exited：表示当前录制任务正在退出的过程中。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 录制文件信息。
                     */
                    std::vector<StorageFile> m_storageFileList;
                    bool m_storageFileListHasBeenSet;

                    /**
                     * 转推录制任务发起时所填，标识一次录制
                     */
                    std::string m_recorderKey;
                    bool m_recorderKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBECLOUDRECORDINGRESPONSE_H_
