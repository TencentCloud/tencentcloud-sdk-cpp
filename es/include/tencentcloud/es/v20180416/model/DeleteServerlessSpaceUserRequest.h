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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DELETESERVERLESSSPACEUSERREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DELETESERVERLESSSPACEUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DeleteServerlessSpaceUser请求参数结构体
                */
                class DeleteServerlessSpaceUserRequest : public AbstractModel
                {
                public:
                    DeleteServerlessSpaceUserRequest();
                    ~DeleteServerlessSpaceUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取空间的ID
                     * @return SpaceId 空间的ID
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置空间的ID
                     * @param _spaceId 空间的ID
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取创建索引的用户名
                     * @return Username 创建索引的用户名
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置创建索引的用户名
                     * @param _username 创建索引的用户名
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                private:

                    /**
                     * 空间的ID
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * 创建索引的用户名
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DELETESERVERLESSSPACEUSERREQUEST_H_
