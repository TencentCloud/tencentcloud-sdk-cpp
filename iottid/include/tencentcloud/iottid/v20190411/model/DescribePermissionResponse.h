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

#ifndef TENCENTCLOUD_IOTTID_V20190411_MODEL_DESCRIBEPERMISSIONRESPONSE_H_
#define TENCENTCLOUD_IOTTID_V20190411_MODEL_DESCRIBEPERMISSIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iottid
    {
        namespace V20190411
        {
            namespace Model
            {
                /**
                * DescribePermission返回参数结构体
                */
                class DescribePermissionResponse : public AbstractModel
                {
                public:
                    DescribePermissionResponse();
                    ~DescribePermissionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取企业用户
                     * @return EnterpriseUser 企业用户
                     * 
                     */
                    bool GetEnterpriseUser() const;

                    /**
                     * 判断参数 EnterpriseUser 是否已赋值
                     * @return EnterpriseUser 是否已赋值
                     * 
                     */
                    bool EnterpriseUserHasBeenSet() const;

                    /**
                     * 获取下载控制台权限
                     * @return DownloadPermission 下载控制台权限
                     * 
                     */
                    std::string GetDownloadPermission() const;

                    /**
                     * 判断参数 DownloadPermission 是否已赋值
                     * @return DownloadPermission 是否已赋值
                     * 
                     */
                    bool DownloadPermissionHasBeenSet() const;

                    /**
                     * 获取使用控制台权限
                     * @return UsePermission 使用控制台权限
                     * 
                     */
                    std::string GetUsePermission() const;

                    /**
                     * 判断参数 UsePermission 是否已赋值
                     * @return UsePermission 是否已赋值
                     * 
                     */
                    bool UsePermissionHasBeenSet() const;

                private:

                    /**
                     * 企业用户
                     */
                    bool m_enterpriseUser;
                    bool m_enterpriseUserHasBeenSet;

                    /**
                     * 下载控制台权限
                     */
                    std::string m_downloadPermission;
                    bool m_downloadPermissionHasBeenSet;

                    /**
                     * 使用控制台权限
                     */
                    std::string m_usePermission;
                    bool m_usePermissionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTTID_V20190411_MODEL_DESCRIBEPERMISSIONRESPONSE_H_
