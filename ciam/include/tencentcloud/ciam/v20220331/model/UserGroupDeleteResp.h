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

#ifndef TENCENTCLOUD_CIAM_V20220331_MODEL_USERGROUPDELETERESP_H_
#define TENCENTCLOUD_CIAM_V20220331_MODEL_USERGROUPDELETERESP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ciam/v20220331/model/AppAssociatedUserGroupIds.h>


namespace TencentCloud
{
    namespace Ciam
    {
        namespace V20220331
        {
            namespace Model
            {
                /**
                * 删除用户组信息时返回的详情
                */
                class UserGroupDeleteResp : public AbstractModel
                {
                public:
                    UserGroupDeleteResp();
                    ~UserGroupDeleteResp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取错误详情
                     * @return ErrorMessage 错误详情
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 设置错误详情
                     * @param _errorMessage 错误详情
                     * 
                     */
                    void SetErrorMessage(const std::string& _errorMessage);

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取用户组关联的应用信息
                     * @return AppAssociatedUserGroupIds 用户组关联的应用信息
                     * 
                     */
                    std::vector<AppAssociatedUserGroupIds> GetAppAssociatedUserGroupIds() const;

                    /**
                     * 设置用户组关联的应用信息
                     * @param _appAssociatedUserGroupIds 用户组关联的应用信息
                     * 
                     */
                    void SetAppAssociatedUserGroupIds(const std::vector<AppAssociatedUserGroupIds>& _appAssociatedUserGroupIds);

                    /**
                     * 判断参数 AppAssociatedUserGroupIds 是否已赋值
                     * @return AppAssociatedUserGroupIds 是否已赋值
                     * 
                     */
                    bool AppAssociatedUserGroupIdsHasBeenSet() const;

                private:

                    /**
                     * 错误详情
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * 用户组关联的应用信息
                     */
                    std::vector<AppAssociatedUserGroupIds> m_appAssociatedUserGroupIds;
                    bool m_appAssociatedUserGroupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_USERGROUPDELETERESP_H_
