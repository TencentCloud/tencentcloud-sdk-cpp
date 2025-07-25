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

#ifndef TENCENTCLOUD_CSXG_V20230303_MODEL_DELETE5GINSTANCEREQUEST_H_
#define TENCENTCLOUD_CSXG_V20230303_MODEL_DELETE5GINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csxg
    {
        namespace V20230303
        {
            namespace Model
            {
                /**
                * Delete5GInstance请求参数结构体
                */
                class Delete5GInstanceRequest : public AbstractModel
                {
                public:
                    Delete5GInstanceRequest();
                    ~Delete5GInstanceRequest() = default;
                    std::string ToJsonString() const;


                private:

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSXG_V20230303_MODEL_DELETE5GINSTANCEREQUEST_H_
