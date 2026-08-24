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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_MODIFYDRILLPAIRATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_MODIFYDRILLPAIRATTRIBUTEREQUEST_H_

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
                * ModifyDrillPairAttribute请求参数结构体
                */
                class ModifyDrillPairAttributeRequest : public AbstractModel
                {
                public:
                    ModifyDrillPairAttributeRequest();
                    ~ModifyDrillPairAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要修改属性的容灾演练对id
                     * @return DrillPairId 要修改属性的容灾演练对id
                     * 
                     */
                    std::string GetDrillPairId() const;

                    /**
                     * 设置要修改属性的容灾演练对id
                     * @param _drillPairId 要修改属性的容灾演练对id
                     * 
                     */
                    void SetDrillPairId(const std::string& _drillPairId);

                    /**
                     * 判断参数 DrillPairId 是否已赋值
                     * @return DrillPairId 是否已赋值
                     * 
                     */
                    bool DrillPairIdHasBeenSet() const;

                    /**
                     * 获取修改容灾演练对名称（长度最大支持 64 个字符）
                     * @return DrillPairName 修改容灾演练对名称（长度最大支持 64 个字符）
                     * 
                     */
                    std::string GetDrillPairName() const;

                    /**
                     * 设置修改容灾演练对名称（长度最大支持 64 个字符）
                     * @param _drillPairName 修改容灾演练对名称（长度最大支持 64 个字符）
                     * 
                     */
                    void SetDrillPairName(const std::string& _drillPairName);

                    /**
                     * 判断参数 DrillPairName 是否已赋值
                     * @return DrillPairName 是否已赋值
                     * 
                     */
                    bool DrillPairNameHasBeenSet() const;

                private:

                    /**
                     * 要修改属性的容灾演练对id
                     */
                    std::string m_drillPairId;
                    bool m_drillPairIdHasBeenSet;

                    /**
                     * 修改容灾演练对名称（长度最大支持 64 个字符）
                     */
                    std::string m_drillPairName;
                    bool m_drillPairNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_MODIFYDRILLPAIRATTRIBUTEREQUEST_H_
