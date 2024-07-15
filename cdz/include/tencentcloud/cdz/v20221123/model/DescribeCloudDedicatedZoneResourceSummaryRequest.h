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

#ifndef TENCENTCLOUD_CDZ_V20221123_MODEL_DESCRIBECLOUDDEDICATEDZONERESOURCESUMMARYREQUEST_H_
#define TENCENTCLOUD_CDZ_V20221123_MODEL_DESCRIBECLOUDDEDICATEDZONERESOURCESUMMARYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdz
    {
        namespace V20221123
        {
            namespace Model
            {
                /**
                * DescribeCloudDedicatedZoneResourceSummary请求参数结构体
                */
                class DescribeCloudDedicatedZoneResourceSummaryRequest : public AbstractModel
                {
                public:
                    DescribeCloudDedicatedZoneResourceSummaryRequest();
                    ~DescribeCloudDedicatedZoneResourceSummaryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取专属可用区唯一标识
                     * @return CdzId 专属可用区唯一标识
                     * 
                     */
                    std::string GetCdzId() const;

                    /**
                     * 设置专属可用区唯一标识
                     * @param _cdzId 专属可用区唯一标识
                     * 
                     */
                    void SetCdzId(const std::string& _cdzId);

                    /**
                     * 判断参数 CdzId 是否已赋值
                     * @return CdzId 是否已赋值
                     * 
                     */
                    bool CdzIdHasBeenSet() const;

                private:

                    /**
                     * 专属可用区唯一标识
                     */
                    std::string m_cdzId;
                    bool m_cdzIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDZ_V20221123_MODEL_DESCRIBECLOUDDEDICATEDZONERESOURCESUMMARYREQUEST_H_
