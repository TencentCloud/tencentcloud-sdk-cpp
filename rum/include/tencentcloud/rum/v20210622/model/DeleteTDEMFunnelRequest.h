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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DELETETDEMFUNNELREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DELETETDEMFUNNELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DeleteTDEMFunnel请求参数结构体
                */
                class DeleteTDEMFunnelRequest : public AbstractModel
                {
                public:
                    DeleteTDEMFunnelRequest();
                    ~DeleteTDEMFunnelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用id</p>
                     * @return AppId <p>应用id</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用id</p>
                     * @param _appId <p>应用id</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>漏斗id</p>
                     * @return FunnelId <p>漏斗id</p>
                     * 
                     */
                    std::string GetFunnelId() const;

                    /**
                     * 设置<p>漏斗id</p>
                     * @param _funnelId <p>漏斗id</p>
                     * 
                     */
                    void SetFunnelId(const std::string& _funnelId);

                    /**
                     * 判断参数 FunnelId 是否已赋值
                     * @return FunnelId 是否已赋值
                     * 
                     */
                    bool FunnelIdHasBeenSet() const;

                private:

                    /**
                     * <p>应用id</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>漏斗id</p>
                     */
                    std::string m_funnelId;
                    bool m_funnelIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DELETETDEMFUNNELREQUEST_H_
