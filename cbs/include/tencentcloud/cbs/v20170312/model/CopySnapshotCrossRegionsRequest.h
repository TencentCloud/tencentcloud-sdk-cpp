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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_COPYSNAPSHOTCROSSREGIONSREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_COPYSNAPSHOTCROSSREGIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * CopySnapshotCrossRegions请求参数结构体
                */
                class CopySnapshotCrossRegionsRequest : public AbstractModel
                {
                public:
                    CopySnapshotCrossRegionsRequest();
                    ~CopySnapshotCrossRegionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取快照需要复制到的目标地域，各地域的标准取值可通过接口[DescribeRegions](https://cloud.tencent.com/document/product/213/9456)查询，且只能传入支持快照的地域。
                     * @return DestinationRegions 快照需要复制到的目标地域，各地域的标准取值可通过接口[DescribeRegions](https://cloud.tencent.com/document/product/213/9456)查询，且只能传入支持快照的地域。
                     * 
                     */
                    std::vector<std::string> GetDestinationRegions() const;

                    /**
                     * 设置快照需要复制到的目标地域，各地域的标准取值可通过接口[DescribeRegions](https://cloud.tencent.com/document/product/213/9456)查询，且只能传入支持快照的地域。
                     * @param _destinationRegions 快照需要复制到的目标地域，各地域的标准取值可通过接口[DescribeRegions](https://cloud.tencent.com/document/product/213/9456)查询，且只能传入支持快照的地域。
                     * 
                     */
                    void SetDestinationRegions(const std::vector<std::string>& _destinationRegions);

                    /**
                     * 判断参数 DestinationRegions 是否已赋值
                     * @return DestinationRegions 是否已赋值
                     * 
                     */
                    bool DestinationRegionsHasBeenSet() const;

                    /**
                     * 获取需要跨地域复制的源快照ID，可通过[DescribeSnapshots](/document/product/362/15647)查询。
                     * @return SnapshotId 需要跨地域复制的源快照ID，可通过[DescribeSnapshots](/document/product/362/15647)查询。
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置需要跨地域复制的源快照ID，可通过[DescribeSnapshots](/document/product/362/15647)查询。
                     * @param _snapshotId 需要跨地域复制的源快照ID，可通过[DescribeSnapshots](/document/product/362/15647)查询。
                     * 
                     */
                    void SetSnapshotId(const std::string& _snapshotId);

                    /**
                     * 判断参数 SnapshotId 是否已赋值
                     * @return SnapshotId 是否已赋值
                     * 
                     */
                    bool SnapshotIdHasBeenSet() const;

                    /**
                     * 获取新复制快照的名称，如果不传，则默认取值为“Copied 源快照ID from 地域名”。
                     * @return SnapshotName 新复制快照的名称，如果不传，则默认取值为“Copied 源快照ID from 地域名”。
                     * 
                     */
                    std::string GetSnapshotName() const;

                    /**
                     * 设置新复制快照的名称，如果不传，则默认取值为“Copied 源快照ID from 地域名”。
                     * @param _snapshotName 新复制快照的名称，如果不传，则默认取值为“Copied 源快照ID from 地域名”。
                     * 
                     */
                    void SetSnapshotName(const std::string& _snapshotName);

                    /**
                     * 判断参数 SnapshotName 是否已赋值
                     * @return SnapshotName 是否已赋值
                     * 
                     */
                    bool SnapshotNameHasBeenSet() const;

                private:

                    /**
                     * 快照需要复制到的目标地域，各地域的标准取值可通过接口[DescribeRegions](https://cloud.tencent.com/document/product/213/9456)查询，且只能传入支持快照的地域。
                     */
                    std::vector<std::string> m_destinationRegions;
                    bool m_destinationRegionsHasBeenSet;

                    /**
                     * 需要跨地域复制的源快照ID，可通过[DescribeSnapshots](/document/product/362/15647)查询。
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * 新复制快照的名称，如果不传，则默认取值为“Copied 源快照ID from 地域名”。
                     */
                    std::string m_snapshotName;
                    bool m_snapshotNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_COPYSNAPSHOTCROSSREGIONSREQUEST_H_
