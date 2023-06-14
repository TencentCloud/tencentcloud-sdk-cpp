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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBENEWESTVULRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBENEWESTVULRESPONSE_H_

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
                * DescribeNewestVul返回参数结构体
                */
                class DescribeNewestVulResponse : public AbstractModel
                {
                public:
                    DescribeNewestVulResponse();
                    ~DescribeNewestVulResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取漏洞PocID
                     * @return PocID 漏洞PocID
                     * 
                     */
                    std::string GetPocID() const;

                    /**
                     * 判断参数 PocID 是否已赋值
                     * @return PocID 是否已赋值
                     * 
                     */
                    bool PocIDHasBeenSet() const;

                    /**
                     * 获取漏洞名称
                     * @return VulName 漏洞名称
                     * 
                     */
                    std::string GetVulName() const;

                    /**
                     * 判断参数 VulName 是否已赋值
                     * @return VulName 是否已赋值
                     * 
                     */
                    bool VulNameHasBeenSet() const;

                    /**
                     * 获取披露时间
                     * @return SubmitTime 披露时间
                     * 
                     */
                    std::string GetSubmitTime() const;

                    /**
                     * 判断参数 SubmitTime 是否已赋值
                     * @return SubmitTime 是否已赋值
                     * 
                     */
                    bool SubmitTimeHasBeenSet() const;

                    /**
                     * 获取应急漏洞风险情况：NOT_SCAN：未扫描，SCANNING：扫描中，SCANNED：已扫描
                     * @return Status 应急漏洞风险情况：NOT_SCAN：未扫描，SCANNING：扫描中，SCANNED：已扫描
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
                     * 获取漏洞CVEID
                     * @return CVEID 漏洞CVEID
                     * 
                     */
                    std::string GetCVEID() const;

                    /**
                     * 判断参数 CVEID 是否已赋值
                     * @return CVEID 是否已赋值
                     * 
                     */
                    bool CVEIDHasBeenSet() const;

                private:

                    /**
                     * 漏洞PocID
                     */
                    std::string m_pocID;
                    bool m_pocIDHasBeenSet;

                    /**
                     * 漏洞名称
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * 披露时间
                     */
                    std::string m_submitTime;
                    bool m_submitTimeHasBeenSet;

                    /**
                     * 应急漏洞风险情况：NOT_SCAN：未扫描，SCANNING：扫描中，SCANNED：已扫描
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 漏洞CVEID
                     */
                    std::string m_cVEID;
                    bool m_cVEIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBENEWESTVULRESPONSE_H_
