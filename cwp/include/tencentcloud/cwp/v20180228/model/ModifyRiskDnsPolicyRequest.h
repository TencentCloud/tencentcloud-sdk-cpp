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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYRISKDNSPOLICYREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYRISKDNSPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/RiskDnsPolicy.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ModifyRiskDnsPolicy请求参数结构体
                */
                class ModifyRiskDnsPolicyRequest : public AbstractModel
                {
                public:
                    ModifyRiskDnsPolicyRequest();
                    ~ModifyRiskDnsPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取策略
                     * @return Data 策略
                     * 
                     */
                    RiskDnsPolicy GetData() const;

                    /**
                     * 设置策略
                     * @param _data 策略
                     * 
                     */
                    void SetData(const RiskDnsPolicy& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 策略
                     */
                    RiskDnsPolicy m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_MODIFYRISKDNSPOLICYREQUEST_H_
