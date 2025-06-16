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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBETOPATTACKINFOREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBETOPATTACKINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeTopAttackInfo请求参数结构体
                */
                class DescribeTopAttackInfoRequest : public AbstractModel
                {
                public:
                    DescribeTopAttackInfoRequest();
                    ~DescribeTopAttackInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取起始时间
                     * @return StartTime 起始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置起始时间
                     * @param _startTime 起始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取1:攻击类型 2:攻击者
                     * @return QueryType 1:攻击类型 2:攻击者
                     * 
                     */
                    int64_t GetQueryType() const;

                    /**
                     * 设置1:攻击类型 2:攻击者
                     * @param _queryType 1:攻击类型 2:攻击者
                     * 
                     */
                    void SetQueryType(const int64_t& _queryType);

                    /**
                     * 判断参数 QueryType 是否已赋值
                     * @return QueryType 是否已赋值
                     * 
                     */
                    bool QueryTypeHasBeenSet() const;

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

                    /**
                     * 获取资产名称
                     * @return AssetName 资产名称
                     * 
                     */
                    std::string GetAssetName() const;

                    /**
                     * 设置资产名称
                     * @param _assetName 资产名称
                     * 
                     */
                    void SetAssetName(const std::string& _assetName);

                    /**
                     * 判断参数 AssetName 是否已赋值
                     * @return AssetName 是否已赋值
                     * 
                     */
                    bool AssetNameHasBeenSet() const;

                    /**
                     * 获取0: 默认全部 1:资产ID 2:域名
                     * @return AssetType 0: 默认全部 1:资产ID 2:域名
                     * 
                     */
                    int64_t GetAssetType() const;

                    /**
                     * 设置0: 默认全部 1:资产ID 2:域名
                     * @param _assetType 0: 默认全部 1:资产ID 2:域名
                     * 
                     */
                    void SetAssetType(const int64_t& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                private:

                    /**
                     * 起始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 1:攻击类型 2:攻击者
                     */
                    int64_t m_queryType;
                    bool m_queryTypeHasBeenSet;

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

                    /**
                     * 资产名称
                     */
                    std::string m_assetName;
                    bool m_assetNameHasBeenSet;

                    /**
                     * 0: 默认全部 1:资产ID 2:域名
                     */
                    int64_t m_assetType;
                    bool m_assetTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBETOPATTACKINFOREQUEST_H_
