/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEDISKSREQUEST_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEDISKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * DescribeDisks请求参数结构体
                */
                class DescribeDisksRequest : public AbstractModel
                {
                public:
                    DescribeDisksRequest();
                    ~DescribeDisksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要查询信息的云盘ID列表
                     * @return DiskIds 要查询信息的云盘ID列表
                     * 
                     */
                    std::vector<std::string> GetDiskIds() const;

                    /**
                     * 设置要查询信息的云盘ID列表
                     * @param _diskIds 要查询信息的云盘ID列表
                     * 
                     */
                    void SetDiskIds(const std::vector<std::string>& _diskIds);

                    /**
                     * 判断参数 DiskIds 是否已赋值
                     * @return DiskIds 是否已赋值
                     * 
                     */
                    bool DiskIdsHasBeenSet() const;

                    /**
                     * 获取云盘所在地域
                     * @return DiskRegion 云盘所在地域
                     * 
                     */
                    std::string GetDiskRegion() const;

                    /**
                     * 设置云盘所在地域
                     * @param _diskRegion 云盘所在地域
                     * 
                     */
                    void SetDiskRegion(const std::string& _diskRegion);

                    /**
                     * 判断参数 DiskRegion 是否已赋值
                     * @return DiskRegion 是否已赋值
                     * 
                     */
                    bool DiskRegionHasBeenSet() const;

                private:

                    /**
                     * 要查询信息的云盘ID列表
                     */
                    std::vector<std::string> m_diskIds;
                    bool m_diskIdsHasBeenSet;

                    /**
                     * 云盘所在地域
                     */
                    std::string m_diskRegion;
                    bool m_diskRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_DESCRIBEDISKSREQUEST_H_
