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
                     * @return LogId 行ID
                     * 
                     */
                    int64_t GetLogId() const;

                    /**
                     * 设置行ID
                     * @param _logId 行ID
                     * 
                     */
                    void SetLogId(const int64_t& _logId);

                    /**
                     * 判断参数 LogId 是否已赋值
                     * @return LogId 是否已赋值
                     * 
                     */
                    bool LogIdHasBeenSet() const;

                    /**
                     * 获取微信openid
                     * @return Openid 微信openid
                     * 
                     */
                    std::string GetOpenid() const;

                    /**
                     * 设置微信openid
                     * @param _openid 微信openid
                     * 
                     */
                    void SetOpenid(const std::string& _openid);

                    /**
                     * 判断参数 Openid 是否已赋值
                     * @return Openid 是否已赋值
                     * 
                     */
                    bool OpenidHasBeenSet() const;

                    /**
                     * 获取微信昵称
                     * @return Nickname 微信昵称
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置微信昵称
                     * @param _nickname 微信昵称
                     * 
                     */
                    void SetNickname(const std::string& _nickname);

                    /**
                     * 判断参数 Nickname 是否已赋值
                     * @return Nickname 是否已赋值
                     * 
                     */
                    bool NicknameHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取码
                     * @return Code 码
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置码
                     * @param _code 码
                     * 
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     * 
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取企业ID
                     * @return CorpId 企业ID
                     * 
                     */
                    int64_t GetCorpId() const;

                    /**
                     * 设置企业ID
                     * @param _corpId 企业ID
                     * 
                     */
                    void SetCorpId(const int64_t& _corpId);

                    /**
                     * 判断参数 CorpId 是否已赋值
                     * @return CorpId 是否已赋值
                     * 
                     */
                    bool CorpIdHasBeenSet() const;

                    /**
                     * 获取商户ID
                     * @return MerchantId 商户ID
                     * 
                     */
                    std::string GetMerchantId() const;

                    /**
                     * 设置商户ID
                     * @param _merchantId 商户ID
                     * 
                     */
                    void SetMerchantId(const std::string& _merchantId);

                    /**
                     * 判断参数 MerchantId 是否已赋值
                     * @return MerchantId 是否已赋值
                     * 
                     */
                    bool MerchantIdHasBeenSet() const;

                    /**
                     * 获取商品ID
                     * @return ProductId 商品ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置商品ID
                     * @param _productId 商品ID
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取ip地址
                     * @return Ip ip地址
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置ip地址
                     * @param _ip ip地址
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取国家
                     * @return Country 国家
                     * 
                     */
                    std::string GetCountry() const;

                    /**
                     * 设置国家
                     * @param _country 国家
                     * 
                     */
                    void SetCountry(const std::string& _country);

                    /**
                     * 判断参数 Country 是否已赋值
                     * @return Country 是否已赋值
                     * 
                     */
                    bool CountryHasBeenSet() const;

                    /**
                     * 获取省份
                     * @return Province 省份
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置省份
                     * @param _province 省份
                     * 
                     */
                    void SetProvince(const std::string& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                    /**
                     * 获取城市
                     * @return City 城市
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置城市
                     * @param _city 城市
                     * 
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                    /**
                     * 获取县/区
                     * @return District 县/区
                     * 
                     */
                    std::string GetDistrict() const;

                    /**
                     * 设置县/区
                     * @param _district 县/区
                     * 
                     */
                    void SetDistrict(const std::string& _district);

                    /**
                     * 判断参数 District 是否已赋值
                     * @return District 是否已赋值
                     * 
                     */
                    bool DistrictHasBeenSet() const;

                    /**
                     * 获取微信 unionid
                     * @return Unionid 微信 unionid
                     * 
                     */
                    std::string GetUnionid() const;

                    /**
                     * 设置微信 unionid
                     * @param _unionid 微信 unionid
                     * 
                     */
                    void SetUnionid(const std::string& _unionid);

                    /**
                     * 判断参数 Unionid 是否已赋值
                     * @return Unionid 是否已赋值
                     * 
                     */
                    bool UnionidHasBeenSet() const;

                    /**
                     * 获取首次扫码 0:否, 1:是
                     * @return First 首次扫码 0:否, 1:是
                     * 
                     */
                    int64_t GetFirst() const;

                    /**
                     * 设置首次扫码 0:否, 1:是
                     * @param _first 首次扫码 0:否, 1:是
                     * 
                     */
                    void SetFirst(const int64_t& _first);

                    /**
                     * 判断参数 First 是否已赋值
                     * @return First 是否已赋值
                     * 
                     */
                    bool FirstHasBeenSet() const;

                    /**
                     * 获取批次ID
                     * @return BatchId 批次ID
                     * 
                     */
                    std::string GetBatchId() const;

                    /**
                     * 设置批次ID
                     * @param _batchId 批次ID
                     * 
                     */
                    void SetBatchId(const std::string& _batchId);

                    /**
                     * 判断参数 BatchId 是否已赋值
                     * @return BatchId 是否已赋值
                     * 
                     */
                    bool BatchIdHasBeenSet() const;

                    /**
                     * 获取扫码类型 0:无效扫码 1: 小程序扫码 2: 商家扫码
                     * @return Type 扫码类型 0:无效扫码 1: 小程序扫码 2: 商家扫码
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置扫码类型 0:无效扫码 1: 小程序扫码 2: 商家扫码
                     * @param _type 扫码类型 0:无效扫码 1: 小程序扫码 2: 商家扫码
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取商户名称
                     * @return MerchantName 商户名称
                     * 
                     */
                    std::string GetMerchantName() const;

                    /**
                     * 设置商户名称
                     * @param _merchantName 商户名称
                     * 
                     */
                    void SetMerchantName(const std::string& _merchantName);

                    /**
                     * 判断参数 MerchantName 是否已赋值
                     * @return MerchantName 是否已赋值
                     * 
                     */
                    bool MerchantNameHasBeenSet() const;

                    /**
                     * 获取产品名称
                     * @return ProductName 产品名称
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置产品名称
                     * @param _productName 产品名称
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取产品Logo
                     * @return ProductLogo 产品Logo
                     * 
                     */
                    std::string GetProductLogo() const;

                    /**
                     * 设置产品Logo
                     * @param _productLogo 产品Logo
                     * 
                     */
                    void SetProductLogo(const std::string& _productLogo);

                    /**
                     * 判断参数 ProductLogo 是否已赋值
                     * @return ProductLogo 是否已赋值
                     * 
                     */
                    bool ProductLogoHasBeenSet() const;

                    /**
                     * 获取风险状态
0: 未知, 1:通过, 2:失败/风险, 3:存疑
                     * @return Status 风险状态
0: 未知, 1:通过, 2:失败/风险, 3:存疑
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置风险状态
0: 未知, 1:通过, 2:失败/风险, 3:存疑
                     * @param _status 风险状态
0: 未知, 1:通过, 2:失败/风险, 3:存疑
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
                     * 获取是否开启验证
0:否, 1:是
                     * @return Verify 是否开启验证
0:否, 1:是
                     * 
                     */
                    int64_t GetVerify() const;

                    /**
                     * 设置是否开启验证
0:否, 1:是
                     * @param _verify 是否开启验证
0:否, 1:是
                     * 
                     */
                    void SetVerify(const int64_t& _verify);

                    /**
                     * 判断参数 Verify 是否已赋值
                     * @return Verify 是否已赋值
                     * 
                     */
                    bool VerifyHasBeenSet() const;

                private:

                    /**
                     * 行ID
                     */
                    int64_t m_logId;
                    bool m_logIdHasBeenSet;

                    /**
                     * 微信openid
                     */
                    std::string m_openid;
                    bool m_openidHasBeenSet;

                    /**
                     * 微信昵称
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 码
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 企业ID
                     */
                    int64_t m_corpId;
                    bool m_corpIdHasBeenSet;

                    /**
                     * 商户ID
                     */
                    std::string m_merchantId;
                    bool m_merchantIdHasBeenSet;

                    /**
                     * 商品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * ip地址
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 国家
                     */
                    std::string m_country;
                    bool m_countryHasBeenSet;

                    /**
                     * 省份
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 城市
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 县/区
                     */
                    std::string m_district;
                    bool m_districtHasBeenSet;

                    /**
                     * 微信 unionid
                     */
                    std::string m_unionid;
                    bool m_unionidHasBeenSet;

                    /**
                     * 首次扫码 0:否, 1:是
                     */
                    int64_t m_first;
                    bool m_firstHasBeenSet;

                    /**
                     * 批次ID
                     */
                    std::string m_batchId;
                    bool m_batchIdHasBeenSet;

                    /**
                     * 扫码类型 0:无效扫码 1: 小程序扫码 2: 商家扫码
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 商户名称
                     */
                    std::string m_merchantName;
                    bool m_merchantNameHasBeenSet;

                    /**
                     * 产品名称
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 产品Logo
                     */
                    std::string m_productLogo;
                    bool m_productLogoHasBeenSet;

                    /**
                     * 风险状态
0: 未知, 1:通过, 2:失败/风险, 3:存疑
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 是否开启验证
0:否, 1:是
                     */
                    int64_t m_verify;
                    bool m_verifyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_SCANLOG_H_
