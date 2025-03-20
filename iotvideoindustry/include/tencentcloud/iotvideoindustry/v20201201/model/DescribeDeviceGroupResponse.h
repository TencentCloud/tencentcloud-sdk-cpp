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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEDEVICEGROUPRESPONSE_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEDEVICEGROUPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/DevGroupInfo.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * DescribeDeviceGroup返回参数结构体
                */
                class DescribeDeviceGroupResponse : public AbstractModel
                {
                public:
                    DescribeDeviceGroupResponse();
                    ~DescribeDeviceGroupResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取设备所在分组信息
                     * @return DevGroups 设备所在分组信息
                     * 
                     */
                    std::vector<DevGroupInfo> GetDevGroups() const;

                    /**
                     * 判断参数 DevGroups 是否已赋值
                     * @return DevGroups 是否已赋值
                     * 
                     */
                    bool DevGroupsHasBeenSet() const;

                private:

                    /**
                     * 设备所在分组信息
                     */
                    std::vector<DevGroupInfo> m_devGroups;
                    bool m_devGroupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEDEVICEGROUPRESPONSE_H_
