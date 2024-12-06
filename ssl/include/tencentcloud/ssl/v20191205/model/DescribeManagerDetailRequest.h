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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEMANAGERDETAILREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEMANAGERDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * DescribeManagerDetail请求参数结构体
                */
                class DescribeManagerDetailRequest : public AbstractModel
                {
                public:
                    DescribeManagerDetailRequest();
                    ~DescribeManagerDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取管理人ID,可以从describeManagers接口获得
                     * @return ManagerId 管理人ID,可以从describeManagers接口获得
                     * 
                     */
                    int64_t GetManagerId() const;

                    /**
                     * 设置管理人ID,可以从describeManagers接口获得
                     * @param _managerId 管理人ID,可以从describeManagers接口获得
                     * 
                     */
                    void SetManagerId(const int64_t& _managerId);

                    /**
                     * 判断参数 ManagerId 是否已赋值
                     * @return ManagerId 是否已赋值
                     * 
                     */
                    bool ManagerIdHasBeenSet() const;

                    /**
                     * 获取分页每页数量
                     * @return Limit 分页每页数量
                     * @deprecated
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页每页数量
                     * @param _limit 分页每页数量
                     * @deprecated
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * @deprecated
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页偏移量
                     * @return Offset 分页偏移量
                     * @deprecated
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移量
                     * @param _offset 分页偏移量
                     * @deprecated
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * @deprecated
                     */
                    bool OffsetHasBeenSet() const;

                private:

                    /**
                     * 管理人ID,可以从describeManagers接口获得
                     */
                    int64_t m_managerId;
                    bool m_managerIdHasBeenSet;

                    /**
                     * 分页每页数量
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEMANAGERDETAILREQUEST_H_
