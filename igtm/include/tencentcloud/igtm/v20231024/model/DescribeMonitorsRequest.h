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

#ifndef TENCENTCLOUD_IGTM_V20231024_MODEL_DESCRIBEMONITORSREQUEST_H_
#define TENCENTCLOUD_IGTM_V20231024_MODEL_DESCRIBEMONITORSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Igtm
    {
        namespace V20231024
        {
            namespace Model
            {
                /**
                * DescribeMonitors请求参数结构体
                */
                class DescribeMonitorsRequest : public AbstractModel
                {
                public:
                    DescribeMonitorsRequest();
                    ~DescribeMonitorsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页，偏移值
                     * @return Offset 分页，偏移值
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页，偏移值
                     * @param _offset 分页，偏移值
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
                     * 获取分页，当前分页记录数
                     * @return Limit 分页，当前分页记录数
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页，当前分页记录数
                     * @param _limit 分页，当前分页记录数
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
                     * 获取是否查探测次数0否1是
                     * @return IsDetectNum 是否查探测次数0否1是
                     * 
                     */
                    uint64_t GetIsDetectNum() const;

                    /**
                     * 设置是否查探测次数0否1是
                     * @param _isDetectNum 是否查探测次数0否1是
                     * 
                     */
                    void SetIsDetectNum(const uint64_t& _isDetectNum);

                    /**
                     * 判断参数 IsDetectNum 是否已赋值
                     * @return IsDetectNum 是否已赋值
                     * 
                     */
                    bool IsDetectNumHasBeenSet() const;

                private:

                    /**
                     * 分页，偏移值
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页，当前分页记录数
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 是否查探测次数0否1是
                     */
                    uint64_t m_isDetectNum;
                    bool m_isDetectNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IGTM_V20231024_MODEL_DESCRIBEMONITORSREQUEST_H_
