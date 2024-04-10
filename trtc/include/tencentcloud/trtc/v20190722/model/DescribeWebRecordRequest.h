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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEWEBRECORDREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEWEBRECORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * DescribeWebRecord请求参数结构体
                */
                class DescribeWebRecordRequest : public AbstractModel
                {
                public:
                    DescribeWebRecordRequest();
                    ~DescribeWebRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开始页面录制时返回的任务id
                     * @return TaskId 开始页面录制时返回的任务id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置开始页面录制时返回的任务id
                     * @param _taskId 开始页面录制时返回的任务id
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
                     * 获取发起页面录制时传递的SdkAppId
                     * @return SdkAppId 发起页面录制时传递的SdkAppId
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置发起页面录制时传递的SdkAppId
                     * @param _sdkAppId 发起页面录制时传递的SdkAppId
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
                     * 获取发起录制时传递的RecordId, 传入此值时需要传递SdkAppId
                     * @return RecordId 发起录制时传递的RecordId, 传入此值时需要传递SdkAppId
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置发起录制时传递的RecordId, 传入此值时需要传递SdkAppId
                     * @param _recordId 发起录制时传递的RecordId, 传入此值时需要传递SdkAppId
                     * 
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                private:

                    /**
                     * 开始页面录制时返回的任务id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 发起页面录制时传递的SdkAppId
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 发起录制时传递的RecordId, 传入此值时需要传递SdkAppId
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEWEBRECORDREQUEST_H_
