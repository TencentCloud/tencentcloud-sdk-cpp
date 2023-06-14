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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DISABLEUNITROUTEREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DISABLEUNITROUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DisableUnitRoute请求参数结构体
                */
                class DisableUnitRouteRequest : public AbstractModel
                {
                public:
                    DisableUnitRouteRequest();
                    ~DisableUnitRouteRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网关实体ID
                     * @return Id 网关实体ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置网关实体ID
                     * @param _id 网关实体ID
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
                     * 网关实体ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DISABLEUNITROUTEREQUEST_H_
