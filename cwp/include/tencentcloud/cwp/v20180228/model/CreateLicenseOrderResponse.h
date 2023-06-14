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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CREATELICENSEORDERRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CREATELICENSEORDERRESPONSE_H_

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
                * CreateLicenseOrder返回参数结构体
                */
                class CreateLicenseOrderResponse : public AbstractModel
                {
                public:
                    CreateLicenseOrderResponse();
                    ~CreateLicenseOrderResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取订单号列表
                     * @return DealNames 订单号列表
                     * 
                     */
                    std::vector<std::string> GetDealNames() const;

                    /**
                     * 判断参数 DealNames 是否已赋值
                     * @return DealNames 是否已赋值
                     * 
                     */
                    bool DealNamesHasBeenSet() const;

                    /**
                     * 获取资源ID列表,预付费订单该字段空值
                     * @return ResourceIds 资源ID列表,预付费订单该字段空值
                     * 
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     * 
                     */
                    bool ResourceIdsHasBeenSet() const;

                    /**
                     * 获取大订单号 , 后付费该字段空值
                     * @return BigDealId 大订单号 , 后付费该字段空值
                     * 
                     */
                    std::string GetBigDealId() const;

                    /**
                     * 判断参数 BigDealId 是否已赋值
                     * @return BigDealId 是否已赋值
                     * 
                     */
                    bool BigDealIdHasBeenSet() const;

                private:

                    /**
                     * 订单号列表
                     */
                    std::vector<std::string> m_dealNames;
                    bool m_dealNamesHasBeenSet;

                    /**
                     * 资源ID列表,预付费订单该字段空值
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * 大订单号 , 后付费该字段空值
                     */
                    std::string m_bigDealId;
                    bool m_bigDealIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CREATELICENSEORDERRESPONSE_H_
