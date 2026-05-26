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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBETWESEECALLBACKREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBETWESEECALLBACKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * DescribeTWeSeeCallback请求参数结构体
                */
                class DescribeTWeSeeCallbackRequest : public AbstractModel
                {
                public:
                    DescribeTWeSeeCallbackRequest();
                    ~DescribeTWeSeeCallbackRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取回调目标 ID
                     * @return CallbackId 回调目标 ID
                     * 
                     */
                    std::string GetCallbackId() const;

                    /**
                     * 设置回调目标 ID
                     * @param _callbackId 回调目标 ID
                     * 
                     */
                    void SetCallbackId(const std::string& _callbackId);

                    /**
                     * 判断参数 CallbackId 是否已赋值
                     * @return CallbackId 是否已赋值
                     * 
                     */
                    bool CallbackIdHasBeenSet() const;

                private:

                    /**
                     * 回调目标 ID
                     */
                    std::string m_callbackId;
                    bool m_callbackIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBETWESEECALLBACKREQUEST_H_
