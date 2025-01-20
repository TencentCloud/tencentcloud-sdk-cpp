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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DELETENETDETECTREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DELETENETDETECTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DeleteNetDetect请求参数结构体
                */
                class DeleteNetDetectRequest : public AbstractModel
                {
                public:
                    DeleteNetDetectRequest();
                    ~DeleteNetDetectRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网络探测实例`ID`。形如：`netd-12345678`。
                     * @return NetDetectId 网络探测实例`ID`。形如：`netd-12345678`。
                     * 
                     */
                    std::string GetNetDetectId() const;

                    /**
                     * 设置网络探测实例`ID`。形如：`netd-12345678`。
                     * @param _netDetectId 网络探测实例`ID`。形如：`netd-12345678`。
                     * 
                     */
                    void SetNetDetectId(const std::string& _netDetectId);

                    /**
                     * 判断参数 NetDetectId 是否已赋值
                     * @return NetDetectId 是否已赋值
                     * 
                     */
                    bool NetDetectIdHasBeenSet() const;

                private:

                    /**
                     * 网络探测实例`ID`。形如：`netd-12345678`。
                     */
                    std::string m_netDetectId;
                    bool m_netDetectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DELETENETDETECTREQUEST_H_
