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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_GETAPPSECRETRESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_GETAPPSECRETRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * GetAppSecret返回参数结构体
                */
                class GetAppSecretResponse : public AbstractModel
                {
                public:
                    GetAppSecretResponse();
                    ~GetAppSecretResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取应用密钥
                     * @return AppKey 应用密钥
                     * 
                     */
                    std::string GetAppKey() const;

                    /**
                     * 判断参数 AppKey 是否已赋值
                     * @return AppKey 是否已赋值
                     * 
                     */
                    bool AppKeyHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取是否发布
                     * @return IsRelease 是否发布
                     * 
                     */
                    bool GetIsRelease() const;

                    /**
                     * 判断参数 IsRelease 是否已赋值
                     * @return IsRelease 是否已赋值
                     * 
                     */
                    bool IsReleaseHasBeenSet() const;

                    /**
                     * 获取是否有查看权限
                     * @return HasPermission 是否有查看权限
                     * 
                     */
                    bool GetHasPermission() const;

                    /**
                     * 判断参数 HasPermission 是否已赋值
                     * @return HasPermission 是否已赋值
                     * 
                     */
                    bool HasPermissionHasBeenSet() const;

                private:

                    /**
                     * 应用密钥
                     */
                    std::string m_appKey;
                    bool m_appKeyHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 是否发布
                     */
                    bool m_isRelease;
                    bool m_isReleaseHasBeenSet;

                    /**
                     * 是否有查看权限
                     */
                    bool m_hasPermission;
                    bool m_hasPermissionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_GETAPPSECRETRESPONSE_H_
