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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEIMAGESHAREPERMISSIONRESPONSE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEIMAGESHAREPERMISSIONRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/SharePermission.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeImageSharePermission返回参数结构体
                */
                class DescribeImageSharePermissionResponse : public AbstractModel
                {
                public:
                    DescribeImageSharePermissionResponse();
                    ~DescribeImageSharePermissionResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取镜像共享信息
                     * @return SharePermissionSet 镜像共享信息
                     * 
                     */
                    std::vector<SharePermission> GetSharePermissionSet() const;

                    /**
                     * 判断参数 SharePermissionSet 是否已赋值
                     * @return SharePermissionSet 是否已赋值
                     * 
                     */
                    bool SharePermissionSetHasBeenSet() const;

                private:

                    /**
                     * 镜像共享信息
                     */
                    std::vector<SharePermission> m_sharePermissionSet;
                    bool m_sharePermissionSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBEIMAGESHAREPERMISSIONRESPONSE_H_
