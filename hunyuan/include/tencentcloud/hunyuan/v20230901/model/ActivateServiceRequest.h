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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_ACTIVATESERVICEREQUEST_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_ACTIVATESERVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * ActivateService请求参数结构体
                */
                class ActivateServiceRequest : public AbstractModel
                {
                public:
                    ActivateServiceRequest();
                    ~ActivateServiceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开通之后，是否关闭后付费；默认为0，不关闭；1为关闭
                     * @return PayMode 开通之后，是否关闭后付费；默认为0，不关闭；1为关闭
                     * 
                     */
                    uint64_t GetPayMode() const;

                    /**
                     * 设置开通之后，是否关闭后付费；默认为0，不关闭；1为关闭
                     * @param _payMode 开通之后，是否关闭后付费；默认为0，不关闭；1为关闭
                     * 
                     */
                    void SetPayMode(const uint64_t& _payMode);

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                private:

                    /**
                     * 开通之后，是否关闭后付费；默认为0，不关闭；1为关闭
                     */
                    uint64_t m_payMode;
                    bool m_payModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_ACTIVATESERVICEREQUEST_H_
