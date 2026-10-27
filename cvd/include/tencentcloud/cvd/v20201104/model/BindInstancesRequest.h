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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_BINDINSTANCESREQUEST_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_BINDINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * BindInstances请求参数结构体
                */
                class BindInstancesRequest : public AbstractModel
                {
                public:
                    BindInstancesRequest();
                    ~BindInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>指定得到云桌面用户id</p>
                     * @return UserIds <p>指定得到云桌面用户id</p>
                     * 
                     */
                    std::vector<std::string> GetUserIds() const;

                    /**
                     * 设置<p>指定得到云桌面用户id</p>
                     * @param _userIds <p>指定得到云桌面用户id</p>
                     * 
                     */
                    void SetUserIds(const std::vector<std::string>& _userIds);

                    /**
                     * 判断参数 UserIds 是否已赋值
                     * @return UserIds 是否已赋值
                     * 
                     */
                    bool UserIdsHasBeenSet() const;

                    /**
                     * 获取<p>待分配桌面实例id</p>
                     * @return InstanceIds <p>待分配桌面实例id</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>待分配桌面实例id</p>
                     * @param _instanceIds <p>待分配桌面实例id</p>
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取<p>待分配桌面类型</p>
                     * @return InstanceType <p>待分配桌面类型</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>待分配桌面类型</p>
                     * @param _instanceType <p>待分配桌面类型</p>
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取<p>待分配桌面所在区域</p>
                     * @return InstanceRegion <p>待分配桌面所在区域</p>
                     * 
                     */
                    std::string GetInstanceRegion() const;

                    /**
                     * 设置<p>待分配桌面所在区域</p>
                     * @param _instanceRegion <p>待分配桌面所在区域</p>
                     * 
                     */
                    void SetInstanceRegion(const std::string& _instanceRegion);

                    /**
                     * 判断参数 InstanceRegion 是否已赋值
                     * @return InstanceRegion 是否已赋值
                     * 
                     */
                    bool InstanceRegionHasBeenSet() const;

                private:

                    /**
                     * <p>指定得到云桌面用户id</p>
                     */
                    std::vector<std::string> m_userIds;
                    bool m_userIdsHasBeenSet;

                    /**
                     * <p>待分配桌面实例id</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>待分配桌面类型</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>待分配桌面所在区域</p>
                     */
                    std::string m_instanceRegion;
                    bool m_instanceRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_BINDINSTANCESREQUEST_H_
