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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_DESCRIBESHIELDPLANINSTANCERESPONSE_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_DESCRIBESHIELDPLANINSTANCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ms/v20180408/model/BindInfo.h>
#include <tencentcloud/ms/v20180408/model/ShieldPlanInfo.h>
#include <tencentcloud/ms/v20180408/model/ResourceServiceInfo.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * DescribeShieldPlanInstance返回参数结构体
                */
                class DescribeShieldPlanInstanceResponse : public AbstractModel
                {
                public:
                    DescribeShieldPlanInstanceResponse();
                    ~DescribeShieldPlanInstanceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取绑定资源信息
                     * @return BindInfo 绑定资源信息
                     * 
                     */
                    BindInfo GetBindInfo() const;

                    /**
                     * 判断参数 BindInfo 是否已赋值
                     * @return BindInfo 是否已赋值
                     * 
                     */
                    bool BindInfoHasBeenSet() const;

                    /**
                     * 获取加固策略信息
                     * @return ShieldPlanInfo 加固策略信息
                     * 
                     */
                    ShieldPlanInfo GetShieldPlanInfo() const;

                    /**
                     * 判断参数 ShieldPlanInfo 是否已赋值
                     * @return ShieldPlanInfo 是否已赋值
                     * 
                     */
                    bool ShieldPlanInfoHasBeenSet() const;

                    /**
                     * 获取加固资源信息
                     * @return ResourceServiceInfo 加固资源信息
                     * 
                     */
                    ResourceServiceInfo GetResourceServiceInfo() const;

                    /**
                     * 判断参数 ResourceServiceInfo 是否已赋值
                     * @return ResourceServiceInfo 是否已赋值
                     * 
                     */
                    bool ResourceServiceInfoHasBeenSet() const;

                private:

                    /**
                     * 绑定资源信息
                     */
                    BindInfo m_bindInfo;
                    bool m_bindInfoHasBeenSet;

                    /**
                     * 加固策略信息
                     */
                    ShieldPlanInfo m_shieldPlanInfo;
                    bool m_shieldPlanInfoHasBeenSet;

                    /**
                     * 加固资源信息
                     */
                    ResourceServiceInfo m_resourceServiceInfo;
                    bool m_resourceServiceInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_DESCRIBESHIELDPLANINSTANCERESPONSE_H_
