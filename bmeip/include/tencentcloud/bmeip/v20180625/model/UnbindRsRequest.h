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

#ifndef TENCENTCLOUD_BMEIP_V20180625_MODEL_UNBINDRSREQUEST_H_
#define TENCENTCLOUD_BMEIP_V20180625_MODEL_UNBINDRSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmeip
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * UnbindRs请求参数结构体
                */
                class UnbindRsRequest : public AbstractModel
                {
                public:
                    UnbindRsRequest();
                    ~UnbindRsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Eip实例ID
                     * @return EipId Eip实例ID
                     * 
                     */
                    std::string GetEipId() const;

                    /**
                     * 设置Eip实例ID
                     * @param _eipId Eip实例ID
                     * 
                     */
                    void SetEipId(const std::string& _eipId);

                    /**
                     * 判断参数 EipId 是否已赋值
                     * @return EipId 是否已赋值
                     * 
                     */
                    bool EipIdHasBeenSet() const;

                    /**
                     * 获取物理服务器实例ID
                     * @return InstanceId 物理服务器实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置物理服务器实例ID
                     * @param _instanceId 物理服务器实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * Eip实例ID
                     */
                    std::string m_eipId;
                    bool m_eipIdHasBeenSet;

                    /**
                     * 物理服务器实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMEIP_V20180625_MODEL_UNBINDRSREQUEST_H_
