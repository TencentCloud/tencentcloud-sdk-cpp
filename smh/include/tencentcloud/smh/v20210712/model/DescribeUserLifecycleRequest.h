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

#ifndef TENCENTCLOUD_SMH_V20210712_MODEL_DESCRIBEUSERLIFECYCLEREQUEST_H_
#define TENCENTCLOUD_SMH_V20210712_MODEL_DESCRIBEUSERLIFECYCLEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/smh/v20210712/model/UserFilter.h>


namespace TencentCloud
{
    namespace Smh
    {
        namespace V20210712
        {
            namespace Model
            {
                /**
                * DescribeUserLifecycle请求参数结构体
                */
                class DescribeUserLifecycleRequest : public AbstractModel
                {
                public:
                    DescribeUserLifecycleRequest();
                    ~DescribeUserLifecycleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取媒体库 ID。
                     * @return LibraryId 媒体库 ID。
                     * 
                     */
                    std::string GetLibraryId() const;

                    /**
                     * 设置媒体库 ID。
                     * @param _libraryId 媒体库 ID。
                     * 
                     */
                    void SetLibraryId(const std::string& _libraryId);

                    /**
                     * 判断参数 LibraryId 是否已赋值
                     * @return LibraryId 是否已赋值
                     * 
                     */
                    bool LibraryIdHasBeenSet() const;

                    /**
                     * 获取用于唯一查找用户的过滤器。
                     * @return Filter 用于唯一查找用户的过滤器。
                     * 
                     */
                    UserFilter GetFilter() const;

                    /**
                     * 设置用于唯一查找用户的过滤器。
                     * @param _filter 用于唯一查找用户的过滤器。
                     * 
                     */
                    void SetFilter(const UserFilter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                private:

                    /**
                     * 媒体库 ID。
                     */
                    std::string m_libraryId;
                    bool m_libraryIdHasBeenSet;

                    /**
                     * 用于唯一查找用户的过滤器。
                     */
                    UserFilter m_filter;
                    bool m_filterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMH_V20210712_MODEL_DESCRIBEUSERLIFECYCLEREQUEST_H_
