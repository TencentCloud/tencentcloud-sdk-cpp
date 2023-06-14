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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEREGIONSREQUEST_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEREGIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * DescribeRegions请求参数结构体
                */
                class DescribeRegionsRequest : public AbstractModel
                {
                public:
                    DescribeRegionsRequest();
                    ~DescribeRegionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取地域整型ID，目前黑石可用地域包括：8-北京，4-上海，1-广州， 19-重庆
                     * @return RegionId 地域整型ID，目前黑石可用地域包括：8-北京，4-上海，1-广州， 19-重庆
                     * 
                     */
                    uint64_t GetRegionId() const;

                    /**
                     * 设置地域整型ID，目前黑石可用地域包括：8-北京，4-上海，1-广州， 19-重庆
                     * @param _regionId 地域整型ID，目前黑石可用地域包括：8-北京，4-上海，1-广州， 19-重庆
                     * 
                     */
                    void SetRegionId(const uint64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                private:

                    /**
                     * 地域整型ID，目前黑石可用地域包括：8-北京，4-上海，1-广州， 19-重庆
                     */
                    uint64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEREGIONSREQUEST_H_
