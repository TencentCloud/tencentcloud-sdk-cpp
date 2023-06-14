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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_MOVERESOURCEREQUEST_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_MOVERESOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/ResourceInfo.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * MoveResource请求参数结构体
                */
                class MoveResourceRequest : public AbstractModel
                {
                public:
                    MoveResourceRequest();
                    ~MoveResourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * @return Platform 平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * @param _platform 平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取待移动的原始资源信息，包含原始媒体或分类资源，以及资源归属。
                     * @return SourceResource 待移动的原始资源信息，包含原始媒体或分类资源，以及资源归属。
                     * 
                     */
                    ResourceInfo GetSourceResource() const;

                    /**
                     * 设置待移动的原始资源信息，包含原始媒体或分类资源，以及资源归属。
                     * @param _sourceResource 待移动的原始资源信息，包含原始媒体或分类资源，以及资源归属。
                     * 
                     */
                    void SetSourceResource(const ResourceInfo& _sourceResource);

                    /**
                     * 判断参数 SourceResource 是否已赋值
                     * @return SourceResource 是否已赋值
                     * 
                     */
                    bool SourceResourceHasBeenSet() const;

                    /**
                     * 获取目标信息，包含分类及归属，仅支持移动资源到分类。
                     * @return DestinationResource 目标信息，包含分类及归属，仅支持移动资源到分类。
                     * 
                     */
                    ResourceInfo GetDestinationResource() const;

                    /**
                     * 设置目标信息，包含分类及归属，仅支持移动资源到分类。
                     * @param _destinationResource 目标信息，包含分类及归属，仅支持移动资源到分类。
                     * 
                     */
                    void SetDestinationResource(const ResourceInfo& _destinationResource);

                    /**
                     * 判断参数 DestinationResource 是否已赋值
                     * @return DestinationResource 是否已赋值
                     * 
                     */
                    bool DestinationResourceHasBeenSet() const;

                    /**
                     * 获取操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以移动任务资源。如果指定操作者，则操作者必须对源及目标资源有写权限。
                     * @return Operator 操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以移动任务资源。如果指定操作者，则操作者必须对源及目标资源有写权限。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以移动任务资源。如果指定操作者，则操作者必须对源及目标资源有写权限。
                     * @param _operator 操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以移动任务资源。如果指定操作者，则操作者必须对源及目标资源有写权限。
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 待移动的原始资源信息，包含原始媒体或分类资源，以及资源归属。
                     */
                    ResourceInfo m_sourceResource;
                    bool m_sourceResourceHasBeenSet;

                    /**
                     * 目标信息，包含分类及归属，仅支持移动资源到分类。
                     */
                    ResourceInfo m_destinationResource;
                    bool m_destinationResourceHasBeenSet;

                    /**
                     * 操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以移动任务资源。如果指定操作者，则操作者必须对源及目标资源有写权限。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_MOVERESOURCEREQUEST_H_
