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

#ifndef TENCENTCLOUD_ZJ_V20190121_MODEL_SMSCAMPAIGNSTATISTICSTEMPLATEDATA_H_
#define TENCENTCLOUD_ZJ_V20190121_MODEL_SMSCAMPAIGNSTATISTICSTEMPLATEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Zj
    {
        namespace V20190121
        {
            namespace Model
            {
                /**
                * 短信活动统计模板展示结构
                */
                class SmsCampaignStatisticsTemplateData : public AbstractModel
                {
                public:
                    SmsCampaignStatisticsTemplateData();
                    ~SmsCampaignStatisticsTemplateData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模板或样例id
                     * @return TemplateId 模板或样例id
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置模板或样例id
                     * @param _templateId 模板或样例id
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取模板内容
                     * @return TemplateContent 模板内容
                     * 
                     */
                    std::string GetTemplateContent() const;

                    /**
                     * 设置模板内容
                     * @param _templateContent 模板内容
                     * 
                     */
                    void SetTemplateContent(const std::string& _templateContent);

                    /**
                     * 判断参数 TemplateContent 是否已赋值
                     * @return TemplateContent 是否已赋值
                     * 
                     */
                    bool TemplateContentHasBeenSet() const;

                    /**
                     * 获取触达成功数
                     * @return SendCount 触达成功数
                     * 
                     */
                    uint64_t GetSendCount() const;

                    /**
                     * 设置触达成功数
                     * @param _sendCount 触达成功数
                     * 
                     */
                    void SetSendCount(const uint64_t& _sendCount);

                    /**
                     * 判断参数 SendCount 是否已赋值
                     * @return SendCount 是否已赋值
                     * 
                     */
                    bool SendCountHasBeenSet() const;

                    /**
                     * 获取短链点击数
                     * @return ClickCount 短链点击数
                     * 
                     */
                    uint64_t GetClickCount() const;

                    /**
                     * 设置短链点击数
                     * @param _clickCount 短链点击数
                     * 
                     */
                    void SetClickCount(const uint64_t& _clickCount);

                    /**
                     * 判断参数 ClickCount 是否已赋值
                     * @return ClickCount 是否已赋值
                     * 
                     */
                    bool ClickCountHasBeenSet() const;

                private:

                    /**
                     * 模板或样例id
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 模板内容
                     */
                    std::string m_templateContent;
                    bool m_templateContentHasBeenSet;

                    /**
                     * 触达成功数
                     */
                    uint64_t m_sendCount;
                    bool m_sendCountHasBeenSet;

                    /**
                     * 短链点击数
                     */
                    uint64_t m_clickCount;
                    bool m_clickCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ZJ_V20190121_MODEL_SMSCAMPAIGNSTATISTICSTEMPLATEDATA_H_
