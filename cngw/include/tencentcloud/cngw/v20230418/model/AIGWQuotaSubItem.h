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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWQUOTASUBITEM_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWQUOTASUBITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 配额规则中，某资源对象的指定子资源信息。如资源对象“模型服务”的“指定模型服务”的信息。当Scope=Specified 必填（1~50 项，msvc_id 不重复，QuotaLimit>0）；Scope=All 必须为空。
                */
                class AIGWQuotaSubItem : public AbstractModel
                {
                public:
                    AIGWQuotaSubItem();
                    ~AIGWQuotaSubItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>子资源 ID（如：模型服务 ID）</p>
                     * @return SubResourceId <p>子资源 ID（如：模型服务 ID）</p>
                     * 
                     */
                    std::string GetSubResourceId() const;

                    /**
                     * 设置<p>子资源 ID（如：模型服务 ID）</p>
                     * @param _subResourceId <p>子资源 ID（如：模型服务 ID）</p>
                     * 
                     */
                    void SetSubResourceId(const std::string& _subResourceId);

                    /**
                     * 判断参数 SubResourceId 是否已赋值
                     * @return SubResourceId 是否已赋值
                     * 
                     */
                    bool SubResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>该子资源独立配额上限，必须 &gt; 0；单位与 QuotaType 对齐（Cost=元 TotalToken=tokens RequestCount=次）</p>
                     * @return QuotaLimit <p>该子资源独立配额上限，必须 &gt; 0；单位与 QuotaType 对齐（Cost=元 TotalToken=tokens RequestCount=次）</p>
                     * 
                     */
                    uint64_t GetQuotaLimit() const;

                    /**
                     * 设置<p>该子资源独立配额上限，必须 &gt; 0；单位与 QuotaType 对齐（Cost=元 TotalToken=tokens RequestCount=次）</p>
                     * @param _quotaLimit <p>该子资源独立配额上限，必须 &gt; 0；单位与 QuotaType 对齐（Cost=元 TotalToken=tokens RequestCount=次）</p>
                     * 
                     */
                    void SetQuotaLimit(const uint64_t& _quotaLimit);

                    /**
                     * 判断参数 QuotaLimit 是否已赋值
                     * @return QuotaLimit 是否已赋值
                     * 
                     */
                    bool QuotaLimitHasBeenSet() const;

                private:

                    /**
                     * <p>子资源 ID（如：模型服务 ID）</p>
                     */
                    std::string m_subResourceId;
                    bool m_subResourceIdHasBeenSet;

                    /**
                     * <p>该子资源独立配额上限，必须 &gt; 0；单位与 QuotaType 对齐（Cost=元 TotalToken=tokens RequestCount=次）</p>
                     */
                    uint64_t m_quotaLimit;
                    bool m_quotaLimitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_AIGWQUOTASUBITEM_H_
