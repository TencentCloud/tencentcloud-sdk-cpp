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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBESPECINFOREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBESPECINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeSpecInfo请求参数结构体
                */
                class DescribeSpecInfoRequest : public AbstractModel
                {
                public:
                    DescribeSpecInfoRequest();
                    ~DescribeSpecInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待查询可用区。当前支持的可用区，请参见[地域与可用区](https://cloud.tencent.com/document/product/240/3637)。
                     * @return Zone 待查询可用区。当前支持的可用区，请参见[地域与可用区](https://cloud.tencent.com/document/product/240/3637)。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置待查询可用区。当前支持的可用区，请参见[地域与可用区](https://cloud.tencent.com/document/product/240/3637)。
                     * @param _zone 待查询可用区。当前支持的可用区，请参见[地域与可用区](https://cloud.tencent.com/document/product/240/3637)。
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                private:

                    /**
                     * 待查询可用区。当前支持的可用区，请参见[地域与可用区](https://cloud.tencent.com/document/product/240/3637)。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBESPECINFOREQUEST_H_
