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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEDEVICEADDRLIST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEDEVICEADDRLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/RemoteAddrInfo.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 查询国标设备地址列表
                */
                class DescribeDeviceAddrList : public AbstractModel
                {
                public:
                    DescribeDeviceAddrList();
                    ~DescribeDeviceAddrList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备地址列表
                     * @return RemoteAddrs 设备地址列表
                     * 
                     */
                    std::vector<RemoteAddrInfo> GetRemoteAddrs() const;

                    /**
                     * 设置设备地址列表
                     * @param _remoteAddrs 设备地址列表
                     * 
                     */
                    void SetRemoteAddrs(const std::vector<RemoteAddrInfo>& _remoteAddrs);

                    /**
                     * 判断参数 RemoteAddrs 是否已赋值
                     * @return RemoteAddrs 是否已赋值
                     * 
                     */
                    bool RemoteAddrsHasBeenSet() const;

                private:

                    /**
                     * 设备地址列表
                     */
                    std::vector<RemoteAddrInfo> m_remoteAddrs;
                    bool m_remoteAddrsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEDEVICEADDRLIST_H_
