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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYTARGETGROUPATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYTARGETGROUPATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * ModifyTargetGroupAttribute请求参数结构体
                */
                class ModifyTargetGroupAttributeRequest : public AbstractModel
                {
                public:
                    ModifyTargetGroupAttributeRequest();
                    ~ModifyTargetGroupAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取目标组的ID。
                     * @return TargetGroupId 目标组的ID。
                     * 
                     */
                    std::string GetTargetGroupId() const;

                    /**
                     * 设置目标组的ID。
                     * @param _targetGroupId 目标组的ID。
                     * 
                     */
                    void SetTargetGroupId(const std::string& _targetGroupId);

                    /**
                     * 判断参数 TargetGroupId 是否已赋值
                     * @return TargetGroupId 是否已赋值
                     * 
                     */
                    bool TargetGroupIdHasBeenSet() const;

                    /**
                     * 获取目标组的新名称。
                     * @return TargetGroupName 目标组的新名称。
                     * 
                     */
                    std::string GetTargetGroupName() const;

                    /**
                     * 设置目标组的新名称。
                     * @param _targetGroupName 目标组的新名称。
                     * 
                     */
                    void SetTargetGroupName(const std::string& _targetGroupName);

                    /**
                     * 判断参数 TargetGroupName 是否已赋值
                     * @return TargetGroupName 是否已赋值
                     * 
                     */
                    bool TargetGroupNameHasBeenSet() const;

                    /**
                     * 获取目标组的新默认端口。
                     * @return Port 目标组的新默认端口。
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置目标组的新默认端口。
                     * @param _port 目标组的新默认端口。
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                private:

                    /**
                     * 目标组的ID。
                     */
                    std::string m_targetGroupId;
                    bool m_targetGroupIdHasBeenSet;

                    /**
                     * 目标组的新名称。
                     */
                    std::string m_targetGroupName;
                    bool m_targetGroupNameHasBeenSet;

                    /**
                     * 目标组的新默认端口。
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODIFYTARGETGROUPATTRIBUTEREQUEST_H_
