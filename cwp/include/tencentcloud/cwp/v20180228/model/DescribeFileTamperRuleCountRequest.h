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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEFILETAMPERRULECOUNTREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEFILETAMPERRULECOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeFileTamperRuleCount请求参数结构体
                */
                class DescribeFileTamperRuleCountRequest : public AbstractModel
                {
                public:
                    DescribeFileTamperRuleCountRequest();
                    ~DescribeFileTamperRuleCountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询的主机uuids 一次性最多只能查100个
                     * @return Uuids 查询的主机uuids 一次性最多只能查100个
                     * 
                     */
                    std::vector<std::string> GetUuids() const;

                    /**
                     * 设置查询的主机uuids 一次性最多只能查100个
                     * @param _uuids 查询的主机uuids 一次性最多只能查100个
                     * 
                     */
                    void SetUuids(const std::vector<std::string>& _uuids);

                    /**
                     * 判断参数 Uuids 是否已赋值
                     * @return Uuids 是否已赋值
                     * 
                     */
                    bool UuidsHasBeenSet() const;

                private:

                    /**
                     * 查询的主机uuids 一次性最多只能查100个
                     */
                    std::vector<std::string> m_uuids;
                    bool m_uuidsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEFILETAMPERRULECOUNTREQUEST_H_
