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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_CREATEOFFLINELOGCONFIGREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_CREATEOFFLINELOGCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * CreateOfflineLogConfig请求参数结构体
                */
                class CreateOfflineLogConfigRequest : public AbstractModel
                {
                public:
                    CreateOfflineLogConfigRequest();
                    ~CreateOfflineLogConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目唯一上报 key
                     * @return ProjectKey 项目唯一上报 key
                     */
                    std::string GetProjectKey() const;

                    /**
                     * 设置项目唯一上报 key
                     * @param ProjectKey 项目唯一上报 key
                     */
                    void SetProjectKey(const std::string& _projectKey);

                    /**
                     * 判断参数 ProjectKey 是否已赋值
                     * @return ProjectKey 是否已赋值
                     */
                    bool ProjectKeyHasBeenSet() const;

                    /**
                     * 获取需要监听的用户唯一标示(aid 或 uin)
                     * @return UniqueID 需要监听的用户唯一标示(aid 或 uin)
                     */
                    std::string GetUniqueID() const;

                    /**
                     * 设置需要监听的用户唯一标示(aid 或 uin)
                     * @param UniqueID 需要监听的用户唯一标示(aid 或 uin)
                     */
                    void SetUniqueID(const std::string& _uniqueID);

                    /**
                     * 判断参数 UniqueID 是否已赋值
                     * @return UniqueID 是否已赋值
                     */
                    bool UniqueIDHasBeenSet() const;

                private:

                    /**
                     * 项目唯一上报 key
                     */
                    std::string m_projectKey;
                    bool m_projectKeyHasBeenSet;

                    /**
                     * 需要监听的用户唯一标示(aid 或 uin)
                     */
                    std::string m_uniqueID;
                    bool m_uniqueIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_CREATEOFFLINELOGCONFIGREQUEST_H_
