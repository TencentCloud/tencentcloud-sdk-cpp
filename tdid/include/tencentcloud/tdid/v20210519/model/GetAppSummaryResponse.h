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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_GETAPPSUMMARYRESPONSE_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_GETAPPSUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdid/v20210519/model/ResourceCounterData.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * GetAppSummary返回参数结构体
                */
                class GetAppSummaryResponse : public AbstractModel
                {
                public:
                    GetAppSummaryResponse();
                    ~GetAppSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取用户参与应用的统计指标 
                     * @return AppCounter 用户参与应用的统计指标 
                     * 
                     */
                    ResourceCounterData GetAppCounter() const;

                    /**
                     * 判断参数 AppCounter 是否已赋值
                     * @return AppCounter 是否已赋值
                     * 
                     */
                    bool AppCounterHasBeenSet() const;

                    /**
                     * 获取用户创建资源的统计指标
                     * @return UserCounter 用户创建资源的统计指标
                     * 
                     */
                    ResourceCounterData GetUserCounter() const;

                    /**
                     * 判断参数 UserCounter 是否已赋值
                     * @return UserCounter 是否已赋值
                     * 
                     */
                    bool UserCounterHasBeenSet() const;

                private:

                    /**
                     * 用户参与应用的统计指标 
                     */
                    ResourceCounterData m_appCounter;
                    bool m_appCounterHasBeenSet;

                    /**
                     * 用户创建资源的统计指标
                     */
                    ResourceCounterData m_userCounter;
                    bool m_userCounterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_GETAPPSUMMARYRESPONSE_H_
