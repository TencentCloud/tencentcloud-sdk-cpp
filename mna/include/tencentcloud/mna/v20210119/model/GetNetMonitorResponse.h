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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GETNETMONITORRESPONSE_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GETNETMONITORRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mna/v20210119/model/MonitorData.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * GetNetMonitor返回参数结构体
                */
                class GetNetMonitorResponse : public AbstractModel
                {
                public:
                    GetNetMonitorResponse();
                    ~GetNetMonitorResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取监控数据
                     * @return MonitorData 监控数据
                     * 
                     */
                    std::vector<MonitorData> GetMonitorData() const;

                    /**
                     * 判断参数 MonitorData 是否已赋值
                     * @return MonitorData 是否已赋值
                     * 
                     */
                    bool MonitorDataHasBeenSet() const;

                    /**
                     * 获取接入区域。取值范围：['MC','AP','EU','AM']
MC=中国大陆
AP=亚太
EU=欧洲
AM=美洲
                     * @return AccessRegion 接入区域。取值范围：['MC','AP','EU','AM']
MC=中国大陆
AP=亚太
EU=欧洲
AM=美洲
                     * 
                     */
                    std::string GetAccessRegion() const;

                    /**
                     * 判断参数 AccessRegion 是否已赋值
                     * @return AccessRegion 是否已赋值
                     * 
                     */
                    bool AccessRegionHasBeenSet() const;

                private:

                    /**
                     * 监控数据
                     */
                    std::vector<MonitorData> m_monitorData;
                    bool m_monitorDataHasBeenSet;

                    /**
                     * 接入区域。取值范围：['MC','AP','EU','AM']
MC=中国大陆
AP=亚太
EU=欧洲
AM=美洲
                     */
                    std::string m_accessRegion;
                    bool m_accessRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GETNETMONITORRESPONSE_H_
