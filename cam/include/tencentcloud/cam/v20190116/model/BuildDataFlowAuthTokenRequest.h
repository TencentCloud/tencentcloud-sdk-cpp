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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_BUILDDATAFLOWAUTHTOKENREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_BUILDDATAFLOWAUTHTOKENREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * BuildDataFlowAuthToken请求参数结构体
                */
                class BuildDataFlowAuthTokenRequest : public AbstractModel
                {
                public:
                    BuildDataFlowAuthTokenRequest();
                    ~BuildDataFlowAuthTokenRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源ID
                     * @return ResourceId 资源ID
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置资源ID
                     * @param _resourceId 资源ID
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取资源地域
                     * @return ResourceRegion 资源地域
                     * 
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置资源地域
                     * @param _resourceRegion 资源地域
                     * 
                     */
                    void SetResourceRegion(const std::string& _resourceRegion);

                    /**
                     * 判断参数 ResourceRegion 是否已赋值
                     * @return ResourceRegion 是否已赋值
                     * 
                     */
                    bool ResourceRegionHasBeenSet() const;

                    /**
                     * 获取资源用户名
                     * @return ResourceAccount 资源用户名
                     * 
                     */
                    std::string GetResourceAccount() const;

                    /**
                     * 设置资源用户名
                     * @param _resourceAccount 资源用户名
                     * 
                     */
                    void SetResourceAccount(const std::string& _resourceAccount);

                    /**
                     * 判断参数 ResourceAccount 是否已赋值
                     * @return ResourceAccount 是否已赋值
                     * 
                     */
                    bool ResourceAccountHasBeenSet() const;

                private:

                    /**
                     * 资源ID
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 资源地域
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                    /**
                     * 资源用户名
                     */
                    std::string m_resourceAccount;
                    bool m_resourceAccountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_BUILDDATAFLOWAUTHTOKENREQUEST_H_
