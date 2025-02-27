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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEBATCHMODIFYTAGSSTATUSRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEBATCHMODIFYTAGSSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/FailedResource.h>
#include <tencentcloud/tke/v20180525/model/Tag.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeBatchModifyTagsStatus返回参数结构体
                */
                class DescribeBatchModifyTagsStatusResponse : public AbstractModel
                {
                public:
                    DescribeBatchModifyTagsStatusResponse();
                    ~DescribeBatchModifyTagsStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取失败资源列表
                     * @return FailedResources 失败资源列表
                     * 
                     */
                    std::vector<FailedResource> GetFailedResources() const;

                    /**
                     * 判断参数 FailedResources 是否已赋值
                     * @return FailedResources 是否已赋值
                     * 
                     */
                    bool FailedResourcesHasBeenSet() const;

                    /**
                     * 获取任务状态：
- running 运行中
- failed 失败
- done 成功
                     * @return Status 任务状态：
- running 运行中
- failed 失败
- done 成功
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取是否同步集群内子资源标签
                     * @return SyncSubresource 是否同步集群内子资源标签
                     * 
                     */
                    bool GetSyncSubresource() const;

                    /**
                     * 判断参数 SyncSubresource 是否已赋值
                     * @return SyncSubresource 是否已赋值
                     * 
                     */
                    bool SyncSubresourceHasBeenSet() const;

                    /**
                     * 获取集群标签
                     * @return Tags 集群标签
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 失败资源列表
                     */
                    std::vector<FailedResource> m_failedResources;
                    bool m_failedResourcesHasBeenSet;

                    /**
                     * 任务状态：
- running 运行中
- failed 失败
- done 成功
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 是否同步集群内子资源标签
                     */
                    bool m_syncSubresource;
                    bool m_syncSubresourceHasBeenSet;

                    /**
                     * 集群标签
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEBATCHMODIFYTAGSSTATUSRESPONSE_H_
