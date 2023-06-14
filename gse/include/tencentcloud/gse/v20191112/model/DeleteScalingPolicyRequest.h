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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_DELETESCALINGPOLICYREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_DELETESCALINGPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * DeleteScalingPolicy请求参数结构体
                */
                class DeleteScalingPolicyRequest : public AbstractModel
                {
                public:
                    DeleteScalingPolicyRequest();
                    ~DeleteScalingPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务器舰队ID
                     * @return FleetId 服务器舰队ID
                     * 
                     */
                    std::string GetFleetId() const;

                    /**
                     * 设置服务器舰队ID
                     * @param _fleetId 服务器舰队ID
                     * 
                     */
                    void SetFleetId(const std::string& _fleetId);

                    /**
                     * 判断参数 FleetId 是否已赋值
                     * @return FleetId 是否已赋值
                     * 
                     */
                    bool FleetIdHasBeenSet() const;

                    /**
                     * 获取扩缩容策略名称，最小长度为0，最大长度为1024
                     * @return Name 扩缩容策略名称，最小长度为0，最大长度为1024
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置扩缩容策略名称，最小长度为0，最大长度为1024
                     * @param _name 扩缩容策略名称，最小长度为0，最大长度为1024
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 服务器舰队ID
                     */
                    std::string m_fleetId;
                    bool m_fleetIdHasBeenSet;

                    /**
                     * 扩缩容策略名称，最小长度为0，最大长度为1024
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_DELETESCALINGPOLICYREQUEST_H_
