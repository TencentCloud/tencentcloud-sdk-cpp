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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CREATEEMERGENCYVULSCANREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CREATEEMERGENCYVULSCANREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * CreateEmergencyVulScan请求参数结构体
                */
                class CreateEmergencyVulScanRequest : public AbstractModel
                {
                public:
                    CreateEmergencyVulScanRequest();
                    ~CreateEmergencyVulScanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取漏洞id
                     * @return VulId 漏洞id
                     * 
                     */
                    uint64_t GetVulId() const;

                    /**
                     * 设置漏洞id
                     * @param _vulId 漏洞id
                     * 
                     */
                    void SetVulId(const uint64_t& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     * 
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取自选服务器时生效，主机uuid的string数组
                     * @return Uuids 自选服务器时生效，主机uuid的string数组
                     * 
                     */
                    std::vector<std::string> GetUuids() const;

                    /**
                     * 设置自选服务器时生效，主机uuid的string数组
                     * @param _uuids 自选服务器时生效，主机uuid的string数组
                     * 
                     */
                    void SetUuids(const std::vector<std::string>& _uuids);

                    /**
                     * 判断参数 Uuids 是否已赋值
                     * @return Uuids 是否已赋值
                     * 
                     */
                    bool UuidsHasBeenSet() const;

                    /**
                     * 获取扫描超时时长 ，单位秒
                     * @return TimeoutPeriod 扫描超时时长 ，单位秒
                     * 
                     */
                    uint64_t GetTimeoutPeriod() const;

                    /**
                     * 设置扫描超时时长 ，单位秒
                     * @param _timeoutPeriod 扫描超时时长 ，单位秒
                     * 
                     */
                    void SetTimeoutPeriod(const uint64_t& _timeoutPeriod);

                    /**
                     * 判断参数 TimeoutPeriod 是否已赋值
                     * @return TimeoutPeriod 是否已赋值
                     * 
                     */
                    bool TimeoutPeriodHasBeenSet() const;

                private:

                    /**
                     * 漏洞id
                     */
                    uint64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * 自选服务器时生效，主机uuid的string数组
                     */
                    std::vector<std::string> m_uuids;
                    bool m_uuidsHasBeenSet;

                    /**
                     * 扫描超时时长 ，单位秒
                     */
                    uint64_t m_timeoutPeriod;
                    bool m_timeoutPeriodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CREATEEMERGENCYVULSCANREQUEST_H_
