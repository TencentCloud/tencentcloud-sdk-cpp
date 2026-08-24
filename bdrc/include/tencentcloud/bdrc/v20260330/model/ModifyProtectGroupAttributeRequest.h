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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_MODIFYPROTECTGROUPATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_MODIFYPROTECTGROUPATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * ModifyProtectGroupAttribute请求参数结构体
                */
                class ModifyProtectGroupAttributeRequest : public AbstractModel
                {
                public:
                    ModifyProtectGroupAttributeRequest();
                    ~ModifyProtectGroupAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要修改属性的保护组id
                     * @return ProtectGroupId 要修改属性的保护组id
                     * 
                     */
                    std::string GetProtectGroupId() const;

                    /**
                     * 设置要修改属性的保护组id
                     * @param _protectGroupId 要修改属性的保护组id
                     * 
                     */
                    void SetProtectGroupId(const std::string& _protectGroupId);

                    /**
                     * 判断参数 ProtectGroupId 是否已赋值
                     * @return ProtectGroupId 是否已赋值
                     * 
                     */
                    bool ProtectGroupIdHasBeenSet() const;

                    /**
                     * 获取保护组名称
                     * @return ProtectGroupName 保护组名称
                     * 
                     */
                    std::string GetProtectGroupName() const;

                    /**
                     * 设置保护组名称
                     * @param _protectGroupName 保护组名称
                     * 
                     */
                    void SetProtectGroupName(const std::string& _protectGroupName);

                    /**
                     * 判断参数 ProtectGroupName 是否已赋值
                     * @return ProtectGroupName 是否已赋值
                     * 
                     */
                    bool ProtectGroupNameHasBeenSet() const;

                private:

                    /**
                     * 要修改属性的保护组id
                     */
                    std::string m_protectGroupId;
                    bool m_protectGroupIdHasBeenSet;

                    /**
                     * 保护组名称
                     */
                    std::string m_protectGroupName;
                    bool m_protectGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_MODIFYPROTECTGROUPATTRIBUTEREQUEST_H_
