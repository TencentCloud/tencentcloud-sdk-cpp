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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEBACKUPOVERVIEWGENERALREQUEST_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEBACKUPOVERVIEWGENERALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * DescribeBackupOverviewGeneral请求参数结构体
                */
                class DescribeBackupOverviewGeneralRequest : public AbstractModel
                {
                public:
                    DescribeBackupOverviewGeneralRequest();
                    ~DescribeBackupOverviewGeneralRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>是否查询全部地域。false-仅当前地域（默认），true-全部地域汇总</p>
                     * @return AllRegions <p>是否查询全部地域。false-仅当前地域（默认），true-全部地域汇总</p>
                     * 
                     */
                    bool GetAllRegions() const;

                    /**
                     * 设置<p>是否查询全部地域。false-仅当前地域（默认），true-全部地域汇总</p>
                     * @param _allRegions <p>是否查询全部地域。false-仅当前地域（默认），true-全部地域汇总</p>
                     * 
                     */
                    void SetAllRegions(const bool& _allRegions);

                    /**
                     * 判断参数 AllRegions 是否已赋值
                     * @return AllRegions 是否已赋值
                     * 
                     */
                    bool AllRegionsHasBeenSet() const;

                private:

                    /**
                     * <p>是否查询全部地域。false-仅当前地域（默认），true-全部地域汇总</p>
                     */
                    bool m_allRegions;
                    bool m_allRegionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEBACKUPOVERVIEWGENERALREQUEST_H_
