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

#ifndef TENCENTCLOUD_CDZ_V20221123_MODEL_DESCRIBECLOUDDEDICATEDZONERESOURCESUMMARYRESPONSE_H_
#define TENCENTCLOUD_CDZ_V20221123_MODEL_DESCRIBECLOUDDEDICATEDZONERESOURCESUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdz/v20221123/model/CloudDedicatedZoneResourceSummaryInfo.h>
#include <tencentcloud/cdz/v20221123/model/ExtraInfo.h>


namespace TencentCloud
{
    namespace Cdz
    {
        namespace V20221123
        {
            namespace Model
            {
                /**
                * DescribeCloudDedicatedZoneResourceSummary返回参数结构体
                */
                class DescribeCloudDedicatedZoneResourceSummaryResponse : public AbstractModel
                {
                public:
                    DescribeCloudDedicatedZoneResourceSummaryResponse();
                    ~DescribeCloudDedicatedZoneResourceSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取资源水位详情
                     * @return ResourceSummarySet 资源水位详情
                     * 
                     */
                    std::vector<CloudDedicatedZoneResourceSummaryInfo> GetResourceSummarySet() const;

                    /**
                     * 判断参数 ResourceSummarySet 是否已赋值
                     * @return ResourceSummarySet 是否已赋值
                     * 
                     */
                    bool ResourceSummarySetHasBeenSet() const;

                    /**
                     * 获取资源水位扩展信息
                     * @return ExtraInfo 资源水位扩展信息
                     * 
                     */
                    ExtraInfo GetExtraInfo() const;

                    /**
                     * 判断参数 ExtraInfo 是否已赋值
                     * @return ExtraInfo 是否已赋值
                     * 
                     */
                    bool ExtraInfoHasBeenSet() const;

                private:

                    /**
                     * 资源水位详情
                     */
                    std::vector<CloudDedicatedZoneResourceSummaryInfo> m_resourceSummarySet;
                    bool m_resourceSummarySetHasBeenSet;

                    /**
                     * 资源水位扩展信息
                     */
                    ExtraInfo m_extraInfo;
                    bool m_extraInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDZ_V20221123_MODEL_DESCRIBECLOUDDEDICATEDZONERESOURCESUMMARYRESPONSE_H_
