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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_MODIFYUSERDIRECTORYREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_MODIFYUSERDIRECTORYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bh/v20230418/model/UserOrg.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * ModifyUserDirectory请求参数结构体
                */
                class ModifyUserDirectoryRequest : public AbstractModel
                {
                public:
                    ModifyUserDirectoryRequest();
                    ~ModifyUserDirectoryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取目录id
                     * @return Id 目录id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置目录id
                     * @param _id 目录id
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取ioa分组信息
                     * @return UserOrgSet ioa分组信息
                     * 
                     */
                    std::vector<UserOrg> GetUserOrgSet() const;

                    /**
                     * 设置ioa分组信息
                     * @param _userOrgSet ioa分组信息
                     * 
                     */
                    void SetUserOrgSet(const std::vector<UserOrg>& _userOrgSet);

                    /**
                     * 判断参数 UserOrgSet 是否已赋值
                     * @return UserOrgSet 是否已赋值
                     * 
                     */
                    bool UserOrgSetHasBeenSet() const;

                private:

                    /**
                     * 目录id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * ioa分组信息
                     */
                    std::vector<UserOrg> m_userOrgSet;
                    bool m_userOrgSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_MODIFYUSERDIRECTORYREQUEST_H_
