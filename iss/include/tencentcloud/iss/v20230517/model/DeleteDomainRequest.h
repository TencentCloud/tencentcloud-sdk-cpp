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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_DELETEDOMAINREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_DELETEDOMAINREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * DeleteDomain请求参数结构体
                */
                class DeleteDomainRequest : public AbstractModel
                {
                public:
                    DeleteDomainRequest();
                    ~DeleteDomainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名 ID
                     * @return Id 域名 ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置域名 ID
                     * @param _id 域名 ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * 域名 ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_DELETEDOMAINREQUEST_H_
