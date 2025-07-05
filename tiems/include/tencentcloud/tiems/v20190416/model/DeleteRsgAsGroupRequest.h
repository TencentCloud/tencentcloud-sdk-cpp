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

#ifndef TENCENTCLOUD_TIEMS_V20190416_MODEL_DELETERSGASGROUPREQUEST_H_
#define TENCENTCLOUD_TIEMS_V20190416_MODEL_DELETERSGASGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiems
    {
        namespace V20190416
        {
            namespace Model
            {
                /**
                * DeleteRsgAsGroup请求参数结构体
                */
                class DeleteRsgAsGroupRequest : public AbstractModel
                {
                public:
                    DeleteRsgAsGroupRequest();
                    ~DeleteRsgAsGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取伸缩组 ID
                     * @return Id 伸缩组 ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置伸缩组 ID
                     * @param _id 伸缩组 ID
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
                     * 伸缩组 ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIEMS_V20190416_MODEL_DELETERSGASGROUPREQUEST_H_
