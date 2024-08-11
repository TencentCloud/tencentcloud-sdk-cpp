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

#ifndef TENCENTCLOUD_SMH_V20210712_MODEL_DELETEUSERREQUEST_H_
#define TENCENTCLOUD_SMH_V20210712_MODEL_DELETEUSERREQUEST_H_

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
                * DeleteUser请求参数结构体
                */
                class DeleteUserRequest : public AbstractModel
                {
                public:
                    DeleteUserRequest();
                    ~DeleteUserRequest() = default;
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
                     * 获取用于唯一查找用户的过滤器数组，数组之间为 **或** 的关系，即满足任意一个过滤器的用户，都将被删除，单次传入的过滤器最多为 100 个。
                     * @return Filters 用于唯一查找用户的过滤器数组，数组之间为 **或** 的关系，即满足任意一个过滤器的用户，都将被删除，单次传入的过滤器最多为 100 个。
                     * 
                     */
                    std::vector<UserFilter> GetFilters() const;

                    /**
                     * 设置用于唯一查找用户的过滤器数组，数组之间为 **或** 的关系，即满足任意一个过滤器的用户，都将被删除，单次传入的过滤器最多为 100 个。
                     * @param _filters 用于唯一查找用户的过滤器数组，数组之间为 **或** 的关系，即满足任意一个过滤器的用户，都将被删除，单次传入的过滤器最多为 100 个。
                     * 
                     */
                    void SetFilters(const std::vector<UserFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 媒体库 ID。
                     */
                    std::string m_libraryId;
                    bool m_libraryIdHasBeenSet;

                    /**
                     * 用于唯一查找用户的过滤器数组，数组之间为 **或** 的关系，即满足任意一个过滤器的用户，都将被删除，单次传入的过滤器最多为 100 个。
                     */
                    std::vector<UserFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMH_V20210712_MODEL_DELETEUSERREQUEST_H_
