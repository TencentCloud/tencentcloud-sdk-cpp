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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEAREAREGIONREQUEST_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEAREAREGIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * DescribeAreaRegion请求参数结构体
                */
                class DescribeAreaRegionRequest : public AbstractModel
                {
                public:
                    DescribeAreaRegionRequest();
                    ~DescribeAreaRegionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取是否是国际站
                     * @return IsInternationalSite 是否是国际站
                     * 
                     */
                    bool GetIsInternationalSite() const;

                    /**
                     * 设置是否是国际站
                     * @param _isInternationalSite 是否是国际站
                     * 
                     */
                    void SetIsInternationalSite(const bool& _isInternationalSite);

                    /**
                     * 判断参数 IsInternationalSite 是否已赋值
                     * @return IsInternationalSite 是否已赋值
                     * 
                     */
                    bool IsInternationalSiteHasBeenSet() const;

                private:

                    /**
                     * 是否是国际站
                     */
                    bool m_isInternationalSite;
                    bool m_isInternationalSiteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_DESCRIBEAREAREGIONREQUEST_H_
