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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBESTATIONSREQUEST_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBESTATIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ame
    {
        namespace V20190916
        {
            namespace Model
            {
                /**
                * DescribeStations请求参数结构体
                */
                class DescribeStationsRequest : public AbstractModel
                {
                public:
                    DescribeStationsRequest();
                    ~DescribeStationsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取条数，必须大于0
                     * @return Limit 条数，必须大于0
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置条数，必须大于0
                     * @param _limit 条数，必须大于0
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取offset (Default = 0)，Offset=Offset+Limit
                     * @return Offset offset (Default = 0)，Offset=Offset+Limit
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置offset (Default = 0)，Offset=Offset+Limit
                     * @param _offset offset (Default = 0)，Offset=Offset+Limit
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 条数，必须大于0
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * offset (Default = 0)，Offset=Offset+Limit
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBESTATIONSREQUEST_H_
