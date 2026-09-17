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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBERESOURCESUMMARYRESPONSE_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBERESOURCESUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ResourcePackageInfo.h>
#include <tencentcloud/adp/v20260520/model/AddOnPackageInfo.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeResourceSummary返回参数结构体
                */
                class DescribeResourceSummaryResponse : public AbstractModel
                {
                public:
                    DescribeResourceSummaryResponse();
                    ~DescribeResourceSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>计费套餐包用量信息</p>
                     * @return ResourcePackage <p>计费套餐包用量信息</p>
                     * 
                     */
                    ResourcePackageInfo GetResourcePackage() const;

                    /**
                     * 判断参数 ResourcePackage 是否已赋值
                     * @return ResourcePackage 是否已赋值
                     * 
                     */
                    bool ResourcePackageHasBeenSet() const;

                    /**
                     * 获取<p>计费增值包用量信息</p>
                     * @return AddOnPackage <p>计费增值包用量信息</p>
                     * 
                     */
                    AddOnPackageInfo GetAddOnPackage() const;

                    /**
                     * 判断参数 AddOnPackage 是否已赋值
                     * @return AddOnPackage 是否已赋值
                     * 
                     */
                    bool AddOnPackageHasBeenSet() const;

                private:

                    /**
                     * <p>计费套餐包用量信息</p>
                     */
                    ResourcePackageInfo m_resourcePackage;
                    bool m_resourcePackageHasBeenSet;

                    /**
                     * <p>计费增值包用量信息</p>
                     */
                    AddOnPackageInfo m_addOnPackage;
                    bool m_addOnPackageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBERESOURCESUMMARYRESPONSE_H_
