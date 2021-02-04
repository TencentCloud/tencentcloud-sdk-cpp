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

#ifndef TENCENTCLOUD_TSW_V20200924_MODEL_DESCRIBEAGENTSHELLREQUEST_H_
#define TENCENTCLOUD_TSW_V20200924_MODEL_DESCRIBEAGENTSHELLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsw
    {
        namespace V20200924
        {
            namespace Model
            {
                /**
                * DescribeAgentShell请求参数结构体
                */
                class DescribeAgentShellRequest : public AbstractModel
                {
                public:
                    DescribeAgentShellRequest();
                    ~DescribeAgentShellRequest() = default;
                    std::string ToJsonString() const;


                private:

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSW_V20200924_MODEL_DESCRIBEAGENTSHELLREQUEST_H_
