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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DELETEMODELSERVICEGROUPREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DELETEMODELSERVICEGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DeleteModelServiceGroup请求参数结构体
                */
                class DeleteModelServiceGroupRequest : public AbstractModel
                {
                public:
                    DeleteModelServiceGroupRequest();
                    ~DeleteModelServiceGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务id
                     * @return ServiceGroupId 服务id
                     * 
                     */
                    std::string GetServiceGroupId() const;

                    /**
                     * 设置服务id
                     * @param _serviceGroupId 服务id
                     * 
                     */
                    void SetServiceGroupId(const std::string& _serviceGroupId);

                    /**
                     * 判断参数 ServiceGroupId 是否已赋值
                     * @return ServiceGroupId 是否已赋值
                     * 
                     */
                    bool ServiceGroupIdHasBeenSet() const;

                private:

                    /**
                     * 服务id
                     */
                    std::string m_serviceGroupId;
                    bool m_serviceGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DELETEMODELSERVICEGROUPREQUEST_H_
