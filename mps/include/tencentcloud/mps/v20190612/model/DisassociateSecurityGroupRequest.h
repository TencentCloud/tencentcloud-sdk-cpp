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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DISASSOCIATESECURITYGROUPREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DISASSOCIATESECURITYGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/UnattachSecurityGroupInOutInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DisassociateSecurityGroup请求参数结构体
                */
                class DisassociateSecurityGroupRequest : public AbstractModel
                {
                public:
                    DisassociateSecurityGroupRequest();
                    ~DisassociateSecurityGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取媒体传输安全组ID。
                     * @return Id 媒体传输安全组ID。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置媒体传输安全组ID。
                     * @param _id 媒体传输安全组ID。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取要解绑的输入输出信息列表。
                     * @return UnattachInOutInfos 要解绑的输入输出信息列表。
                     * 
                     */
                    std::vector<UnattachSecurityGroupInOutInfo> GetUnattachInOutInfos() const;

                    /**
                     * 设置要解绑的输入输出信息列表。
                     * @param _unattachInOutInfos 要解绑的输入输出信息列表。
                     * 
                     */
                    void SetUnattachInOutInfos(const std::vector<UnattachSecurityGroupInOutInfo>& _unattachInOutInfos);

                    /**
                     * 判断参数 UnattachInOutInfos 是否已赋值
                     * @return UnattachInOutInfos 是否已赋值
                     * 
                     */
                    bool UnattachInOutInfosHasBeenSet() const;

                private:

                    /**
                     * 媒体传输安全组ID。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 要解绑的输入输出信息列表。
                     */
                    std::vector<UnattachSecurityGroupInOutInfo> m_unattachInOutInfos;
                    bool m_unattachInOutInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DISASSOCIATESECURITYGROUPREQUEST_H_
