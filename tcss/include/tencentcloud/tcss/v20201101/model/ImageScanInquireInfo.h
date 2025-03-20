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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGESCANINQUIREINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGESCANINQUIREINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 镜像扫描计费信息
                */
                class ImageScanInquireInfo : public AbstractModel
                {
                public:
                    ImageScanInquireInfo();
                    ~ImageScanInquireInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取计费项
                     * @return InquireKey 计费项
                     * 
                     */
                    std::string GetInquireKey() const;

                    /**
                     * 设置计费项
                     * @param _inquireKey 计费项
                     * 
                     */
                    void SetInquireKey(const std::string& _inquireKey);

                    /**
                     * 判断参数 InquireKey 是否已赋值
                     * @return InquireKey 是否已赋值
                     * 
                     */
                    bool InquireKeyHasBeenSet() const;

                    /**
                     * 获取总容量
                     * @return Capcity 总容量
                     * 
                     */
                    uint64_t GetCapcity() const;

                    /**
                     * 设置总容量
                     * @param _capcity 总容量
                     * 
                     */
                    void SetCapcity(const uint64_t& _capcity);

                    /**
                     * 判断参数 Capcity 是否已赋值
                     * @return Capcity 是否已赋值
                     * 
                     */
                    bool CapcityHasBeenSet() const;

                    /**
                     * 获取已使用量
                     * @return Useage 已使用量
                     * 
                     */
                    uint64_t GetUseage() const;

                    /**
                     * 设置已使用量
                     * @param _useage 已使用量
                     * 
                     */
                    void SetUseage(const uint64_t& _useage);

                    /**
                     * 判断参数 Useage 是否已赋值
                     * @return Useage 是否已赋值
                     * 
                     */
                    bool UseageHasBeenSet() const;

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
                     * 获取截止时间
                     * @return EndTime 截止时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置截止时间
                     * @param _endTime 截止时间
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
                     * 获取计费状态
(Pending:待购)
(Normal:正常)
(Isolate:隔离)
                     * @return PurchaseStatus 计费状态
(Pending:待购)
(Normal:正常)
(Isolate:隔离)
                     * 
                     */
                    std::string GetPurchaseStatus() const;

                    /**
                     * 设置计费状态
(Pending:待购)
(Normal:正常)
(Isolate:隔离)
                     * @param _purchaseStatus 计费状态
(Pending:待购)
(Normal:正常)
(Isolate:隔离)
                     * 
                     */
                    void SetPurchaseStatus(const std::string& _purchaseStatus);

                    /**
                     * 判断参数 PurchaseStatus 是否已赋值
                     * @return PurchaseStatus 是否已赋值
                     * 
                     */
                    bool PurchaseStatusHasBeenSet() const;

                    /**
                     * 获取资源ID
                     * @return ResourceID 资源ID
                     * 
                     */
                    std::string GetResourceID() const;

                    /**
                     * 设置资源ID
                     * @param _resourceID 资源ID
                     * 
                     */
                    void SetResourceID(const std::string& _resourceID);

                    /**
                     * 判断参数 ResourceID 是否已赋值
                     * @return ResourceID 是否已赋值
                     * 
                     */
                    bool ResourceIDHasBeenSet() const;

                    /**
                     * 获取购买扫描数
                     * @return PayNum 购买扫描数
                     * 
                     */
                    uint64_t GetPayNum() const;

                    /**
                     * 设置购买扫描数
                     * @param _payNum 购买扫描数
                     * 
                     */
                    void SetPayNum(const uint64_t& _payNum);

                    /**
                     * 判断参数 PayNum 是否已赋值
                     * @return PayNum 是否已赋值
                     * 
                     */
                    bool PayNumHasBeenSet() const;

                    /**
                     * 获取试用扫描数
                     * @return TrialNum 试用扫描数
                     * 
                     */
                    uint64_t GetTrialNum() const;

                    /**
                     * 设置试用扫描数
                     * @param _trialNum 试用扫描数
                     * 
                     */
                    void SetTrialNum(const uint64_t& _trialNum);

                    /**
                     * 判断参数 TrialNum 是否已赋值
                     * @return TrialNum 是否已赋值
                     * 
                     */
                    bool TrialNumHasBeenSet() const;

                    /**
                     * 获取购买已使用量
                     * @return PayUsage 购买已使用量
                     * 
                     */
                    uint64_t GetPayUsage() const;

                    /**
                     * 设置购买已使用量
                     * @param _payUsage 购买已使用量
                     * 
                     */
                    void SetPayUsage(const uint64_t& _payUsage);

                    /**
                     * 判断参数 PayUsage 是否已赋值
                     * @return PayUsage 是否已赋值
                     * 
                     */
                    bool PayUsageHasBeenSet() const;

                private:

                    /**
                     * 计费项
                     */
                    std::string m_inquireKey;
                    bool m_inquireKeyHasBeenSet;

                    /**
                     * 总容量
                     */
                    uint64_t m_capcity;
                    bool m_capcityHasBeenSet;

                    /**
                     * 已使用量
                     */
                    uint64_t m_useage;
                    bool m_useageHasBeenSet;

                    /**
                     * 起始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 截止时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 计费状态
(Pending:待购)
(Normal:正常)
(Isolate:隔离)
                     */
                    std::string m_purchaseStatus;
                    bool m_purchaseStatusHasBeenSet;

                    /**
                     * 资源ID
                     */
                    std::string m_resourceID;
                    bool m_resourceIDHasBeenSet;

                    /**
                     * 购买扫描数
                     */
                    uint64_t m_payNum;
                    bool m_payNumHasBeenSet;

                    /**
                     * 试用扫描数
                     */
                    uint64_t m_trialNum;
                    bool m_trialNumHasBeenSet;

                    /**
                     * 购买已使用量
                     */
                    uint64_t m_payUsage;
                    bool m_payUsageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGESCANINQUIREINFO_H_
