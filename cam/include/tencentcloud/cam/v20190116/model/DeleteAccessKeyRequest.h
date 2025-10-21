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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_DELETEACCESSKEYREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_DELETEACCESSKEYREQUEST_H_

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
                * DeleteAccessKey请求参数结构体
                */
                class DeleteAccessKeyRequest : public AbstractModel
                {
                public:
                    DeleteAccessKeyRequest();
                    ~DeleteAccessKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取指定需要删除的AccessKeyId
                     * @return AccessKeyId 指定需要删除的AccessKeyId
                     * 
                     */
                    std::string GetAccessKeyId() const;

                    /**
                     * 设置指定需要删除的AccessKeyId
                     * @param _accessKeyId 指定需要删除的AccessKeyId
                     * 
                     */
                    void SetAccessKeyId(const std::string& _accessKeyId);

                    /**
                     * 判断参数 AccessKeyId 是否已赋值
                     * @return AccessKeyId 是否已赋值
                     * 
                     */
                    bool AccessKeyIdHasBeenSet() const;

                    /**
                     * 获取指定用户Uin，不填默认为当前用户删除访问密钥
                     * @return TargetUin 指定用户Uin，不填默认为当前用户删除访问密钥
                     * 
                     */
                    uint64_t GetTargetUin() const;

                    /**
                     * 设置指定用户Uin，不填默认为当前用户删除访问密钥
                     * @param _targetUin 指定用户Uin，不填默认为当前用户删除访问密钥
                     * 
                     */
                    void SetTargetUin(const uint64_t& _targetUin);

                    /**
                     * 判断参数 TargetUin 是否已赋值
                     * @return TargetUin 是否已赋值
                     * 
                     */
                    bool TargetUinHasBeenSet() const;

                private:

                    /**
                     * 指定需要删除的AccessKeyId
                     */
                    std::string m_accessKeyId;
                    bool m_accessKeyIdHasBeenSet;

                    /**
                     * 指定用户Uin，不填默认为当前用户删除访问密钥
                     */
                    uint64_t m_targetUin;
                    bool m_targetUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_DELETEACCESSKEYREQUEST_H_
