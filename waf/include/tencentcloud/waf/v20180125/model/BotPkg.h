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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_BOTPKG_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_BOTPKG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * Bot资源信息
                */
                class BotPkg : public AbstractModel
                {
                public:
                    BotPkg();
                    ~BotPkg() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源id
                     * @return ResourceIds 资源id
                     * 
                     */
                    std::string GetResourceIds() const;

                    /**
                     * 设置资源id
                     * @param _resourceIds 资源id
                     * 
                     */
                    void SetResourceIds(const std::string& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     * 
                     */
                    bool ResourceIdsHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态
                     * @param _status 状态
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取地域
                     * @return Region 地域
                     * 
                     */
                    int64_t GetRegion() const;

                    /**
                     * 设置地域
                     * @param _region 地域
                     * 
                     */
                    void SetRegion(const int64_t& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return BeginTime 开始时间
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置开始时间
                     * @param _beginTime 开始时间
                     * 
                     */
                    void SetBeginTime(const std::string& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     * 
                     */
                    bool BeginTimeHasBeenSet() const;

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
                     * 获取申请数量
                     * @return InquireNum 申请数量
                     * 
                     */
                    int64_t GetInquireNum() const;

                    /**
                     * 设置申请数量
                     * @param _inquireNum 申请数量
                     * 
                     */
                    void SetInquireNum(const int64_t& _inquireNum);

                    /**
                     * 判断参数 InquireNum 是否已赋值
                     * @return InquireNum 是否已赋值
                     * 
                     */
                    bool InquireNumHasBeenSet() const;

                    /**
                     * 获取使用数量
                     * @return UsedNum 使用数量
                     * 
                     */
                    int64_t GetUsedNum() const;

                    /**
                     * 设置使用数量
                     * @param _usedNum 使用数量
                     * 
                     */
                    void SetUsedNum(const int64_t& _usedNum);

                    /**
                     * 判断参数 UsedNum 是否已赋值
                     * @return UsedNum 是否已赋值
                     * 
                     */
                    bool UsedNumHasBeenSet() const;

                    /**
                     * 获取子产品code
                     * @return Type 子产品code
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置子产品code
                     * @param _type 子产品code
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取续费标志	
                     * @return RenewFlag 续费标志	
                     * 
                     */
                    uint64_t GetRenewFlag() const;

                    /**
                     * 设置续费标志	
                     * @param _renewFlag 续费标志	
                     * 
                     */
                    void SetRenewFlag(const uint64_t& _renewFlag);

                    /**
                     * 判断参数 RenewFlag 是否已赋值
                     * @return RenewFlag 是否已赋值
                     * 
                     */
                    bool RenewFlagHasBeenSet() const;

                    /**
                     * 获取购买页bot6折
                     * @return BotCPWaf 购买页bot6折
                     * 
                     */
                    int64_t GetBotCPWaf() const;

                    /**
                     * 设置购买页bot6折
                     * @param _botCPWaf 购买页bot6折
                     * 
                     */
                    void SetBotCPWaf(const int64_t& _botCPWaf);

                    /**
                     * 判断参数 BotCPWaf 是否已赋值
                     * @return BotCPWaf 是否已赋值
                     * 
                     */
                    bool BotCPWafHasBeenSet() const;

                    /**
                     * 获取控制台买bot5折
                     * @return BotNPWaf 控制台买bot5折
                     * 
                     */
                    int64_t GetBotNPWaf() const;

                    /**
                     * 设置控制台买bot5折
                     * @param _botNPWaf 控制台买bot5折
                     * 
                     */
                    void SetBotNPWaf(const int64_t& _botNPWaf);

                    /**
                     * 判断参数 BotNPWaf 是否已赋值
                     * @return BotNPWaf 是否已赋值
                     * 
                     */
                    bool BotNPWafHasBeenSet() const;

                    /**
                     * 获取7天bot试用标识 1 试用 0 没有试用
                     * @return IsBotTrial 7天bot试用标识 1 试用 0 没有试用
                     * 
                     */
                    int64_t GetIsBotTrial() const;

                    /**
                     * 设置7天bot试用标识 1 试用 0 没有试用
                     * @param _isBotTrial 7天bot试用标识 1 试用 0 没有试用
                     * 
                     */
                    void SetIsBotTrial(const int64_t& _isBotTrial);

                    /**
                     * 判断参数 IsBotTrial 是否已赋值
                     * @return IsBotTrial 是否已赋值
                     * 
                     */
                    bool IsBotTrialHasBeenSet() const;

                private:

                    /**
                     * 资源id
                     */
                    std::string m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * 状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 地域
                     */
                    int64_t m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 申请数量
                     */
                    int64_t m_inquireNum;
                    bool m_inquireNumHasBeenSet;

                    /**
                     * 使用数量
                     */
                    int64_t m_usedNum;
                    bool m_usedNumHasBeenSet;

                    /**
                     * 子产品code
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 续费标志	
                     */
                    uint64_t m_renewFlag;
                    bool m_renewFlagHasBeenSet;

                    /**
                     * 购买页bot6折
                     */
                    int64_t m_botCPWaf;
                    bool m_botCPWafHasBeenSet;

                    /**
                     * 控制台买bot5折
                     */
                    int64_t m_botNPWaf;
                    bool m_botNPWafHasBeenSet;

                    /**
                     * 7天bot试用标识 1 试用 0 没有试用
                     */
                    int64_t m_isBotTrial;
                    bool m_isBotTrialHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_BOTPKG_H_
