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

#ifndef TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DESCRIBEBONUSESREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DESCRIBEBONUSESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20211125
        {
            namespace Model
            {
                /**
                * DescribeBonuses请求参数结构体
                */
                class DescribeBonusesRequest : public AbstractModel
                {
                public:
                    DescribeBonusesRequest();
                    ~DescribeBonusesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页拉取偏移
                     * @return Offset 分页拉取偏移
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页拉取偏移
                     * @param _offset 分页拉取偏移
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页拉取数量
                     * @return Limit 分页拉取数量
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页拉取数量
                     * @param _limit 分页拉取数量
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 分页拉取偏移
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页拉取数量
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DESCRIBEBONUSESREQUEST_H_
