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

#ifndef TENCENTCLOUD_VCUBE_V20220410_MODEL_DESCRIBELICENSELISTRESPONSE_H_
#define TENCENTCLOUD_VCUBE_V20220410_MODEL_DESCRIBELICENSELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vcube/v20220410/model/Overview.h>
#include <tencentcloud/vcube/v20220410/model/OverviewLicense.h>


namespace TencentCloud
{
    namespace Vcube
    {
        namespace V20220410
        {
            namespace Model
            {
                /**
                * DescribeLicenseList返回参数结构体
                */
                class DescribeLicenseListResponse : public AbstractModel
                {
                public:
                    DescribeLicenseListResponse();
                    ~DescribeLicenseListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>临期license数量</p>
                     * @return Count <p>临期license数量</p>
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取<p>正式license总览统计数据</p>
                     * @return Overview <p>正式license总览统计数据</p>
                     * 
                     */
                    Overview GetOverview() const;

                    /**
                     * 判断参数 Overview 是否已赋值
                     * @return Overview 是否已赋值
                     * 
                     */
                    bool OverviewHasBeenSet() const;

                    /**
                     * 获取<p>临期license列表</p>
                     * @return LicenseList <p>临期license列表</p>
                     * 
                     */
                    std::vector<OverviewLicense> GetLicenseList() const;

                    /**
                     * 判断参数 LicenseList 是否已赋值
                     * @return LicenseList 是否已赋值
                     * 
                     */
                    bool LicenseListHasBeenSet() const;

                    /**
                     * 获取<p>测试license总览统计数据</p>
                     * @return TrialOverview <p>测试license总览统计数据</p>
                     * 
                     */
                    Overview GetTrialOverview() const;

                    /**
                     * 判断参数 TrialOverview 是否已赋值
                     * @return TrialOverview 是否已赋值
                     * 
                     */
                    bool TrialOverviewHasBeenSet() const;

                private:

                    /**
                     * <p>临期license数量</p>
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * <p>正式license总览统计数据</p>
                     */
                    Overview m_overview;
                    bool m_overviewHasBeenSet;

                    /**
                     * <p>临期license列表</p>
                     */
                    std::vector<OverviewLicense> m_licenseList;
                    bool m_licenseListHasBeenSet;

                    /**
                     * <p>测试license总览统计数据</p>
                     */
                    Overview m_trialOverview;
                    bool m_trialOverviewHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCUBE_V20220410_MODEL_DESCRIBELICENSELISTRESPONSE_H_
