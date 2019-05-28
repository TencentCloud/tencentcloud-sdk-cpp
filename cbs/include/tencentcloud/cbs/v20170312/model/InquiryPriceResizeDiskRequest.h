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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_INQUIRYPRICERESIZEDISKREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_INQUIRYPRICERESIZEDISKREQUEST_H_

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
                * InquiryPriceResizeDisk请求参数结构体
                */
                class InquiryPriceResizeDiskRequest : public AbstractModel
                {
                public:
                    InquiryPriceResizeDiskRequest();
                    ~InquiryPriceResizeDiskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云硬盘ID， 通过[DescribeDisks](/document/product/362/16315)接口查询。
                     * @return DiskId 云硬盘ID， 通过[DescribeDisks](/document/product/362/16315)接口查询。
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置云硬盘ID， 通过[DescribeDisks](/document/product/362/16315)接口查询。
                     * @param DiskId 云硬盘ID， 通过[DescribeDisks](/document/product/362/16315)接口查询。
                     */
                    void SetDiskId(const std::string& _diskId);

                    /**
                     * 判断参数 DiskId 是否已赋值
                     * @return DiskId 是否已赋值
                     */
                    bool DiskIdHasBeenSet() const;

                    /**
                     * 获取云硬盘扩容后的大小，单位为GB，不得小于当前云硬盘大小。云盘大小取值范围参见云硬盘[产品分类](/document/product/362/2353)的说明。
                     * @return DiskSize 云硬盘扩容后的大小，单位为GB，不得小于当前云硬盘大小。云盘大小取值范围参见云硬盘[产品分类](/document/product/362/2353)的说明。
                     */
                    uint64_t GetDiskSize() const;

                    /**
                     * 设置云硬盘扩容后的大小，单位为GB，不得小于当前云硬盘大小。云盘大小取值范围参见云硬盘[产品分类](/document/product/362/2353)的说明。
                     * @param DiskSize 云硬盘扩容后的大小，单位为GB，不得小于当前云硬盘大小。云盘大小取值范围参见云硬盘[产品分类](/document/product/362/2353)的说明。
                     */
                    void SetDiskSize(const uint64_t& _diskSize);

                    /**
                     * 判断参数 DiskSize 是否已赋值
                     * @return DiskSize 是否已赋值
                     */
                    bool DiskSizeHasBeenSet() const;

                    /**
                     * 获取云盘所属项目ID。 如传入则仅用于鉴权。
                     * @return ProjectId 云盘所属项目ID。 如传入则仅用于鉴权。
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置云盘所属项目ID。 如传入则仅用于鉴权。
                     * @param ProjectId 云盘所属项目ID。 如传入则仅用于鉴权。
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * 云硬盘ID， 通过[DescribeDisks](/document/product/362/16315)接口查询。
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                    /**
                     * 云硬盘扩容后的大小，单位为GB，不得小于当前云硬盘大小。云盘大小取值范围参见云硬盘[产品分类](/document/product/362/2353)的说明。
                     */
                    uint64_t m_diskSize;
                    bool m_diskSizeHasBeenSet;

                    /**
                     * 云盘所属项目ID。 如传入则仅用于鉴权。
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_INQUIRYPRICERESIZEDISKREQUEST_H_
