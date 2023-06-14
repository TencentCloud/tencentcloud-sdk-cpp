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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DELETEPROXYGROUPREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DELETEPROXYGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DeleteProxyGroup请求参数结构体
                */
                class DeleteProxyGroupRequest : public AbstractModel
                {
                public:
                    DeleteProxyGroupRequest();
                    ~DeleteProxyGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取需要删除的通道组ID。
                     * @return GroupId 需要删除的通道组ID。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置需要删除的通道组ID。
                     * @param _groupId 需要删除的通道组ID。
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取强制删除标识。其中：
0，不强制删除，
1，强制删除。
默认为0，当通道组中存在通道或通道组中存在监听器/规则绑定了源站时，且Force为0时，该操作会返回失败。
                     * @return Force 强制删除标识。其中：
0，不强制删除，
1，强制删除。
默认为0，当通道组中存在通道或通道组中存在监听器/规则绑定了源站时，且Force为0时，该操作会返回失败。
                     * 
                     */
                    uint64_t GetForce() const;

                    /**
                     * 设置强制删除标识。其中：
0，不强制删除，
1，强制删除。
默认为0，当通道组中存在通道或通道组中存在监听器/规则绑定了源站时，且Force为0时，该操作会返回失败。
                     * @param _force 强制删除标识。其中：
0，不强制删除，
1，强制删除。
默认为0，当通道组中存在通道或通道组中存在监听器/规则绑定了源站时，且Force为0时，该操作会返回失败。
                     * 
                     */
                    void SetForce(const uint64_t& _force);

                    /**
                     * 判断参数 Force 是否已赋值
                     * @return Force 是否已赋值
                     * 
                     */
                    bool ForceHasBeenSet() const;

                private:

                    /**
                     * 需要删除的通道组ID。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 强制删除标识。其中：
0，不强制删除，
1，强制删除。
默认为0，当通道组中存在通道或通道组中存在监听器/规则绑定了源站时，且Force为0时，该操作会返回失败。
                     */
                    uint64_t m_force;
                    bool m_forceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DELETEPROXYGROUPREQUEST_H_
