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

#ifndef TENCENTCLOUD_WAV_V20210129_MODEL_CREATELEADREQUEST_H_
#define TENCENTCLOUD_WAV_V20210129_MODEL_CREATELEADREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateLead请求参数结构体
                */
                class CreateLeadRequest : public AbstractModel
                {
                public:
                    CreateLeadRequest();
                    ~CreateLeadRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取来源ID
                     * @return ChannelId 来源ID
                     * 
                     */
                    uint64_t GetChannelId() const;

                    /**
                     * 设置来源ID
                     * @param _channelId 来源ID
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
                     * 获取来源名称
                     * @return ChannelName 来源名称
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置来源名称
                     * @param _channelName 来源名称
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
                     * 获取创建时间， 单位毫秒
                     * @return CreateTime 创建时间， 单位毫秒
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置创建时间， 单位毫秒
                     * @param _createTime 创建时间， 单位毫秒
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取线索类型：1-400呼入，2-常规留资
                     * @return SourceType 线索类型：1-400呼入，2-常规留资
                     * 
                     */
                    int64_t GetSourceType() const;

                    /**
                     * 设置线索类型：1-400呼入，2-常规留资
                     * @param _sourceType 线索类型：1-400呼入，2-常规留资
                     * 
                     */
                    void SetSourceType(const int64_t& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取经销商id
                     * @return DealerId 经销商id
                     * 
                     */
                    uint64_t GetDealerId() const;

                    /**
                     * 设置经销商id
                     * @param _dealerId 经销商id
                     * 
                     */
                    void SetDealerId(const uint64_t& _dealerId);

                    /**
                     * 判断参数 DealerId 是否已赋值
                     * @return DealerId 是否已赋值
                     * 
                     */
                    bool DealerIdHasBeenSet() const;

                    /**
                     * 获取品牌id
                     * @return BrandId 品牌id
                     * 
                     */
                    uint64_t GetBrandId() const;

                    /**
                     * 设置品牌id
                     * @param _brandId 品牌id
                     * 
                     */
                    void SetBrandId(const uint64_t& _brandId);

                    /**
                     * 判断参数 BrandId 是否已赋值
                     * @return BrandId 是否已赋值
                     * 
                     */
                    bool BrandIdHasBeenSet() const;

                    /**
                     * 获取车系id
                     * @return SeriesId 车系id
                     * 
                     */
                    uint64_t GetSeriesId() const;

                    /**
                     * 设置车系id
                     * @param _seriesId 车系id
                     * 
                     */
                    void SetSeriesId(const uint64_t& _seriesId);

                    /**
                     * 判断参数 SeriesId 是否已赋值
                     * @return SeriesId 是否已赋值
                     * 
                     */
                    bool SeriesIdHasBeenSet() const;

                    /**
                     * 获取客户姓名
                     * @return CustomerName 客户姓名
                     * 
                     */
                    std::string GetCustomerName() const;

                    /**
                     * 设置客户姓名
                     * @param _customerName 客户姓名
                     * 
                     */
                    void SetCustomerName(const std::string& _customerName);

                    /**
                     * 判断参数 CustomerName 是否已赋值
                     * @return CustomerName 是否已赋值
                     * 
                     */
                    bool CustomerNameHasBeenSet() const;

                    /**
                     * 获取客户手机号
                     * @return CustomerPhone 客户手机号
                     * 
                     */
                    std::string GetCustomerPhone() const;

                    /**
                     * 设置客户手机号
                     * @param _customerPhone 客户手机号
                     * 
                     */
                    void SetCustomerPhone(const std::string& _customerPhone);

                    /**
                     * 判断参数 CustomerPhone 是否已赋值
                     * @return CustomerPhone 是否已赋值
                     * 
                     */
                    bool CustomerPhoneHasBeenSet() const;

                    /**
                     * 获取车型id
                     * @return ModelId 车型id
                     * 
                     */
                    uint64_t GetModelId() const;

                    /**
                     * 设置车型id
                     * @param _modelId 车型id
                     * 
                     */
                    void SetModelId(const uint64_t& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * 
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取客户性别: 0-未知, 1-男, 2-女
                     * @return CustomerSex 客户性别: 0-未知, 1-男, 2-女
                     * 
                     */
                    int64_t GetCustomerSex() const;

                    /**
                     * 设置客户性别: 0-未知, 1-男, 2-女
                     * @param _customerSex 客户性别: 0-未知, 1-男, 2-女
                     * 
                     */
                    void SetCustomerSex(const int64_t& _customerSex);

                    /**
                     * 判断参数 CustomerSex 是否已赋值
                     * @return CustomerSex 是否已赋值
                     * 
                     */
                    bool CustomerSexHasBeenSet() const;

                    /**
                     * 获取销售姓名
                     * @return SalesName 销售姓名
                     * 
                     */
                    std::string GetSalesName() const;

                    /**
                     * 设置销售姓名
                     * @param _salesName 销售姓名
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
                     * 获取销售手机号
                     * @return SalesPhone 销售手机号
                     * 
                     */
                    std::string GetSalesPhone() const;

                    /**
                     * 设置销售手机号
                     * @param _salesPhone 销售手机号
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
                     * 获取Cc坐席姓名
                     * @return CcName Cc坐席姓名
                     * 
                     */
                    std::string GetCcName() const;

                    /**
                     * 设置Cc坐席姓名
                     * @param _ccName Cc坐席姓名
                     * 
                     */
                    void SetCcName(const std::string& _ccName);

                    /**
                     * 判断参数 CcName 是否已赋值
                     * @return CcName 是否已赋值
                     * 
                     */
                    bool CcNameHasBeenSet() const;

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

                private:

                    /**
                     * 来源ID
                     */
                    uint64_t m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * 来源名称
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * 创建时间， 单位毫秒
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 线索类型：1-400呼入，2-常规留资
                     */
                    int64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 经销商id
                     */
                    uint64_t m_dealerId;
                    bool m_dealerIdHasBeenSet;

                    /**
                     * 品牌id
                     */
                    uint64_t m_brandId;
                    bool m_brandIdHasBeenSet;

                    /**
                     * 车系id
                     */
                    uint64_t m_seriesId;
                    bool m_seriesIdHasBeenSet;

                    /**
                     * 客户姓名
                     */
                    std::string m_customerName;
                    bool m_customerNameHasBeenSet;

                    /**
                     * 客户手机号
                     */
                    std::string m_customerPhone;
                    bool m_customerPhoneHasBeenSet;

                    /**
                     * 车型id
                     */
                    uint64_t m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * 客户性别: 0-未知, 1-男, 2-女
                     */
                    int64_t m_customerSex;
                    bool m_customerSexHasBeenSet;

                    /**
                     * 销售姓名
                     */
                    std::string m_salesName;
                    bool m_salesNameHasBeenSet;

                    /**
                     * 销售手机号
                     */
                    std::string m_salesPhone;
                    bool m_salesPhoneHasBeenSet;

                    /**
                     * Cc坐席姓名
                     */
                    std::string m_ccName;
                    bool m_ccNameHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_MODEL_CREATELEADREQUEST_H_
