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

#ifndef TENCENTCLOUD_CWS_V20180312_MODEL_VULSTIMELINE_H_
#define TENCENTCLOUD_CWS_V20180312_MODEL_VULSTIMELINE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cws
    {
        namespace V20180312
        {
            namespace Model
            {
                /**
                * 用户漏洞数随时间变化统计数据
                */
                class VulsTimeline : public AbstractModel
                {
                public:
                    VulsTimeline();
                    ~VulsTimeline() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ID。
                     * @return Id ID。
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置ID。
                     * @param _id ID。
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取云用户appid。
                     * @return Appid 云用户appid。
                     * 
                     */
                    uint64_t GetAppid() const;

                    /**
                     * 设置云用户appid。
                     * @param _appid 云用户appid。
                     * 
                     */
                    void SetAppid(const uint64_t& _appid);

                    /**
                     * 判断参数 Appid 是否已赋值
                     * @return Appid 是否已赋值
                     * 
                     */
                    bool AppidHasBeenSet() const;

                    /**
                     * 获取日期。
                     * @return Date 日期。
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置日期。
                     * @param _date 日期。
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取扫描页面总数量。
                     * @return PageCount 扫描页面总数量。
                     * 
                     */
                    uint64_t GetPageCount() const;

                    /**
                     * 设置扫描页面总数量。
                     * @param _pageCount 扫描页面总数量。
                     * 
                     */
                    void SetPageCount(const uint64_t& _pageCount);

                    /**
                     * 判断参数 PageCount 是否已赋值
                     * @return PageCount 是否已赋值
                     * 
                     */
                    bool PageCountHasBeenSet() const;

                    /**
                     * 获取已验证网站总数量。
                     * @return SiteNum 已验证网站总数量。
                     * 
                     */
                    uint64_t GetSiteNum() const;

                    /**
                     * 设置已验证网站总数量。
                     * @param _siteNum 已验证网站总数量。
                     * 
                     */
                    void SetSiteNum(const uint64_t& _siteNum);

                    /**
                     * 判断参数 SiteNum 是否已赋值
                     * @return SiteNum 是否已赋值
                     * 
                     */
                    bool SiteNumHasBeenSet() const;

                    /**
                     * 获取受影响的网站总数量。
                     * @return ImpactSiteNum 受影响的网站总数量。
                     * 
                     */
                    uint64_t GetImpactSiteNum() const;

                    /**
                     * 设置受影响的网站总数量。
                     * @param _impactSiteNum 受影响的网站总数量。
                     * 
                     */
                    void SetImpactSiteNum(const uint64_t& _impactSiteNum);

                    /**
                     * 判断参数 ImpactSiteNum 是否已赋值
                     * @return ImpactSiteNum 是否已赋值
                     * 
                     */
                    bool ImpactSiteNumHasBeenSet() const;

                    /**
                     * 获取高危漏洞总数量。
                     * @return VulsHighNum 高危漏洞总数量。
                     * 
                     */
                    uint64_t GetVulsHighNum() const;

                    /**
                     * 设置高危漏洞总数量。
                     * @param _vulsHighNum 高危漏洞总数量。
                     * 
                     */
                    void SetVulsHighNum(const uint64_t& _vulsHighNum);

                    /**
                     * 判断参数 VulsHighNum 是否已赋值
                     * @return VulsHighNum 是否已赋值
                     * 
                     */
                    bool VulsHighNumHasBeenSet() const;

                    /**
                     * 获取中危漏洞总数量。
                     * @return VulsMiddleNum 中危漏洞总数量。
                     * 
                     */
                    uint64_t GetVulsMiddleNum() const;

                    /**
                     * 设置中危漏洞总数量。
                     * @param _vulsMiddleNum 中危漏洞总数量。
                     * 
                     */
                    void SetVulsMiddleNum(const uint64_t& _vulsMiddleNum);

                    /**
                     * 判断参数 VulsMiddleNum 是否已赋值
                     * @return VulsMiddleNum 是否已赋值
                     * 
                     */
                    bool VulsMiddleNumHasBeenSet() const;

                    /**
                     * 获取低危漏洞总数量。
                     * @return VulsLowNum 低危漏洞总数量。
                     * 
                     */
                    uint64_t GetVulsLowNum() const;

                    /**
                     * 设置低危漏洞总数量。
                     * @param _vulsLowNum 低危漏洞总数量。
                     * 
                     */
                    void SetVulsLowNum(const uint64_t& _vulsLowNum);

                    /**
                     * 判断参数 VulsLowNum 是否已赋值
                     * @return VulsLowNum 是否已赋值
                     * 
                     */
                    bool VulsLowNumHasBeenSet() const;

                    /**
                     * 获取风险提示总数量
                     * @return VulsNoticeNum 风险提示总数量
                     * 
                     */
                    uint64_t GetVulsNoticeNum() const;

                    /**
                     * 设置风险提示总数量
                     * @param _vulsNoticeNum 风险提示总数量
                     * 
                     */
                    void SetVulsNoticeNum(const uint64_t& _vulsNoticeNum);

                    /**
                     * 判断参数 VulsNoticeNum 是否已赋值
                     * @return VulsNoticeNum 是否已赋值
                     * 
                     */
                    bool VulsNoticeNumHasBeenSet() const;

                    /**
                     * 获取记录添加时间。
                     * @return CreatedAt 记录添加时间。
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置记录添加时间。
                     * @param _createdAt 记录添加时间。
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取记录最近修改时间。
                     * @return UpdatedAt 记录最近修改时间。
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置记录最近修改时间。
                     * @param _updatedAt 记录最近修改时间。
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                private:

                    /**
                     * ID。
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 云用户appid。
                     */
                    uint64_t m_appid;
                    bool m_appidHasBeenSet;

                    /**
                     * 日期。
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 扫描页面总数量。
                     */
                    uint64_t m_pageCount;
                    bool m_pageCountHasBeenSet;

                    /**
                     * 已验证网站总数量。
                     */
                    uint64_t m_siteNum;
                    bool m_siteNumHasBeenSet;

                    /**
                     * 受影响的网站总数量。
                     */
                    uint64_t m_impactSiteNum;
                    bool m_impactSiteNumHasBeenSet;

                    /**
                     * 高危漏洞总数量。
                     */
                    uint64_t m_vulsHighNum;
                    bool m_vulsHighNumHasBeenSet;

                    /**
                     * 中危漏洞总数量。
                     */
                    uint64_t m_vulsMiddleNum;
                    bool m_vulsMiddleNumHasBeenSet;

                    /**
                     * 低危漏洞总数量。
                     */
                    uint64_t m_vulsLowNum;
                    bool m_vulsLowNumHasBeenSet;

                    /**
                     * 风险提示总数量
                     */
                    uint64_t m_vulsNoticeNum;
                    bool m_vulsNoticeNumHasBeenSet;

                    /**
                     * 记录添加时间。
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 记录最近修改时间。
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWS_V20180312_MODEL_VULSTIMELINE_H_
