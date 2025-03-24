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

#ifndef TENCENTCLOUD_DBBRAIN_V20191016_MODEL_DESCRIBEMAILPROFILERESPONSE_H_
#define TENCENTCLOUD_DBBRAIN_V20191016_MODEL_DESCRIBEMAILPROFILERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20191016/model/UserProfile.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20191016
        {
            namespace Model
            {
                /**
                * DescribeMailProfile返回参数结构体
                */
                class DescribeMailProfileResponse : public AbstractModel
                {
                public:
                    DescribeMailProfileResponse();
                    ~DescribeMailProfileResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取邮件配置详情。
                     * @return ProfileList 邮件配置详情。
                     * 
                     */
                    std::vector<UserProfile> GetProfileList() const;

                    /**
                     * 判断参数 ProfileList 是否已赋值
                     * @return ProfileList 是否已赋值
                     * 
                     */
                    bool ProfileListHasBeenSet() const;

                    /**
                     * 获取邮件模板总数。
                     * @return TotalCount 邮件模板总数。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 邮件配置详情。
                     */
                    std::vector<UserProfile> m_profileList;
                    bool m_profileListHasBeenSet;

                    /**
                     * 邮件模板总数。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20191016_MODEL_DESCRIBEMAILPROFILERESPONSE_H_
