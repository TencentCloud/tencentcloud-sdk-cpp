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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBEALARMSTATUSLISTRESPONSE_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBEALARMSTATUSLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/weilingwith/v20230427/model/DescribeAlarmStatusListRes.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * DescribeAlarmStatusList返回参数结构体
                */
                class DescribeAlarmStatusListResponse : public AbstractModel
                {
                public:
                    DescribeAlarmStatusListResponse();
                    ~DescribeAlarmStatusListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取告警状态返回结构
                     * @return Result 告警状态返回结构
                     * 
                     */
                    DescribeAlarmStatusListRes GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                private:

                    /**
                     * 告警状态返回结构
                     */
                    DescribeAlarmStatusListRes m_result;
                    bool m_resultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBEALARMSTATUSLISTRESPONSE_H_
