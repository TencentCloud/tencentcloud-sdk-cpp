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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_DELETEUSERPERMISSIONSBOUNDARYREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_DELETEUSERPERMISSIONSBOUNDARYREQUEST_H_

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
                * DeleteUserPermissionsBoundary请求参数结构体
                */
                class DeleteUserPermissionsBoundaryRequest : public AbstractModel
                {
                public:
                    DeleteUserPermissionsBoundaryRequest();
                    ~DeleteUserPermissionsBoundaryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取子账号Uin
                     * @return TargetUin 子账号Uin
                     * 
                     */
                    int64_t GetTargetUin() const;

                    /**
                     * 设置子账号Uin
                     * @param _targetUin 子账号Uin
                     * 
                     */
                    void SetTargetUin(const int64_t& _targetUin);

                    /**
                     * 判断参数 TargetUin 是否已赋值
                     * @return TargetUin 是否已赋值
                     * 
                     */
                    bool TargetUinHasBeenSet() const;

                private:

                    /**
                     * 子账号Uin
                     */
                    int64_t m_targetUin;
                    bool m_targetUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_DELETEUSERPERMISSIONSBOUNDARYREQUEST_H_
