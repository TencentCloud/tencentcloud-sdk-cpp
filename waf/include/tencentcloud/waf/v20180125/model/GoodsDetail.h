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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_GOODSDETAIL_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_GOODSDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/ProductInfo.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 产品明细
                */
                class GoodsDetail : public AbstractModel
                {
                public:
                    GoodsDetail();
                    ~GoodsDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取时间间隔
                     * @return TimeSpan 时间间隔
                     * 
                     */
                    int64_t GetTimeSpan() const;

                    /**
                     * 设置时间间隔
                     * @param _timeSpan 时间间隔
                     * 
                     */
                    void SetTimeSpan(const int64_t& _timeSpan);

                    /**
                     * 判断参数 TimeSpan 是否已赋值
                     * @return TimeSpan 是否已赋值
                     * 
                     */
                    bool TimeSpanHasBeenSet() const;

                    /**
                     * 获取单位，支持m、y、d
                     * @return TimeUnit 单位，支持m、y、d
                     * 
                     */
                    std::string GetTimeUnit() const;

                    /**
                     * 设置单位，支持m、y、d
                     * @param _timeUnit 单位，支持m、y、d
                     * 
                     */
                    void SetTimeUnit(const std::string& _timeUnit);

                    /**
                     * 判断参数 TimeUnit 是否已赋值
                     * @return TimeUnit 是否已赋值
                     * 
                     */
                    bool TimeUnitHasBeenSet() const;

                    /**
                     * 获取产品码
                     * @return ProductCode 产品码
                     * 
                     */
                    std::string GetProductCode() const;

                    /**
                     * 设置产品码
                     * @param _productCode 产品码
                     * 
                     */
                    void SetProductCode(const std::string& _productCode);

                    /**
                     * 判断参数 ProductCode 是否已赋值
                     * @return ProductCode 是否已赋值
                     * 
                     */
                    bool ProductCodeHasBeenSet() const;

                    /**
                     * 获取二级产品码
                     * @return SubProductCode 二级产品码
                     * 
                     */
                    std::string GetSubProductCode() const;

                    /**
                     * 设置二级产品码
                     * @param _subProductCode 二级产品码
                     * 
                     */
                    void SetSubProductCode(const std::string& _subProductCode);

                    /**
                     * 判断参数 SubProductCode 是否已赋值
                     * @return SubProductCode 是否已赋值
                     * 
                     */
                    bool SubProductCodeHasBeenSet() const;

                    /**
                     * 获取计费策略id
                     * @return Pid 计费策略id
                     * 
                     */
                    int64_t GetPid() const;

                    /**
                     * 设置计费策略id
                     * @param _pid 计费策略id
                     * 
                     */
                    void SetPid(const int64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取waf产品码
                     * @return ProductInfo waf产品码
                     * 
                     */
                    std::vector<ProductInfo> GetProductInfo() const;

                    /**
                     * 设置waf产品码
                     * @param _productInfo waf产品码
                     * 
                     */
                    void SetProductInfo(const std::vector<ProductInfo>& _productInfo);

                    /**
                     * 判断参数 ProductInfo 是否已赋值
                     * @return ProductInfo 是否已赋值
                     * 
                     */
                    bool ProductInfoHasBeenSet() const;

                    /**
                     * 获取waf实例名
                     * @return InstanceName waf实例名
                     * 
                     */
                    std::string GetInstanceName() const;

                    /**
                     * 设置waf实例名
                     * @param _instanceName waf实例名
                     * 
                     */
                    void SetInstanceName(const std::string& _instanceName);

                    /**
                     * 判断参数 InstanceName 是否已赋值
                     * @return InstanceName 是否已赋值
                     * 
                     */
                    bool InstanceNameHasBeenSet() const;

                    /**
                     * 获取QPS数量
                     * @return ElasticQps QPS数量
                     * 
                     */
                    int64_t GetElasticQps() const;

                    /**
                     * 设置QPS数量
                     * @param _elasticQps QPS数量
                     * 
                     */
                    void SetElasticQps(const int64_t& _elasticQps);

                    /**
                     * 判断参数 ElasticQps 是否已赋值
                     * @return ElasticQps 是否已赋值
                     * 
                     */
                    bool ElasticQpsHasBeenSet() const;

                    /**
                     * 获取弹性账单
                     * @return FlexBill 弹性账单
                     * 
                     */
                    int64_t GetFlexBill() const;

                    /**
                     * 设置弹性账单
                     * @param _flexBill 弹性账单
                     * 
                     */
                    void SetFlexBill(const int64_t& _flexBill);

                    /**
                     * 判断参数 FlexBill 是否已赋值
                     * @return FlexBill 是否已赋值
                     * 
                     */
                    bool FlexBillHasBeenSet() const;

                    /**
                     * 获取1:自动续费，0:不自动续费
                     * @return AutoRenewFlag 1:自动续费，0:不自动续费
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置1:自动续费，0:不自动续费
                     * @param _autoRenewFlag 1:自动续费，0:不自动续费
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取waf购买的实际地域信息
                     * @return RealRegion waf购买的实际地域信息
                     * 
                     */
                    int64_t GetRealRegion() const;

                    /**
                     * 设置waf购买的实际地域信息
                     * @param _realRegion waf购买的实际地域信息
                     * 
                     */
                    void SetRealRegion(const int64_t& _realRegion);

                    /**
                     * 判断参数 RealRegion 是否已赋值
                     * @return RealRegion 是否已赋值
                     * 
                     */
                    bool RealRegionHasBeenSet() const;

                    /**
                     * 获取Waf实例对应的二级产品码
                     * @return Type Waf实例对应的二级产品码
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Waf实例对应的二级产品码
                     * @param _type Waf实例对应的二级产品码
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取计费细项标签数组
                     * @return LabelTypes 计费细项标签数组
                     * 
                     */
                    std::vector<std::string> GetLabelTypes() const;

                    /**
                     * 设置计费细项标签数组
                     * @param _labelTypes 计费细项标签数组
                     * 
                     */
                    void SetLabelTypes(const std::vector<std::string>& _labelTypes);

                    /**
                     * 判断参数 LabelTypes 是否已赋值
                     * @return LabelTypes 是否已赋值
                     * 
                     */
                    bool LabelTypesHasBeenSet() const;

                    /**
                     * 获取计费细项标签数量，一般和SvLabelType一一对应
                     * @return LabelCounts 计费细项标签数量，一般和SvLabelType一一对应
                     * 
                     */
                    std::vector<int64_t> GetLabelCounts() const;

                    /**
                     * 设置计费细项标签数量，一般和SvLabelType一一对应
                     * @param _labelCounts 计费细项标签数量，一般和SvLabelType一一对应
                     * 
                     */
                    void SetLabelCounts(const std::vector<int64_t>& _labelCounts);

                    /**
                     * 判断参数 LabelCounts 是否已赋值
                     * @return LabelCounts 是否已赋值
                     * 
                     */
                    bool LabelCountsHasBeenSet() const;

                    /**
                     * 获取变配使用，实例到期时间
                     * @return CurDeadline 变配使用，实例到期时间
                     * 
                     */
                    std::string GetCurDeadline() const;

                    /**
                     * 设置变配使用，实例到期时间
                     * @param _curDeadline 变配使用，实例到期时间
                     * 
                     */
                    void SetCurDeadline(const std::string& _curDeadline);

                    /**
                     * 判断参数 CurDeadline 是否已赋值
                     * @return CurDeadline 是否已赋值
                     * 
                     */
                    bool CurDeadlineHasBeenSet() const;

                    /**
                     * 获取对存在的实例购买bot 或api 安全
                     * @return InstanceId 对存在的实例购买bot 或api 安全
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置对存在的实例购买bot 或api 安全
                     * @param _instanceId 对存在的实例购买bot 或api 安全
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * 时间间隔
                     */
                    int64_t m_timeSpan;
                    bool m_timeSpanHasBeenSet;

                    /**
                     * 单位，支持m、y、d
                     */
                    std::string m_timeUnit;
                    bool m_timeUnitHasBeenSet;

                    /**
                     * 产品码
                     */
                    std::string m_productCode;
                    bool m_productCodeHasBeenSet;

                    /**
                     * 二级产品码
                     */
                    std::string m_subProductCode;
                    bool m_subProductCodeHasBeenSet;

                    /**
                     * 计费策略id
                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * waf产品码
                     */
                    std::vector<ProductInfo> m_productInfo;
                    bool m_productInfoHasBeenSet;

                    /**
                     * waf实例名
                     */
                    std::string m_instanceName;
                    bool m_instanceNameHasBeenSet;

                    /**
                     * QPS数量
                     */
                    int64_t m_elasticQps;
                    bool m_elasticQpsHasBeenSet;

                    /**
                     * 弹性账单
                     */
                    int64_t m_flexBill;
                    bool m_flexBillHasBeenSet;

                    /**
                     * 1:自动续费，0:不自动续费
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * waf购买的实际地域信息
                     */
                    int64_t m_realRegion;
                    bool m_realRegionHasBeenSet;

                    /**
                     * Waf实例对应的二级产品码
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 计费细项标签数组
                     */
                    std::vector<std::string> m_labelTypes;
                    bool m_labelTypesHasBeenSet;

                    /**
                     * 计费细项标签数量，一般和SvLabelType一一对应
                     */
                    std::vector<int64_t> m_labelCounts;
                    bool m_labelCountsHasBeenSet;

                    /**
                     * 变配使用，实例到期时间
                     */
                    std::string m_curDeadline;
                    bool m_curDeadlineHasBeenSet;

                    /**
                     * 对存在的实例购买bot 或api 安全
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_GOODSDETAIL_H_
