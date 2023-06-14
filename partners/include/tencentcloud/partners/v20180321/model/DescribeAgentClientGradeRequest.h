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

#ifndef TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBEAGENTCLIENTGRADEREQUEST_H_
#define TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBEAGENTCLIENTGRADEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Partners
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * DescribeAgentClientGrade请求参数结构体
                */
                class DescribeAgentClientGradeRequest : public AbstractModel
                {
                public:
                    DescribeAgentClientGradeRequest();
                    ~DescribeAgentClientGradeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取代客uin
                     * @return ClientUin 代客uin
                     * 
                     */
                    std::string GetClientUin() const;

                    /**
                     * 设置代客uin
                     * @param _clientUin 代客uin
                     * 
                     */
                    void SetClientUin(const std::string& _clientUin);

                    /**
                     * 判断参数 ClientUin 是否已赋值
                     * @return ClientUin 是否已赋值
                     * 
                     */
                    bool ClientUinHasBeenSet() const;

                private:

                    /**
                     * 代客uin
                     */
                    std::string m_clientUin;
                    bool m_clientUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBEAGENTCLIENTGRADEREQUEST_H_
