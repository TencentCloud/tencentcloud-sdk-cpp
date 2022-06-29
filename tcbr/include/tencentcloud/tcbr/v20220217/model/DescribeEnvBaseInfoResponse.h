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

#ifndef TENCENTCLOUD_TCBR_V20220217_MODEL_DESCRIBEENVBASEINFORESPONSE_H_
#define TENCENTCLOUD_TCBR_V20220217_MODEL_DESCRIBEENVBASEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcbr/v20220217/model/EnvBaseInfo.h>


namespace TencentCloud
{
    namespace Tcbr
    {
        namespace V20220217
        {
            namespace Model
            {
                /**
                * DescribeEnvBaseInfo返回参数结构体
                */
                class DescribeEnvBaseInfoResponse : public AbstractModel
                {
                public:
                    DescribeEnvBaseInfoResponse();
                    ~DescribeEnvBaseInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取环境基础信息
                     * @return EnvBaseInfo 环境基础信息
                     */
                    EnvBaseInfo GetEnvBaseInfo() const;

                    /**
                     * 判断参数 EnvBaseInfo 是否已赋值
                     * @return EnvBaseInfo 是否已赋值
                     */
                    bool EnvBaseInfoHasBeenSet() const;

                private:

                    /**
                     * 环境基础信息
                     */
                    EnvBaseInfo m_envBaseInfo;
                    bool m_envBaseInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_DESCRIBEENVBASEINFORESPONSE_H_
