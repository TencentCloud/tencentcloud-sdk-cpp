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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_UPDATEALERTSTATUSLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_UPDATEALERTSTATUSLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/NewAlertKey.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * UpdateAlertStatusList请求参数结构体
                */
                class UpdateAlertStatusListRequest : public AbstractModel
                {
                public:
                    UpdateAlertStatusListRequest();
                    ~UpdateAlertStatusListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取告警ID列表
                     * @return ID 告警ID列表
                     * 
                     */
                    std::vector<NewAlertKey> GetID() const;

                    /**
                     * 设置告警ID列表
                     * @param _iD 告警ID列表
                     * 
                     */
                    void SetID(const std::vector<NewAlertKey>& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取操作类型 
1:撤销处置 
2:标记为已处置 
3:标记忽略 
4:取消标记处置
5:取消标记忽略
                     * @return OperateType 操作类型 
1:撤销处置 
2:标记为已处置 
3:标记忽略 
4:取消标记处置
5:取消标记忽略
                     * 
                     */
                    int64_t GetOperateType() const;

                    /**
                     * 设置操作类型 
1:撤销处置 
2:标记为已处置 
3:标记忽略 
4:取消标记处置
5:取消标记忽略
                     * @param _operateType 操作类型 
1:撤销处置 
2:标记为已处置 
3:标记忽略 
4:取消标记处置
5:取消标记忽略
                     * 
                     */
                    void SetOperateType(const int64_t& _operateType);

                    /**
                     * 判断参数 OperateType 是否已赋值
                     * @return OperateType 是否已赋值
                     * 
                     */
                    bool OperateTypeHasBeenSet() const;

                    /**
                     * 获取集团账号的成员id
                     * @return MemberId 集团账号的成员id
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置集团账号的成员id
                     * @param _memberId 集团账号的成员id
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取被调用的集团账号的成员id
                     * @return OperatedMemberId 被调用的集团账号的成员id
                     * 
                     */
                    std::vector<std::string> GetOperatedMemberId() const;

                    /**
                     * 设置被调用的集团账号的成员id
                     * @param _operatedMemberId 被调用的集团账号的成员id
                     * 
                     */
                    void SetOperatedMemberId(const std::vector<std::string>& _operatedMemberId);

                    /**
                     * 判断参数 OperatedMemberId 是否已赋值
                     * @return OperatedMemberId 是否已赋值
                     * 
                     */
                    bool OperatedMemberIdHasBeenSet() const;

                private:

                    /**
                     * 告警ID列表
                     */
                    std::vector<NewAlertKey> m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 操作类型 
1:撤销处置 
2:标记为已处置 
3:标记忽略 
4:取消标记处置
5:取消标记忽略
                     */
                    int64_t m_operateType;
                    bool m_operateTypeHasBeenSet;

                    /**
                     * 集团账号的成员id
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * 被调用的集团账号的成员id
                     */
                    std::vector<std::string> m_operatedMemberId;
                    bool m_operatedMemberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_UPDATEALERTSTATUSLISTREQUEST_H_
