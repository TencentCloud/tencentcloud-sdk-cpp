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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_LLMPKG_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_LLMPKG_H_

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
                * 大模型安全「后付费」资源信息（数据源：tb_waf_llm_resource），与 DescribeInstances 的 InstanceDetail.LLMPkg 保持一致
                */
                class LLMPkg : public AbstractModel
                {
                public:
                    LLMPkg();
                    ~LLMPkg() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>资源id</p>
                     * @return ResourceIds <p>资源id</p>
                     * 
                     */
                    std::string GetResourceIds() const;

                    /**
                     * 设置<p>资源id</p>
                     * @param _resourceIds <p>资源id</p>
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
                     * 获取<p>状态</p>
                     * @return Status <p>状态</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>状态</p>
                     * @param _status <p>状态</p>
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
                     * 获取<p>地域</p>
                     * @return Region <p>地域</p>
                     * 
                     */
                    int64_t GetRegion() const;

                    /**
                     * 设置<p>地域</p>
                     * @param _region <p>地域</p>
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
                     * 获取<p>开始时间</p>
                     * @return BeginTime <p>开始时间</p>
                     * 
                     */
                    std::string GetBeginTime() const;

                    /**
                     * 设置<p>开始时间</p>
                     * @param _beginTime <p>开始时间</p>
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
                     * 获取<p>结束时间</p>
                     * @return EndTime <p>结束时间</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间</p>
                     * @param _endTime <p>结束时间</p>
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
                     * 获取<p>申请数量</p>
                     * @return InquireNum <p>申请数量</p>
                     * 
                     */
                    int64_t GetInquireNum() const;

                    /**
                     * 设置<p>申请数量</p>
                     * @param _inquireNum <p>申请数量</p>
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
                     * 获取<p>计费项标签，如 sv_wsm_waf_llm_prompt_attack</p>
                     * @return InquireKey <p>计费项标签，如 sv_wsm_waf_llm_prompt_attack</p>
                     * 
                     */
                    std::string GetInquireKey() const;

                    /**
                     * 设置<p>计费项标签，如 sv_wsm_waf_llm_prompt_attack</p>
                     * @param _inquireKey <p>计费项标签，如 sv_wsm_waf_llm_prompt_attack</p>
                     * 
                     */
                    void SetInquireKey(const std::string& _inquireKey);

                    /**
                     * 判断参数 InquireKey 是否已赋值
                     * @return InquireKey 是否已赋值
                     * 
                     */
                    bool InquireKeyHasBeenSet() const;

                private:

                    /**
                     * <p>资源id</p>
                     */
                    std::string m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * <p>状态</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>地域</p>
                     */
                    int64_t m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>开始时间</p>
                     */
                    std::string m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * <p>结束时间</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>申请数量</p>
                     */
                    int64_t m_inquireNum;
                    bool m_inquireNumHasBeenSet;

                    /**
                     * <p>计费项标签，如 sv_wsm_waf_llm_prompt_attack</p>
                     */
                    std::string m_inquireKey;
                    bool m_inquireKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_LLMPKG_H_
