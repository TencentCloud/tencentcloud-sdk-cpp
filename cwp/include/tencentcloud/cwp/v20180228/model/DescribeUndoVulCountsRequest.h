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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEUNDOVULCOUNTSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEUNDOVULCOUNTSREQUEST_H_

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
                * DescribeUndoVulCounts请求参数结构体
                */
                class DescribeUndoVulCountsRequest : public AbstractModel
                {
                public:
                    DescribeUndoVulCountsRequest();
                    ~DescribeUndoVulCountsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取漏洞分类，1: web-cms漏洞 2:应用漏洞  4: Linux软件漏洞 5: Windows系统漏洞
                     * @return VulCategory 漏洞分类，1: web-cms漏洞 2:应用漏洞  4: Linux软件漏洞 5: Windows系统漏洞
                     * 
                     */
                    uint64_t GetVulCategory() const;

                    /**
                     * 设置漏洞分类，1: web-cms漏洞 2:应用漏洞  4: Linux软件漏洞 5: Windows系统漏洞
                     * @param _vulCategory 漏洞分类，1: web-cms漏洞 2:应用漏洞  4: Linux软件漏洞 5: Windows系统漏洞
                     * 
                     */
                    void SetVulCategory(const uint64_t& _vulCategory);

                    /**
                     * 判断参数 VulCategory 是否已赋值
                     * @return VulCategory 是否已赋值
                     * 
                     */
                    bool VulCategoryHasBeenSet() const;

                    /**
                     * 获取是否应急漏洞筛选, 是 : yes
                     * @return IfEmergency 是否应急漏洞筛选, 是 : yes
                     * 
                     */
                    std::string GetIfEmergency() const;

                    /**
                     * 设置是否应急漏洞筛选, 是 : yes
                     * @param _ifEmergency 是否应急漏洞筛选, 是 : yes
                     * 
                     */
                    void SetIfEmergency(const std::string& _ifEmergency);

                    /**
                     * 判断参数 IfEmergency 是否已赋值
                     * @return IfEmergency 是否已赋值
                     * 
                     */
                    bool IfEmergencyHasBeenSet() const;

                private:

                    /**
                     * 漏洞分类，1: web-cms漏洞 2:应用漏洞  4: Linux软件漏洞 5: Windows系统漏洞
                     */
                    uint64_t m_vulCategory;
                    bool m_vulCategoryHasBeenSet;

                    /**
                     * 是否应急漏洞筛选, 是 : yes
                     */
                    std::string m_ifEmergency;
                    bool m_ifEmergencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEUNDOVULCOUNTSREQUEST_H_
