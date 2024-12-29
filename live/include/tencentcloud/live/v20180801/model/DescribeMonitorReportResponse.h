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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEMONITORREPORTRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEMONITORREPORTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/MPSResult.h>
#include <tencentcloud/live/v20180801/model/DiagnoseResult.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeMonitorReport返回参数结构体
                */
                class DescribeMonitorReportResponse : public AbstractModel
                {
                public:
                    DescribeMonitorReportResponse();
                    ~DescribeMonitorReportResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取媒体处理结果信息。
                     * @return MPSResult 媒体处理结果信息。
                     * 
                     */
                    MPSResult GetMPSResult() const;

                    /**
                     * 判断参数 MPSResult 是否已赋值
                     * @return MPSResult 是否已赋值
                     * 
                     */
                    bool MPSResultHasBeenSet() const;

                    /**
                     * 获取媒体诊断结果信息。
                     * @return DiagnoseResult 媒体诊断结果信息。
                     * 
                     */
                    DiagnoseResult GetDiagnoseResult() const;

                    /**
                     * 判断参数 DiagnoseResult 是否已赋值
                     * @return DiagnoseResult 是否已赋值
                     * 
                     */
                    bool DiagnoseResultHasBeenSet() const;

                private:

                    /**
                     * 媒体处理结果信息。
                     */
                    MPSResult m_mPSResult;
                    bool m_mPSResultHasBeenSet;

                    /**
                     * 媒体诊断结果信息。
                     */
                    DiagnoseResult m_diagnoseResult;
                    bool m_diagnoseResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEMONITORREPORTRESPONSE_H_
