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
                     */
                    std::string GetClueId() const;

                    /**
                     * 设置线索id，线索唯一识别编码
                     * @param ClueId 线索id，线索唯一识别编码
                     */
                    void SetClueId(const std::string& _clueId);

                    /**
                     * 判断参数 ClueId 是否已赋值
                     * @return ClueId 是否已赋值
                     */
                    bool ClueIdHasBeenSet() const;

                    /**
                     * 获取接待客户经销商顾问所属组织id,多个组织使用逗号分割
                     * @return DealerId 接待客户经销商顾问所属组织id,多个组织使用逗号分割
                     */
                    std::string GetDealerId() const;

                    /**
                     * 设置接待客户经销商顾问所属组织id,多个组织使用逗号分割
                     * @param DealerId 接待客户经销商顾问所属组织id,多个组织使用逗号分割
                     */
                    void SetDealerId(const std::string& _dealerId);

                    /**
                     * 判断参数 DealerId 是否已赋值
                     * @return DealerId 是否已赋值
                     */
                    bool DealerIdHasBeenSet() const;

                    /**
                     * 获取线索获取时间，用户添加企业微信时间，单位是秒
                     * @return EnquireTime 线索获取时间，用户添加企业微信时间，单位是秒
                     */
                    uint64_t GetEnquireTime() const;

                    /**
                     * 设置线索获取时间，用户添加企业微信时间，单位是秒
                     * @param EnquireTime 线索获取时间，用户添加企业微信时间，单位是秒
                     */
                    void SetEnquireTime(const uint64_t& _enquireTime);

                    /**
                     * 判断参数 EnquireTime 是否已赋值
                     * @return EnquireTime 是否已赋值
                     */
                    bool EnquireTimeHasBeenSet() const;

                    /**
                     * 获取客户在微信生态中唯一识别码
                     * @return UnionId 客户在微信生态中唯一识别码
                     */
                    std::string GetUnionId() const;

                    /**
                     * 设置客户在微信生态中唯一识别码
                     * @param UnionId 客户在微信生态中唯一识别码
                     */
                    void SetUnionId(const std::string& _unionId);

                    /**
                     * 判断参数 UnionId 是否已赋值
                     * @return UnionId 是否已赋值
                     */
                    bool UnionIdHasBeenSet() const;

                    /**
                     * 获取微信昵称
                     * @return Name 微信昵称
                     */
                    std::string GetName() const;

                    /**
                     * 设置微信昵称
                     * @param Name 微信昵称
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取联系方式
                     * @return Phone 联系方式
                     */
                    std::string GetPhone() const;

                    /**
                     * 设置联系方式
                     * @param Phone 联系方式
                     */
                    void SetPhone(const std::string& _phone);

                    /**
                     * 判断参数 Phone 是否已赋值
                     * @return Phone 是否已赋值
                     */
                    bool PhoneHasBeenSet() const;

                    /**
                     * 获取车系编号
                     * @return SeriesCode 车系编号
                     */
                    std::string GetSeriesCode() const;

                    /**
                     * 设置车系编号
                     * @param SeriesCode 车系编号
                     */
                    void SetSeriesCode(const std::string& _seriesCode);

                    /**
                     * 判断参数 SeriesCode 是否已赋值
                     * @return SeriesCode 是否已赋值
                     */
                    bool SeriesCodeHasBeenSet() const;

                    /**
                     * 获取车型编号
                     * @return ModelCode 车型编号
                     */
                    std::string GetModelCode() const;

                    /**
                     * 设置车型编号
                     * @param ModelCode 车型编号
                     */
                    void SetModelCode(const std::string& _modelCode);

                    /**
                     * 判断参数 ModelCode 是否已赋值
                     * @return ModelCode 是否已赋值
                     */
                    bool ModelCodeHasBeenSet() const;

                    /**
                     * 获取省份编号
                     * @return ProvinceCode 省份编号
                     */
                    std::string GetProvinceCode() const;

                    /**
                     * 设置省份编号
                     * @param ProvinceCode 省份编号
                     */
                    void SetProvinceCode(const std::string& _provinceCode);

                    /**
                     * 判断参数 ProvinceCode 是否已赋值
                     * @return ProvinceCode 是否已赋值
                     */
                    bool ProvinceCodeHasBeenSet() const;

                    /**
                     * 获取城市编号
                     * @return CityCode 城市编号
                     */
                    std::string GetCityCode() const;

                    /**
                     * 设置城市编号
                     * @param CityCode 城市编号
                     */
                    void SetCityCode(const std::string& _cityCode);

                    /**
                     * 判断参数 CityCode 是否已赋值
                     * @return CityCode 是否已赋值
                     */
                    bool CityCodeHasBeenSet() const;

                    /**
                     * 获取顾问名称
                     * @return SalesName 顾问名称
                     */
                    std::string GetSalesName() const;

                    /**
                     * 设置顾问名称
                     * @param SalesName 顾问名称
                     */
                    void SetSalesName(const std::string& _salesName);

                    /**
                     * 判断参数 SalesName 是否已赋值
                     * @return SalesName 是否已赋值
                     */
                    bool SalesNameHasBeenSet() const;

                    /**
                     * 获取顾问电话
                     * @return SalesPhone 顾问电话
                     */
                    std::string GetSalesPhone() const;

                    /**
                     * 设置顾问电话
                     * @param SalesPhone 顾问电话
                     */
                    void SetSalesPhone(const std::string& _salesPhone);

                    /**
                     * 判断参数 SalesPhone 是否已赋值
                     * @return SalesPhone 是否已赋值
                     */
                    bool SalesPhoneHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param Remark 备注
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取标签
                     * @return TagList 标签
                     */
                    std::vector<std::string> GetTagList() const;

                    /**
                     * 设置标签
                     * @param TagList 标签
                     */
                    void SetTagList(const std::vector<std::string>& _tagList);

                    /**
                     * 判断参数 TagList 是否已赋值
                     * @return TagList 是否已赋值
                     */
                    bool TagListHasBeenSet() const;

                private:

                    /**
                     * 线索id，线索唯一识别编码
                     */
                    std::string m_clueId;
                    bool m_clueIdHasBeenSet;

                    /**
                     * 接待客户经销商顾问所属组织id,多个组织使用逗号分割
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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_MODEL_CLUEINFODETAIL_H_
