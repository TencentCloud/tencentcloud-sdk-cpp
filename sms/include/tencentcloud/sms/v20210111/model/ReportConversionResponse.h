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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_REPORTCONVERSIONRESPONSE_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_REPORTCONVERSIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sms/v20210111/model/ReportConversionStatus.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20210111
        {
            namespace Model
            {
                /**
                * ReportConversion返回参数结构体
                */
                class ReportConversionResponse : public AbstractModel
                {
                public:
                    ReportConversionResponse();
                    ~ReportConversionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取转化率上报响应包体。
                     * @return ReportConversionStatus 转化率上报响应包体。
                     * 
                     */
                    ReportConversionStatus GetReportConversionStatus() const;

                    /**
                     * 判断参数 ReportConversionStatus 是否已赋值
                     * @return ReportConversionStatus 是否已赋值
                     * 
                     */
                    bool ReportConversionStatusHasBeenSet() const;

                private:

                    /**
                     * 转化率上报响应包体。
                     */
                    ReportConversionStatus m_reportConversionStatus;
                    bool m_reportConversionStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_REPORTCONVERSIONRESPONSE_H_
