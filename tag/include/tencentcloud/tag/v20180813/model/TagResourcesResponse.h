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

#ifndef TENCENTCLOUD_TAG_V20180813_MODEL_TAGRESOURCESRESPONSE_H_
#define TENCENTCLOUD_TAG_V20180813_MODEL_TAGRESOURCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tag/v20180813/model/FailedResource.h>


namespace TencentCloud
{
    namespace Tag
    {
        namespace V20180813
        {
            namespace Model
            {
                /**
                * TagResources返回参数结构体
                */
                class TagResourcesResponse : public AbstractModel
                {
                public:
                    TagResourcesResponse();
                    ~TagResourcesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取失败资源信息。
创建并绑定标签成功时，返回的FailedResources为空。
创建并绑定标签失败或部分失败时，返回的FailedResources会显示失败资源的详细信息。
                     * @return FailedResources 失败资源信息。
创建并绑定标签成功时，返回的FailedResources为空。
创建并绑定标签失败或部分失败时，返回的FailedResources会显示失败资源的详细信息。
                     * 
                     */
                    std::vector<FailedResource> GetFailedResources() const;

                    /**
                     * 判断参数 FailedResources 是否已赋值
                     * @return FailedResources 是否已赋值
                     * 
                     */
                    bool FailedResourcesHasBeenSet() const;

                private:

                    /**
                     * 失败资源信息。
创建并绑定标签成功时，返回的FailedResources为空。
创建并绑定标签失败或部分失败时，返回的FailedResources会显示失败资源的详细信息。
                     */
                    std::vector<FailedResource> m_failedResources;
                    bool m_failedResourcesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAG_V20180813_MODEL_TAGRESOURCESRESPONSE_H_
