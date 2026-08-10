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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEVULSCANMANUALREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEVULSCANMANUALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * CreateVulScanManual请求参数结构体
                */
                class CreateVulScanManualRequest : public AbstractModel
                {
                public:
                    CreateVulScanManualRequest();
                    ~CreateVulScanManualRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>超时时间（秒）</p>
                     * @return Timeout <p>超时时间（秒）</p>
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置<p>超时时间（秒）</p>
                     * @param _timeout <p>超时时间（秒）</p>
                     * 
                     */
                    void SetTimeout(const uint64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取<p>资产范围（0-全部资产，1-自选资产，2-剔除资产，3-自动资产匹配）</p>
                     * @return AssetRange <p>资产范围（0-全部资产，1-自选资产，2-剔除资产，3-自动资产匹配）</p>
                     * 
                     */
                    int64_t GetAssetRange() const;

                    /**
                     * 设置<p>资产范围（0-全部资产，1-自选资产，2-剔除资产，3-自动资产匹配）</p>
                     * @param _assetRange <p>资产范围（0-全部资产，1-自选资产，2-剔除资产，3-自动资产匹配）</p>
                     * 
                     */
                    void SetAssetRange(const int64_t& _assetRange);

                    /**
                     * 判断参数 AssetRange 是否已赋值
                     * @return AssetRange 是否已赋值
                     * 
                     */
                    bool AssetRangeHasBeenSet() const;

                    /**
                     * 获取<p>扫描方式（VersionCompare: 版本对比, POC: POC检测, VersionComparePOC: 版本对比+POC检测）</p>
                     * @return Method <p>扫描方式（VersionCompare: 版本对比, POC: POC检测, VersionComparePOC: 版本对比+POC检测）</p>
                     * 
                     */
                    std::vector<std::string> GetMethod() const;

                    /**
                     * 设置<p>扫描方式（VersionCompare: 版本对比, POC: POC检测, VersionComparePOC: 版本对比+POC检测）</p>
                     * @param _method <p>扫描方式（VersionCompare: 版本对比, POC: POC检测, VersionComparePOC: 版本对比+POC检测）</p>
                     * 
                     */
                    void SetMethod(const std::vector<std::string>& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>漏洞id</p>
                     * @return VulId <p>漏洞id</p>
                     * 
                     */
                    std::vector<uint64_t> GetVulId() const;

                    /**
                     * 设置<p>漏洞id</p>
                     * @param _vulId <p>漏洞id</p>
                     * 
                     */
                    void SetVulId(const std::vector<uint64_t>& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     * 
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取<p>kb编号</p>
                     * @return KbNo <p>kb编号</p>
                     * 
                     */
                    std::vector<std::string> GetKbNo() const;

                    /**
                     * 设置<p>kb编号</p>
                     * @param _kbNo <p>kb编号</p>
                     * 
                     */
                    void SetKbNo(const std::vector<std::string>& _kbNo);

                    /**
                     * 判断参数 KbNo 是否已赋值
                     * @return KbNo 是否已赋值
                     * 
                     */
                    bool KbNoHasBeenSet() const;

                    /**
                     * 获取<p>漏扫类型</p><p>枚举值：</p><ul><li>LINUX： Linux软件漏洞</li><li>WINDOWS： Windows系统补丁</li><li>WEB_CMS： Web-CMS漏洞</li><li>APPLICATION： 应用漏洞</li><li>EMERGENCY： 应急漏洞</li></ul>
                     * @return VulCategory <p>漏扫类型</p><p>枚举值：</p><ul><li>LINUX： Linux软件漏洞</li><li>WINDOWS： Windows系统补丁</li><li>WEB_CMS： Web-CMS漏洞</li><li>APPLICATION： 应用漏洞</li><li>EMERGENCY： 应急漏洞</li></ul>
                     * 
                     */
                    std::vector<std::string> GetVulCategory() const;

                    /**
                     * 设置<p>漏扫类型</p><p>枚举值：</p><ul><li>LINUX： Linux软件漏洞</li><li>WINDOWS： Windows系统补丁</li><li>WEB_CMS： Web-CMS漏洞</li><li>APPLICATION： 应用漏洞</li><li>EMERGENCY： 应急漏洞</li></ul>
                     * @param _vulCategory <p>漏扫类型</p><p>枚举值：</p><ul><li>LINUX： Linux软件漏洞</li><li>WINDOWS： Windows系统补丁</li><li>WEB_CMS： Web-CMS漏洞</li><li>APPLICATION： 应用漏洞</li><li>EMERGENCY： 应急漏洞</li></ul>
                     * 
                     */
                    void SetVulCategory(const std::vector<std::string>& _vulCategory);

                    /**
                     * 判断参数 VulCategory 是否已赋值
                     * @return VulCategory 是否已赋值
                     * 
                     */
                    bool VulCategoryHasBeenSet() const;

                    /**
                     * 获取<p>漏洞等级（INVALID: 无效, INFO: 提示, LOW: 低危, MEDIUM: 中危, HIGH: 高危, CRITICAL: 严重）</p>
                     * @return Level <p>漏洞等级（INVALID: 无效, INFO: 提示, LOW: 低危, MEDIUM: 中危, HIGH: 高危, CRITICAL: 严重）</p>
                     * 
                     */
                    std::vector<std::string> GetLevel() const;

                    /**
                     * 设置<p>漏洞等级（INVALID: 无效, INFO: 提示, LOW: 低危, MEDIUM: 中危, HIGH: 高危, CRITICAL: 严重）</p>
                     * @param _level <p>漏洞等级（INVALID: 无效, INFO: 提示, LOW: 低危, MEDIUM: 中危, HIGH: 高危, CRITICAL: 严重）</p>
                     * 
                     */
                    void SetLevel(const std::vector<std::string>& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取<p>资产列表（Quuid列表）</p>
                     * @return AssetList <p>资产列表（Quuid列表）</p>
                     * 
                     */
                    std::vector<std::string> GetAssetList() const;

                    /**
                     * 设置<p>资产列表（Quuid列表）</p>
                     * @param _assetList <p>资产列表（Quuid列表）</p>
                     * 
                     */
                    void SetAssetList(const std::vector<std::string>& _assetList);

                    /**
                     * 判断参数 AssetList 是否已赋值
                     * @return AssetList 是否已赋值
                     * 
                     */
                    bool AssetListHasBeenSet() const;

                    /**
                     * 获取<p>标签id</p>
                     * @return TagIds <p>标签id</p>
                     * 
                     */
                    std::vector<uint64_t> GetTagIds() const;

                    /**
                     * 设置<p>标签id</p>
                     * @param _tagIds <p>标签id</p>
                     * 
                     */
                    void SetTagIds(const std::vector<uint64_t>& _tagIds);

                    /**
                     * 判断参数 TagIds 是否已赋值
                     * @return TagIds 是否已赋值
                     * 
                     */
                    bool TagIdsHasBeenSet() const;

                private:

                    /**
                     * <p>超时时间（秒）</p>
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>资产范围（0-全部资产，1-自选资产，2-剔除资产，3-自动资产匹配）</p>
                     */
                    int64_t m_assetRange;
                    bool m_assetRangeHasBeenSet;

                    /**
                     * <p>扫描方式（VersionCompare: 版本对比, POC: POC检测, VersionComparePOC: 版本对比+POC检测）</p>
                     */
                    std::vector<std::string> m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>漏洞id</p>
                     */
                    std::vector<uint64_t> m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * <p>kb编号</p>
                     */
                    std::vector<std::string> m_kbNo;
                    bool m_kbNoHasBeenSet;

                    /**
                     * <p>漏扫类型</p><p>枚举值：</p><ul><li>LINUX： Linux软件漏洞</li><li>WINDOWS： Windows系统补丁</li><li>WEB_CMS： Web-CMS漏洞</li><li>APPLICATION： 应用漏洞</li><li>EMERGENCY： 应急漏洞</li></ul>
                     */
                    std::vector<std::string> m_vulCategory;
                    bool m_vulCategoryHasBeenSet;

                    /**
                     * <p>漏洞等级（INVALID: 无效, INFO: 提示, LOW: 低危, MEDIUM: 中危, HIGH: 高危, CRITICAL: 严重）</p>
                     */
                    std::vector<std::string> m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>资产列表（Quuid列表）</p>
                     */
                    std::vector<std::string> m_assetList;
                    bool m_assetListHasBeenSet;

                    /**
                     * <p>标签id</p>
                     */
                    std::vector<uint64_t> m_tagIds;
                    bool m_tagIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATEVULSCANMANUALREQUEST_H_
