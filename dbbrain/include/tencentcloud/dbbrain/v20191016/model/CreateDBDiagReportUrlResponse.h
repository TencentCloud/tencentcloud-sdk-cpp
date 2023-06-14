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

#ifndef TENCENTCLOUD_DBBRAIN_V20191016_MODEL_CREATEDBDIAGREPORTURLRESPONSE_H_
#define TENCENTCLOUD_DBBRAIN_V20191016_MODEL_CREATEDBDIAGREPORTURLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20191016
        {
            namespace Model
            {
                /**
                * CreateDBDiagReportUrl返回参数结构体
                */
                class CreateDBDiagReportUrlResponse : public AbstractModel
                {
                public:
                    CreateDBDiagReportUrlResponse();
                    ~CreateDBDiagReportUrlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取健康报告浏览地址。
                     * @return ReportUrl 健康报告浏览地址。
                     * 
                     */
                    std::string GetReportUrl() const;

                    /**
                     * 判断参数 ReportUrl 是否已赋值
                     * @return ReportUrl 是否已赋值
                     * 
                     */
                    bool ReportUrlHasBeenSet() const;

                    /**
                     * 获取健康报告浏览地址到期时间戳（秒）。
                     * @return ExpireTime 健康报告浏览地址到期时间戳（秒）。
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * 健康报告浏览地址。
                     */
                    std::string m_reportUrl;
                    bool m_reportUrlHasBeenSet;

                    /**
                     * 健康报告浏览地址到期时间戳（秒）。
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20191016_MODEL_CREATEDBDIAGREPORTURLRESPONSE_H_
