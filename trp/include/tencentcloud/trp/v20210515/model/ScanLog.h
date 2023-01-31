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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_SCANLOG_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_SCANLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * 扫码明细
                */
                class ScanLog : public AbstractModel
                {
                public:
                    ScanLog();
                    ~ScanLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取行ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogId 行ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetLogId() const;

                    /**
                     * 设置行ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LogId 行ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLogId(const int64_t& _logId);

                    /**
                     * 判断参数 LogId 是否已赋值
                     * @return LogId 是否已赋值
                     */
                    bool LogIdHasBeenSet() const;

                    /**
                     * 获取微信openid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Openid 微信openid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOpenid() const;

                    /**
                     * 设置微信openid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Openid 微信openid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOpenid(const std::string& _openid);

                    /**
                     * 判断参数 Openid 是否已赋值
                     * @return Openid 是否已赋值
                     */
                    bool OpenidHasBeenSet() const;

                    /**
                     * 获取微信昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Nickname 微信昵称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置微信昵称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Nickname 微信昵称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNickname(const std::string& _nickname);

                    /**
                     * 判断参数 Nickname 是否已赋值
                     * @return Nickname 是否已赋值
                     */
                    bool NicknameHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Code 码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCode() const;

                    /**
                     * 设置码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Code 码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取企业ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CorpId 企业ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetCorpId() const;

                    /**
                     * 设置企业ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CorpId 企业ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCorpId(const int64_t& _corpId);

                    /**
                     * 判断参数 CorpId 是否已赋值
                     * @return CorpId 是否已赋值
                     */
                    bool CorpIdHasBeenSet() const;

                    /**
                     * 获取商户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MerchantId 商户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMerchantId() const;

                    /**
                     * 设置商户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MerchantId 商户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMerchantId(const std::string& _merchantId);

                    /**
                     * 判断参数 MerchantId 是否已赋值
                     * @return MerchantId 是否已赋值
                     */
                    bool MerchantIdHasBeenSet() const;

                    /**
                     * 获取商品ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProductId 商品ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置商品ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ProductId 商品ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取ip地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ip ip地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetIp() const;

                    /**
                     * 设置ip地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Ip ip地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取国家
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Country 国家
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置国家
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Country 国家
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCountry(const std::string& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取省份
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Province 省份
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置省份
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Province 省份
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetProvince(const std::string& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取城市
注意：此字段可能返回 null，表示取不到有效值。
                     * @return City 城市
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCity() const;

                    /**
                     * 设置城市
注意：此字段可能返回 null，表示取不到有效值。
                     * @param City 城市
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取县/区
注意：此字段可能返回 null，表示取不到有效值。
                     * @return District 县/区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDistrict() const;

                    /**
                     * 设置县/区
注意：此字段可能返回 null，表示取不到有效值。
                     * @param District 县/区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDistrict(const std::string& _district);

                    /**
                     * 判断参数 District 是否已赋值
                     * @return District 是否已赋值
                     */
                    bool DistrictHasBeenSet() const;

                    /**
                     * 获取微信 unionid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Unionid 微信 unionid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUnionid() const;

                    /**
                     * 设置微信 unionid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Unionid 微信 unionid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUnionid(const std::string& _unionid);

                    /**
                     * 判断参数 Unionid 是否已赋值
                     * @return Unionid 是否已赋值
                     */
                    bool UnionidHasBeenSet() const;

                    /**
                     * 获取首次扫码 0:否, 1:是
注意：此字段可能返回 null，表示取不到有效值。
                     * @return First 首次扫码 0:否, 1:是
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetFirst() const;

                    /**
                     * 设置首次扫码 0:否, 1:是
注意：此字段可能返回 null，表示取不到有效值。
                     * @param First 首次扫码 0:否, 1:是
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFirst(const int64_t& _first);

                    /**
                     * 判断参数 First 是否已赋值
                     * @return First 是否已赋值
                     */
                    bool FirstHasBeenSet() const;

                    /**
                     * 获取批次ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BatchId 批次ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBatchId() const;

                    /**
                     * 设置批次ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BatchId 批次ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBatchId(const std::string& _batchId);

                    /**
                     * 判断参数 BatchId 是否已赋值
                     * @return BatchId 是否已赋值
                     */
                    bool BatchIdHasBeenSet() const;

                private:

                    /**
                     * 行ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_logId;
                    bool m_logIdHasBeenSet;

                    /**
                     * 微信openid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_openid;
                    bool m_openidHasBeenSet;

                    /**
                     * 微信昵称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 企业ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_corpId;
                    bool m_corpIdHasBeenSet;

                    /**
                     * 商户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_merchantId;
                    bool m_merchantIdHasBeenSet;

                    /**
                     * 商品ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * ip地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 国家
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * 省份
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 城市
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 县/区
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_district;
                    bool m_districtHasBeenSet;

                    /**
                     * 微信 unionid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_unionid;
                    bool m_unionidHasBeenSet;

                    /**
                     * 首次扫码 0:否, 1:是
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_first;
                    bool m_firstHasBeenSet;

                    /**
                     * 批次ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_batchId;
                    bool m_batchIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_SCANLOG_H_
