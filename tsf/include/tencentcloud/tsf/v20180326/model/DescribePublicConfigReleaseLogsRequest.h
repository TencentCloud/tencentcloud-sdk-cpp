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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEPUBLICCONFIGRELEASELOGSREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEPUBLICCONFIGRELEASELOGSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DescribePublicConfigReleaseLogs请求参数结构体
                */
                class DescribePublicConfigReleaseLogsRequest : public AbstractModel
                {
                public:
                    DescribePublicConfigReleaseLogsRequest();
                    ~DescribePublicConfigReleaseLogsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取命名空间ID，不传入时查询全量
                     * @return NamespaceId 命名空间ID，不传入时查询全量
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置命名空间ID，不传入时查询全量
                     * @param _namespaceId 命名空间ID，不传入时查询全量
                     * 
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     * 
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0
                     * @return Offset 偏移量，默认为0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0
                     * @param _offset 偏移量，默认为0
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取每页条数，默认为20
                     * @return Limit 每页条数，默认为20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页条数，默认为20
                     * @param _limit 每页条数，默认为20
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 命名空间ID，不传入时查询全量
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 偏移量，默认为0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页条数，默认为20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEPUBLICCONFIGRELEASELOGSREQUEST_H_
