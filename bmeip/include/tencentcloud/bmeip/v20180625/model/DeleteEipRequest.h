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

#ifndef TENCENTCLOUD_BMEIP_V20180625_MODEL_DELETEEIPREQUEST_H_
#define TENCENTCLOUD_BMEIP_V20180625_MODEL_DELETEEIPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmeip
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * DeleteEip请求参数结构体
                */
                class DeleteEipRequest : public AbstractModel
                {
                public:
                    DeleteEipRequest();
                    ~DeleteEipRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Eip实例ID列表
                     * @return EipIds Eip实例ID列表
                     * 
                     */
                    std::vector<std::string> GetEipIds() const;

                    /**
                     * 设置Eip实例ID列表
                     * @param _eipIds Eip实例ID列表
                     * 
                     */
                    void SetEipIds(const std::vector<std::string>& _eipIds);

                    /**
                     * 判断参数 EipIds 是否已赋值
                     * @return EipIds 是否已赋值
                     * 
                     */
                    bool EipIdsHasBeenSet() const;

                private:

                    /**
                     * Eip实例ID列表
                     */
                    std::vector<std::string> m_eipIds;
                    bool m_eipIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMEIP_V20180625_MODEL_DELETEEIPREQUEST_H_
