/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEASYNCREQUESTINFOREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEASYNCREQUESTINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * DescribeAsyncRequestInfo请求参数结构体
                */
                class DescribeAsyncRequestInfoRequest : public AbstractModel
                {
                public:
                    DescribeAsyncRequestInfoRequest();
                    ~DescribeAsyncRequestInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取指定需查询的异步请求 ID。当接口操作涉及异步流程时（如 [CreateBackupDBInstance](https://cloud.tencent.com/document/product/240/46599)），其返回值中的 AsyncRequestId 即为本参数所需填入的 ID。
                     * @return AsyncRequestId 指定需查询的异步请求 ID。当接口操作涉及异步流程时（如 [CreateBackupDBInstance](https://cloud.tencent.com/document/product/240/46599)），其返回值中的 AsyncRequestId 即为本参数所需填入的 ID。
                     * 
                     */
                    std::string GetAsyncRequestId() const;

                    /**
                     * 设置指定需查询的异步请求 ID。当接口操作涉及异步流程时（如 [CreateBackupDBInstance](https://cloud.tencent.com/document/product/240/46599)），其返回值中的 AsyncRequestId 即为本参数所需填入的 ID。
                     * @param _asyncRequestId 指定需查询的异步请求 ID。当接口操作涉及异步流程时（如 [CreateBackupDBInstance](https://cloud.tencent.com/document/product/240/46599)），其返回值中的 AsyncRequestId 即为本参数所需填入的 ID。
                     * 
                     */
                    void SetAsyncRequestId(const std::string& _asyncRequestId);

                    /**
                     * 判断参数 AsyncRequestId 是否已赋值
                     * @return AsyncRequestId 是否已赋值
                     * 
                     */
                    bool AsyncRequestIdHasBeenSet() const;

                private:

                    /**
                     * 指定需查询的异步请求 ID。当接口操作涉及异步流程时（如 [CreateBackupDBInstance](https://cloud.tencent.com/document/product/240/46599)），其返回值中的 AsyncRequestId 即为本参数所需填入的 ID。
                     */
                    std::string m_asyncRequestId;
                    bool m_asyncRequestIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_DESCRIBEASYNCREQUESTINFOREQUEST_H_
