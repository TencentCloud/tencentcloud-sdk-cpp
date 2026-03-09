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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DELETENETWORKAPPLICATIONREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DELETENETWORKAPPLICATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DeleteNetworkApplication请求参数结构体
                */
                class DeleteNetworkApplicationRequest : public AbstractModel
                {
                public:
                    DeleteNetworkApplicationRequest();
                    ~DeleteNetworkApplicationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>网络应用id。</p>
                     * @return NetworkAppId <p>网络应用id。</p>
                     * 
                     */
                    std::string GetNetworkAppId() const;

                    /**
                     * 设置<p>网络应用id。</p>
                     * @param _networkAppId <p>网络应用id。</p>
                     * 
                     */
                    void SetNetworkAppId(const std::string& _networkAppId);

                    /**
                     * 判断参数 NetworkAppId 是否已赋值
                     * @return NetworkAppId 是否已赋值
                     * 
                     */
                    bool NetworkAppIdHasBeenSet() const;

                private:

                    /**
                     * <p>网络应用id。</p>
                     */
                    std::string m_networkAppId;
                    bool m_networkAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DELETENETWORKAPPLICATIONREQUEST_H_
