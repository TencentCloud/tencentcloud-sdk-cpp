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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEMASTERCOMPONENTRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEMASTERCOMPONENTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeMasterComponent返回参数结构体
                */
                class DescribeMasterComponentResponse : public AbstractModel
                {
                public:
                    DescribeMasterComponentResponse();
                    ~DescribeMasterComponentResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取master组件名称
                     * @return Component master组件名称
                     * 
                     */
                    std::string GetComponent() const;

                    /**
                     * 判断参数 Component 是否已赋值
                     * @return Component 是否已赋值
                     * 
                     */
                    bool ComponentHasBeenSet() const;

                    /**
                     * 获取master组件状态，三种状态：running、updating、shutdown
                     * @return Status master组件状态，三种状态：running、updating、shutdown
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * master组件名称
                     */
                    std::string m_component;
                    bool m_componentHasBeenSet;

                    /**
                     * master组件状态，三种状态：running、updating、shutdown
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEMASTERCOMPONENTRESPONSE_H_
