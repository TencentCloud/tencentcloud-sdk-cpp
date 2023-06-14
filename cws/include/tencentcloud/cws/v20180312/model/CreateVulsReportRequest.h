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

#ifndef TENCENTCLOUD_CWS_V20180312_MODEL_CREATEVULSREPORTREQUEST_H_
#define TENCENTCLOUD_CWS_V20180312_MODEL_CREATEVULSREPORTREQUEST_H_

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
                * CreateVulsReport请求参数结构体
                */
                class CreateVulsReportRequest : public AbstractModel
                {
                public:
                    CreateVulsReportRequest();
                    ~CreateVulsReportRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点ID
                     * @return SiteId 站点ID
                     * 
                     */
                    uint64_t GetSiteId() const;

                    /**
                     * 设置站点ID
                     * @param _siteId 站点ID
                     * 
                     */
                    void SetSiteId(const uint64_t& _siteId);

                    /**
                     * 判断参数 SiteId 是否已赋值
                     * @return SiteId 是否已赋值
                     * 
                     */
                    bool SiteIdHasBeenSet() const;

                    /**
                     * 获取监控任务ID
                     * @return MonitorId 监控任务ID
                     * 
                     */
                    uint64_t GetMonitorId() const;

                    /**
                     * 设置监控任务ID
                     * @param _monitorId 监控任务ID
                     * 
                     */
                    void SetMonitorId(const uint64_t& _monitorId);

                    /**
                     * 判断参数 MonitorId 是否已赋值
                     * @return MonitorId 是否已赋值
                     * 
                     */
                    bool MonitorIdHasBeenSet() const;

                private:

                    /**
                     * 站点ID
                     */
                    uint64_t m_siteId;
                    bool m_siteIdHasBeenSet;

                    /**
                     * 监控任务ID
                     */
                    uint64_t m_monitorId;
                    bool m_monitorIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWS_V20180312_MODEL_CREATEVULSREPORTREQUEST_H_
