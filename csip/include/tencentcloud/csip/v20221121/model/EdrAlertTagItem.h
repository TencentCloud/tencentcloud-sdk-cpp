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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_EDRALERTTAGITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_EDRALERTTAGITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/TagItem.h>
#include <tencentcloud/csip/v20221121/model/CSIPTag.h>
#include <tencentcloud/csip/v20221121/model/IPIntelInfo.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 标签查询结果项
                */
                class EdrAlertTagItem : public AbstractModel
                {
                public:
                    EdrAlertTagItem();
                    ~EdrAlertTagItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>告警ID</p>
                     * @return AlertId <p>告警ID</p>
                     * 
                     */
                    std::string GetAlertId() const;

                    /**
                     * 设置<p>告警ID</p>
                     * @param _alertId <p>告警ID</p>
                     * 
                     */
                    void SetAlertId(const std::string& _alertId);

                    /**
                     * 判断参数 AlertId 是否已赋值
                     * @return AlertId 是否已赋值
                     * 
                     */
                    bool AlertIdHasBeenSet() const;

                    /**
                     * 获取<p>腾讯云标签</p>
                     * @return CloudTags <p>腾讯云标签</p>
                     * 
                     */
                    std::vector<TagItem> GetCloudTags() const;

                    /**
                     * 设置<p>腾讯云标签</p>
                     * @param _cloudTags <p>腾讯云标签</p>
                     * 
                     */
                    void SetCloudTags(const std::vector<TagItem>& _cloudTags);

                    /**
                     * 判断参数 CloudTags 是否已赋值
                     * @return CloudTags 是否已赋值
                     * 
                     */
                    bool CloudTagsHasBeenSet() const;

                    /**
                     * 获取<p>安全中心标签</p>
                     * @return CSIPTags <p>安全中心标签</p>
                     * 
                     */
                    std::vector<CSIPTag> GetCSIPTags() const;

                    /**
                     * 设置<p>安全中心标签</p>
                     * @param _cSIPTags <p>安全中心标签</p>
                     * 
                     */
                    void SetCSIPTags(const std::vector<CSIPTag>& _cSIPTags);

                    /**
                     * 判断参数 CSIPTags 是否已赋值
                     * @return CSIPTags 是否已赋值
                     * 
                     */
                    bool CSIPTagsHasBeenSet() const;

                    /**
                     * 获取<p>情报标签</p>
                     * @return ThreatTags <p>情报标签</p>
                     * 
                     */
                    std::vector<std::string> GetThreatTags() const;

                    /**
                     * 设置<p>情报标签</p>
                     * @param _threatTags <p>情报标签</p>
                     * 
                     */
                    void SetThreatTags(const std::vector<std::string>& _threatTags);

                    /**
                     * 判断参数 ThreatTags 是否已赋值
                     * @return ThreatTags 是否已赋值
                     * 
                     */
                    bool ThreatTagsHasBeenSet() const;

                    /**
                     * 获取<p>IP情报信息</p>
                     * @return IPIntel <p>IP情报信息</p>
                     * 
                     */
                    IPIntelInfo GetIPIntel() const;

                    /**
                     * 设置<p>IP情报信息</p>
                     * @param _iPIntel <p>IP情报信息</p>
                     * 
                     */
                    void SetIPIntel(const IPIntelInfo& _iPIntel);

                    /**
                     * 判断参数 IPIntel 是否已赋值
                     * @return IPIntel 是否已赋值
                     * 
                     */
                    bool IPIntelHasBeenSet() const;

                private:

                    /**
                     * <p>告警ID</p>
                     */
                    std::string m_alertId;
                    bool m_alertIdHasBeenSet;

                    /**
                     * <p>腾讯云标签</p>
                     */
                    std::vector<TagItem> m_cloudTags;
                    bool m_cloudTagsHasBeenSet;

                    /**
                     * <p>安全中心标签</p>
                     */
                    std::vector<CSIPTag> m_cSIPTags;
                    bool m_cSIPTagsHasBeenSet;

                    /**
                     * <p>情报标签</p>
                     */
                    std::vector<std::string> m_threatTags;
                    bool m_threatTagsHasBeenSet;

                    /**
                     * <p>IP情报信息</p>
                     */
                    IPIntelInfo m_iPIntel;
                    bool m_iPIntelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_EDRALERTTAGITEM_H_
