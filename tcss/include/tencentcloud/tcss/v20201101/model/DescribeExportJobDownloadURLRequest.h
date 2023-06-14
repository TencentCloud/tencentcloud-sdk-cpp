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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEEXPORTJOBDOWNLOADURLREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEEXPORTJOBDOWNLOADURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeExportJobDownloadURL请求参数结构体
                */
                class DescribeExportJobDownloadURLRequest : public AbstractModel
                {
                public:
                    DescribeExportJobDownloadURLRequest();
                    ~DescribeExportJobDownloadURLRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务ID
                     * @return JobID 任务ID
                     * 
                     */
                    std::string GetJobID() const;

                    /**
                     * 设置任务ID
                     * @param _jobID 任务ID
                     * 
                     */
                    void SetJobID(const std::string& _jobID);

                    /**
                     * 判断参数 JobID 是否已赋值
                     * @return JobID 是否已赋值
                     * 
                     */
                    bool JobIDHasBeenSet() const;

                private:

                    /**
                     * 任务ID
                     */
                    std::string m_jobID;
                    bool m_jobIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEEXPORTJOBDOWNLOADURLREQUEST_H_
