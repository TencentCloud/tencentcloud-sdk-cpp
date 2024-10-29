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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DELETEORGANIZATIONAUTHORIZATIONSRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DELETEORGANIZATIONAUTHORIZATIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/DeleteOrganizationAuthorizationInfo.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * DeleteOrganizationAuthorizations返回参数结构体
                */
                class DeleteOrganizationAuthorizationsResponse : public AbstractModel
                {
                public:
                    DeleteOrganizationAuthorizationsResponse();
                    ~DeleteOrganizationAuthorizationsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取清理的认证流的详细信息，其中包括企业名称，认证流唯一 Id 以及清理过程中产生的错误信息
                     * @return DeleteOrganizationAuthorizationInfos 清理的认证流的详细信息，其中包括企业名称，认证流唯一 Id 以及清理过程中产生的错误信息
                     * 
                     */
                    std::vector<DeleteOrganizationAuthorizationInfo> GetDeleteOrganizationAuthorizationInfos() const;

                    /**
                     * 判断参数 DeleteOrganizationAuthorizationInfos 是否已赋值
                     * @return DeleteOrganizationAuthorizationInfos 是否已赋值
                     * 
                     */
                    bool DeleteOrganizationAuthorizationInfosHasBeenSet() const;

                    /**
                     * 获取批量清理认证流返回的状态值
其中包括
- 1 全部成功
- 2 部分成功
- 3 全部失败
                     * @return Status 批量清理认证流返回的状态值
其中包括
- 1 全部成功
- 2 部分成功
- 3 全部失败
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 清理的认证流的详细信息，其中包括企业名称，认证流唯一 Id 以及清理过程中产生的错误信息
                     */
                    std::vector<DeleteOrganizationAuthorizationInfo> m_deleteOrganizationAuthorizationInfos;
                    bool m_deleteOrganizationAuthorizationInfosHasBeenSet;

                    /**
                     * 批量清理认证流返回的状态值
其中包括
- 1 全部成功
- 2 部分成功
- 3 全部失败
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DELETEORGANIZATIONAUTHORIZATIONSRESPONSE_H_
