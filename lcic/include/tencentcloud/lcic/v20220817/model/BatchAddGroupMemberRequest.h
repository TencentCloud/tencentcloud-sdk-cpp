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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_BATCHADDGROUPMEMBERREQUEST_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_BATCHADDGROUPMEMBERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * BatchAddGroupMember请求参数结构体
                */
                class BatchAddGroupMemberRequest : public AbstractModel
                {
                public:
                    BatchAddGroupMemberRequest();
                    ~BatchAddGroupMemberRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待添加群组ID列表，最大值100
                     * @return GroupIds 待添加群组ID列表，最大值100
                     * 
                     */
                    std::vector<std::string> GetGroupIds() const;

                    /**
                     * 设置待添加群组ID列表，最大值100
                     * @param _groupIds 待添加群组ID列表，最大值100
                     * 
                     */
                    void SetGroupIds(const std::vector<std::string>& _groupIds);

                    /**
                     * 判断参数 GroupIds 是否已赋值
                     * @return GroupIds 是否已赋值
                     * 
                     */
                    bool GroupIdsHasBeenSet() const;

                    /**
                     * 获取低代码平台应用ID
                     * @return SdkAppId 低代码平台应用ID
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置低代码平台应用ID
                     * @param _sdkAppId 低代码平台应用ID
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取待添加成员列表，最大值200
                     * @return MemberIds 待添加成员列表，最大值200
                     * 
                     */
                    std::vector<std::string> GetMemberIds() const;

                    /**
                     * 设置待添加成员列表，最大值200
                     * @param _memberIds 待添加成员列表，最大值200
                     * 
                     */
                    void SetMemberIds(const std::vector<std::string>& _memberIds);

                    /**
                     * 判断参数 MemberIds 是否已赋值
                     * @return MemberIds 是否已赋值
                     * 
                     */
                    bool MemberIdsHasBeenSet() const;

                private:

                    /**
                     * 待添加群组ID列表，最大值100
                     */
                    std::vector<std::string> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                    /**
                     * 低代码平台应用ID
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 待添加成员列表，最大值200
                     */
                    std::vector<std::string> m_memberIds;
                    bool m_memberIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_BATCHADDGROUPMEMBERREQUEST_H_
