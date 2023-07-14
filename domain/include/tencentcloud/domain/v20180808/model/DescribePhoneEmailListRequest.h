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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEPHONEEMAILLISTREQUEST_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEPHONEEMAILLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DescribePhoneEmailList请求参数结构体
                */
                class DescribePhoneEmailListRequest : public AbstractModel
                {
                public:
                    DescribePhoneEmailListRequest();
                    ~DescribePhoneEmailListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取0：所有类型  1：手机  2：邮箱，默认0
                     * @return Type 0：所有类型  1：手机  2：邮箱，默认0
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置0：所有类型  1：手机  2：邮箱，默认0
                     * @param _type 0：所有类型  1：手机  2：邮箱，默认0
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0
                     * @return Offset 偏移量，默认为0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0
                     * @param _offset 偏移量，默认为0
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
                     * 获取返回数量，默认为20，取值范围[1,200]
                     * @return Limit 返回数量，默认为20，取值范围[1,200]
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，取值范围[1,200]
                     * @param _limit 返回数量，默认为20，取值范围[1,200]
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
                     * 获取手机或者邮箱，用于精确搜索
                     * @return Code 手机或者邮箱，用于精确搜索
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置手机或者邮箱，用于精确搜索
                     * @param _code 手机或者邮箱，用于精确搜索
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                private:

                    /**
                     * 0：所有类型  1：手机  2：邮箱，默认0
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 偏移量，默认为0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，取值范围[1,200]
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 手机或者邮箱，用于精确搜索
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEPHONEEMAILLISTREQUEST_H_
