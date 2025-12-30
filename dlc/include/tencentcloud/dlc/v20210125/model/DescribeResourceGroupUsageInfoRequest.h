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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBERESOURCEGROUPUSAGEINFOREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBERESOURCEGROUPUSAGEINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeResourceGroupUsageInfo请求参数结构体
                */
                class DescribeResourceGroupUsageInfoRequest : public AbstractModel
                {
                public:
                    DescribeResourceGroupUsageInfoRequest();
                    ~DescribeResourceGroupUsageInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源组ID
                     * @return SessionId 资源组ID
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置资源组ID
                     * @param _sessionId 资源组ID
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                private:

                    /**
                     * 资源组ID
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBERESOURCEGROUPUSAGEINFOREQUEST_H_
