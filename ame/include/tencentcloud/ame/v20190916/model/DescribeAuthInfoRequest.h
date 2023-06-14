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

#ifndef TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEAUTHINFOREQUEST_H_
#define TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEAUTHINFOREQUEST_H_

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
                * DescribeAuthInfo请求参数结构体
                */
                class DescribeAuthInfoRequest : public AbstractModel
                {
                public:
                    DescribeAuthInfoRequest();
                    ~DescribeAuthInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量：Offset=Offset+Limit
                     * @return Offset 偏移量：Offset=Offset+Limit
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量：Offset=Offset+Limit
                     * @param _offset 偏移量：Offset=Offset+Limit
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
                     * 获取数据条数
                     * @return Limit 数据条数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置数据条数
                     * @param _limit 数据条数
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取搜索关键字
                     * @return Key 搜索关键字
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置搜索关键字
                     * @param _key 搜索关键字
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                private:

                    /**
                     * 偏移量：Offset=Offset+Limit
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 数据条数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 搜索关键字
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AME_V20190916_MODEL_DESCRIBEAUTHINFOREQUEST_H_
