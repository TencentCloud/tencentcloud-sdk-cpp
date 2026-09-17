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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_PLATFORMCREDITSUSAGEDAILY_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_PLATFORMCREDITSUSAGEDAILY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 平台版本消耗数据
                */
                class PlatformCreditsUsageDaily : public AbstractModel
                {
                public:
                    PlatformCreditsUsageDaily();
                    ~PlatformCreditsUsageDaily() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>数据日期</p><p>参数格式：YYYY-MM-DD</p>
                     * @return Date <p>数据日期</p><p>参数格式：YYYY-MM-DD</p>
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置<p>数据日期</p><p>参数格式：YYYY-MM-DD</p>
                     * @param _date <p>数据日期</p><p>参数格式：YYYY-MM-DD</p>
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取<p>资源点套餐内用量</p>
                     * @return DeductValue <p>资源点套餐内用量</p>
                     * 
                     */
                    double GetDeductValue() const;

                    /**
                     * 设置<p>资源点套餐内用量</p>
                     * @param _deductValue <p>资源点套餐内用量</p>
                     * 
                     */
                    void SetDeductValue(const double& _deductValue);

                    /**
                     * 判断参数 DeductValue 是否已赋值
                     * @return DeductValue 是否已赋值
                     * 
                     */
                    bool DeductValueHasBeenSet() const;

                    /**
                     * 获取<p>资源点资源包用量</p>
                     * @return PackageDeductValue <p>资源点资源包用量</p>
                     * 
                     */
                    double GetPackageDeductValue() const;

                    /**
                     * 设置<p>资源点资源包用量</p>
                     * @param _packageDeductValue <p>资源点资源包用量</p>
                     * 
                     */
                    void SetPackageDeductValue(const double& _packageDeductValue);

                    /**
                     * 判断参数 PackageDeductValue 是否已赋值
                     * @return PackageDeductValue 是否已赋值
                     * 
                     */
                    bool PackageDeductValueHasBeenSet() const;

                    /**
                     * 获取<p>资源点按量用量</p>
                     * @return ReportValue <p>资源点按量用量</p>
                     * 
                     */
                    double GetReportValue() const;

                    /**
                     * 设置<p>资源点按量用量</p>
                     * @param _reportValue <p>资源点按量用量</p>
                     * 
                     */
                    void SetReportValue(const double& _reportValue);

                    /**
                     * 判断参数 ReportValue 是否已赋值
                     * @return ReportValue 是否已赋值
                     * 
                     */
                    bool ReportValueHasBeenSet() const;

                    /**
                     * 获取<p>资源点原价消耗</p>
                     * @return OriginCredits <p>资源点原价消耗</p>
                     * 
                     */
                    double GetOriginCredits() const;

                    /**
                     * 设置<p>资源点原价消耗</p>
                     * @param _originCredits <p>资源点原价消耗</p>
                     * 
                     */
                    void SetOriginCredits(const double& _originCredits);

                    /**
                     * 判断参数 OriginCredits 是否已赋值
                     * @return OriginCredits 是否已赋值
                     * 
                     */
                    bool OriginCreditsHasBeenSet() const;

                private:

                    /**
                     * <p>数据日期</p><p>参数格式：YYYY-MM-DD</p>
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * <p>资源点套餐内用量</p>
                     */
                    double m_deductValue;
                    bool m_deductValueHasBeenSet;

                    /**
                     * <p>资源点资源包用量</p>
                     */
                    double m_packageDeductValue;
                    bool m_packageDeductValueHasBeenSet;

                    /**
                     * <p>资源点按量用量</p>
                     */
                    double m_reportValue;
                    bool m_reportValueHasBeenSet;

                    /**
                     * <p>资源点原价消耗</p>
                     */
                    double m_originCredits;
                    bool m_originCreditsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_PLATFORMCREDITSUSAGEDAILY_H_
