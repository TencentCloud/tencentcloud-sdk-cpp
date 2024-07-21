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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_UPDATEL3SWITCHREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_UPDATEL3SWITCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * UpdateL3Switch请求参数结构体
                */
                class UpdateL3SwitchRequest : public AbstractModel
                {
                public:
                    UpdateL3SwitchRequest();
                    ~UpdateL3SwitchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取互通规则ID
                     * @return L3ConnId 互通规则ID
                     * 
                     */
                    std::string GetL3ConnId() const;

                    /**
                     * 设置互通规则ID
                     * @param _l3ConnId 互通规则ID
                     * 
                     */
                    void SetL3ConnId(const std::string& _l3ConnId);

                    /**
                     * 判断参数 L3ConnId 是否已赋值
                     * @return L3ConnId 是否已赋值
                     * 
                     */
                    bool L3ConnIdHasBeenSet() const;

                    /**
                     * 获取互通规则开关
                     * @return Enable 互通规则开关
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置互通规则开关
                     * @param _enable 互通规则开关
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                private:

                    /**
                     * 互通规则ID
                     */
                    std::string m_l3ConnId;
                    bool m_l3ConnIdHasBeenSet;

                    /**
                     * 互通规则开关
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_UPDATEL3SWITCHREQUEST_H_
