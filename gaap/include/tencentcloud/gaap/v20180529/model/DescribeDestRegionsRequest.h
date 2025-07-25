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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEDESTREGIONSREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEDESTREGIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DescribeDestRegions请求参数结构体
                */
                class DescribeDestRegionsRequest : public AbstractModel
                {
                public:
                    DescribeDestRegionsRequest();
                    ~DescribeDestRegionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取通道质量:0表示金牌，1表示银牌。默认不传该参数，表示金牌。本参数确定查询指定通道质量的源站区域
                     * @return QualityType 通道质量:0表示金牌，1表示银牌。默认不传该参数，表示金牌。本参数确定查询指定通道质量的源站区域
                     * 
                     */
                    uint64_t GetQualityType() const;

                    /**
                     * 设置通道质量:0表示金牌，1表示银牌。默认不传该参数，表示金牌。本参数确定查询指定通道质量的源站区域
                     * @param _qualityType 通道质量:0表示金牌，1表示银牌。默认不传该参数，表示金牌。本参数确定查询指定通道质量的源站区域
                     * 
                     */
                    void SetQualityType(const uint64_t& _qualityType);

                    /**
                     * 判断参数 QualityType 是否已赋值
                     * @return QualityType 是否已赋值
                     * 
                     */
                    bool QualityTypeHasBeenSet() const;

                private:

                    /**
                     * 通道质量:0表示金牌，1表示银牌。默认不传该参数，表示金牌。本参数确定查询指定通道质量的源站区域
                     */
                    uint64_t m_qualityType;
                    bool m_qualityTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEDESTREGIONSREQUEST_H_
