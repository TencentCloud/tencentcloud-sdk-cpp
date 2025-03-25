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

#ifndef TENCENTCLOUD_VCUBE_V20220410_MODEL_DESCRIBEXMAGICRESOURCELISTRESPONSE_H_
#define TENCENTCLOUD_VCUBE_V20220410_MODEL_DESCRIBEXMAGICRESOURCELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vcube/v20220410/model/XMagicResourceSimpleInfo.h>


namespace TencentCloud
{
    namespace Vcube
    {
        namespace V20220410
        {
            namespace Model
            {
                /**
                * DescribeXMagicResourceList返回参数结构体
                */
                class DescribeXMagicResourceListResponse : public AbstractModel
                {
                public:
                    DescribeXMagicResourceListResponse();
                    ~DescribeXMagicResourceListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取优图资源包信息
                     * @return Resources 优图资源包信息
                     * 
                     */
                    std::vector<XMagicResourceSimpleInfo> GetResources() const;

                    /**
                     * 判断参数 Resources 是否已赋值
                     * @return Resources 是否已赋值
                     * 
                     */
                    bool ResourcesHasBeenSet() const;

                    /**
                     * 获取资源数量
                     * @return Count 资源数量
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * 优图资源包信息
                     */
                    std::vector<XMagicResourceSimpleInfo> m_resources;
                    bool m_resourcesHasBeenSet;

                    /**
                     * 资源数量
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCUBE_V20220410_MODEL_DESCRIBEXMAGICRESOURCELISTRESPONSE_H_
