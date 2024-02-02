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

#ifndef TENCENTCLOUD_BMA_V20221115_MODEL_FAKEURLDATA_H_
#define TENCENTCLOUD_BMA_V20221115_MODEL_FAKEURLDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bma
    {
        namespace V20221115
        {
            namespace Model
            {
                /**
                * 仿冒网址数据
                */
                class FakeURLData : public AbstractModel
                {
                public:
                    FakeURLData();
                    ~FakeURLData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取仿冒网址id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FakeURLId 仿冒网址id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFakeURLId() const;

                    /**
                     * 设置仿冒网址id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fakeURLId 仿冒网址id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFakeURLId(const int64_t& _fakeURLId);

                    /**
                     * 判断参数 FakeURLId 是否已赋值
                     * @return FakeURLId 是否已赋值
                     * 
                     */
                    bool FakeURLIdHasBeenSet() const;

                    /**
                     * 获取品牌名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BrandName 品牌名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBrandName() const;

                    /**
                     * 设置品牌名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _brandName 品牌名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBrandName(const std::string& _brandName);

                    /**
                     * 判断参数 BrandName 是否已赋值
                     * @return BrandName 是否已赋值
                     * 
                     */
                    bool BrandNameHasBeenSet() const;

                    /**
                     * 获取仿冒来源：0-系统检测 1-人工举报
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Origin 仿冒来源：0-系统检测 1-人工举报
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOrigin() const;

                    /**
                     * 设置仿冒来源：0-系统检测 1-人工举报
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _origin 仿冒来源：0-系统检测 1-人工举报
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrigin(const int64_t& _origin);

                    /**
                     * 判断参数 Origin 是否已赋值
                     * @return Origin 是否已赋值
                     * 
                     */
                    bool OriginHasBeenSet() const;

                    /**
                     * 获取仿冒网址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FakeURL 仿冒网址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFakeURL() const;

                    /**
                     * 设置仿冒网址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fakeURL 仿冒网址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFakeURL(const std::string& _fakeURL);

                    /**
                     * 判断参数 FakeURL 是否已赋值
                     * @return FakeURL 是否已赋值
                     * 
                     */
                    bool FakeURLHasBeenSet() const;

                    /**
                     * 获取仿冒域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FakeDomain 仿冒域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFakeDomain() const;

                    /**
                     * 设置仿冒域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fakeDomain 仿冒域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFakeDomain(const std::string& _fakeDomain);

                    /**
                     * 判断参数 FakeDomain 是否已赋值
                     * @return FakeDomain 是否已赋值
                     * 
                     */
                    bool FakeDomainHasBeenSet() const;

                    /**
                     * 获取热度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Heat 热度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetHeat() const;

                    /**
                     * 设置热度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _heat 热度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHeat(const int64_t& _heat);

                    /**
                     * 判断参数 Heat 是否已赋值
                     * @return Heat 是否已赋值
                     * 
                     */
                    bool HeatHasBeenSet() const;

                    /**
                     * 获取拦截处置状态：0-未处置 1-处置中 2-处置成功 3-处置失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockStatus 拦截处置状态：0-未处置 1-处置中 2-处置成功 3-处置失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBlockStatus() const;

                    /**
                     * 设置拦截处置状态：0-未处置 1-处置中 2-处置成功 3-处置失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockStatus 拦截处置状态：0-未处置 1-处置中 2-处置成功 3-处置失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBlockStatus(const int64_t& _blockStatus);

                    /**
                     * 判断参数 BlockStatus 是否已赋值
                     * @return BlockStatus 是否已赋值
                     * 
                     */
                    bool BlockStatusHasBeenSet() const;

                    /**
                     * 获取拦截处置状态说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockNote 拦截处置状态说明
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBlockNote() const;

                    /**
                     * 设置拦截处置状态说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockNote 拦截处置状态说明
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBlockNote(const std::string& _blockNote);

                    /**
                     * 判断参数 BlockNote 是否已赋值
                     * @return BlockNote 是否已赋值
                     * 
                     */
                    bool BlockNoteHasBeenSet() const;

                    /**
                     * 获取关停状态：0-未关停 1-关停中 2-关停成功 3-关停失败 4-重复上架
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OfflineStatus 关停状态：0-未关停 1-关停中 2-关停成功 3-关停失败 4-重复上架
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOfflineStatus() const;

                    /**
                     * 设置关停状态：0-未关停 1-关停中 2-关停成功 3-关停失败 4-重复上架
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _offlineStatus 关停状态：0-未关停 1-关停中 2-关停成功 3-关停失败 4-重复上架
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOfflineStatus(const int64_t& _offlineStatus);

                    /**
                     * 判断参数 OfflineStatus 是否已赋值
                     * @return OfflineStatus 是否已赋值
                     * 
                     */
                    bool OfflineStatusHasBeenSet() const;

                    /**
                     * 获取关停状态说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OfflineNote 关停状态说明
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOfflineNote() const;

                    /**
                     * 设置关停状态说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _offlineNote 关停状态说明
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOfflineNote(const std::string& _offlineNote);

                    /**
                     * 判断参数 OfflineNote 是否已赋值
                     * @return OfflineNote 是否已赋值
                     * 
                     */
                    bool OfflineNoteHasBeenSet() const;

                    /**
                     * 获取ip地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IP ip地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置ip地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iP ip地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取ip地理位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IPLocation ip地理位置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIPLocation() const;

                    /**
                     * 设置ip地理位置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iPLocation ip地理位置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIPLocation(const std::string& _iPLocation);

                    /**
                     * 判断参数 IPLocation 是否已赋值
                     * @return IPLocation 是否已赋值
                     * 
                     */
                    bool IPLocationHasBeenSet() const;

                    /**
                     * 获取网站所属单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WebCompany 网站所属单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWebCompany() const;

                    /**
                     * 设置网站所属单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _webCompany 网站所属单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWebCompany(const std::string& _webCompany);

                    /**
                     * 判断参数 WebCompany 是否已赋值
                     * @return WebCompany 是否已赋值
                     * 
                     */
                    bool WebCompanyHasBeenSet() const;

                    /**
                     * 获取网站性质
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WebAttribute 网站性质
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWebAttribute() const;

                    /**
                     * 设置网站性质
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _webAttribute 网站性质
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWebAttribute(const std::string& _webAttribute);

                    /**
                     * 判断参数 WebAttribute 是否已赋值
                     * @return WebAttribute 是否已赋值
                     * 
                     */
                    bool WebAttributeHasBeenSet() const;

                    /**
                     * 获取网站名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WebName 网站名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWebName() const;

                    /**
                     * 设置网站名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _webName 网站名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWebName(const std::string& _webName);

                    /**
                     * 判断参数 WebName 是否已赋值
                     * @return WebName 是否已赋值
                     * 
                     */
                    bool WebNameHasBeenSet() const;

                    /**
                     * 获取备案号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WebICP 备案号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWebICP() const;

                    /**
                     * 设置备案号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _webICP 备案号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWebICP(const std::string& _webICP);

                    /**
                     * 判断参数 WebICP 是否已赋值
                     * @return WebICP 是否已赋值
                     * 
                     */
                    bool WebICPHasBeenSet() const;

                    /**
                     * 获取网站创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WebCreateTime 网站创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWebCreateTime() const;

                    /**
                     * 设置网站创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _webCreateTime 网站创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWebCreateTime(const std::string& _webCreateTime);

                    /**
                     * 判断参数 WebCreateTime 是否已赋值
                     * @return WebCreateTime 是否已赋值
                     * 
                     */
                    bool WebCreateTimeHasBeenSet() const;

                    /**
                     * 获取网站过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WebExpireTime 网站过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetWebExpireTime() const;

                    /**
                     * 设置网站过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _webExpireTime 网站过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWebExpireTime(const std::string& _webExpireTime);

                    /**
                     * 判断参数 WebExpireTime 是否已赋值
                     * @return WebExpireTime 是否已赋值
                     * 
                     */
                    bool WebExpireTimeHasBeenSet() const;

                    /**
                     * 获取新增时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InsertTime 新增时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInsertTime() const;

                    /**
                     * 设置新增时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _insertTime 新增时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInsertTime(const std::string& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     * 
                     */
                    bool InsertTimeHasBeenSet() const;

                    /**
                     * 获取资质证明状态：0-不可用 1-可用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertificationStatus 资质证明状态：0-不可用 1-可用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCertificationStatus() const;

                    /**
                     * 设置资质证明状态：0-不可用 1-可用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _certificationStatus 资质证明状态：0-不可用 1-可用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCertificationStatus(const int64_t& _certificationStatus);

                    /**
                     * 判断参数 CertificationStatus 是否已赋值
                     * @return CertificationStatus 是否已赋值
                     * 
                     */
                    bool CertificationStatusHasBeenSet() const;

                    /**
                     * 获取网址截图
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Snapshot 网址截图
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSnapshot() const;

                    /**
                     * 设置网址截图
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _snapshot 网址截图
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSnapshot(const std::string& _snapshot);

                    /**
                     * 判断参数 Snapshot 是否已赋值
                     * @return Snapshot 是否已赋值
                     * 
                     */
                    bool SnapshotHasBeenSet() const;

                    /**
                     * 获取账户资源状态：0-不可用 1-可用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountStatus 账户资源状态：0-不可用 1-可用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAccountStatus() const;

                    /**
                     * 设置账户资源状态：0-不可用 1-可用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountStatus 账户资源状态：0-不可用 1-可用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountStatus(const int64_t& _accountStatus);

                    /**
                     * 判断参数 AccountStatus 是否已赋值
                     * @return AccountStatus 是否已赋值
                     * 
                     */
                    bool AccountStatusHasBeenSet() const;

                    /**
                     * 获取审核状态：0-未审核 1-审核中 2-审核成功 3-审核失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuditStatus 审核状态：0-未审核 1-审核中 2-审核成功 3-审核失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAuditStatus() const;

                    /**
                     * 设置审核状态：0-未审核 1-审核中 2-审核成功 3-审核失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _auditStatus 审核状态：0-未审核 1-审核中 2-审核成功 3-审核失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAuditStatus(const int64_t& _auditStatus);

                    /**
                     * 判断参数 AuditStatus 是否已赋值
                     * @return AuditStatus 是否已赋值
                     * 
                     */
                    bool AuditStatusHasBeenSet() const;

                    /**
                     * 获取下线时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OfflineTime 下线时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOfflineTime() const;

                    /**
                     * 设置下线时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _offlineTime 下线时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOfflineTime(const std::string& _offlineTime);

                    /**
                     * 判断参数 OfflineTime 是否已赋值
                     * @return OfflineTime 是否已赋值
                     * 
                     */
                    bool OfflineTimeHasBeenSet() const;

                private:

                    /**
                     * 仿冒网址id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_fakeURLId;
                    bool m_fakeURLIdHasBeenSet;

                    /**
                     * 品牌名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_brandName;
                    bool m_brandNameHasBeenSet;

                    /**
                     * 仿冒来源：0-系统检测 1-人工举报
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * 仿冒网址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fakeURL;
                    bool m_fakeURLHasBeenSet;

                    /**
                     * 仿冒域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fakeDomain;
                    bool m_fakeDomainHasBeenSet;

                    /**
                     * 热度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_heat;
                    bool m_heatHasBeenSet;

                    /**
                     * 拦截处置状态：0-未处置 1-处置中 2-处置成功 3-处置失败
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_blockStatus;
                    bool m_blockStatusHasBeenSet;

                    /**
                     * 拦截处置状态说明
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_blockNote;
                    bool m_blockNoteHasBeenSet;

                    /**
                     * 关停状态：0-未关停 1-关停中 2-关停成功 3-关停失败 4-重复上架
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_offlineStatus;
                    bool m_offlineStatusHasBeenSet;

                    /**
                     * 关停状态说明
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_offlineNote;
                    bool m_offlineNoteHasBeenSet;

                    /**
                     * ip地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * ip地理位置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iPLocation;
                    bool m_iPLocationHasBeenSet;

                    /**
                     * 网站所属单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_webCompany;
                    bool m_webCompanyHasBeenSet;

                    /**
                     * 网站性质
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_webAttribute;
                    bool m_webAttributeHasBeenSet;

                    /**
                     * 网站名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_webName;
                    bool m_webNameHasBeenSet;

                    /**
                     * 备案号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_webICP;
                    bool m_webICPHasBeenSet;

                    /**
                     * 网站创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_webCreateTime;
                    bool m_webCreateTimeHasBeenSet;

                    /**
                     * 网站过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_webExpireTime;
                    bool m_webExpireTimeHasBeenSet;

                    /**
                     * 新增时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * 资质证明状态：0-不可用 1-可用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_certificationStatus;
                    bool m_certificationStatusHasBeenSet;

                    /**
                     * 网址截图
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_snapshot;
                    bool m_snapshotHasBeenSet;

                    /**
                     * 账户资源状态：0-不可用 1-可用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_accountStatus;
                    bool m_accountStatusHasBeenSet;

                    /**
                     * 审核状态：0-未审核 1-审核中 2-审核成功 3-审核失败
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_auditStatus;
                    bool m_auditStatusHasBeenSet;

                    /**
                     * 下线时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_offlineTime;
                    bool m_offlineTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20221115_MODEL_FAKEURLDATA_H_
