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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEAPPINFOREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEAPPINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * DescribeAppInfo请求参数结构体
                */
                class DescribeAppInfoRequest : public AbstractModel
                {
                public:
                    DescribeAppInfoRequest();
                    ~DescribeAppInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移位置
                     * @return Offset 偏移位置
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移位置
                     * @param _offset 偏移位置
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取本次查询用户数目最大数量限制，最大值为50，默认50
                     * @return Limit 本次查询用户数目最大数量限制，最大值为50，默认50
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置本次查询用户数目最大数量限制，最大值为50，默认50
                     * @param _limit 本次查询用户数目最大数量限制，最大值为50，默认50
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 偏移位置
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 本次查询用户数目最大数量限制，最大值为50，默认50
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEAPPINFOREQUEST_H_
