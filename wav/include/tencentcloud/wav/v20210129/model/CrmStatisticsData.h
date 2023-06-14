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

#ifndef TENCENTCLOUD_WAV_V20210129_MODEL_CRMSTATISTICSDATA_H_
#define TENCENTCLOUD_WAV_V20210129_MODEL_CRMSTATISTICSDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wav
    {
        namespace V20210129
        {
            namespace Model
            {
                /**
                * CRM统计数据响应
                */
                class CrmStatisticsData : public AbstractModel
                {
                public:
                    CrmStatisticsData();
                    ~CrmStatisticsData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取新增线索
                     * @return LeadCnt 新增线索
                     * 
                     */
                    uint64_t GetLeadCnt() const;

                    /**
                     * 设置新增线索
                     * @param _leadCnt 新增线索
                     * 
                     */
                    void SetLeadCnt(const uint64_t& _leadCnt);

                    /**
                     * 判断参数 LeadCnt 是否已赋值
                     * @return LeadCnt 是否已赋值
                     * 
                     */
                    bool LeadCntHasBeenSet() const;

                    /**
                     * 获取新增建档
                     * @return BuildCnt 新增建档
                     * 
                     */
                    uint64_t GetBuildCnt() const;

                    /**
                     * 设置新增建档
                     * @param _buildCnt 新增建档
                     * 
                     */
                    void SetBuildCnt(const uint64_t& _buildCnt);

                    /**
                     * 判断参数 BuildCnt 是否已赋值
                     * @return BuildCnt 是否已赋值
                     * 
                     */
                    bool BuildCntHasBeenSet() const;

                    /**
                     * 获取新增到店
                     * @return InvitedCnt 新增到店
                     * 
                     */
                    uint64_t GetInvitedCnt() const;

                    /**
                     * 设置新增到店
                     * @param _invitedCnt 新增到店
                     * 
                     */
                    void SetInvitedCnt(const uint64_t& _invitedCnt);

                    /**
                     * 判断参数 InvitedCnt 是否已赋值
                     * @return InvitedCnt 是否已赋值
                     * 
                     */
                    bool InvitedCntHasBeenSet() const;

                    /**
                     * 获取新增下订
                     * @return OrderedCnt 新增下订
                     * 
                     */
                    uint64_t GetOrderedCnt() const;

                    /**
                     * 设置新增下订
                     * @param _orderedCnt 新增下订
                     * 
                     */
                    void SetOrderedCnt(const uint64_t& _orderedCnt);

                    /**
                     * 判断参数 OrderedCnt 是否已赋值
                     * @return OrderedCnt 是否已赋值
                     * 
                     */
                    bool OrderedCntHasBeenSet() const;

                    /**
                     * 获取新增成交
                     * @return DeliveredCnt 新增成交
                     * 
                     */
                    uint64_t GetDeliveredCnt() const;

                    /**
                     * 设置新增成交
                     * @param _deliveredCnt 新增成交
                     * 
                     */
                    void SetDeliveredCnt(const uint64_t& _deliveredCnt);

                    /**
                     * 判断参数 DeliveredCnt 是否已赋值
                     * @return DeliveredCnt 是否已赋值
                     * 
                     */
                    bool DeliveredCntHasBeenSet() const;

                    /**
                     * 获取新增战败
                     * @return DefeatCnt 新增战败
                     * 
                     */
                    uint64_t GetDefeatCnt() const;

                    /**
                     * 设置新增战败
                     * @param _defeatCnt 新增战败
                     * 
                     */
                    void SetDefeatCnt(const uint64_t& _defeatCnt);

                    /**
                     * 判断参数 DefeatCnt 是否已赋值
                     * @return DefeatCnt 是否已赋值
                     * 
                     */
                    bool DefeatCntHasBeenSet() const;

                    /**
                     * 获取新增好友
                     * @return NewContactCnt 新增好友
                     * 
                     */
                    uint64_t GetNewContactCnt() const;

                    /**
                     * 设置新增好友
                     * @param _newContactCnt 新增好友
                     * 
                     */
                    void SetNewContactCnt(const uint64_t& _newContactCnt);

                    /**
                     * 判断参数 NewContactCnt 是否已赋值
                     * @return NewContactCnt 是否已赋值
                     * 
                     */
                    bool NewContactCntHasBeenSet() const;

                    /**
                     * 获取统计时间, 单位：天
                     * @return StatisticalTime 统计时间, 单位：天
                     * 
                     */
                    std::string GetStatisticalTime() const;

                    /**
                     * 设置统计时间, 单位：天
                     * @param _statisticalTime 统计时间, 单位：天
                     * 
                     */
                    void SetStatisticalTime(const std::string& _statisticalTime);

                    /**
                     * 判断参数 StatisticalTime 是否已赋值
                     * @return StatisticalTime 是否已赋值
                     * 
                     */
                    bool StatisticalTimeHasBeenSet() const;

                private:

                    /**
                     * 新增线索
                     */
                    uint64_t m_leadCnt;
                    bool m_leadCntHasBeenSet;

                    /**
                     * 新增建档
                     */
                    uint64_t m_buildCnt;
                    bool m_buildCntHasBeenSet;

                    /**
                     * 新增到店
                     */
                    uint64_t m_invitedCnt;
                    bool m_invitedCntHasBeenSet;

                    /**
                     * 新增下订
                     */
                    uint64_t m_orderedCnt;
                    bool m_orderedCntHasBeenSet;

                    /**
                     * 新增成交
                     */
                    uint64_t m_deliveredCnt;
                    bool m_deliveredCntHasBeenSet;

                    /**
                     * 新增战败
                     */
                    uint64_t m_defeatCnt;
                    bool m_defeatCntHasBeenSet;

                    /**
                     * 新增好友
                     */
                    uint64_t m_newContactCnt;
                    bool m_newContactCntHasBeenSet;

                    /**
                     * 统计时间, 单位：天
                     */
                    std::string m_statisticalTime;
                    bool m_statisticalTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_MODEL_CRMSTATISTICSDATA_H_
