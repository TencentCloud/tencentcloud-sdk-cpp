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

#ifndef TENCENTCLOUD_WAV_V20210129_MODEL_CLUEINFODETAIL_H_
#define TENCENTCLOUD_WAV_V20210129_MODEL_CLUEINFODETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wav
    {
        namespace V20210129
        {
            namespace Model
            {
                /**
                * 线索信息详情
                */
                class ClueInfoDetail : public AbstractModel
                {
                public:
                    ClueInfoDetail();
                    ~ClueInfoDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取线索id，线索唯一识别编码
                     * @return ClueId 线索id，线索唯一识别编码
                     * 
                     */
                    std::string GetClueId() const;

                    /**
                     * 设置线索id，线索唯一识别编码
                     * @param _clueId 线索id，线索唯一识别编码
                     * 
                     */
                    void SetClueId(const std::string& _clueId);

                    /**
                     * 判断参数 ClueId 是否已赋值
                     * @return ClueId 是否已赋值
                     * 
                     */
                    bool ClueIdHasBeenSet() const;

                    /**
                     * 获取接待客户经销商顾问所属经销商code
                     * @return DealerId 接待客户经销商顾问所属经销商code
                     * 
                     */
                    std::string GetDealerId() const;

                    /**
                     * 设置接待客户经销商顾问所属经销商code
                     * @param _dealerId 接待客户经销商顾问所属经销商code
                     * 
                     */
                    void SetDealerId(const std::string& _dealerId);

                    /**
                     * 判断参数 DealerId 是否已赋值
                     * @return DealerId 是否已赋值
                     * 
                     */
                    bool DealerIdHasBeenSet() const;

                    /**
                     * 获取线索获取时间，用户添加企业微信时间，单位是秒
                     * @return EnquireTime 线索获取时间，用户添加企业微信时间，单位是秒
                     * 
                     */
                    uint64_t GetEnquireTime() const;

                    /**
                     * 设置线索获取时间，用户添加企业微信时间，单位是秒
                     * @param _enquireTime 线索获取时间，用户添加企业微信时间，单位是秒
                     * 
                     */
                    void SetEnquireTime(const uint64_t& _enquireTime);

                    /**
                     * 判断参数 EnquireTime 是否已赋值
                     * @return EnquireTime 是否已赋值
                     * 
                     */
                    bool EnquireTimeHasBeenSet() const;

                    /**
                     * 获取客户在微信生态中唯一识别码
                     * @return UnionId 客户在微信生态中唯一识别码
                     * 
                     */
                    std::string GetUnionId() const;

                    /**
                     * 设置客户在微信生态中唯一识别码
                     * @param _unionId 客户在微信生态中唯一识别码
                     * 
                     */
                    void SetUnionId(const std::string& _unionId);

                    /**
                     * 判断参数 UnionId 是否已赋值
                     * @return UnionId 是否已赋值
                     * 
                     */
                    bool UnionIdHasBeenSet() const;

                    /**
                     * 获取微信昵称
                     * @return Name 微信昵称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置微信昵称
                     * @param _name 微信昵称
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
                     * 获取联系方式
                     * @return Phone 联系方式
                     * 
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置联系方式
                     * @param _phone 联系方式
                     * 
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     * 
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取车系编号
                     * @return SeriesCode 车系编号
                     * 
                     */
                    std::string GetSeriesCode() const;

                    /**
                     * 设置车系编号
                     * @param _seriesCode 车系编号
                     * 
                     */
                    void SetSeriesCode(const std::string& _seriesCode);

                    /**
                     * 判断参数 SeriesCode 是否已赋值
                     * @return SeriesCode 是否已赋值
                     * 
                     */
                    bool SeriesCodeHasBeenSet() const;

                    /**
                     * 获取车型编号
                     * @return ModelCode 车型编号
                     * 
                     */
                    std::string GetModelCode() const;

                    /**
                     * 设置车型编号
                     * @param _modelCode 车型编号
                     * 
                     */
                    void SetModelCode(const std::string& _modelCode);

                    /**
                     * 判断参数 ModelCode 是否已赋值
                     * @return ModelCode 是否已赋值
                     * 
                     */
                    bool ModelCodeHasBeenSet() const;

                    /**
                     * 获取省份编号
                     * @return ProvinceCode 省份编号
                     * 
                     */
                    std::string GetProvinceCode() const;

                    /**
                     * 设置省份编号
                     * @param _provinceCode 省份编号
                     * 
                     */
                    void SetProvinceCode(const std::string& _provinceCode);

                    /**
                     * 判断参数 ProvinceCode 是否已赋值
                     * @return ProvinceCode 是否已赋值
                     * 
                     */
                    bool ProvinceCodeHasBeenSet() const;

                    /**
                     * 获取城市编号
                     * @return CityCode 城市编号
                     * 
                     */
                    std::string GetCityCode() const;

                    /**
                     * 设置城市编号
                     * @param _cityCode 城市编号
                     * 
                     */
                    void SetCityCode(const std::string& _cityCode);

                    /**
                     * 判断参数 CityCode 是否已赋值
                     * @return CityCode 是否已赋值
                     * 
                     */
                    bool CityCodeHasBeenSet() const;

                    /**
                     * 获取顾问名称
                     * @return SalesName 顾问名称
                     * 
                     */
                    std::string GetSalesName() const;

                    /**
                     * 设置顾问名称
                     * @param _salesName 顾问名称
                     * 
                     */
                    void SetSalesName(const std::string& _salesName);

                    /**
                     * 判断参数 SalesName 是否已赋值
                     * @return SalesName 是否已赋值
                     * 
                     */
                    bool SalesNameHasBeenSet() const;

                    /**
                     * 获取顾问电话
                     * @return SalesPhone 顾问电话
                     * 
                     */
                    std::string GetSalesPhone() const;

                    /**
                     * 设置顾问电话
                     * @param _salesPhone 顾问电话
                     * 
                     */
                    void SetSalesPhone(const std::string& _salesPhone);

                    /**
                     * 判断参数 SalesPhone 是否已赋值
                     * @return SalesPhone 是否已赋值
                     * 
                     */
                    bool SalesPhoneHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param _remark 备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return TagList 标签
                     * 
                     */
                    std::vector<std::string> GetTagList() const;

                    /**
                     * 设置标签
                     * @param _tagList 标签
                     * 
                     */
                    void SetTagList(const std::vector<std::string>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     * 
                     */
                    bool TagListHasBeenSet() const;

                    /**
                     * 获取客户姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserName 客户姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置客户姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userName 客户姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取线索属性，0：个人，1：企业
                     * @return LeadUserType 线索属性，0：个人，1：企业
                     * 
                     */
                    int64_t GetLeadUserType() const;

                    /**
                     * 设置线索属性，0：个人，1：企业
                     * @param _leadUserType 线索属性，0：个人，1：企业
                     * 
                     */
                    void SetLeadUserType(const int64_t& _leadUserType);

                    /**
                     * 判断参数 LeadUserType 是否已赋值
                     * @return LeadUserType 是否已赋值
                     * 
                     */
                    bool LeadUserTypeHasBeenSet() const;

                    /**
                     * 获取线索来源类型，1：线上，2：线下
                     * @return LeadType 线索来源类型，1：线上，2：线下
                     * 
                     */
                    int64_t GetLeadType() const;

                    /**
                     * 设置线索来源类型，1：线上，2：线下
                     * @param _leadType 线索来源类型，1：线上，2：线下
                     * 
                     */
                    void SetLeadType(const int64_t& _leadType);

                    /**
                     * 判断参数 LeadType 是否已赋值
                     * @return LeadType 是否已赋值
                     * 
                     */
                    bool LeadTypeHasBeenSet() const;

                    /**
                     * 获取线索渠道对应ID
                     * @return ChannelId 线索渠道对应ID
                     * 
                     */
                    uint64_t GetChannelId() const;

                    /**
                     * 设置线索渠道对应ID
                     * @param _channelId 线索渠道对应ID
                     * 
                     */
                    void SetChannelId(const uint64_t& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取线索渠道类型，与线索来源对应的渠道名称
                     * @return ChannelName 线索渠道类型，与线索来源对应的渠道名称
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置线索渠道类型，与线索来源对应的渠道名称
                     * @param _channelName 线索渠道类型，与线索来源对应的渠道名称
                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                    /**
                     * 获取线索渠道名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SourceChannelName 线索渠道名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSourceChannelName() const;

                    /**
                     * 设置线索渠道名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sourceChannelName 线索渠道名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSourceChannelName(const std::string& _sourceChannelName);

                    /**
                     * 判断参数 SourceChannelName 是否已赋值
                     * @return SourceChannelName 是否已赋值
                     * 
                     */
                    bool SourceChannelNameHasBeenSet() const;

                    /**
                     * 获取0：未知，1：男，2：女
                     * @return Gender 0：未知，1：男，2：女
                     * 
                     */
                    int64_t GetGender() const;

                    /**
                     * 设置0：未知，1：男，2：女
                     * @param _gender 0：未知，1：男，2：女
                     * 
                     */
                    void SetGender(const int64_t& _gender);

                    /**
                     * 判断参数 Gender 是否已赋值
                     * @return Gender 是否已赋值
                     * 
                     */
                    bool GenderHasBeenSet() const;

                    /**
                     * 获取线索创建时间戳，单位：秒
                     * @return CreateTime 线索创建时间戳，单位：秒
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置线索创建时间戳，单位：秒
                     * @param _createTime 线索创建时间戳，单位：秒
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取线索创建时间戳，单位：秒
                     * @return UpdateTime 线索创建时间戳，单位：秒
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置线索创建时间戳，单位：秒
                     * @param _updateTime 线索创建时间戳，单位：秒
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取线索所处状态，101-待分配 201-待建档 301-已建档 401-已邀约 501-跟进中 601-已下订单 701-已成交 801-战败申请中 901-已战败 1001-未知状态 1101-转移申请中 1201-已完成
                     * @return LeadStatus 线索所处状态，101-待分配 201-待建档 301-已建档 401-已邀约 501-跟进中 601-已下订单 701-已成交 801-战败申请中 901-已战败 1001-未知状态 1101-转移申请中 1201-已完成
                     * 
                     */
                    int64_t GetLeadStatus() const;

                    /**
                     * 设置线索所处状态，101-待分配 201-待建档 301-已建档 401-已邀约 501-跟进中 601-已下订单 701-已成交 801-战败申请中 901-已战败 1001-未知状态 1101-转移申请中 1201-已完成
                     * @param _leadStatus 线索所处状态，101-待分配 201-待建档 301-已建档 401-已邀约 501-跟进中 601-已下订单 701-已成交 801-战败申请中 901-已战败 1001-未知状态 1101-转移申请中 1201-已完成
                     * 
                     */
                    void SetLeadStatus(const int64_t& _leadStatus);

                    /**
                     * 判断参数 LeadStatus 是否已赋值
                     * @return LeadStatus 是否已赋值
                     * 
                     */
                    bool LeadStatusHasBeenSet() const;

                    /**
                     * 获取线索意向等级
                     * @return LevelCode 线索意向等级
                     * 
                     */
                    std::string GetLevelCode() const;

                    /**
                     * 设置线索意向等级
                     * @param _levelCode 线索意向等级
                     * 
                     */
                    void SetLevelCode(const std::string& _levelCode);

                    /**
                     * 判断参数 LevelCode 是否已赋值
                     * @return LevelCode 是否已赋值
                     * 
                     */
                    bool LevelCodeHasBeenSet() const;

                    /**
                     * 获取线索成功导入的时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImportAtTime 线索成功导入的时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetImportAtTime() const;

                    /**
                     * 设置线索成功导入的时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _importAtTime 线索成功导入的时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImportAtTime(const uint64_t& _importAtTime);

                    /**
                     * 判断参数 ImportAtTime 是否已赋值
                     * @return ImportAtTime 是否已赋值
                     * 
                     */
                    bool ImportAtTimeHasBeenSet() const;

                    /**
                     * 获取完成线索分配的时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DistributeTime 完成线索分配的时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDistributeTime() const;

                    /**
                     * 设置完成线索分配的时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _distributeTime 完成线索分配的时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDistributeTime(const uint64_t& _distributeTime);

                    /**
                     * 判断参数 DistributeTime 是否已赋值
                     * @return DistributeTime 是否已赋值
                     * 
                     */
                    bool DistributeTimeHasBeenSet() const;

                    /**
                     * 获取获取线索的时间戳，单位：秒
                     * @return CreateAtTime 获取线索的时间戳，单位：秒
                     * 
                     */
                    uint64_t GetCreateAtTime() const;

                    /**
                     * 设置获取线索的时间戳，单位：秒
                     * @param _createAtTime 获取线索的时间戳，单位：秒
                     * 
                     */
                    void SetCreateAtTime(const uint64_t& _createAtTime);

                    /**
                     * 判断参数 CreateAtTime 是否已赋值
                     * @return CreateAtTime 是否已赋值
                     * 
                     */
                    bool CreateAtTimeHasBeenSet() const;

                    /**
                     * 获取客户微信id
                     * @return WxId 客户微信id
                     * 
                     */
                    std::string GetWxId() const;

                    /**
                     * 设置客户微信id
                     * @param _wxId 客户微信id
                     * 
                     */
                    void SetWxId(const std::string& _wxId);

                    /**
                     * 判断参数 WxId 是否已赋值
                     * @return WxId 是否已赋值
                     * 
                     */
                    bool WxIdHasBeenSet() const;

                    /**
                     * 获取意向车型对应品牌code
                     * @return BrandCode 意向车型对应品牌code
                     * 
                     */
                    std::string GetBrandCode() const;

                    /**
                     * 设置意向车型对应品牌code
                     * @param _brandCode 意向车型对应品牌code
                     * 
                     */
                    void SetBrandCode(const std::string& _brandCode);

                    /**
                     * 判断参数 BrandCode 是否已赋值
                     * @return BrandCode 是否已赋值
                     * 
                     */
                    bool BrandCodeHasBeenSet() const;

                    /**
                     * 获取建档时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BuildTime 建档时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetBuildTime() const;

                    /**
                     * 设置建档时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _buildTime 建档时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBuildTime(const uint64_t& _buildTime);

                    /**
                     * 判断参数 BuildTime 是否已赋值
                     * @return BuildTime 是否已赋值
                     * 
                     */
                    bool BuildTimeHasBeenSet() const;

                    /**
                     * 获取下订时间，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrderTime 下订时间，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetOrderTime() const;

                    /**
                     * 设置下订时间，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _orderTime 下订时间，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrderTime(const uint64_t& _orderTime);

                    /**
                     * 判断参数 OrderTime 是否已赋值
                     * @return OrderTime 是否已赋值
                     * 
                     */
                    bool OrderTimeHasBeenSet() const;

                    /**
                     * 获取到店时间，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ArrivalTime 到店时间，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetArrivalTime() const;

                    /**
                     * 设置到店时间，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _arrivalTime 到店时间，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetArrivalTime(const uint64_t& _arrivalTime);

                    /**
                     * 判断参数 ArrivalTime 是否已赋值
                     * @return ArrivalTime 是否已赋值
                     * 
                     */
                    bool ArrivalTimeHasBeenSet() const;

                    /**
                     * 获取交车时间，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeliveryTime 交车时间，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDeliveryTime() const;

                    /**
                     * 设置交车时间，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deliveryTime 交车时间，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeliveryTime(const uint64_t& _deliveryTime);

                    /**
                     * 判断参数 DeliveryTime 是否已赋值
                     * @return DeliveryTime 是否已赋值
                     * 
                     */
                    bool DeliveryTimeHasBeenSet() const;

                    /**
                     * 获取上次跟进时间，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FollowTime 上次跟进时间，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFollowTime() const;

                    /**
                     * 设置上次跟进时间，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _followTime 上次跟进时间，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFollowTime(const uint64_t& _followTime);

                    /**
                     * 判断参数 FollowTime 是否已赋值
                     * @return FollowTime 是否已赋值
                     * 
                     */
                    bool FollowTimeHasBeenSet() const;

                    /**
                     * 获取下次跟进时间，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NextFollowTime 下次跟进时间，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetNextFollowTime() const;

                    /**
                     * 设置下次跟进时间，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nextFollowTime 下次跟进时间，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNextFollowTime(const uint64_t& _nextFollowTime);

                    /**
                     * 判断参数 NextFollowTime 是否已赋值
                     * @return NextFollowTime 是否已赋值
                     * 
                     */
                    bool NextFollowTimeHasBeenSet() const;

                    /**
                     * 获取线索所属组织id
                     * @return OrgId 线索所属组织id
                     * 
                     */
                    uint64_t GetOrgId() const;

                    /**
                     * 设置线索所属组织id
                     * @param _orgId 线索所属组织id
                     * 
                     */
                    void SetOrgId(const uint64_t& _orgId);

                    /**
                     * 判断参数 OrgId 是否已赋值
                     * @return OrgId 是否已赋值
                     * 
                     */
                    bool OrgIdHasBeenSet() const;

                    /**
                     * 获取线索所属组织名称
                     * @return OrgName 线索所属组织名称
                     * 
                     */
                    std::string GetOrgName() const;

                    /**
                     * 设置线索所属组织名称
                     * @param _orgName 线索所属组织名称
                     * 
                     */
                    void SetOrgName(const std::string& _orgName);

                    /**
                     * 判断参数 OrgName 是否已赋值
                     * @return OrgName 是否已赋值
                     * 
                     */
                    bool OrgNameHasBeenSet() const;

                    /**
                     * 获取介绍人姓名
                     * @return Introducer 介绍人姓名
                     * 
                     */
                    std::string GetIntroducer() const;

                    /**
                     * 设置介绍人姓名
                     * @param _introducer 介绍人姓名
                     * 
                     */
                    void SetIntroducer(const std::string& _introducer);

                    /**
                     * 判断参数 Introducer 是否已赋值
                     * @return Introducer 是否已赋值
                     * 
                     */
                    bool IntroducerHasBeenSet() const;

                    /**
                     * 获取介绍人电话
                     * @return IntroducerPhone 介绍人电话
                     * 
                     */
                    std::string GetIntroducerPhone() const;

                    /**
                     * 设置介绍人电话
                     * @param _introducerPhone 介绍人电话
                     * 
                     */
                    void SetIntroducerPhone(const std::string& _introducerPhone);

                    /**
                     * 判断参数 IntroducerPhone 是否已赋值
                     * @return IntroducerPhone 是否已赋值
                     * 
                     */
                    bool IntroducerPhoneHasBeenSet() const;

                    /**
                     * 获取是否关联微信 1 是 0 否
                     * @return IsBindWx 是否关联微信 1 是 0 否
                     * 
                     */
                    int64_t GetIsBindWx() const;

                    /**
                     * 设置是否关联微信 1 是 0 否
                     * @param _isBindWx 是否关联微信 1 是 0 否
                     * 
                     */
                    void SetIsBindWx(const int64_t& _isBindWx);

                    /**
                     * 判断参数 IsBindWx 是否已赋值
                     * @return IsBindWx 是否已赋值
                     * 
                     */
                    bool IsBindWxHasBeenSet() const;

                    /**
                     * 获取是否经过合并 1 是 0 否
                     * @return IsMerge 是否经过合并 1 是 0 否
                     * 
                     */
                    int64_t GetIsMerge() const;

                    /**
                     * 设置是否经过合并 1 是 0 否
                     * @param _isMerge 是否经过合并 1 是 0 否
                     * 
                     */
                    void SetIsMerge(const int64_t& _isMerge);

                    /**
                     * 判断参数 IsMerge 是否已赋值
                     * @return IsMerge 是否已赋值
                     * 
                     */
                    bool IsMergeHasBeenSet() const;

                    /**
                     * 获取是否无效  1 是 0 否
                     * @return IsInvalid 是否无效  1 是 0 否
                     * 
                     */
                    int64_t GetIsInvalid() const;

                    /**
                     * 设置是否无效  1 是 0 否
                     * @param _isInvalid 是否无效  1 是 0 否
                     * 
                     */
                    void SetIsInvalid(const int64_t& _isInvalid);

                    /**
                     * 判断参数 IsInvalid 是否已赋值
                     * @return IsInvalid 是否已赋值
                     * 
                     */
                    bool IsInvalidHasBeenSet() const;

                    /**
                     * 获取无效类型
                     * @return InvalidType 无效类型
                     * 
                     */
                    std::string GetInvalidType() const;

                    /**
                     * 设置无效类型
                     * @param _invalidType 无效类型
                     * 
                     */
                    void SetInvalidType(const std::string& _invalidType);

                    /**
                     * 判断参数 InvalidType 是否已赋值
                     * @return InvalidType 是否已赋值
                     * 
                     */
                    bool InvalidTypeHasBeenSet() const;

                    /**
                     * 获取无效类型枚举：
无意向购买、空错号、未接听、其他
                     * @return InvalidTypeName 无效类型枚举：
无意向购买、空错号、未接听、其他
                     * 
                     */
                    std::string GetInvalidTypeName() const;

                    /**
                     * 设置无效类型枚举：
无意向购买、空错号、未接听、其他
                     * @param _invalidTypeName 无效类型枚举：
无意向购买、空错号、未接听、其他
                     * 
                     */
                    void SetInvalidTypeName(const std::string& _invalidTypeName);

                    /**
                     * 判断参数 InvalidTypeName 是否已赋值
                     * @return InvalidTypeName 是否已赋值
                     * 
                     */
                    bool InvalidTypeNameHasBeenSet() const;

                    /**
                     * 获取由顾问手动输入的无效原因文字
                     * @return InvalidRemark 由顾问手动输入的无效原因文字
                     * 
                     */
                    std::string GetInvalidRemark() const;

                    /**
                     * 设置由顾问手动输入的无效原因文字
                     * @param _invalidRemark 由顾问手动输入的无效原因文字
                     * 
                     */
                    void SetInvalidRemark(const std::string& _invalidRemark);

                    /**
                     * 判断参数 InvalidRemark 是否已赋值
                     * @return InvalidRemark 是否已赋值
                     * 
                     */
                    bool InvalidRemarkHasBeenSet() const;

                    /**
                     * 获取无效时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InvalidTime 无效时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetInvalidTime() const;

                    /**
                     * 设置无效时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _invalidTime 无效时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInvalidTime(const uint64_t& _invalidTime);

                    /**
                     * 判断参数 InvalidTime 是否已赋值
                     * @return InvalidTime 是否已赋值
                     * 
                     */
                    bool InvalidTimeHasBeenSet() const;

                    /**
                     * 获取经销商名称
                     * @return DealerName 经销商名称
                     * 
                     */
                    std::string GetDealerName() const;

                    /**
                     * 设置经销商名称
                     * @param _dealerName 经销商名称
                     * 
                     */
                    void SetDealerName(const std::string& _dealerName);

                    /**
                     * 判断参数 DealerName 是否已赋值
                     * @return DealerName 是否已赋值
                     * 
                     */
                    bool DealerNameHasBeenSet() const;

                    /**
                     * 获取经销商下级门店ID
                     * @return ShopId 经销商下级门店ID
                     * 
                     */
                    uint64_t GetShopId() const;

                    /**
                     * 设置经销商下级门店ID
                     * @param _shopId 经销商下级门店ID
                     * 
                     */
                    void SetShopId(const uint64_t& _shopId);

                    /**
                     * 判断参数 ShopId 是否已赋值
                     * @return ShopId 是否已赋值
                     * 
                     */
                    bool ShopIdHasBeenSet() const;

                    /**
                     * 获取经销商下级门店名称
                     * @return ShopName 经销商下级门店名称
                     * 
                     */
                    std::string GetShopName() const;

                    /**
                     * 设置经销商下级门店名称
                     * @param _shopName 经销商下级门店名称
                     * 
                     */
                    void SetShopName(const std::string& _shopName);

                    /**
                     * 判断参数 ShopName 是否已赋值
                     * @return ShopName 是否已赋值
                     * 
                     */
                    bool ShopNameHasBeenSet() const;

                    /**
                     * 获取职位
                     * @return Position 职位
                     * 
                     */
                    std::string GetPosition() const;

                    /**
                     * 设置职位
                     * @param _position 职位
                     * 
                     */
                    void SetPosition(const std::string& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                    /**
                     * 获取自定义的门店id
                     * @return CorpShopId 自定义的门店id
                     * 
                     */
                    std::string GetCorpShopId() const;

                    /**
                     * 设置自定义的门店id
                     * @param _corpShopId 自定义的门店id
                     * 
                     */
                    void SetCorpShopId(const std::string& _corpShopId);

                    /**
                     * 判断参数 CorpShopId 是否已赋值
                     * @return CorpShopId 是否已赋值
                     * 
                     */
                    bool CorpShopIdHasBeenSet() const;

                private:

                    /**
                     * 线索id，线索唯一识别编码
                     */
                    std::string m_clueId;
                    bool m_clueIdHasBeenSet;

                    /**
                     * 接待客户经销商顾问所属经销商code
                     */
                    std::string m_dealerId;
                    bool m_dealerIdHasBeenSet;

                    /**
                     * 线索获取时间，用户添加企业微信时间，单位是秒
                     */
                    uint64_t m_enquireTime;
                    bool m_enquireTimeHasBeenSet;

                    /**
                     * 客户在微信生态中唯一识别码
                     */
                    std::string m_unionId;
                    bool m_unionIdHasBeenSet;

                    /**
                     * 微信昵称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 联系方式
                     */
                    std::string m_phone;
                    bool m_phoneHasBeenSet;

                    /**
                     * 车系编号
                     */
                    std::string m_seriesCode;
                    bool m_seriesCodeHasBeenSet;

                    /**
                     * 车型编号
                     */
                    std::string m_modelCode;
                    bool m_modelCodeHasBeenSet;

                    /**
                     * 省份编号
                     */
                    std::string m_provinceCode;
                    bool m_provinceCodeHasBeenSet;

                    /**
                     * 城市编号
                     */
                    std::string m_cityCode;
                    bool m_cityCodeHasBeenSet;

                    /**
                     * 顾问名称
                     */
                    std::string m_salesName;
                    bool m_salesNameHasBeenSet;

                    /**
                     * 顾问电话
                     */
                    std::string m_salesPhone;
                    bool m_salesPhoneHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 标签
                     */
                    std::vector<std::string> m_tagList;
                    bool m_tagListHasBeenSet;

                    /**
                     * 客户姓名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 线索属性，0：个人，1：企业
                     */
                    int64_t m_leadUserType;
                    bool m_leadUserTypeHasBeenSet;

                    /**
                     * 线索来源类型，1：线上，2：线下
                     */
                    int64_t m_leadType;
                    bool m_leadTypeHasBeenSet;

                    /**
                     * 线索渠道对应ID
                     */
                    uint64_t m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * 线索渠道类型，与线索来源对应的渠道名称
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * 线索渠道名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sourceChannelName;
                    bool m_sourceChannelNameHasBeenSet;

                    /**
                     * 0：未知，1：男，2：女
                     */
                    int64_t m_gender;
                    bool m_genderHasBeenSet;

                    /**
                     * 线索创建时间戳，单位：秒
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 线索创建时间戳，单位：秒
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 线索所处状态，101-待分配 201-待建档 301-已建档 401-已邀约 501-跟进中 601-已下订单 701-已成交 801-战败申请中 901-已战败 1001-未知状态 1101-转移申请中 1201-已完成
                     */
                    int64_t m_leadStatus;
                    bool m_leadStatusHasBeenSet;

                    /**
                     * 线索意向等级
                     */
                    std::string m_levelCode;
                    bool m_levelCodeHasBeenSet;

                    /**
                     * 线索成功导入的时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_importAtTime;
                    bool m_importAtTimeHasBeenSet;

                    /**
                     * 完成线索分配的时间戳，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_distributeTime;
                    bool m_distributeTimeHasBeenSet;

                    /**
                     * 获取线索的时间戳，单位：秒
                     */
                    uint64_t m_createAtTime;
                    bool m_createAtTimeHasBeenSet;

                    /**
                     * 客户微信id
                     */
                    std::string m_wxId;
                    bool m_wxIdHasBeenSet;

                    /**
                     * 意向车型对应品牌code
                     */
                    std::string m_brandCode;
                    bool m_brandCodeHasBeenSet;

                    /**
                     * 建档时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_buildTime;
                    bool m_buildTimeHasBeenSet;

                    /**
                     * 下订时间，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_orderTime;
                    bool m_orderTimeHasBeenSet;

                    /**
                     * 到店时间，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_arrivalTime;
                    bool m_arrivalTimeHasBeenSet;

                    /**
                     * 交车时间，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_deliveryTime;
                    bool m_deliveryTimeHasBeenSet;

                    /**
                     * 上次跟进时间，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_followTime;
                    bool m_followTimeHasBeenSet;

                    /**
                     * 下次跟进时间，单位：秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_nextFollowTime;
                    bool m_nextFollowTimeHasBeenSet;

                    /**
                     * 线索所属组织id
                     */
                    uint64_t m_orgId;
                    bool m_orgIdHasBeenSet;

                    /**
                     * 线索所属组织名称
                     */
                    std::string m_orgName;
                    bool m_orgNameHasBeenSet;

                    /**
                     * 介绍人姓名
                     */
                    std::string m_introducer;
                    bool m_introducerHasBeenSet;

                    /**
                     * 介绍人电话
                     */
                    std::string m_introducerPhone;
                    bool m_introducerPhoneHasBeenSet;

                    /**
                     * 是否关联微信 1 是 0 否
                     */
                    int64_t m_isBindWx;
                    bool m_isBindWxHasBeenSet;

                    /**
                     * 是否经过合并 1 是 0 否
                     */
                    int64_t m_isMerge;
                    bool m_isMergeHasBeenSet;

                    /**
                     * 是否无效  1 是 0 否
                     */
                    int64_t m_isInvalid;
                    bool m_isInvalidHasBeenSet;

                    /**
                     * 无效类型
                     */
                    std::string m_invalidType;
                    bool m_invalidTypeHasBeenSet;

                    /**
                     * 无效类型枚举：
无意向购买、空错号、未接听、其他
                     */
                    std::string m_invalidTypeName;
                    bool m_invalidTypeNameHasBeenSet;

                    /**
                     * 由顾问手动输入的无效原因文字
                     */
                    std::string m_invalidRemark;
                    bool m_invalidRemarkHasBeenSet;

                    /**
                     * 无效时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_invalidTime;
                    bool m_invalidTimeHasBeenSet;

                    /**
                     * 经销商名称
                     */
                    std::string m_dealerName;
                    bool m_dealerNameHasBeenSet;

                    /**
                     * 经销商下级门店ID
                     */
                    uint64_t m_shopId;
                    bool m_shopIdHasBeenSet;

                    /**
                     * 经销商下级门店名称
                     */
                    std::string m_shopName;
                    bool m_shopNameHasBeenSet;

                    /**
                     * 职位
                     */
                    std::string m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * 自定义的门店id
                     */
                    std::string m_corpShopId;
                    bool m_corpShopIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_MODEL_CLUEINFODETAIL_H_
