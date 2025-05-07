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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_REBOOTANDROIDINSTANCEHOSTSREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_REBOOTANDROIDINSTANCEHOSTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * RebootAndroidInstanceHosts请求参数结构体
                */
                class RebootAndroidInstanceHostsRequest : public AbstractModel
                {
                public:
                    RebootAndroidInstanceHostsRequest();
                    ~RebootAndroidInstanceHostsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取宿主机序列号集合
                     * @return HostSerialNumbers 宿主机序列号集合
                     * 
                     */
                    std::vector<std::string> GetHostSerialNumbers() const;

                    /**
                     * 设置宿主机序列号集合
                     * @param _hostSerialNumbers 宿主机序列号集合
                     * 
                     */
                    void SetHostSerialNumbers(const std::vector<std::string>& _hostSerialNumbers);

                    /**
                     * 判断参数 HostSerialNumbers 是否已赋值
                     * @return HostSerialNumbers 是否已赋值
                     * 
                     */
                    bool HostSerialNumbersHasBeenSet() const;

                private:

                    /**
                     * 宿主机序列号集合
                     */
                    std::vector<std::string> m_hostSerialNumbers;
                    bool m_hostSerialNumbersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_REBOOTANDROIDINSTANCEHOSTSREQUEST_H_
