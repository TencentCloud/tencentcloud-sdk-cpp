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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_UNBINDINSTANCESREQUEST_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_UNBINDINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvd/v20201104/model/BindInfo.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * UnbindInstances请求参数结构体
                */
                class UnbindInstancesRequest : public AbstractModel
                {
                public:
                    UnbindInstancesRequest();
                    ~UnbindInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例所在地域
                     * @return InstanceRegion 实例所在地域
                     * 
                     */
                    std::string GetInstanceRegion() const;

                    /**
                     * 设置实例所在地域
                     * @param _instanceRegion 实例所在地域
                     * 
                     */
                    void SetInstanceRegion(const std::string& _instanceRegion);

                    /**
                     * 判断参数 InstanceRegion 是否已赋值
                     * @return InstanceRegion 是否已赋值
                     * 
                     */
                    bool InstanceRegionHasBeenSet() const;

                    /**
                     * 获取解除绑定关系列表
                     * @return BindInfos 解除绑定关系列表
                     * 
                     */
                    std::vector<BindInfo> GetBindInfos() const;

                    /**
                     * 设置解除绑定关系列表
                     * @param _bindInfos 解除绑定关系列表
                     * 
                     */
                    void SetBindInfos(const std::vector<BindInfo>& _bindInfos);

                    /**
                     * 判断参数 BindInfos 是否已赋值
                     * @return BindInfos 是否已赋值
                     * 
                     */
                    bool BindInfosHasBeenSet() const;

                private:

                    /**
                     * 实例所在地域
                     */
                    std::string m_instanceRegion;
                    bool m_instanceRegionHasBeenSet;

                    /**
                     * 解除绑定关系列表
                     */
                    std::vector<BindInfo> m_bindInfos;
                    bool m_bindInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_UNBINDINSTANCESREQUEST_H_
