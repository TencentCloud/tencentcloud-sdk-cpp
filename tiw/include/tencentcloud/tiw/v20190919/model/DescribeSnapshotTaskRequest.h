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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBESNAPSHOTTASKREQUEST_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBESNAPSHOTTASKREQUEST_H_

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
                * DescribeSnapshotTask请求参数结构体
                */
                class DescribeSnapshotTaskRequest : public AbstractModel
                {
                public:
                    DescribeSnapshotTaskRequest();
                    ~DescribeSnapshotTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询任务ID
                     * @return TaskID 查询任务ID
                     * 
                     */
                    std::string GetTaskID() const;

                    /**
                     * 设置查询任务ID
                     * @param _taskID 查询任务ID
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
                     * 获取任务SdkAppId
                     * @return SdkAppId 任务SdkAppId
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置任务SdkAppId
                     * @param _sdkAppId 任务SdkAppId
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                private:

                    /**
                     * 查询任务ID
                     */
                    std::string m_taskID;
                    bool m_taskIDHasBeenSet;

                    /**
                     * 任务SdkAppId
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBESNAPSHOTTASKREQUEST_H_
