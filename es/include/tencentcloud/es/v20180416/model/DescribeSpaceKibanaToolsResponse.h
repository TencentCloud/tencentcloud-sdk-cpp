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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBESPACEKIBANATOOLSRESPONSE_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBESPACEKIBANATOOLSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DescribeSpaceKibanaTools返回参数结构体
                */
                class DescribeSpaceKibanaToolsResponse : public AbstractModel
                {
                public:
                    DescribeSpaceKibanaToolsResponse();
                    ~DescribeSpaceKibanaToolsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取该token用于登录内嵌kibana
                     * @return KibanaToken 该token用于登录内嵌kibana
                     * 
                     */
                    std::string GetKibanaToken() const;

                    /**
                     * 判断参数 KibanaToken 是否已赋值
                     * @return KibanaToken 是否已赋值
                     * 
                     */
                    bool KibanaTokenHasBeenSet() const;

                    /**
                     * 获取token的过期时间
                     * @return ExpireTime token的过期时间
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                private:

                    /**
                     * 该token用于登录内嵌kibana
                     */
                    std::string m_kibanaToken;
                    bool m_kibanaTokenHasBeenSet;

                    /**
                     * token的过期时间
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBESPACEKIBANATOOLSRESPONSE_H_
