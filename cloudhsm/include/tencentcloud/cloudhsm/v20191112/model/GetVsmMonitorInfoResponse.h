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

#ifndef TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_GETVSMMONITORINFORESPONSE_H_
#define TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_GETVSMMONITORINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudhsm
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * GetVsmMonitorInfo返回参数结构体
                */
                class GetVsmMonitorInfoResponse : public AbstractModel
                {
                public:
                    GetVsmMonitorInfoResponse();
                    ~GetVsmMonitorInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取VSM监控信息
                     * @return MonitorInfo VSM监控信息
                     * 
                     */
                    std::vector<std::string> GetMonitorInfo() const;

                    /**
                     * 判断参数 MonitorInfo 是否已赋值
                     * @return MonitorInfo 是否已赋值
                     * 
                     */
                    bool MonitorInfoHasBeenSet() const;

                private:

                    /**
                     * VSM监控信息
                     */
                    std::vector<std::string> m_monitorInfo;
                    bool m_monitorInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_GETVSMMONITORINFORESPONSE_H_
