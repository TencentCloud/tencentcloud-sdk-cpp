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

#ifndef TENCENTCLOUD_IC_V20190307_MODEL_DESCRIBECARDSREQUEST_H_
#define TENCENTCLOUD_IC_V20190307_MODEL_DESCRIBECARDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ic
    {
        namespace V20190307
        {
            namespace Model
            {
                /**
                * DescribeCards请求参数结构体
                */
                class DescribeCardsRequest : public AbstractModel
                {
                public:
                    DescribeCardsRequest();
                    ~DescribeCardsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用ID
                     * @return Sdkappid 应用ID
                     * 
                     */
                    std::string GetSdkappid() const;

                    /**
                     * 设置应用ID
                     * @param _sdkappid 应用ID
                     * 
                     */
                    void SetSdkappid(const std::string& _sdkappid);

                    /**
                     * 判断参数 Sdkappid 是否已赋值
                     * @return Sdkappid 是否已赋值
                     * 
                     */
                    bool SdkappidHasBeenSet() const;

                    /**
                     * 获取偏移值
                     * @return Offset 偏移值
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移值
                     * @param _offset 偏移值
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
                     * 获取列表限制
                     * @return Limit 列表限制
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置列表限制
                     * @param _limit 列表限制
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
                     * 应用ID
                     */
                    std::string m_sdkappid;
                    bool m_sdkappidHasBeenSet;

                    /**
                     * 偏移值
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 列表限制
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IC_V20190307_MODEL_DESCRIBECARDSREQUEST_H_
