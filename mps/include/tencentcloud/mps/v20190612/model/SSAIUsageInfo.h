/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_SSAIUSAGEINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_SSAIUSAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/UsageDetail.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * SSAI用量信息
                */
                class SSAIUsageInfo : public AbstractModel
                {
                public:
                    SSAIUsageInfo();
                    ~SSAIUsageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取广告请求成功次数
                     * @return AdRequestSuccess 广告请求成功次数
                     * 
                     */
                    uint64_t GetAdRequestSuccess() const;

                    /**
                     * 设置广告请求成功次数
                     * @param _adRequestSuccess 广告请求成功次数
                     * 
                     */
                    void SetAdRequestSuccess(const uint64_t& _adRequestSuccess);

                    /**
                     * 判断参数 AdRequestSuccess 是否已赋值
                     * @return AdRequestSuccess 是否已赋值
                     * 
                     */
                    bool AdRequestSuccessHasBeenSet() const;

                    /**
                     * 获取广告请求失败次数
                     * @return AdRequestFail 广告请求失败次数
                     * 
                     */
                    uint64_t GetAdRequestFail() const;

                    /**
                     * 设置广告请求失败次数
                     * @param _adRequestFail 广告请求失败次数
                     * 
                     */
                    void SetAdRequestFail(const uint64_t& _adRequestFail);

                    /**
                     * 判断参数 AdRequestFail 是否已赋值
                     * @return AdRequestFail 是否已赋值
                     * 
                     */
                    bool AdRequestFailHasBeenSet() const;

                    /**
                     * 获取曝光次数
                     * @return Impression 曝光次数
                     * 
                     */
                    uint64_t GetImpression() const;

                    /**
                     * 设置曝光次数
                     * @param _impression 曝光次数
                     * 
                     */
                    void SetImpression(const uint64_t& _impression);

                    /**
                     * 判断参数 Impression 是否已赋值
                     * @return Impression 是否已赋值
                     * 
                     */
                    bool ImpressionHasBeenSet() const;

                    /**
                     * 获取中贴个性化广告填充率
                     * @return MidFillRate 中贴个性化广告填充率
                     * 
                     */
                    double GetMidFillRate() const;

                    /**
                     * 设置中贴个性化广告填充率
                     * @param _midFillRate 中贴个性化广告填充率
                     * 
                     */
                    void SetMidFillRate(const double& _midFillRate);

                    /**
                     * 判断参数 MidFillRate 是否已赋值
                     * @return MidFillRate 是否已赋值
                     * 
                     */
                    bool MidFillRateHasBeenSet() const;

                    /**
                     * 获取中贴广告标记时间
                     * @return AdMarkerTime 中贴广告标记时间
                     * 
                     */
                    double GetAdMarkerTime() const;

                    /**
                     * 设置中贴广告标记时间
                     * @param _adMarkerTime 中贴广告标记时间
                     * 
                     */
                    void SetAdMarkerTime(const double& _adMarkerTime);

                    /**
                     * 判断参数 AdMarkerTime 是否已赋值
                     * @return AdMarkerTime 是否已赋值
                     * 
                     */
                    bool AdMarkerTimeHasBeenSet() const;

                    /**
                     * 获取中贴个性化替换时间
                     * @return ReplacedTime 中贴个性化替换时间
                     * 
                     */
                    double GetReplacedTime() const;

                    /**
                     * 设置中贴个性化替换时间
                     * @param _replacedTime 中贴个性化替换时间
                     * 
                     */
                    void SetReplacedTime(const double& _replacedTime);

                    /**
                     * 判断参数 ReplacedTime 是否已赋值
                     * @return ReplacedTime 是否已赋值
                     * 
                     */
                    bool ReplacedTimeHasBeenSet() const;

                    /**
                     * 获取前贴广告替换率
                     * @return PreReplaceRate 前贴广告替换率
                     * 
                     */
                    double GetPreReplaceRate() const;

                    /**
                     * 设置前贴广告替换率
                     * @param _preReplaceRate 前贴广告替换率
                     * 
                     */
                    void SetPreReplaceRate(const double& _preReplaceRate);

                    /**
                     * 判断参数 PreReplaceRate 是否已赋值
                     * @return PreReplaceRate 是否已赋值
                     * 
                     */
                    bool PreReplaceRateHasBeenSet() const;

                    /**
                     * 获取前贴广告请求数
                     * @return PreReqNum 前贴广告请求数
                     * 
                     */
                    uint64_t GetPreReqNum() const;

                    /**
                     * 设置前贴广告请求数
                     * @param _preReqNum 前贴广告请求数
                     * 
                     */
                    void SetPreReqNum(const uint64_t& _preReqNum);

                    /**
                     * 判断参数 PreReqNum 是否已赋值
                     * @return PreReqNum 是否已赋值
                     * 
                     */
                    bool PreReqNumHasBeenSet() const;

                    /**
                     * 获取前贴广告替换数
                     * @return PreReplacedNum 前贴广告替换数
                     * 
                     */
                    uint64_t GetPreReplacedNum() const;

                    /**
                     * 设置前贴广告替换数
                     * @param _preReplacedNum 前贴广告替换数
                     * 
                     */
                    void SetPreReplacedNum(const uint64_t& _preReplacedNum);

                    /**
                     * 判断参数 PreReplacedNum 是否已赋值
                     * @return PreReplacedNum 是否已赋值
                     * 
                     */
                    bool PreReplacedNumHasBeenSet() const;

                    /**
                     * 获取各广告配置用量详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UsageDetails 各广告配置用量详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<UsageDetail> GetUsageDetails() const;

                    /**
                     * 设置各广告配置用量详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _usageDetails 各广告配置用量详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUsageDetails(const std::vector<UsageDetail>& _usageDetails);

                    /**
                     * 判断参数 UsageDetails 是否已赋值
                     * @return UsageDetails 是否已赋值
                     * 
                     */
                    bool UsageDetailsHasBeenSet() const;

                private:

                    /**
                     * 广告请求成功次数
                     */
                    uint64_t m_adRequestSuccess;
                    bool m_adRequestSuccessHasBeenSet;

                    /**
                     * 广告请求失败次数
                     */
                    uint64_t m_adRequestFail;
                    bool m_adRequestFailHasBeenSet;

                    /**
                     * 曝光次数
                     */
                    uint64_t m_impression;
                    bool m_impressionHasBeenSet;

                    /**
                     * 中贴个性化广告填充率
                     */
                    double m_midFillRate;
                    bool m_midFillRateHasBeenSet;

                    /**
                     * 中贴广告标记时间
                     */
                    double m_adMarkerTime;
                    bool m_adMarkerTimeHasBeenSet;

                    /**
                     * 中贴个性化替换时间
                     */
                    double m_replacedTime;
                    bool m_replacedTimeHasBeenSet;

                    /**
                     * 前贴广告替换率
                     */
                    double m_preReplaceRate;
                    bool m_preReplaceRateHasBeenSet;

                    /**
                     * 前贴广告请求数
                     */
                    uint64_t m_preReqNum;
                    bool m_preReqNumHasBeenSet;

                    /**
                     * 前贴广告替换数
                     */
                    uint64_t m_preReplacedNum;
                    bool m_preReplacedNumHasBeenSet;

                    /**
                     * 各广告配置用量详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<UsageDetail> m_usageDetails;
                    bool m_usageDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_SSAIUSAGEINFO_H_
