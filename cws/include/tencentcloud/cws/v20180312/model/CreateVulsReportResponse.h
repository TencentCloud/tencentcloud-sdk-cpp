/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CWS_V20180312_MODEL_CREATEVULSREPORTRESPONSE_H_
#define TENCENTCLOUD_CWS_V20180312_MODEL_CREATEVULSREPORTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cws
    {
        namespace V20180312
        {
            namespace Model
            {
                /**
                * CreateVulsReport返回参数结构体
                */
                class CreateVulsReportResponse : public AbstractModel
                {
                public:
                    CreateVulsReportResponse();
                    ~CreateVulsReportResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取报告下载地址
                     * @return ReportFileUrl 报告下载地址
                     * 
                     */
                    std::string GetReportFileUrl() const;

                    /**
                     * 判断参数 ReportFileUrl 是否已赋值
                     * @return ReportFileUrl 是否已赋值
                     * 
                     */
                    bool ReportFileUrlHasBeenSet() const;

                private:

                    /**
                     * 报告下载地址
                     */
                    std::string m_reportFileUrl;
                    bool m_reportFileUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWS_V20180312_MODEL_CREATEVULSREPORTRESPONSE_H_
