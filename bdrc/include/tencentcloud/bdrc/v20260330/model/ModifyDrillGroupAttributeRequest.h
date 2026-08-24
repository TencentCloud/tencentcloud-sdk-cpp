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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_MODIFYDRILLGROUPATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_MODIFYDRILLGROUPATTRIBUTEREQUEST_H_

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
                * ModifyDrillGroupAttribute请求参数结构体
                */
                class ModifyDrillGroupAttributeRequest : public AbstractModel
                {
                public:
                    ModifyDrillGroupAttributeRequest();
                    ~ModifyDrillGroupAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要修改属性的容灾演练组id。
                     * @return DrillGroupId 要修改属性的容灾演练组id。
                     * 
                     */
                    std::string GetDrillGroupId() const;

                    /**
                     * 设置要修改属性的容灾演练组id。
                     * @param _drillGroupId 要修改属性的容灾演练组id。
                     * 
                     */
                    void SetDrillGroupId(const std::string& _drillGroupId);

                    /**
                     * 判断参数 DrillGroupId 是否已赋值
                     * @return DrillGroupId 是否已赋值
                     * 
                     */
                    bool DrillGroupIdHasBeenSet() const;

                    /**
                     * 获取修改容灾演练组名称（长度最大支持 64 个字符）
                     * @return DrillGroupName 修改容灾演练组名称（长度最大支持 64 个字符）
                     * 
                     */
                    std::string GetDrillGroupName() const;

                    /**
                     * 设置修改容灾演练组名称（长度最大支持 64 个字符）
                     * @param _drillGroupName 修改容灾演练组名称（长度最大支持 64 个字符）
                     * 
                     */
                    void SetDrillGroupName(const std::string& _drillGroupName);

                    /**
                     * 判断参数 DrillGroupName 是否已赋值
                     * @return DrillGroupName 是否已赋值
                     * 
                     */
                    bool DrillGroupNameHasBeenSet() const;

                private:

                    /**
                     * 要修改属性的容灾演练组id。
                     */
                    std::string m_drillGroupId;
                    bool m_drillGroupIdHasBeenSet;

                    /**
                     * 修改容灾演练组名称（长度最大支持 64 个字符）
                     */
                    std::string m_drillGroupName;
                    bool m_drillGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_MODIFYDRILLGROUPATTRIBUTEREQUEST_H_
