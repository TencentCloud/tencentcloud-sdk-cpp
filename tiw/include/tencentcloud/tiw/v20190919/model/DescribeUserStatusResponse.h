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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEUSERSTATUSRESPONSE_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEUSERSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * DescribeUserStatus返回参数结构体
                */
                class DescribeUserStatusResponse : public AbstractModel
                {
                public:
                    DescribeUserStatusResponse();
                    ~DescribeUserStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取客户的AppId
                     * @return AppId 客户的AppId
                     * 
                     */
                    int64_t GetAppId() const;

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取是否开通过白板（试用或正式）

0: 从未开通过白板服务
1: 已经开通过白板服务
                     * @return IsTiwUser 是否开通过白板（试用或正式）

0: 从未开通过白板服务
1: 已经开通过白板服务
                     * 
                     */
                    int64_t GetIsTiwUser() const;

                    /**
                     * 判断参数 IsTiwUser 是否已赋值
                     * @return IsTiwUser 是否已赋值
                     * 
                     */
                    bool IsTiwUserHasBeenSet() const;

                    /**
                     * 获取是否开通过互动课堂（试用或正式）
                     * @return IsSaaSUser 是否开通过互动课堂（试用或正式）
                     * 
                     */
                    int64_t GetIsSaaSUser() const;

                    /**
                     * 判断参数 IsSaaSUser 是否已赋值
                     * @return IsSaaSUser 是否已赋值
                     * 
                     */
                    bool IsSaaSUserHasBeenSet() const;

                    /**
                     * 获取是否使用白板的课后录制
                     * @return IsTiwOfflineRecordUser 是否使用白板的课后录制
                     * 
                     */
                    int64_t GetIsTiwOfflineRecordUser() const;

                    /**
                     * 判断参数 IsTiwOfflineRecordUser 是否已赋值
                     * @return IsTiwOfflineRecordUser 是否已赋值
                     * 
                     */
                    bool IsTiwOfflineRecordUserHasBeenSet() const;

                    /**
                     * 获取用户是否实名认证
                     * @return IsAuthenticated 用户是否实名认证
                     * 
                     */
                    int64_t GetIsAuthenticated() const;

                    /**
                     * 判断参数 IsAuthenticated 是否已赋值
                     * @return IsAuthenticated 是否已赋值
                     * 
                     */
                    bool IsAuthenticatedHasBeenSet() const;

                private:

                    /**
                     * 客户的AppId
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 是否开通过白板（试用或正式）

0: 从未开通过白板服务
1: 已经开通过白板服务
                     */
                    int64_t m_isTiwUser;
                    bool m_isTiwUserHasBeenSet;

                    /**
                     * 是否开通过互动课堂（试用或正式）
                     */
                    int64_t m_isSaaSUser;
                    bool m_isSaaSUserHasBeenSet;

                    /**
                     * 是否使用白板的课后录制
                     */
                    int64_t m_isTiwOfflineRecordUser;
                    bool m_isTiwOfflineRecordUserHasBeenSet;

                    /**
                     * 用户是否实名认证
                     */
                    int64_t m_isAuthenticated;
                    bool m_isAuthenticatedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_DESCRIBEUSERSTATUSRESPONSE_H_
