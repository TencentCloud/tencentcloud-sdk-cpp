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

#ifndef TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEAGEDETECTTASKREQUEST_H_
#define TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEAGEDETECTTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gme
    {
        namespace V20180711
        {
            namespace Model
            {
                /**
                * DescribeAgeDetectTask请求参数结构体
                */
                class DescribeAgeDetectTaskRequest : public AbstractModel
                {
                public:
                    DescribeAgeDetectTaskRequest();
                    ~DescribeAgeDetectTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用id
                     * @return BizId 应用id
                     * 
                     */
                    int64_t GetBizId() const;

                    /**
                     * 设置应用id
                     * @param _bizId 应用id
                     * 
                     */
                    void SetBizId(const int64_t& _bizId);

                    /**
                     * 判断参数 BizId 是否已赋值
                     * @return BizId 是否已赋值
                     * 
                     */
                    bool BizIdHasBeenSet() const;

                    /**
                     * 获取[创建年龄语音识别任务](https://cloud.tencent.com/document/product/607/60620)时返回的taskid
                     * @return TaskId [创建年龄语音识别任务](https://cloud.tencent.com/document/product/607/60620)时返回的taskid
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置[创建年龄语音识别任务](https://cloud.tencent.com/document/product/607/60620)时返回的taskid
                     * @param _taskId [创建年龄语音识别任务](https://cloud.tencent.com/document/product/607/60620)时返回的taskid
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                private:

                    /**
                     * 应用id
                     */
                    int64_t m_bizId;
                    bool m_bizIdHasBeenSet;

                    /**
                     * [创建年龄语音识别任务](https://cloud.tencent.com/document/product/607/60620)时返回的taskid
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GME_V20180711_MODEL_DESCRIBEAGEDETECTTASKREQUEST_H_
