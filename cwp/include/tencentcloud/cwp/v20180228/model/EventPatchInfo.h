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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EVENTPATCHINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EVENTPATCHINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 补丁详细信息
                */
                class EventPatchInfo : public AbstractModel
                {
                public:
                    EventPatchInfo();
                    ~EventPatchInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取补丁名
                     * @return Name 补丁名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置补丁名
                     * @param _name 补丁名
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
                     * 获取补丁编号
                     * @return KbNo 补丁编号
                     * 
                     */
                    std::string GetKbNo() const;

                    /**
                     * 设置补丁编号
                     * @param _kbNo 补丁编号
                     * 
                     */
                    void SetKbNo(const std::string& _kbNo);

                    /**
                     * 判断参数 KbNo 是否已赋值
                     * @return KbNo 是否已赋值
                     * 
                     */
                    bool KbNoHasBeenSet() const;

                    /**
                     * 获取披露时间
                     * @return PublishTime 披露时间
                     * 
                     */
                    std::string GetPublishTime() const;

                    /**
                     * 设置披露时间
                     * @param _publishTime 披露时间
                     * 
                     */
                    void SetPublishTime(const std::string& _publishTime);

                    /**
                     * 判断参数 PublishTime 是否已赋值
                     * @return PublishTime 是否已赋值
                     * 
                     */
                    bool PublishTimeHasBeenSet() const;

                    /**
                     * 获取影响主机数量
                     * @return EffectHostCount 影响主机数量
                     * 
                     */
                    uint64_t GetEffectHostCount() const;

                    /**
                     * 设置影响主机数量
                     * @param _effectHostCount 影响主机数量
                     * 
                     */
                    void SetEffectHostCount(const uint64_t& _effectHostCount);

                    /**
                     * 判断参数 EffectHostCount 是否已赋值
                     * @return EffectHostCount 是否已赋值
                     * 
                     */
                    bool EffectHostCountHasBeenSet() const;

                    /**
                     * 获取关联的漏洞数
                     * @return RelateVulCount 关联的漏洞数
                     * 
                     */
                    uint64_t GetRelateVulCount() const;

                    /**
                     * 设置关联的漏洞数
                     * @param _relateVulCount 关联的漏洞数
                     * 
                     */
                    void SetRelateVulCount(const uint64_t& _relateVulCount);

                    /**
                     * 判断参数 RelateVulCount 是否已赋值
                     * @return RelateVulCount 是否已赋值
                     * 
                     */
                    bool RelateVulCountHasBeenSet() const;

                    /**
                     * 获取关联的漏洞编号数组
                     * @return RelateVulList 关联的漏洞编号数组
                     * 
                     */
                    std::vector<std::string> GetRelateVulList() const;

                    /**
                     * 设置关联的漏洞编号数组
                     * @param _relateVulList 关联的漏洞编号数组
                     * 
                     */
                    void SetRelateVulList(const std::vector<std::string>& _relateVulList);

                    /**
                     * 判断参数 RelateVulList 是否已赋值
                     * @return RelateVulList 是否已赋值
                     * 
                     */
                    bool RelateVulListHasBeenSet() const;

                    /**
                     * 获取是否为最新披露，0否，1是，默认为否
                     * @return IsNew 是否为最新披露，0否，1是，默认为否
                     * 
                     */
                    int64_t GetIsNew() const;

                    /**
                     * 设置是否为最新披露，0否，1是，默认为否
                     * @param _isNew 是否为最新披露，0否，1是，默认为否
                     * 
                     */
                    void SetIsNew(const int64_t& _isNew);

                    /**
                     * 判断参数 IsNew 是否已赋值
                     * @return IsNew 是否已赋值
                     * 
                     */
                    bool IsNewHasBeenSet() const;

                    /**
                     * 获取最后扫描时间
                     * @return LastScanTime 最后扫描时间
                     * 
                     */
                    std::string GetLastScanTime() const;

                    /**
                     * 设置最后扫描时间
                     * @param _lastScanTime 最后扫描时间
                     * 
                     */
                    void SetLastScanTime(const std::string& _lastScanTime);

                    /**
                     * 判断参数 LastScanTime 是否已赋值
                     * @return LastScanTime 是否已赋值
                     * 
                     */
                    bool LastScanTimeHasBeenSet() const;

                    /**
                     * 获取0待处理,1忽略,3修复
                     * @return Status 0待处理,1忽略,3修复
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置0待处理,1忽略,3修复
                     * @param _status 0待处理,1忽略,3修复
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取安装该kb的前置条件，一般为其他kb，且可能有多个，kb之间用", "分隔
                     * @return KbPreCondition 安装该kb的前置条件，一般为其他kb，且可能有多个，kb之间用", "分隔
                     * 
                     */
                    std::string GetKbPreCondition() const;

                    /**
                     * 设置安装该kb的前置条件，一般为其他kb，且可能有多个，kb之间用", "分隔
                     * @param _kbPreCondition 安装该kb的前置条件，一般为其他kb，且可能有多个，kb之间用", "分隔
                     * 
                     */
                    void SetKbPreCondition(const std::string& _kbPreCondition);

                    /**
                     * 判断参数 KbPreCondition 是否已赋值
                     * @return KbPreCondition 是否已赋值
                     * 
                     */
                    bool KbPreConditionHasBeenSet() const;

                    /**
                     * 获取该kb关联的windows product名称
                     * @return RelatedProduct 该kb关联的windows product名称
                     * 
                     */
                    std::string GetRelatedProduct() const;

                    /**
                     * 设置该kb关联的windows product名称
                     * @param _relatedProduct 该kb关联的windows product名称
                     * 
                     */
                    void SetRelatedProduct(const std::string& _relatedProduct);

                    /**
                     * 判断参数 RelatedProduct 是否已赋值
                     * @return RelatedProduct 是否已赋值
                     * 
                     */
                    bool RelatedProductHasBeenSet() const;

                    /**
                     * 获取补丁id
                     * @return KbId 补丁id
                     * 
                     */
                    uint64_t GetKbId() const;

                    /**
                     * 设置补丁id
                     * @param _kbId 补丁id
                     * 
                     */
                    void SetKbId(const uint64_t& _kbId);

                    /**
                     * 判断参数 KbId 是否已赋值
                     * @return KbId 是否已赋值
                     * 
                     */
                    bool KbIdHasBeenSet() const;

                    /**
                     * 获取相关kb事件的id集合
                     * @return Ids 相关kb事件的id集合
                     * 
                     */
                    std::string GetIds() const;

                    /**
                     * 设置相关kb事件的id集合
                     * @param _ids 相关kb事件的id集合
                     * 
                     */
                    void SetIds(const std::string& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     * 
                     */
                    bool IdsHasBeenSet() const;

                private:

                    /**
                     * 补丁名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 补丁编号
                     */
                    std::string m_kbNo;
                    bool m_kbNoHasBeenSet;

                    /**
                     * 披露时间
                     */
                    std::string m_publishTime;
                    bool m_publishTimeHasBeenSet;

                    /**
                     * 影响主机数量
                     */
                    uint64_t m_effectHostCount;
                    bool m_effectHostCountHasBeenSet;

                    /**
                     * 关联的漏洞数
                     */
                    uint64_t m_relateVulCount;
                    bool m_relateVulCountHasBeenSet;

                    /**
                     * 关联的漏洞编号数组
                     */
                    std::vector<std::string> m_relateVulList;
                    bool m_relateVulListHasBeenSet;

                    /**
                     * 是否为最新披露，0否，1是，默认为否
                     */
                    int64_t m_isNew;
                    bool m_isNewHasBeenSet;

                    /**
                     * 最后扫描时间
                     */
                    std::string m_lastScanTime;
                    bool m_lastScanTimeHasBeenSet;

                    /**
                     * 0待处理,1忽略,3修复
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 安装该kb的前置条件，一般为其他kb，且可能有多个，kb之间用", "分隔
                     */
                    std::string m_kbPreCondition;
                    bool m_kbPreConditionHasBeenSet;

                    /**
                     * 该kb关联的windows product名称
                     */
                    std::string m_relatedProduct;
                    bool m_relatedProductHasBeenSet;

                    /**
                     * 补丁id
                     */
                    uint64_t m_kbId;
                    bool m_kbIdHasBeenSet;

                    /**
                     * 相关kb事件的id集合
                     */
                    std::string m_ids;
                    bool m_idsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EVENTPATCHINFO_H_
