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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEEXPORTJOBRESULTRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEEXPORTJOBRESULTRESPONSE_H_

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
                * DescribeExportJobResult返回参数结构体
                */
                class DescribeExportJobResultResponse : public AbstractModel
                {
                public:
                    DescribeExportJobResultResponse();
                    ~DescribeExportJobResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取导出的状态。取值为, SUCCESS:成功、FAILURE:失败，RUNNING: 进行中。
                     * @return ExportStatus 导出的状态。取值为, SUCCESS:成功、FAILURE:失败，RUNNING: 进行中。
                     * 
                     */
                    std::string GetExportStatus() const;

                    /**
                     * 判断参数 ExportStatus 是否已赋值
                     * @return ExportStatus 是否已赋值
                     * 
                     */
                    bool ExportStatusHasBeenSet() const;

                    /**
                     * 获取返回下载URL
                     * @return DownloadURL 返回下载URL
                     * 
                     */
                    std::string GetDownloadURL() const;

                    /**
                     * 判断参数 DownloadURL 是否已赋值
                     * @return DownloadURL 是否已赋值
                     * 
                     */
                    bool DownloadURLHasBeenSet() const;

                    /**
                     * 获取当ExportStatus为RUNNING时，返回导出进度。0~100范围的浮点数。
                     * @return ExportProgress 当ExportStatus为RUNNING时，返回导出进度。0~100范围的浮点数。
                     * 
                     */
                    double GetExportProgress() const;

                    /**
                     * 判断参数 ExportProgress 是否已赋值
                     * @return ExportProgress 是否已赋值
                     * 
                     */
                    bool ExportProgressHasBeenSet() const;

                    /**
                     * 获取失败原因
                     * @return FailureMsg 失败原因
                     * 
                     */
                    std::string GetFailureMsg() const;

                    /**
                     * 判断参数 FailureMsg 是否已赋值
                     * @return FailureMsg 是否已赋值
                     * 
                     */
                    bool FailureMsgHasBeenSet() const;

                private:

                    /**
                     * 导出的状态。取值为, SUCCESS:成功、FAILURE:失败，RUNNING: 进行中。
                     */
                    std::string m_exportStatus;
                    bool m_exportStatusHasBeenSet;

                    /**
                     * 返回下载URL
                     */
                    std::string m_downloadURL;
                    bool m_downloadURLHasBeenSet;

                    /**
                     * 当ExportStatus为RUNNING时，返回导出进度。0~100范围的浮点数。
                     */
                    double m_exportProgress;
                    bool m_exportProgressHasBeenSet;

                    /**
                     * 失败原因
                     */
                    std::string m_failureMsg;
                    bool m_failureMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEEXPORTJOBRESULTRESPONSE_H_
