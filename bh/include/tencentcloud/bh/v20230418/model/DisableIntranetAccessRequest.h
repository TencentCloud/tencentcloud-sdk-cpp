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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_DISABLEINTRANETACCESSREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_DISABLEINTRANETACCESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DisableIntranetAccess请求参数结构体
                */
                class DisableIntranetAccessRequest : public AbstractModel
                {
                public:
                    DisableIntranetAccessRequest();
                    ~DisableIntranetAccessRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取堡垒机id
                     * @return ResourceId 堡垒机id
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置堡垒机id
                     * @param _resourceId 堡垒机id
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                private:

                    /**
                     * 堡垒机id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_DISABLEINTRANETACCESSREQUEST_H_
