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

#ifndef TENCENTCLOUD_PARTNERS_V20180321_MODEL_CLIENTINCREASEINFOLIST_H_
#define TENCENTCLOUD_PARTNERS_V20180321_MODEL_CLIENTINCREASEINFOLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Partners
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * 客户增量激励考核信息列表
                */
                class ClientIncreaseInfoList : public AbstractModel
                {
                public:
                    ClientIncreaseInfoList();
                    ~ClientIncreaseInfoList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取客户UIN
                     * @return ClientUin 客户UIN
                     * 
                     */
                    std::string GetClientUin() const;

                    /**
                     * 设置客户UIN
                     * @param _clientUin 客户UIN
                     * 
                     */
                    void SetClientUin(const std::string& _clientUin);

                    /**
                     * 判断参数 ClientUin 是否已赋值
                     * @return ClientUin 是否已赋值
                     * 
                     */
                    bool ClientUinHasBeenSet() const;

                    /**
                     * 获取是否参与增量政策，
Y：是，N：否
                     * @return IsJoinIncrease 是否参与增量政策，
Y：是，N：否
                     * 
                     */
                    std::string GetIsJoinIncrease() const;

                    /**
                     * 设置是否参与增量政策，
Y：是，N：否
                     * @param _isJoinIncrease 是否参与增量政策，
Y：是，N：否
                     * 
                     */
                    void SetIsJoinIncrease(const std::string& _isJoinIncrease);

                    /**
                     * 判断参数 IsJoinIncrease 是否已赋值
                     * @return IsJoinIncrease 是否已赋值
                     * 
                     */
                    bool IsJoinIncreaseHasBeenSet() const;

                    /**
                     * 获取增量考核关联时间
                     * @return IncreaseUseAssociateDate 增量考核关联时间
                     * 
                     */
                    std::string GetIncreaseUseAssociateDate() const;

                    /**
                     * 设置增量考核关联时间
                     * @param _increaseUseAssociateDate 增量考核关联时间
                     * 
                     */
                    void SetIncreaseUseAssociateDate(const std::string& _increaseUseAssociateDate);

                    /**
                     * 判断参数 IncreaseUseAssociateDate 是否已赋值
                     * @return IncreaseUseAssociateDate 是否已赋值
                     * 
                     */
                    bool IncreaseUseAssociateDateHasBeenSet() const;

                    /**
                     * 获取参与增量考核的原始客户等级
                     * @return TLevel 参与增量考核的原始客户等级
                     * 
                     */
                    std::string GetTLevel() const;

                    /**
                     * 设置参与增量考核的原始客户等级
                     * @param _tLevel 参与增量考核的原始客户等级
                     * 
                     */
                    void SetTLevel(const std::string& _tLevel);

                    /**
                     * 判断参数 TLevel 是否已赋值
                     * @return TLevel 是否已赋值
                     * 
                     */
                    bool TLevelHasBeenSet() const;

                    /**
                     * 获取增量考核目标,分
                     * @return IncreaseGoal 增量考核目标,分
                     * 
                     */
                    std::string GetIncreaseGoal() const;

                    /**
                     * 设置增量考核目标,分
                     * @param _increaseGoal 增量考核目标,分
                     * 
                     */
                    void SetIncreaseGoal(const std::string& _increaseGoal);

                    /**
                     * 判断参数 IncreaseGoal 是否已赋值
                     * @return IncreaseGoal 是否已赋值
                     * 
                     */
                    bool IncreaseGoalHasBeenSet() const;

                    /**
                     * 获取完成订单金额,分
                     * @return TotalBaseAmt 完成订单金额,分
                     * 
                     */
                    std::string GetTotalBaseAmt() const;

                    /**
                     * 设置完成订单金额,分
                     * @param _totalBaseAmt 完成订单金额,分
                     * 
                     */
                    void SetTotalBaseAmt(const std::string& _totalBaseAmt);

                    /**
                     * 判断参数 TotalBaseAmt 是否已赋值
                     * @return TotalBaseAmt 是否已赋值
                     * 
                     */
                    bool TotalBaseAmtHasBeenSet() const;

                private:

                    /**
                     * 客户UIN
                     */
                    std::string m_clientUin;
                    bool m_clientUinHasBeenSet;

                    /**
                     * 是否参与增量政策，
Y：是，N：否
                     */
                    std::string m_isJoinIncrease;
                    bool m_isJoinIncreaseHasBeenSet;

                    /**
                     * 增量考核关联时间
                     */
                    std::string m_increaseUseAssociateDate;
                    bool m_increaseUseAssociateDateHasBeenSet;

                    /**
                     * 参与增量考核的原始客户等级
                     */
                    std::string m_tLevel;
                    bool m_tLevelHasBeenSet;

                    /**
                     * 增量考核目标,分
                     */
                    std::string m_increaseGoal;
                    bool m_increaseGoalHasBeenSet;

                    /**
                     * 完成订单金额,分
                     */
                    std::string m_totalBaseAmt;
                    bool m_totalBaseAmtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PARTNERS_V20180321_MODEL_CLIENTINCREASEINFOLIST_H_
