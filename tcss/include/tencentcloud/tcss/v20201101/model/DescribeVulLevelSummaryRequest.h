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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULLEVELSUMMARYREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULLEVELSUMMARYREQUEST_H_

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
                * DescribeVulLevelSummary请求参数结构体
                */
                class DescribeVulLevelSummaryRequest : public AbstractModel
                {
                public:
                    DescribeVulLevelSummaryRequest();
                    ~DescribeVulLevelSummaryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取漏洞分类: SYSTEM:系统漏洞 WEB:web应用漏洞 EMERGENCY:应急漏洞
                     * @return CategoryType 漏洞分类: SYSTEM:系统漏洞 WEB:web应用漏洞 EMERGENCY:应急漏洞
                     * 
                     */
                    std::string GetCategoryType() const;

                    /**
                     * 设置漏洞分类: SYSTEM:系统漏洞 WEB:web应用漏洞 EMERGENCY:应急漏洞
                     * @param _categoryType 漏洞分类: SYSTEM:系统漏洞 WEB:web应用漏洞 EMERGENCY:应急漏洞
                     * 
                     */
                    void SetCategoryType(const std::string& _categoryType);

                    /**
                     * 判断参数 CategoryType 是否已赋值
                     * @return CategoryType 是否已赋值
                     * 
                     */
                    bool CategoryTypeHasBeenSet() const;

                private:

                    /**
                     * 漏洞分类: SYSTEM:系统漏洞 WEB:web应用漏洞 EMERGENCY:应急漏洞
                     */
                    std::string m_categoryType;
                    bool m_categoryTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULLEVELSUMMARYREQUEST_H_
