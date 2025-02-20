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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_RAWSCANLOG_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_RAWSCANLOG_H_

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
                * 原始扫码日志
                */
                class RawScanLog : public AbstractModel
                {
                public:
                    RawScanLog();
                    ~RawScanLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志ID
                     * @return LogId 日志ID
                     * 
                     */
                    int64_t GetLogId() const;

                    /**
                     * 设置日志ID
                     * @param _logId 日志ID
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
                     * 获取微信小程序openid
                     * @return Openid 微信小程序openid
                     * 
                     */
                    std::string GetOpenid() const;

                    /**
                     * 设置微信小程序openid
                     * @param _openid 微信小程序openid
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
                     * 获取扫码时间
                     * @return CreateTime 扫码时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置扫码时间
                     * @param _createTime 扫码时间
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
                     * 获取溯源码
                     * @return Code 溯源码
                     * 
                     */
                    std::string GetCode() const;

                    /**
                     * 设置溯源码
                     * @param _code 溯源码
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
                    uint64_t GetCorpId() const;

                    /**
                     * 设置企业ID
                     * @param _corpId 企业ID
                     * 
                     */
                    void SetCorpId(const uint64_t& _corpId);

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
                     * 获取地市
                     * @return City 地市
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置地市
                     * @param _city 地市
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
                     * 获取区/县
                     * @return District 区/县
                     * 
                     */
                    std::string GetDistrict() const;

                    /**
                     * 设置区/县
                     * @param _district 区/县
                     * 
                     */
                    void SetDistrict(const std::string& _district);

                    /**
                     * 判断参数 District 是否已赋值
                     * @return District 是否已赋值
                     * 
                     */
                    bool DistrictHasBeenSet() const;

                private:

                    /**
                     * 日志ID
                     */
                    int64_t m_logId;
                    bool m_logIdHasBeenSet;

                    /**
                     * 微信小程序openid
                     */
                    std::string m_openid;
                    bool m_openidHasBeenSet;

                    /**
                     * 扫码时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 溯源码
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 企业ID
                     */
                    uint64_t m_corpId;
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
                     * 批次ID
                     */
                    std::string m_batchId;
                    bool m_batchIdHasBeenSet;

                    /**
                     * 省份
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                    /**
                     * 地市
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                    /**
                     * 区/县
                     */
                    std::string m_district;
                    bool m_districtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_RAWSCANLOG_H_
