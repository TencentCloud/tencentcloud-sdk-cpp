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

#ifndef TENCENTCLOUD_TCBR_V20220217_MODEL_DESCRIBEENVBASEINFOREQUEST_H_
#define TENCENTCLOUD_TCBR_V20220217_MODEL_DESCRIBEENVBASEINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcbr
    {
        namespace V20220217
        {
            namespace Model
            {
                /**
                * DescribeEnvBaseInfo请求参数结构体
                */
                class DescribeEnvBaseInfoRequest : public AbstractModel
                {
                public:
                    DescribeEnvBaseInfoRequest();
                    ~DescribeEnvBaseInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境 Id
                     * @return EnvId 环境 Id
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境 Id
                     * @param _envId 环境 Id
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                private:

                    /**
                     * 环境 Id
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_DESCRIBEENVBASEINFOREQUEST_H_
