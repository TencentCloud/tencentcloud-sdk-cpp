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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INDICATORBASEINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INDICATORBASEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/IndicatorBaseSimpleInfo.h>
#include <tencentcloud/wedata/v20210820/model/AssetDimSimpleVO.h>
#include <tencentcloud/wedata/v20210820/model/ChangeLog.h>
#include <tencentcloud/wedata/v20210820/model/AssetDimTableColumn.h>
#include <tencentcloud/wedata/v20210820/model/IndicatorBaseInfo.h>
#include <tencentcloud/wedata/v20210820/model/PermissionStatus.h>
#include <tencentcloud/wedata/v20210820/model/DataAssetOption.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 指标查询出参
                */
                class IndicatorBaseInfo : public AbstractModel
                {
                public:
                    IndicatorBaseInfo();
                    ~IndicatorBaseInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取指标编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndicatorCode 指标编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndicatorCode() const;

                    /**
                     * 设置指标编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indicatorCode 指标编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndicatorCode(const std::string& _indicatorCode);

                    /**
                     * 判断参数 IndicatorCode 是否已赋值
                     * @return IndicatorCode 是否已赋值
                     * 
                     */
                    bool IndicatorCodeHasBeenSet() const;

                    /**
                     * 获取指标类型（1-原子指标 2-衍生指标 3-复合指标）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndicatorType 指标类型（1-原子指标 2-衍生指标 3-复合指标）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetIndicatorType() const;

                    /**
                     * 设置指标类型（1-原子指标 2-衍生指标 3-复合指标）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indicatorType 指标类型（1-原子指标 2-衍生指标 3-复合指标）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndicatorType(const int64_t& _indicatorType);

                    /**
                     * 判断参数 IndicatorType 是否已赋值
                     * @return IndicatorType 是否已赋值
                     * 
                     */
                    bool IndicatorTypeHasBeenSet() const;

                    /**
                     * 获取业务负责人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BizOwner 业务负责人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBizOwner() const;

                    /**
                     * 设置业务负责人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bizOwner 业务负责人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBizOwner(const std::string& _bizOwner);

                    /**
                     * 判断参数 BizOwner 是否已赋值
                     * @return BizOwner 是否已赋值
                     * 
                     */
                    bool BizOwnerHasBeenSet() const;

                    /**
                     * 获取技术负责人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TechOwner 技术负责人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTechOwner() const;

                    /**
                     * 设置技术负责人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _techOwner 技术负责人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTechOwner(const std::string& _techOwner);

                    /**
                     * 判断参数 TechOwner 是否已赋值
                     * @return TechOwner 是否已赋值
                     * 
                     */
                    bool TechOwnerHasBeenSet() const;

                    /**
                     * 获取业务口径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BizCaliber 业务口径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBizCaliber() const;

                    /**
                     * 设置业务口径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bizCaliber 业务口径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBizCaliber(const std::string& _bizCaliber);

                    /**
                     * 判断参数 BizCaliber 是否已赋值
                     * @return BizCaliber 是否已赋值
                     * 
                     */
                    bool BizCaliberHasBeenSet() const;

                    /**
                     * 获取指标描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 指标描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置指标描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 指标描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取等级：40-L4核心 30-L3重要 20-L2一般 10-L1临时
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Level 等级：40-L4核心 30-L3重要 20-L2一般 10-L1临时
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置等级：40-L4核心 30-L3重要 20-L2一般 10-L1临时
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _level 等级：40-L4核心 30-L3重要 20-L2一般 10-L1临时
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取计算逻辑
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CalLogic 计算逻辑
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCalLogic() const;

                    /**
                     * 设置计算逻辑
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _calLogic 计算逻辑
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCalLogic(const std::string& _calLogic);

                    /**
                     * 判断参数 CalLogic 是否已赋值
                     * @return CalLogic 是否已赋值
                     * 
                     */
                    bool CalLogicHasBeenSet() const;

                    /**
                     * 获取计算频次
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CalFreq 计算频次
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCalFreq() const;

                    /**
                     * 设置计算频次
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _calFreq 计算频次
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCalFreq(const std::string& _calFreq);

                    /**
                     * 判断参数 CalFreq 是否已赋值
                     * @return CalFreq 是否已赋值
                     * 
                     */
                    bool CalFreqHasBeenSet() const;

                    /**
                     * 获取度量单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MeasureUnit 度量单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMeasureUnit() const;

                    /**
                     * 设置度量单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _measureUnit 度量单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMeasureUnit(const int64_t& _measureUnit);

                    /**
                     * 判断参数 MeasureUnit 是否已赋值
                     * @return MeasureUnit 是否已赋值
                     * 
                     */
                    bool MeasureUnitHasBeenSet() const;

                    /**
                     * 获取精度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Accuracy 精度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAccuracy() const;

                    /**
                     * 设置精度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accuracy 精度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccuracy(const int64_t& _accuracy);

                    /**
                     * 判断参数 Accuracy 是否已赋值
                     * @return Accuracy 是否已赋值
                     * 
                     */
                    bool AccuracyHasBeenSet() const;

                    /**
                     * 获取关联指标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceIndicatorIds 关联指标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<IndicatorBaseSimpleInfo> GetSourceIndicatorIds() const;

                    /**
                     * 设置关联指标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceIndicatorIds 关联指标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceIndicatorIds(const std::vector<IndicatorBaseSimpleInfo>& _sourceIndicatorIds);

                    /**
                     * 判断参数 SourceIndicatorIds 是否已赋值
                     * @return SourceIndicatorIds 是否已赋值
                     * 
                     */
                    bool SourceIndicatorIdsHasBeenSet() const;

                    /**
                     * 获取ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取维度列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DimensionIds 维度列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AssetDimSimpleVO> GetDimensionIds() const;

                    /**
                     * 设置维度列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dimensionIds 维度列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDimensionIds(const std::vector<AssetDimSimpleVO>& _dimensionIds);

                    /**
                     * 判断参数 DimensionIds 是否已赋值
                     * @return DimensionIds 是否已赋值
                     * 
                     */
                    bool DimensionIdsHasBeenSet() const;

                    /**
                     * 获取文件夹ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FolderId 文件夹ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFolderId() const;

                    /**
                     * 设置文件夹ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _folderId 文件夹ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFolderId(const int64_t& _folderId);

                    /**
                     * 判断参数 FolderId 是否已赋值
                     * @return FolderId 是否已赋值
                     * 
                     */
                    bool FolderIdHasBeenSet() const;

                    /**
                     * 获取状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 状态
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取业务负责人名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BizOwnerName 业务负责人名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBizOwnerName() const;

                    /**
                     * 设置业务负责人名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bizOwnerName 业务负责人名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBizOwnerName(const std::string& _bizOwnerName);

                    /**
                     * 判断参数 BizOwnerName 是否已赋值
                     * @return BizOwnerName 是否已赋值
                     * 
                     */
                    bool BizOwnerNameHasBeenSet() const;

                    /**
                     * 获取技术负责人名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TechOwnerName 技术负责人名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTechOwnerName() const;

                    /**
                     * 设置技术负责人名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _techOwnerName 技术负责人名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTechOwnerName(const std::string& _techOwnerName);

                    /**
                     * 判断参数 TechOwnerName 是否已赋值
                     * @return TechOwnerName 是否已赋值
                     * 
                     */
                    bool TechOwnerNameHasBeenSet() const;

                    /**
                     * 获取发布时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublishTime 发布时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPublishTime() const;

                    /**
                     * 设置发布时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publishTime 发布时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取发布人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublishAccount 发布人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPublishAccount() const;

                    /**
                     * 设置发布人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publishAccount 发布人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublishAccount(const std::string& _publishAccount);

                    /**
                     * 判断参数 PublishAccount 是否已赋值
                     * @return PublishAccount 是否已赋值
                     * 
                     */
                    bool PublishAccountHasBeenSet() const;

                    /**
                     * 获取发布人名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublishAccountName 发布人名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPublishAccountName() const;

                    /**
                     * 设置发布人名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publishAccountName 发布人名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublishAccountName(const std::string& _publishAccountName);

                    /**
                     * 判断参数 PublishAccountName 是否已赋值
                     * @return PublishAccountName 是否已赋值
                     * 
                     */
                    bool PublishAccountNameHasBeenSet() const;

                    /**
                     * 获取最后修订时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastModifyTime 最后修订时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastModifyTime() const;

                    /**
                     * 设置最后修订时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastModifyTime 最后修订时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastModifyTime(const std::string& _lastModifyTime);

                    /**
                     * 判断参数 LastModifyTime 是否已赋值
                     * @return LastModifyTime 是否已赋值
                     * 
                     */
                    bool LastModifyTimeHasBeenSet() const;

                    /**
                     * 获取最后修订人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastModifyAccount 最后修订人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastModifyAccount() const;

                    /**
                     * 设置最后修订人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastModifyAccount 最后修订人ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastModifyAccount(const std::string& _lastModifyAccount);

                    /**
                     * 判断参数 LastModifyAccount 是否已赋值
                     * @return LastModifyAccount 是否已赋值
                     * 
                     */
                    bool LastModifyAccountHasBeenSet() const;

                    /**
                     * 获取最后修订人名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastModifyAccountName 最后修订人名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastModifyAccountName() const;

                    /**
                     * 设置最后修订人名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastModifyAccountName 最后修订人名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastModifyAccountName(const std::string& _lastModifyAccountName);

                    /**
                     * 判断参数 LastModifyAccountName 是否已赋值
                     * @return LastModifyAccountName 是否已赋值
                     * 
                     */
                    bool LastModifyAccountNameHasBeenSet() const;

                    /**
                     * 获取变更日志
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChangeLogList 变更日志
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ChangeLog> GetChangeLogList() const;

                    /**
                     * 设置变更日志
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _changeLogList 变更日志
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChangeLogList(const std::vector<ChangeLog>& _changeLogList);

                    /**
                     * 判断参数 ChangeLogList 是否已赋值
                     * @return ChangeLogList 是否已赋值
                     * 
                     */
                    bool ChangeLogListHasBeenSet() const;

                    /**
                     * 获取字段列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TableColumns 字段列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AssetDimTableColumn> GetTableColumns() const;

                    /**
                     * 设置字段列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tableColumns 字段列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTableColumns(const std::vector<AssetDimTableColumn>& _tableColumns);

                    /**
                     * 判断参数 TableColumns 是否已赋值
                     * @return TableColumns 是否已赋值
                     * 
                     */
                    bool TableColumnsHasBeenSet() const;

                    /**
                     * 获取关联指标(包含多层级关联指标)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AllSourceIndicatorIds 关联指标(包含多层级关联指标)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<IndicatorBaseInfo> GetAllSourceIndicatorIds() const;

                    /**
                     * 设置关联指标(包含多层级关联指标)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _allSourceIndicatorIds 关联指标(包含多层级关联指标)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAllSourceIndicatorIds(const std::vector<IndicatorBaseInfo>& _allSourceIndicatorIds);

                    /**
                     * 判断参数 AllSourceIndicatorIds 是否已赋值
                     * @return AllSourceIndicatorIds 是否已赋值
                     * 
                     */
                    bool AllSourceIndicatorIdsHasBeenSet() const;

                    /**
                     * 获取资产guid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetId 资产guid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetId() const;

                    /**
                     * 设置资产guid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetId 资产guid
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetId(const std::string& _assetId);

                    /**
                     * 判断参数 AssetId 是否已赋值
                     * @return AssetId 是否已赋值
                     * 
                     */
                    bool AssetIdHasBeenSet() const;

                    /**
                     * 获取类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetType 类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetType 类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取资产编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetCode 资产编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetCode() const;

                    /**
                     * 设置资产编码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetCode 资产编码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetCode(const std::string& _assetCode);

                    /**
                     * 判断参数 AssetCode 是否已赋值
                     * @return AssetCode 是否已赋值
                     * 
                     */
                    bool AssetCodeHasBeenSet() const;

                    /**
                     * 获取被关联的指标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RelatedIndicatorIds 被关联的指标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<IndicatorBaseInfo> GetRelatedIndicatorIds() const;

                    /**
                     * 设置被关联的指标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _relatedIndicatorIds 被关联的指标
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRelatedIndicatorIds(const std::vector<IndicatorBaseInfo>& _relatedIndicatorIds);

                    /**
                     * 判断参数 RelatedIndicatorIds 是否已赋值
                     * @return RelatedIndicatorIds 是否已赋值
                     * 
                     */
                    bool RelatedIndicatorIdsHasBeenSet() const;

                    /**
                     * 获取数据目录ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BizCatalogIds 数据目录ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetBizCatalogIds() const;

                    /**
                     * 设置数据目录ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bizCatalogIds 数据目录ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBizCatalogIds(const std::vector<int64_t>& _bizCatalogIds);

                    /**
                     * 判断参数 BizCatalogIds 是否已赋值
                     * @return BizCatalogIds 是否已赋值
                     * 
                     */
                    bool BizCatalogIdsHasBeenSet() const;

                    /**
                     * 获取数据目录名称列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BizCatalogNames 数据目录名称列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetBizCatalogNames() const;

                    /**
                     * 设置数据目录名称列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bizCatalogNames 数据目录名称列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBizCatalogNames(const std::vector<std::string>& _bizCatalogNames);

                    /**
                     * 判断参数 BizCatalogNames 是否已赋值
                     * @return BizCatalogNames 是否已赋值
                     * 
                     */
                    bool BizCatalogNamesHasBeenSet() const;

                    /**
                     * 获取资产等级
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetLevel 资产等级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAssetLevel() const;

                    /**
                     * 设置资产等级
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetLevel 资产等级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetLevel(const int64_t& _assetLevel);

                    /**
                     * 判断参数 AssetLevel 是否已赋值
                     * @return AssetLevel 是否已赋值
                     * 
                     */
                    bool AssetLevelHasBeenSet() const;

                    /**
                     * 获取资产发布状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetStatus 资产发布状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAssetStatus() const;

                    /**
                     * 设置资产发布状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetStatus 资产发布状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetStatus(const int64_t& _assetStatus);

                    /**
                     * 判断参数 AssetStatus 是否已赋值
                     * @return AssetStatus 是否已赋值
                     * 
                     */
                    bool AssetStatusHasBeenSet() const;

                    /**
                     * 获取资产发布时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetPublishTime 资产发布时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetPublishTime() const;

                    /**
                     * 设置资产发布时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetPublishTime 资产发布时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetPublishTime(const std::string& _assetPublishTime);

                    /**
                     * 判断参数 AssetPublishTime 是否已赋值
                     * @return AssetPublishTime 是否已赋值
                     * 
                     */
                    bool AssetPublishTimeHasBeenSet() const;

                    /**
                     * 获取资产发布人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetPublishAccount 资产发布人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetPublishAccount() const;

                    /**
                     * 设置资产发布人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetPublishAccount 资产发布人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetPublishAccount(const std::string& _assetPublishAccount);

                    /**
                     * 判断参数 AssetPublishAccount 是否已赋值
                     * @return AssetPublishAccount 是否已赋值
                     * 
                     */
                    bool AssetPublishAccountHasBeenSet() const;

                    /**
                     * 获取资产发布人名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AssetPublishAccountName 资产发布人名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAssetPublishAccountName() const;

                    /**
                     * 设置资产发布人名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _assetPublishAccountName 资产发布人名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAssetPublishAccountName(const std::string& _assetPublishAccountName);

                    /**
                     * 判断参数 AssetPublishAccountName 是否已赋值
                     * @return AssetPublishAccountName 是否已赋值
                     * 
                     */
                    bool AssetPublishAccountNameHasBeenSet() const;

                    /**
                     * 获取指标权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IndicatorPermission 指标权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    PermissionStatus GetIndicatorPermission() const;

                    /**
                     * 设置指标权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _indicatorPermission 指标权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndicatorPermission(const PermissionStatus& _indicatorPermission);

                    /**
                     * 判断参数 IndicatorPermission 是否已赋值
                     * @return IndicatorPermission 是否已赋值
                     * 
                     */
                    bool IndicatorPermissionHasBeenSet() const;

                    /**
                     * 获取资产权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OperateOption 资产权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DataAssetOption GetOperateOption() const;

                    /**
                     * 设置资产权限
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operateOption 资产权限
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperateOption(const DataAssetOption& _operateOption);

                    /**
                     * 判断参数 OperateOption 是否已赋值
                     * @return OperateOption 是否已赋值
                     * 
                     */
                    bool OperateOptionHasBeenSet() const;

                    /**
                     * 获取项目 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectId 项目 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectId 项目 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectName 项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectName 项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                private:

                    /**
                     * 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 指标编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_indicatorCode;
                    bool m_indicatorCodeHasBeenSet;

                    /**
                     * 指标类型（1-原子指标 2-衍生指标 3-复合指标）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_indicatorType;
                    bool m_indicatorTypeHasBeenSet;

                    /**
                     * 业务负责人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bizOwner;
                    bool m_bizOwnerHasBeenSet;

                    /**
                     * 技术负责人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_techOwner;
                    bool m_techOwnerHasBeenSet;

                    /**
                     * 业务口径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bizCaliber;
                    bool m_bizCaliberHasBeenSet;

                    /**
                     * 指标描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 等级：40-L4核心 30-L3重要 20-L2一般 10-L1临时
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 计算逻辑
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_calLogic;
                    bool m_calLogicHasBeenSet;

                    /**
                     * 计算频次
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_calFreq;
                    bool m_calFreqHasBeenSet;

                    /**
                     * 度量单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_measureUnit;
                    bool m_measureUnitHasBeenSet;

                    /**
                     * 精度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_accuracy;
                    bool m_accuracyHasBeenSet;

                    /**
                     * 关联指标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IndicatorBaseSimpleInfo> m_sourceIndicatorIds;
                    bool m_sourceIndicatorIdsHasBeenSet;

                    /**
                     * ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 维度列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AssetDimSimpleVO> m_dimensionIds;
                    bool m_dimensionIdsHasBeenSet;

                    /**
                     * 文件夹ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_folderId;
                    bool m_folderIdHasBeenSet;

                    /**
                     * 状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 业务负责人名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bizOwnerName;
                    bool m_bizOwnerNameHasBeenSet;

                    /**
                     * 技术负责人名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_techOwnerName;
                    bool m_techOwnerNameHasBeenSet;

                    /**
                     * 发布时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_publishTime;
                    bool m_publishTimeHasBeenSet;

                    /**
                     * 发布人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_publishAccount;
                    bool m_publishAccountHasBeenSet;

                    /**
                     * 发布人名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_publishAccountName;
                    bool m_publishAccountNameHasBeenSet;

                    /**
                     * 最后修订时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastModifyTime;
                    bool m_lastModifyTimeHasBeenSet;

                    /**
                     * 最后修订人ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastModifyAccount;
                    bool m_lastModifyAccountHasBeenSet;

                    /**
                     * 最后修订人名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastModifyAccountName;
                    bool m_lastModifyAccountNameHasBeenSet;

                    /**
                     * 变更日志
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ChangeLog> m_changeLogList;
                    bool m_changeLogListHasBeenSet;

                    /**
                     * 字段列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AssetDimTableColumn> m_tableColumns;
                    bool m_tableColumnsHasBeenSet;

                    /**
                     * 关联指标(包含多层级关联指标)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IndicatorBaseInfo> m_allSourceIndicatorIds;
                    bool m_allSourceIndicatorIdsHasBeenSet;

                    /**
                     * 资产guid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetId;
                    bool m_assetIdHasBeenSet;

                    /**
                     * 类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * 资产编码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetCode;
                    bool m_assetCodeHasBeenSet;

                    /**
                     * 被关联的指标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<IndicatorBaseInfo> m_relatedIndicatorIds;
                    bool m_relatedIndicatorIdsHasBeenSet;

                    /**
                     * 数据目录ID列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_bizCatalogIds;
                    bool m_bizCatalogIdsHasBeenSet;

                    /**
                     * 数据目录名称列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_bizCatalogNames;
                    bool m_bizCatalogNamesHasBeenSet;

                    /**
                     * 资产等级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_assetLevel;
                    bool m_assetLevelHasBeenSet;

                    /**
                     * 资产发布状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_assetStatus;
                    bool m_assetStatusHasBeenSet;

                    /**
                     * 资产发布时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetPublishTime;
                    bool m_assetPublishTimeHasBeenSet;

                    /**
                     * 资产发布人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetPublishAccount;
                    bool m_assetPublishAccountHasBeenSet;

                    /**
                     * 资产发布人名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_assetPublishAccountName;
                    bool m_assetPublishAccountNameHasBeenSet;

                    /**
                     * 指标权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    PermissionStatus m_indicatorPermission;
                    bool m_indicatorPermissionHasBeenSet;

                    /**
                     * 资产权限
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DataAssetOption m_operateOption;
                    bool m_operateOptionHasBeenSet;

                    /**
                     * 项目 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 项目名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INDICATORBASEINFO_H_
