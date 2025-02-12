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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEFILECOUNTERSIGNRESULTRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEFILECOUNTERSIGNRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * DescribeFileCounterSignResult返回参数结构体
                */
                class DescribeFileCounterSignResultResponse : public AbstractModel
                {
                public:
                    DescribeFileCounterSignResultResponse();
                    ~DescribeFileCounterSignResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取加签任务的状态。

<ul>
<li><b>PROCESSING</b>: 任务正在执行中。</li>
<li><b>FINISHED</b>: 已执行成功</li>
<li><b>FAILED</b>: 执行失败</li>
</ul>
                     * @return Status 加签任务的状态。

<ul>
<li><b>PROCESSING</b>: 任务正在执行中。</li>
<li><b>FINISHED</b>: 已执行成功</li>
<li><b>FAILED</b>: 执行失败</li>
</ul>
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
                     * 获取加签完成后新的文件Id
                     * @return ResultFileId 加签完成后新的文件Id
                     * 
                     */
                    std::string GetResultFileId() const;

                    /**
                     * 判断参数 ResultFileId 是否已赋值
                     * @return ResultFileId 是否已赋值
                     * 
                     */
                    bool ResultFileIdHasBeenSet() const;

                    /**
                     * 获取失败的错误信息，加签任务失败的情况下会返回。
                     * @return ErrorDetail 失败的错误信息，加签任务失败的情况下会返回。
                     * 
                     */
                    std::string GetErrorDetail() const;

                    /**
                     * 判断参数 ErrorDetail 是否已赋值
                     * @return ErrorDetail 是否已赋值
                     * 
                     */
                    bool ErrorDetailHasBeenSet() const;

                private:

                    /**
                     * 加签任务的状态。

<ul>
<li><b>PROCESSING</b>: 任务正在执行中。</li>
<li><b>FINISHED</b>: 已执行成功</li>
<li><b>FAILED</b>: 执行失败</li>
</ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 加签完成后新的文件Id
                     */
                    std::string m_resultFileId;
                    bool m_resultFileIdHasBeenSet;

                    /**
                     * 失败的错误信息，加签任务失败的情况下会返回。
                     */
                    std::string m_errorDetail;
                    bool m_errorDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEFILECOUNTERSIGNRESULTRESPONSE_H_
