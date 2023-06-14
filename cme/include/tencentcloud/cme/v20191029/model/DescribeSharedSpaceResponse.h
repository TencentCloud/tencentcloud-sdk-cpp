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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBESHAREDSPACERESPONSE_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBESHAREDSPACERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/Authorizer.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * DescribeSharedSpace返回参数结构体
                */
                class DescribeSharedSpaceResponse : public AbstractModel
                {
                public:
                    DescribeSharedSpaceResponse();
                    ~DescribeSharedSpaceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取查询到的共享空间总数。
                     * @return TotalCount 查询到的共享空间总数。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取各个共享空间对应的授权者信息。
                     * @return AuthorizerSet 各个共享空间对应的授权者信息。
                     * 
                     */
                    std::vector<Authorizer> GetAuthorizerSet() const;

                    /**
                     * 判断参数 AuthorizerSet 是否已赋值
                     * @return AuthorizerSet 是否已赋值
                     * 
                     */
                    bool AuthorizerSetHasBeenSet() const;

                private:

                    /**
                     * 查询到的共享空间总数。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 各个共享空间对应的授权者信息。
                     */
                    std::vector<Authorizer> m_authorizerSet;
                    bool m_authorizerSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_DESCRIBESHAREDSPACERESPONSE_H_
