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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DELETECLOUDNATIVEAPIGATEWAYREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DELETECLOUDNATIVEAPIGATEWAYREQUEST_H_

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
                * DeleteCloudNativeAPIGateway请求参数结构体
                */
                class DeleteCloudNativeAPIGatewayRequest : public AbstractModel
                {
                public:
                    DeleteCloudNativeAPIGatewayRequest();
                    ~DeleteCloudNativeAPIGatewayRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取云原生API网关实例ID。
                     * @return GatewayId 云原生API网关实例ID。
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置云原生API网关实例ID。
                     * @param _gatewayId 云原生API网关实例ID。
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取是否删除实例关联的 CLS 日志主题。
                     * @return DeleteClsTopic 是否删除实例关联的 CLS 日志主题。
                     * 
                     */
                    bool GetDeleteClsTopic() const;

                    /**
                     * 设置是否删除实例关联的 CLS 日志主题。
                     * @param _deleteClsTopic 是否删除实例关联的 CLS 日志主题。
                     * 
                     */
                    void SetDeleteClsTopic(const bool& _deleteClsTopic);

                    /**
                     * 判断参数 DeleteClsTopic 是否已赋值
                     * @return DeleteClsTopic 是否已赋值
                     * 
                     */
                    bool DeleteClsTopicHasBeenSet() const;

                private:

                    /**
                     * 云原生API网关实例ID。
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     * 是否删除实例关联的 CLS 日志主题。
                     */
                    bool m_deleteClsTopic;
                    bool m_deleteClsTopicHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DELETECLOUDNATIVEAPIGATEWAYREQUEST_H_
