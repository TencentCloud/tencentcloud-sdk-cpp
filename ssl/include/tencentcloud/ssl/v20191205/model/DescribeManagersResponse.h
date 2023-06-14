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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEMANAGERSRESPONSE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEMANAGERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/ManagerInfo.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * DescribeManagers返回参数结构体
                */
                class DescribeManagersResponse : public AbstractModel
                {
                public:
                    DescribeManagersResponse();
                    ~DescribeManagersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取公司管理人列表
                     * @return Managers 公司管理人列表
                     * 
                     */
                    std::vector<ManagerInfo> GetManagers() const;

                    /**
                     * 判断参数 Managers 是否已赋值
                     * @return Managers 是否已赋值
                     * 
                     */
                    bool ManagersHasBeenSet() const;

                    /**
                     * 获取公司管理人总数
                     * @return TotalCount 公司管理人总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 公司管理人列表
                     */
                    std::vector<ManagerInfo> m_managers;
                    bool m_managersHasBeenSet;

                    /**
                     * 公司管理人总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEMANAGERSRESPONSE_H_
