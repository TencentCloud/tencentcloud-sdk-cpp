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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_CREATECLOUDNATIVEAPIGATEWAYMCPTOOLREQUEST_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_CREATECLOUDNATIVEAPIGATEWAYMCPTOOLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * CreateCloudNativeAPIGatewayMCPTool请求参数结构体
                */
                class CreateCloudNativeAPIGatewayMCPToolRequest : public AbstractModel
                {
                public:
                    CreateCloudNativeAPIGatewayMCPToolRequest();
                    ~CreateCloudNativeAPIGatewayMCPToolRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>内容类型</p>
                     * @return ContentType <p>内容类型</p>
                     * 
                     */
                    std::string GetContentType() const;

                    /**
                     * 设置<p>内容类型</p>
                     * @param _contentType <p>内容类型</p>
                     * 
                     */
                    void SetContentType(const std::string& _contentType);

                    /**
                     * 判断参数 ContentType 是否已赋值
                     * @return ContentType 是否已赋值
                     * 
                     */
                    bool ContentTypeHasBeenSet() const;

                    /**
                     * 获取<p>展示名字</p>
                     * @return DisplayName <p>展示名字</p>
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置<p>展示名字</p>
                     * @param _displayName <p>展示名字</p>
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取<p>服务 id</p>
                     * @return ServiceId <p>服务 id</p>
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 设置<p>服务 id</p>
                     * @param _serviceId <p>服务 id</p>
                     * 
                     */
                    void SetServiceId(const std::string& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                private:

                    /**
                     * <p>内容类型</p>
                     */
                    std::string m_contentType;
                    bool m_contentTypeHasBeenSet;

                    /**
                     * <p>展示名字</p>
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * <p>服务 id</p>
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_CREATECLOUDNATIVEAPIGATEWAYMCPTOOLREQUEST_H_
