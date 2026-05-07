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

#ifndef TENCENTCLOUD_SMS_V20210111_MODEL_DESCRIBESMSSIGNLISTREQUEST_H_
#define TENCENTCLOUD_SMS_V20210111_MODEL_DESCRIBESMSSIGNLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sms
    {
        namespace V20210111
        {
            namespace Model
            {
                /**
                * DescribeSmsSignList请求参数结构体
                */
                class DescribeSmsSignListRequest : public AbstractModel
                {
                public:
                    DescribeSmsSignListRequest();
                    ~DescribeSmsSignListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>是否国际/港澳台短信：<br>0：表示国内短信。<br>1：表示国际/港澳台短信。</p>
                     * @return International <p>是否国际/港澳台短信：<br>0：表示国内短信。<br>1：表示国际/港澳台短信。</p>
                     * 
                     */
                    uint64_t GetInternational() const;

                    /**
                     * 设置<p>是否国际/港澳台短信：<br>0：表示国内短信。<br>1：表示国际/港澳台短信。</p>
                     * @param _international <p>是否国际/港澳台短信：<br>0：表示国内短信。<br>1：表示国际/港澳台短信。</p>
                     * 
                     */
                    void SetInternational(const uint64_t& _international);

                    /**
                     * 判断参数 International 是否已赋值
                     * @return International 是否已赋值
                     * 
                     */
                    bool InternationalHasBeenSet() const;

                    /**
                     * 获取<p>签名 ID 数组。<br>注：默认数组最大长度100。</p>
                     * @return SignIdSet <p>签名 ID 数组。<br>注：默认数组最大长度100。</p>
                     * 
                     */
                    std::vector<uint64_t> GetSignIdSet() const;

                    /**
                     * 设置<p>签名 ID 数组。<br>注：默认数组最大长度100。</p>
                     * @param _signIdSet <p>签名 ID 数组。<br>注：默认数组最大长度100。</p>
                     * 
                     */
                    void SetSignIdSet(const std::vector<uint64_t>& _signIdSet);

                    /**
                     * 判断参数 SignIdSet 是否已赋值
                     * @return SignIdSet 是否已赋值
                     * 
                     */
                    bool SignIdSetHasBeenSet() const;

                    /**
                     * 获取<p>最大上限，最多100。注：默认为10，SignIdSet 为空时启用。</p>
                     * @return Limit <p>最大上限，最多100。注：默认为10，SignIdSet 为空时启用。</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>最大上限，最多100。注：默认为10，SignIdSet 为空时启用。</p>
                     * @param _limit <p>最大上限，最多100。注：默认为10，SignIdSet 为空时启用。</p>
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
                     * 获取<p>偏移量。注：默认为0，SignIdSet 为空时启用。</p>
                     * @return Offset <p>偏移量。注：默认为0，SignIdSet 为空时启用。</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量。注：默认为0，SignIdSet 为空时启用。</p>
                     * @param _offset <p>偏移量。注：默认为0，SignIdSet 为空时启用。</p>
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
                     * <p>是否国际/港澳台短信：<br>0：表示国内短信。<br>1：表示国际/港澳台短信。</p>
                     */
                    uint64_t m_international;
                    bool m_internationalHasBeenSet;

                    /**
                     * <p>签名 ID 数组。<br>注：默认数组最大长度100。</p>
                     */
                    std::vector<uint64_t> m_signIdSet;
                    bool m_signIdSetHasBeenSet;

                    /**
                     * <p>最大上限，最多100。注：默认为10，SignIdSet 为空时启用。</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>偏移量。注：默认为0，SignIdSet 为空时启用。</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMS_V20210111_MODEL_DESCRIBESMSSIGNLISTREQUEST_H_
