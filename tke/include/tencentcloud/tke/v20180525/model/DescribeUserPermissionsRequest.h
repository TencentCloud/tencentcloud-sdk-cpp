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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEUSERPERMISSIONSREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEUSERPERMISSIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeUserPermissions请求参数结构体
                */
                class DescribeUserPermissionsRequest : public AbstractModel
                {
                public:
                    DescribeUserPermissionsRequest();
                    ~DescribeUserPermissionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要查询的用户的唯一标识符（支持子账号 UIN和角色UIN）
                     * @return TargetUin 要查询的用户的唯一标识符（支持子账号 UIN和角色UIN）
                     * 
                     */
                    std::string GetTargetUin() const;

                    /**
                     * 设置要查询的用户的唯一标识符（支持子账号 UIN和角色UIN）
                     * @param _targetUin 要查询的用户的唯一标识符（支持子账号 UIN和角色UIN）
                     * 
                     */
                    void SetTargetUin(const std::string& _targetUin);

                    /**
                     * 判断参数 TargetUin 是否已赋值
                     * @return TargetUin 是否已赋值
                     * 
                     */
                    bool TargetUinHasBeenSet() const;

                private:

                    /**
                     * 要查询的用户的唯一标识符（支持子账号 UIN和角色UIN）
                     */
                    std::string m_targetUin;
                    bool m_targetUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEUSERPERMISSIONSREQUEST_H_
