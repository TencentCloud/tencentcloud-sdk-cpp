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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEAIGCAPITOKENSRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEAIGCAPITOKENSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeAigcApiTokens返回参数结构体
                */
                class DescribeAigcApiTokensResponse : public AbstractModel
                {
                public:
                    DescribeAigcApiTokensResponse();
                    ~DescribeAigcApiTokensResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>API Token 列表</p>
                     * @return ApiTokens <p>API Token 列表</p>
                     * 
                     */
                    std::vector<std::string> GetApiTokens() const;

                    /**
                     * 判断参数 ApiTokens 是否已赋值
                     * @return ApiTokens 是否已赋值
                     * 
                     */
                    bool ApiTokensHasBeenSet() const;

                    /**
                     * 获取<p>ExtInfo信息，和API Token列表一一对应</p>
                     * @return ExtInfos <p>ExtInfo信息，和API Token列表一一对应</p>
                     * 
                     */
                    std::vector<std::string> GetExtInfos() const;

                    /**
                     * 判断参数 ExtInfos 是否已赋值
                     * @return ExtInfos 是否已赋值
                     * 
                     */
                    bool ExtInfosHasBeenSet() const;

                private:

                    /**
                     * <p>API Token 列表</p>
                     */
                    std::vector<std::string> m_apiTokens;
                    bool m_apiTokensHasBeenSet;

                    /**
                     * <p>ExtInfo信息，和API Token列表一一对应</p>
                     */
                    std::vector<std::string> m_extInfos;
                    bool m_extInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEAIGCAPITOKENSRESPONSE_H_
