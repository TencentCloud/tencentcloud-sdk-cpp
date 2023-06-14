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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBERUNNINGTASKSREQUEST_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBERUNNINGTASKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeRunningTasks请求参数结构体
                */
                class DescribeRunningTasksRequest : public AbstractModel
                {
                public:
                    DescribeRunningTasksRequest();
                    ~DescribeRunningTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用的SdkAppID
                     * @return SdkAppID 应用的SdkAppID
                     * 
                     */
                    int64_t GetSdkAppID() const;

                    /**
                     * 设置应用的SdkAppID
                     * @param _sdkAppID 应用的SdkAppID
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
                     * 获取指定需要获取的任务类型。
有效取值如下：
- TranscodeH5: 动态转码任务，文档转HTML5页面
- TranscodeJPG: 静态转码任务，文档转图片
- WhiteboardPush: 白板推流任务
- OnlineRecord: 实时录制任务
                     * @return TaskType 指定需要获取的任务类型。
有效取值如下：
- TranscodeH5: 动态转码任务，文档转HTML5页面
- TranscodeJPG: 静态转码任务，文档转图片
- WhiteboardPush: 白板推流任务
- OnlineRecord: 实时录制任务
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置指定需要获取的任务类型。
有效取值如下：
- TranscodeH5: 动态转码任务，文档转HTML5页面
- TranscodeJPG: 静态转码任务，文档转图片
- WhiteboardPush: 白板推流任务
- OnlineRecord: 实时录制任务
                     * @param _taskType 指定需要获取的任务类型。
有效取值如下：
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
                     * 获取分页获取时的任务偏移量，默认为0。
                     * @return Offset 分页获取时的任务偏移量，默认为0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页获取时的任务偏移量，默认为0。
                     * @param _offset 分页获取时的任务偏移量，默认为0。
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取每次获取任务列表时最大获取任务数，默认值为100。
有效取值范围：[1, 500]
                     * @return Limit 每次获取任务列表时最大获取任务数，默认值为100。
有效取值范围：[1, 500]
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每次获取任务列表时最大获取任务数，默认值为100。
有效取值范围：[1, 500]
                     * @param _limit 每次获取任务列表时最大获取任务数，默认值为100。
有效取值范围：[1, 500]
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 应用的SdkAppID
                     */
                    int64_t m_sdkAppID;
                    bool m_sdkAppIDHasBeenSet;

                    /**
                     * 指定需要获取的任务类型。
有效取值如下：
- TranscodeH5: 动态转码任务，文档转HTML5页面
- TranscodeJPG: 静态转码任务，文档转图片
- WhiteboardPush: 白板推流任务
- OnlineRecord: 实时录制任务
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 分页获取时的任务偏移量，默认为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每次获取任务列表时最大获取任务数，默认值为100。
有效取值范围：[1, 500]
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBERUNNINGTASKSREQUEST_H_
