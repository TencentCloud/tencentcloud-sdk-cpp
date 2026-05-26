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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DELETETWESEECALLBACKREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DELETETWESEECALLBACKREQUEST_H_

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
                * DeleteTWeSeeCallback请求参数结构体
                */
                class DeleteTWeSeeCallbackRequest : public AbstractModel
                {
                public:
                    DeleteTWeSeeCallbackRequest();
                    ~DeleteTWeSeeCallbackRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取回调目标 ID，格式为 `callback-` + 8 位小写字母数字
                     * @return CallbackId 回调目标 ID，格式为 `callback-` + 8 位小写字母数字
                     * 
                     */
                    std::string GetCallbackId() const;

                    /**
                     * 设置回调目标 ID，格式为 `callback-` + 8 位小写字母数字
                     * @param _callbackId 回调目标 ID，格式为 `callback-` + 8 位小写字母数字
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
                     * 回调目标 ID，格式为 `callback-` + 8 位小写字母数字
                     */
                    std::string m_callbackId;
                    bool m_callbackIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DELETETWESEECALLBACKREQUEST_H_
