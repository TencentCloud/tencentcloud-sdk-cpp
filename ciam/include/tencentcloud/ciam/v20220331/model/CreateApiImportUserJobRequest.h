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

#ifndef TENCENTCLOUD_CIAM_V20220331_MODEL_CREATEAPIIMPORTUSERJOBREQUEST_H_
#define TENCENTCLOUD_CIAM_V20220331_MODEL_CREATEAPIIMPORTUSERJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ciam/v20220331/model/ImportUser.h>


namespace TencentCloud
{
    namespace Ciam
    {
        namespace V20220331
        {
            namespace Model
            {
                /**
                * CreateApiImportUserJob请求参数结构体
                */
                class CreateApiImportUserJobRequest : public AbstractModel
                {
                public:
                    CreateApiImportUserJobRequest();
                    ~CreateApiImportUserJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户目录ID
                     * @return UserStoreId 用户目录ID
                     * 
                     */
                    std::string GetUserStoreId() const;

                    /**
                     * 设置用户目录ID
                     * @param _userStoreId 用户目录ID
                     * 
                     */
                    void SetUserStoreId(const std::string& _userStoreId);

                    /**
                     * 判断参数 UserStoreId 是否已赋值
                     * @return UserStoreId 是否已赋值
                     * 
                     */
                    bool UserStoreIdHasBeenSet() const;

                    /**
                     * 获取导入的用户数据
                     * @return DataFlowUserCreateList 导入的用户数据
                     * 
                     */
                    std::vector<ImportUser> GetDataFlowUserCreateList() const;

                    /**
                     * 设置导入的用户数据
                     * @param _dataFlowUserCreateList 导入的用户数据
                     * 
                     */
                    void SetDataFlowUserCreateList(const std::vector<ImportUser>& _dataFlowUserCreateList);

                    /**
                     * 判断参数 DataFlowUserCreateList 是否已赋值
                     * @return DataFlowUserCreateList 是否已赋值
                     * 
                     */
                    bool DataFlowUserCreateListHasBeenSet() const;

                private:

                    /**
                     * 用户目录ID
                     */
                    std::string m_userStoreId;
                    bool m_userStoreIdHasBeenSet;

                    /**
                     * 导入的用户数据
                     */
                    std::vector<ImportUser> m_dataFlowUserCreateList;
                    bool m_dataFlowUserCreateListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_CREATEAPIIMPORTUSERJOBREQUEST_H_
