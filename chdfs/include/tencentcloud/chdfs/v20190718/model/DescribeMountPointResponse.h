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

#ifndef TENCENTCLOUD_CHDFS_V20190718_MODEL_DESCRIBEMOUNTPOINTRESPONSE_H_
#define TENCENTCLOUD_CHDFS_V20190718_MODEL_DESCRIBEMOUNTPOINTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/chdfs/v20190718/model/MountPoint.h>


namespace TencentCloud
{
    namespace Chdfs
    {
        namespace V20190718
        {
            namespace Model
            {
                /**
                * DescribeMountPoint返回参数结构体
                */
                class DescribeMountPointResponse : public AbstractModel
                {
                public:
                    DescribeMountPointResponse();
                    ~DescribeMountPointResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取挂载点
                     * @return MountPoint 挂载点
                     * 
                     */
                    MountPoint GetMountPoint() const;

                    /**
                     * 判断参数 MountPoint 是否已赋值
                     * @return MountPoint 是否已赋值
                     * 
                     */
                    bool MountPointHasBeenSet() const;

                private:

                    /**
                     * 挂载点
                     */
                    MountPoint m_mountPoint;
                    bool m_mountPointHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20190718_MODEL_DESCRIBEMOUNTPOINTRESPONSE_H_
