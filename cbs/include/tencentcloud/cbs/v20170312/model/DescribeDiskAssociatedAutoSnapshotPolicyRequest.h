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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEDISKASSOCIATEDAUTOSNAPSHOTPOLICYREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEDISKASSOCIATEDAUTOSNAPSHOTPOLICYREQUEST_H_

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
                * DescribeDiskAssociatedAutoSnapshotPolicy请求参数结构体
                */
                class DescribeDiskAssociatedAutoSnapshotPolicyRequest : public AbstractModel
                {
                public:
                    DescribeDiskAssociatedAutoSnapshotPolicyRequest();
                    ~DescribeDiskAssociatedAutoSnapshotPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要查询的云硬盘ID，通过[DescribeDisks](https://cloud.tencent.com/document/api/362/16315)接口查询。
                     * @return DiskId 要查询的云硬盘ID，通过[DescribeDisks](https://cloud.tencent.com/document/api/362/16315)接口查询。
                     * 
                     */
                    std::string GetDiskId() const;

                    /**
                     * 设置要查询的云硬盘ID，通过[DescribeDisks](https://cloud.tencent.com/document/api/362/16315)接口查询。
                     * @param _diskId 要查询的云硬盘ID，通过[DescribeDisks](https://cloud.tencent.com/document/api/362/16315)接口查询。
                     * 
                     */
                    void SetDiskId(const std::string& _diskId);

                    /**
                     * 判断参数 DiskId 是否已赋值
                     * @return DiskId 是否已赋值
                     * 
                     */
                    bool DiskIdHasBeenSet() const;

                private:

                    /**
                     * 要查询的云硬盘ID，通过[DescribeDisks](https://cloud.tencent.com/document/api/362/16315)接口查询。
                     */
                    std::string m_diskId;
                    bool m_diskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_DESCRIBEDISKASSOCIATEDAUTOSNAPSHOTPOLICYREQUEST_H_
