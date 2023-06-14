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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBELICENSEUSAGEDATARESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBELICENSEUSAGEDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/LicenseUsageDataItem.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeLicenseUsageData返回参数结构体
                */
                class DescribeLicenseUsageDataResponse : public AbstractModel
                {
                public:
                    DescribeLicenseUsageDataResponse();
                    ~DescribeLicenseUsageDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取License 查询次数统计数据，展示所查询 License 次数的明细数据。
                     * @return LicenseUsageDataSet License 查询次数统计数据，展示所查询 License 次数的明细数据。
                     * 
                     */
                    std::vector<LicenseUsageDataItem> GetLicenseUsageDataSet() const;

                    /**
                     * 判断参数 LicenseUsageDataSet 是否已赋值
                     * @return LicenseUsageDataSet 是否已赋值
                     * 
                     */
                    bool LicenseUsageDataSetHasBeenSet() const;

                private:

                    /**
                     * License 查询次数统计数据，展示所查询 License 次数的明细数据。
                     */
                    std::vector<LicenseUsageDataItem> m_licenseUsageDataSet;
                    bool m_licenseUsageDataSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBELICENSEUSAGEDATARESPONSE_H_
