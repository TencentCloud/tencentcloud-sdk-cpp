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

#ifndef TENCENTCLOUD_BMA_V20221115_MODEL_FAKEAPPDATA_H_
#define TENCENTCLOUD_BMA_V20221115_MODEL_FAKEAPPDATA_H_

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
                * 仿冒应用数据
                */
                class FakeAPPData : public AbstractModel
                {
                public:
                    FakeAPPData();
                    ~FakeAPPData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取仿冒应用id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FakeAPPId 仿冒应用id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFakeAPPId() const;

                    /**
                     * 设置仿冒应用id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fakeAPPId 仿冒应用id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFakeAPPId(const int64_t& _fakeAPPId);

                    /**
                     * 判断参数 FakeAPPId 是否已赋值
                     * @return FakeAPPId 是否已赋值
                     * 
                     */
                    bool FakeAPPIdHasBeenSet() const;

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
                     * 获取仿冒应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FakeAPPName 仿冒应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFakeAPPName() const;

                    /**
                     * 设置仿冒应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fakeAPPName 仿冒应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFakeAPPName(const std::string& _fakeAPPName);

                    /**
                     * 判断参数 FakeAPPName 是否已赋值
                     * @return FakeAPPName 是否已赋值
                     * 
                     */
                    bool FakeAPPNameHasBeenSet() const;

                    /**
                     * 获取仿冒应用包名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FakeAPPPackageName 仿冒应用包名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFakeAPPPackageName() const;

                    /**
                     * 设置仿冒应用包名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fakeAPPPackageName 仿冒应用包名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFakeAPPPackageName(const std::string& _fakeAPPPackageName);

                    /**
                     * 判断参数 FakeAPPPackageName 是否已赋值
                     * @return FakeAPPPackageName 是否已赋值
                     * 
                     */
                    bool FakeAPPPackageNameHasBeenSet() const;

                    /**
                     * 获取仿冒应用证书
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FakeAPPCert 仿冒应用证书
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFakeAPPCert() const;

                    /**
                     * 设置仿冒应用证书
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fakeAPPCert 仿冒应用证书
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFakeAPPCert(const std::string& _fakeAPPCert);

                    /**
                     * 判断参数 FakeAPPCert 是否已赋值
                     * @return FakeAPPCert 是否已赋值
                     * 
                     */
                    bool FakeAPPCertHasBeenSet() const;

                    /**
                     * 获取仿冒应用大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FakeAPPSize 仿冒应用大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFakeAPPSize() const;

                    /**
                     * 设置仿冒应用大小
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fakeAPPSize 仿冒应用大小
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFakeAPPSize(const std::string& _fakeAPPSize);

                    /**
                     * 判断参数 FakeAPPSize 是否已赋值
                     * @return FakeAPPSize 是否已赋值
                     * 
                     */
                    bool FakeAPPSizeHasBeenSet() const;

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
                     * 获取协助处置状态：0-未处置 1-处置中 2-处置成功 3-处置失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockStatus 协助处置状态：0-未处置 1-处置中 2-处置成功 3-处置失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBlockStatus() const;

                    /**
                     * 设置协助处置状态：0-未处置 1-处置中 2-处置成功 3-处置失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockStatus 协助处置状态：0-未处置 1-处置中 2-处置成功 3-处置失败
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
                     * 获取协助处置状态说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlockNote 协助处置状态说明
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBlockNote() const;

                    /**
                     * 设置协助处置状态说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blockNote 协助处置状态说明
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
                     * 获取app来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DownloadWay app来源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDownloadWay() const;

                    /**
                     * 设置app来源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _downloadWay app来源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDownloadWay(const std::string& _downloadWay);

                    /**
                     * 判断参数 DownloadWay 是否已赋值
                     * @return DownloadWay 是否已赋值
                     * 
                     */
                    bool DownloadWayHasBeenSet() const;

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
                     * 获取App下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DownloadCosURL App下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDownloadCosURL() const;

                    /**
                     * 设置App下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _downloadCosURL App下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDownloadCosURL(const std::string& _downloadCosURL);

                    /**
                     * 判断参数 DownloadCosURL 是否已赋值
                     * @return DownloadCosURL 是否已赋值
                     * 
                     */
                    bool DownloadCosURLHasBeenSet() const;

                    /**
                     * 获取资质证明状态:0-不可用 1-可用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertificationStatus 资质证明状态:0-不可用 1-可用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCertificationStatus() const;

                    /**
                     * 设置资质证明状态:0-不可用 1-可用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _certificationStatus 资质证明状态:0-不可用 1-可用
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

                private:

                    /**
                     * 仿冒应用id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_fakeAPPId;
                    bool m_fakeAPPIdHasBeenSet;

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
                     * 仿冒应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fakeAPPName;
                    bool m_fakeAPPNameHasBeenSet;

                    /**
                     * 仿冒应用包名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fakeAPPPackageName;
                    bool m_fakeAPPPackageNameHasBeenSet;

                    /**
                     * 仿冒应用证书
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fakeAPPCert;
                    bool m_fakeAPPCertHasBeenSet;

                    /**
                     * 仿冒应用大小
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fakeAPPSize;
                    bool m_fakeAPPSizeHasBeenSet;

                    /**
                     * 热度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_heat;
                    bool m_heatHasBeenSet;

                    /**
                     * 协助处置状态：0-未处置 1-处置中 2-处置成功 3-处置失败
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_blockStatus;
                    bool m_blockStatusHasBeenSet;

                    /**
                     * 协助处置状态说明
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
                     * app来源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_downloadWay;
                    bool m_downloadWayHasBeenSet;

                    /**
                     * 新增时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * App下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_downloadCosURL;
                    bool m_downloadCosURLHasBeenSet;

                    /**
                     * 资质证明状态:0-不可用 1-可用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_certificationStatus;
                    bool m_certificationStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20221115_MODEL_FAKEAPPDATA_H_
