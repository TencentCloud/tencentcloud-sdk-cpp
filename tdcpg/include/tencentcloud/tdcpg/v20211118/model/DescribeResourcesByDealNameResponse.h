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

#ifndef TENCENTCLOUD_TDCPG_V20211118_MODEL_DESCRIBERESOURCESBYDEALNAMERESPONSE_H_
#define TENCENTCLOUD_TDCPG_V20211118_MODEL_DESCRIBERESOURCESBYDEALNAMERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdcpg/v20211118/model/ResourceIdInfo.h>


namespace TencentCloud
{
    namespace Tdcpg
    {
        namespace V20211118
        {
            namespace Model
            {
                /**
                * DescribeResourcesByDealName返回参数结构体
                */
                class DescribeResourcesByDealNameResponse : public AbstractModel
                {
                public:
                    DescribeResourcesByDealNameResponse();
                    ~DescribeResourcesByDealNameResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取资源ID信息列表
                     * @return ResourceIdInfoSet 资源ID信息列表
                     * 
                     */
                    std::vector<ResourceIdInfo> GetResourceIdInfoSet() const;

                    /**
                     * 判断参数 ResourceIdInfoSet 是否已赋值
                     * @return ResourceIdInfoSet 是否已赋值
                     * 
                     */
                    bool ResourceIdInfoSetHasBeenSet() const;

                private:

                    /**
                     * 资源ID信息列表
                     */
                    std::vector<ResourceIdInfo> m_resourceIdInfoSet;
                    bool m_resourceIdInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDCPG_V20211118_MODEL_DESCRIBERESOURCESBYDEALNAMERESPONSE_H_
