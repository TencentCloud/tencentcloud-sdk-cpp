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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTWAFINSTANCELISTRESPONSE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTWAFINSTANCELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/WafInstanceDetail.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * DescribeHostWafInstanceList返回参数结构体
                */
                class DescribeHostWafInstanceListResponse : public AbstractModel
                {
                public:
                    DescribeHostWafInstanceListResponse();
                    ~DescribeHostWafInstanceListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取WAF实例列表，如果没有取到值返回空数组
                     * @return InstanceList WAF实例列表，如果没有取到值返回空数组
                     * 
                     */
                    std::vector<WafInstanceDetail> GetInstanceList() const;

                    /**
                     * 判断参数 InstanceList 是否已赋值
                     * @return InstanceList 是否已赋值
                     * 
                     */
                    bool InstanceListHasBeenSet() const;

                private:

                    /**
                     * WAF实例列表，如果没有取到值返回空数组
                     */
                    std::vector<WafInstanceDetail> m_instanceList;
                    bool m_instanceListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEHOSTWAFINSTANCELISTRESPONSE_H_
