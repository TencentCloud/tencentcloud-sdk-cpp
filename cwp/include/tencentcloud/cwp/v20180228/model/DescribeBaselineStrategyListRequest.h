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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINESTRATEGYLISTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINESTRATEGYLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeBaselineStrategyList请求参数结构体
                */
                class DescribeBaselineStrategyListRequest : public AbstractModel
                {
                public:
                    DescribeBaselineStrategyListRequest();
                    ~DescribeBaselineStrategyListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页参数 最大100
                     * @return Limit 分页参数 最大100
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页参数 最大100
                     * @param _limit 分页参数 最大100
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
                     * 获取分页参数
                     * @return Offset 分页参数
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页参数
                     * @param _offset 分页参数
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
                     * 获取规则开关，1：打开 0：关闭  2:全部
                     * @return Enabled 规则开关，1：打开 0：关闭  2:全部
                     * 
                     */
                    uint64_t GetEnabled() const;

                    /**
                     * 设置规则开关，1：打开 0：关闭  2:全部
                     * @param _enabled 规则开关，1：打开 0：关闭  2:全部
                     * 
                     */
                    void SetEnabled(const uint64_t& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * 分页参数 最大100
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页参数
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 规则开关，1：打开 0：关闭  2:全部
                     */
                    uint64_t m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEBASELINESTRATEGYLISTREQUEST_H_
