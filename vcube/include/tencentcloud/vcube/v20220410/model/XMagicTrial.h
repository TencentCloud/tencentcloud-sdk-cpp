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

#ifndef TENCENTCLOUD_VCUBE_V20220410_MODEL_XMAGICTRIAL_H_
#define TENCENTCLOUD_VCUBE_V20220410_MODEL_XMAGICTRIAL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vcube
    {
        namespace V20220410
        {
            namespace Model
            {
                /**
                * 可以开通测试的功能
                */
                class XMagicTrial : public AbstractModel
                {
                public:
                    XMagicTrial();
                    ~XMagicTrial() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取功能名称
                     * @return Name 功能名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置功能名称
                     * @param _name 功能名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取可以申请的次数
                     * @return TrialCount 可以申请的次数
                     * 
                     */
                    uint64_t GetTrialCount() const;

                    /**
                     * 设置可以申请的次数
                     * @param _trialCount 可以申请的次数
                     * 
                     */
                    void SetTrialCount(const uint64_t& _trialCount);

                    /**
                     * 判断参数 TrialCount 是否已赋值
                     * @return TrialCount 是否已赋值
                     * 
                     */
                    bool TrialCountHasBeenSet() const;

                    /**
                     * 获取每次申请的时长单位：天
                     * @return Duration 每次申请的时长单位：天
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置每次申请的时长单位：天
                     * @param _duration 每次申请的时长单位：天
                     * 
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取功能类别
                     * @return Plan 功能类别
                     * 
                     */
                    std::string GetPlan() const;

                    /**
                     * 设置功能类别
                     * @param _plan 功能类别
                     * 
                     */
                    void SetPlan(const std::string& _plan);

                    /**
                     * 判断参数 Plan 是否已赋值
                     * @return Plan 是否已赋值
                     * 
                     */
                    bool PlanHasBeenSet() const;

                    /**
                     * 获取single: 原子能力,combined:套餐
                     * @return XMagicType single: 原子能力,combined:套餐
                     * 
                     */
                    std::string GetXMagicType() const;

                    /**
                     * 设置single: 原子能力,combined:套餐
                     * @param _xMagicType single: 原子能力,combined:套餐
                     * 
                     */
                    void SetXMagicType(const std::string& _xMagicType);

                    /**
                     * 判断参数 XMagicType 是否已赋值
                     * @return XMagicType 是否已赋值
                     * 
                     */
                    bool XMagicTypeHasBeenSet() const;

                    /**
                     * 获取vod：点播 live：直播
                     * @return BizType vod：点播 live：直播
                     * 
                     */
                    std::string GetBizType() const;

                    /**
                     * 设置vod：点播 live：直播
                     * @param _bizType vod：点播 live：直播
                     * 
                     */
                    void SetBizType(const std::string& _bizType);

                    /**
                     * 判断参数 BizType 是否已赋值
                     * @return BizType 是否已赋值
                     * 
                     */
                    bool BizTypeHasBeenSet() const;

                private:

                    /**
                     * 功能名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 可以申请的次数
                     */
                    uint64_t m_trialCount;
                    bool m_trialCountHasBeenSet;

                    /**
                     * 每次申请的时长单位：天
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 功能类别
                     */
                    std::string m_plan;
                    bool m_planHasBeenSet;

                    /**
                     * single: 原子能力,combined:套餐
                     */
                    std::string m_xMagicType;
                    bool m_xMagicTypeHasBeenSet;

                    /**
                     * vod：点播 live：直播
                     */
                    std::string m_bizType;
                    bool m_bizTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCUBE_V20220410_MODEL_XMAGICTRIAL_H_
