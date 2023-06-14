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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_CREATERESOURCEINSTANCESRESPONSE_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_CREATERESOURCEINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * CreateResourceInstances返回参数结构体
                */
                class CreateResourceInstancesResponse : public AbstractModel
                {
                public:
                    CreateResourceInstancesResponse();
                    ~CreateResourceInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取新创建的资源列表。
                     * @return ResourceSet 新创建的资源列表。
                     * 
                     */
                    std::vector<std::string> GetResourceSet() const;

                    /**
                     * 判断参数 ResourceSet 是否已赋值
                     * @return ResourceSet 是否已赋值
                     * 
                     */
                    bool ResourceSetHasBeenSet() const;

                private:

                    /**
                     * 新创建的资源列表。
                     */
                    std::vector<std::string> m_resourceSet;
                    bool m_resourceSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_CREATERESOURCEINSTANCESRESPONSE_H_
