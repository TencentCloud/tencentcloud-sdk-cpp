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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CREATEWHITELISTORDERREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CREATEWHITELISTORDERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * CreateWhiteListOrder请求参数结构体
                */
                class CreateWhiteListOrderRequest : public AbstractModel
                {
                public:
                    CreateWhiteListOrderRequest();
                    ~CreateWhiteListOrderRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取授权类型
                     * @return LicenseType 授权类型
                     * 
                     */
                    uint64_t GetLicenseType() const;

                    /**
                     * 设置授权类型
                     * @param _licenseType 授权类型
                     * 
                     */
                    void SetLicenseType(const uint64_t& _licenseType);

                    /**
                     * 判断参数 LicenseType 是否已赋值
                     * @return LicenseType 是否已赋值
                     * 
                     */
                    bool LicenseTypeHasBeenSet() const;

                    /**
                     * 获取授权数量,最小为1 最大99999
                     * @return LicenseNum 授权数量,最小为1 最大99999
                     * 
                     */
                    uint64_t GetLicenseNum() const;

                    /**
                     * 设置授权数量,最小为1 最大99999
                     * @param _licenseNum 授权数量,最小为1 最大99999
                     * 
                     */
                    void SetLicenseNum(const uint64_t& _licenseNum);

                    /**
                     * 判断参数 LicenseNum 是否已赋值
                     * @return LicenseNum 是否已赋值
                     * 
                     */
                    bool LicenseNumHasBeenSet() const;

                    /**
                     * 获取到期时间,最小为1
                     * @return Deadline 到期时间,最小为1
                     * 
                     */
                    uint64_t GetDeadline() const;

                    /**
                     * 设置到期时间,最小为1
                     * @param _deadline 到期时间,最小为1
                     * 
                     */
                    void SetDeadline(const uint64_t& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     * 
                     */
                    bool DeadlineHasBeenSet() const;

                    /**
                     * 获取规则名称,大资产中心:asset_center
                     * @return RuleName 规则名称,大资产中心:asset_center
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名称,大资产中心:asset_center
                     * @param _ruleName 规则名称,大资产中心:asset_center
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取订单类型, 1 试用 2 赠送 3 体验 4 SSL-证书赠送 5 cvm赠送
                     * @return SourceType 订单类型, 1 试用 2 赠送 3 体验 4 SSL-证书赠送 5 cvm赠送
                     * 
                     */
                    uint64_t GetSourceType() const;

                    /**
                     * 设置订单类型, 1 试用 2 赠送 3 体验 4 SSL-证书赠送 5 cvm赠送
                     * @param _sourceType 订单类型, 1 试用 2 赠送 3 体验 4 SSL-证书赠送 5 cvm赠送
                     * 
                     */
                    void SetSourceType(const uint64_t& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取地域, 1 广州 9新加坡, 默认为 1. 非必要情况不要选9
                     * @return RegionId 地域, 1 广州 9新加坡, 默认为 1. 非必要情况不要选9
                     * 
                     */
                    uint64_t GetRegionId() const;

                    /**
                     * 设置地域, 1 广州 9新加坡, 默认为 1. 非必要情况不要选9
                     * @param _regionId 地域, 1 广州 9新加坡, 默认为 1. 非必要情况不要选9
                     * 
                     */
                    void SetRegionId(const uint64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                    /**
                     * 获取额外参数,json字符串,包含ResourceId 资源ID,LicenseType 授权类型
                     * @return ExtraParam 额外参数,json字符串,包含ResourceId 资源ID,LicenseType 授权类型
                     * 
                     */
                    std::string GetExtraParam() const;

                    /**
                     * 设置额外参数,json字符串,包含ResourceId 资源ID,LicenseType 授权类型
                     * @param _extraParam 额外参数,json字符串,包含ResourceId 资源ID,LicenseType 授权类型
                     * 
                     */
                    void SetExtraParam(const std::string& _extraParam);

                    /**
                     * 判断参数 ExtraParam 是否已赋值
                     * @return ExtraParam 是否已赋值
                     * 
                     */
                    bool ExtraParamHasBeenSet() const;

                private:

                    /**
                     * 授权类型
                     */
                    uint64_t m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * 授权数量,最小为1 最大99999
                     */
                    uint64_t m_licenseNum;
                    bool m_licenseNumHasBeenSet;

                    /**
                     * 到期时间,最小为1
                     */
                    uint64_t m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * 规则名称,大资产中心:asset_center
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 订单类型, 1 试用 2 赠送 3 体验 4 SSL-证书赠送 5 cvm赠送
                     */
                    uint64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 地域, 1 广州 9新加坡, 默认为 1. 非必要情况不要选9
                     */
                    uint64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                    /**
                     * 额外参数,json字符串,包含ResourceId 资源ID,LicenseType 授权类型
                     */
                    std::string m_extraParam;
                    bool m_extraParamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CREATEWHITELISTORDERREQUEST_H_
