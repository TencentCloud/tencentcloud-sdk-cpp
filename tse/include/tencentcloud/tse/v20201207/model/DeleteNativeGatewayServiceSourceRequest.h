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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DELETENATIVEGATEWAYSERVICESOURCEREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DELETENATIVEGATEWAYSERVICESOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * DeleteNativeGatewayServiceSource请求参数结构体
                */
                class DeleteNativeGatewayServiceSourceRequest : public AbstractModel
                {
                public:
                    DeleteNativeGatewayServiceSourceRequest();
                    ~DeleteNativeGatewayServiceSourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网关实例 ID
                     * @return GatewayID 网关实例 ID
                     * 
                     */
                    std::string GetGatewayID() const;

                    /**
                     * 设置网关实例 ID
                     * @param _gatewayID 网关实例 ID
                     * 
                     */
                    void SetGatewayID(const std::string& _gatewayID);

                    /**
                     * 判断参数 GatewayID 是否已赋值
                     * @return GatewayID 是否已赋值
                     * 
                     */
                    bool GatewayIDHasBeenSet() const;

                    /**
                     * 获取服务来源实例 ID
                     * @return SourceID 服务来源实例 ID
                     * 
                     */
                    std::string GetSourceID() const;

                    /**
                     * 设置服务来源实例 ID
                     * @param _sourceID 服务来源实例 ID
                     * 
                     */
                    void SetSourceID(const std::string& _sourceID);

                    /**
                     * 判断参数 SourceID 是否已赋值
                     * @return SourceID 是否已赋值
                     * 
                     */
                    bool SourceIDHasBeenSet() const;

                private:

                    /**
                     * 网关实例 ID
                     */
                    std::string m_gatewayID;
                    bool m_gatewayIDHasBeenSet;

                    /**
                     * 服务来源实例 ID
                     */
                    std::string m_sourceID;
                    bool m_sourceIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DELETENATIVEGATEWAYSERVICESOURCEREQUEST_H_
