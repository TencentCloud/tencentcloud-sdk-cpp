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

#ifndef TENCENTCLOUD_GPM_V20200820_MODEL_DESCRIBETOKENREQUEST_H_
#define TENCENTCLOUD_GPM_V20200820_MODEL_DESCRIBETOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gpm
    {
        namespace V20200820
        {
            namespace Model
            {
                /**
                * DescribeToken请求参数结构体
                */
                class DescribeTokenRequest : public AbstractModel
                {
                public:
                    DescribeTokenRequest();
                    ~DescribeTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取匹配code
                     * @return MatchCode 匹配code
                     * 
                     */
                    std::string GetMatchCode() const;

                    /**
                     * 设置匹配code
                     * @param _matchCode 匹配code
                     * 
                     */
                    void SetMatchCode(const std::string& _matchCode);

                    /**
                     * 判断参数 MatchCode 是否已赋值
                     * @return MatchCode 是否已赋值
                     * 
                     */
                    bool MatchCodeHasBeenSet() const;

                private:

                    /**
                     * 匹配code
                     */
                    std::string m_matchCode;
                    bool m_matchCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GPM_V20200820_MODEL_DESCRIBETOKENREQUEST_H_
