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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBETASKINFORESPONSE_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBETASKINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gme/v20180711/model/SubscribeRecordUserIds.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * DescribeTaskInfo返回参数结构体
                */
                class DescribeTaskInfoResponse : public AbstractModel
                {
                public:
                    DescribeTaskInfoResponse();
                    ~DescribeTaskInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取进行中的任务taskid（StartRecord接口返回）。
                     * @return TaskId 进行中的任务taskid（StartRecord接口返回）。
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取录制类型：1代表单流 2代表混流 3代表单流和混流。
                     * @return RecordMode 录制类型：1代表单流 2代表混流 3代表单流和混流。
                     * 
                     */
                    uint64_t GetRecordMode() const;

                    /**
                     * 判断参数 RecordMode 是否已赋值
                     * @return RecordMode 是否已赋值
                     * 
                     */
                    bool RecordModeHasBeenSet() const;

                    /**
                     * 获取指定订阅流白名单或者黑名单。
                     * @return SubscribeRecordUserIds 指定订阅流白名单或者黑名单。
                     * 
                     */
                    SubscribeRecordUserIds GetSubscribeRecordUserIds() const;

                    /**
                     * 判断参数 SubscribeRecordUserIds 是否已赋值
                     * @return SubscribeRecordUserIds 是否已赋值
                     * 
                     */
                    bool SubscribeRecordUserIdsHasBeenSet() const;

                private:

                    /**
                     * 进行中的任务taskid（StartRecord接口返回）。
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 录制类型：1代表单流 2代表混流 3代表单流和混流。
                     */
                    uint64_t m_recordMode;
                    bool m_recordModeHasBeenSet;

                    /**
                     * 指定订阅流白名单或者黑名单。
                     */
                    SubscribeRecordUserIds m_subscribeRecordUserIds;
                    bool m_subscribeRecordUserIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBETASKINFORESPONSE_H_
