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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DELETEBLUEPRINTSREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DELETEBLUEPRINTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DeleteBlueprints请求参数结构体
                */
                class DeleteBlueprintsRequest : public AbstractModel
                {
                public:
                    DeleteBlueprintsRequest();
                    ~DeleteBlueprintsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取镜像ID列表。镜像ID，可通过[DescribeBlueprints](https://cloud.tencent.com/document/product/1207/47689)接口返回值中的BlueprintId获取。
                     * @return BlueprintIds 镜像ID列表。镜像ID，可通过[DescribeBlueprints](https://cloud.tencent.com/document/product/1207/47689)接口返回值中的BlueprintId获取。
                     * 
                     */
                    std::vector<std::string> GetBlueprintIds() const;

                    /**
                     * 设置镜像ID列表。镜像ID，可通过[DescribeBlueprints](https://cloud.tencent.com/document/product/1207/47689)接口返回值中的BlueprintId获取。
                     * @param _blueprintIds 镜像ID列表。镜像ID，可通过[DescribeBlueprints](https://cloud.tencent.com/document/product/1207/47689)接口返回值中的BlueprintId获取。
                     * 
                     */
                    void SetBlueprintIds(const std::vector<std::string>& _blueprintIds);

                    /**
                     * 判断参数 BlueprintIds 是否已赋值
                     * @return BlueprintIds 是否已赋值
                     * 
                     */
                    bool BlueprintIdsHasBeenSet() const;

                private:

                    /**
                     * 镜像ID列表。镜像ID，可通过[DescribeBlueprints](https://cloud.tencent.com/document/product/1207/47689)接口返回值中的BlueprintId获取。
                     */
                    std::vector<std::string> m_blueprintIds;
                    bool m_blueprintIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DELETEBLUEPRINTSREQUEST_H_
