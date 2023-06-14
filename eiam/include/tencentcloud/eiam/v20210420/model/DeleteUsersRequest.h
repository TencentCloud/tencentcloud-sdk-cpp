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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_DELETEUSERSREQUEST_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_DELETEUSERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * DeleteUsers请求参数结构体
                */
                class DeleteUsersRequest : public AbstractModel
                {
                public:
                    DeleteUsersRequest();
                    ~DeleteUsersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取被删除用户的ID列表。DeleteIdList 和 DeleteNameList 需至少一个不为空；都不为空时优先使用 DeleteNameList。
                     * @return DeleteIdList 被删除用户的ID列表。DeleteIdList 和 DeleteNameList 需至少一个不为空；都不为空时优先使用 DeleteNameList。
                     * 
                     */
                    std::vector<std::string> GetDeleteIdList() const;

                    /**
                     * 设置被删除用户的ID列表。DeleteIdList 和 DeleteNameList 需至少一个不为空；都不为空时优先使用 DeleteNameList。
                     * @param _deleteIdList 被删除用户的ID列表。DeleteIdList 和 DeleteNameList 需至少一个不为空；都不为空时优先使用 DeleteNameList。
                     * 
                     */
                    void SetDeleteIdList(const std::vector<std::string>& _deleteIdList);

                    /**
                     * 判断参数 DeleteIdList 是否已赋值
                     * @return DeleteIdList 是否已赋值
                     * 
                     */
                    bool DeleteIdListHasBeenSet() const;

                    /**
                     * 获取被删除用户的名称列表。DeleteIdList 和 DeleteNameList 需至少一个不为空；都不为空时优先使用 DeleteNameList。
                     * @return DeleteNameList 被删除用户的名称列表。DeleteIdList 和 DeleteNameList 需至少一个不为空；都不为空时优先使用 DeleteNameList。
                     * 
                     */
                    std::vector<std::string> GetDeleteNameList() const;

                    /**
                     * 设置被删除用户的名称列表。DeleteIdList 和 DeleteNameList 需至少一个不为空；都不为空时优先使用 DeleteNameList。
                     * @param _deleteNameList 被删除用户的名称列表。DeleteIdList 和 DeleteNameList 需至少一个不为空；都不为空时优先使用 DeleteNameList。
                     * 
                     */
                    void SetDeleteNameList(const std::vector<std::string>& _deleteNameList);

                    /**
                     * 判断参数 DeleteNameList 是否已赋值
                     * @return DeleteNameList 是否已赋值
                     * 
                     */
                    bool DeleteNameListHasBeenSet() const;

                private:

                    /**
                     * 被删除用户的ID列表。DeleteIdList 和 DeleteNameList 需至少一个不为空；都不为空时优先使用 DeleteNameList。
                     */
                    std::vector<std::string> m_deleteIdList;
                    bool m_deleteIdListHasBeenSet;

                    /**
                     * 被删除用户的名称列表。DeleteIdList 和 DeleteNameList 需至少一个不为空；都不为空时优先使用 DeleteNameList。
                     */
                    std::vector<std::string> m_deleteNameList;
                    bool m_deleteNameListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_DELETEUSERSREQUEST_H_
