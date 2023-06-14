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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_STOPSECURITYGROUPRULEDISPATCHREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_STOPSECURITYGROUPRULEDISPATCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * StopSecurityGroupRuleDispatch请求参数结构体
                */
                class StopSecurityGroupRuleDispatchRequest : public AbstractModel
                {
                public:
                    StopSecurityGroupRuleDispatchRequest();
                    ~StopSecurityGroupRuleDispatchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取值为1，中止全部
                     * @return StopType 值为1，中止全部
                     * 
                     */
                    int64_t GetStopType() const;

                    /**
                     * 设置值为1，中止全部
                     * @param _stopType 值为1，中止全部
                     * 
                     */
                    void SetStopType(const int64_t& _stopType);

                    /**
                     * 判断参数 StopType 是否已赋值
                     * @return StopType 是否已赋值
                     * 
                     */
                    bool StopTypeHasBeenSet() const;

                private:

                    /**
                     * 值为1，中止全部
                     */
                    int64_t m_stopType;
                    bool m_stopTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_STOPSECURITYGROUPRULEDISPATCHREQUEST_H_
