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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_VALUEDETAIL_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_VALUEDETAIL_H_

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
                * 资源用量明细结构
                */
                class ValueDetail : public AbstractModel
                {
                public:
                    ValueDetail();
                    ~ValueDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>时间</p>
                     * @return CalcTime <p>时间</p>
                     * 
                     */
                    std::string GetCalcTime() const;

                    /**
                     * 设置<p>时间</p>
                     * @param _calcTime <p>时间</p>
                     * 
                     */
                    void SetCalcTime(const std::string& _calcTime);

                    /**
                     * 判断参数 CalcTime 是否已赋值
                     * @return CalcTime 是否已赋值
                     * 
                     */
                    bool CalcTimeHasBeenSet() const;

                    /**
                     * 获取<p>原始资源用量</p>
                     * @return RawValue <p>原始资源用量</p>
                     * 
                     */
                    int64_t GetRawValue() const;

                    /**
                     * 设置<p>原始资源用量</p>
                     * @param _rawValue <p>原始资源用量</p>
                     * 
                     */
                    void SetRawValue(const int64_t& _rawValue);

                    /**
                     * 判断参数 RawValue 是否已赋值
                     * @return RawValue 是否已赋值
                     * 
                     */
                    bool RawValueHasBeenSet() const;

                    /**
                     * 获取<p>资源点用量</p>
                     * @return CreditsValue <p>资源点用量</p>
                     * 
                     */
                    double GetCreditsValue() const;

                    /**
                     * 设置<p>资源点用量</p>
                     * @param _creditsValue <p>资源点用量</p>
                     * 
                     */
                    void SetCreditsValue(const double& _creditsValue);

                    /**
                     * 判断参数 CreditsValue 是否已赋值
                     * @return CreditsValue 是否已赋值
                     * 
                     */
                    bool CreditsValueHasBeenSet() const;

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

                private:

                    /**
                     * <p>时间</p>
                     */
                    std::string m_calcTime;
                    bool m_calcTimeHasBeenSet;

                    /**
                     * <p>原始资源用量</p>
                     */
                    int64_t m_rawValue;
                    bool m_rawValueHasBeenSet;

                    /**
                     * <p>资源点用量</p>
                     */
                    double m_creditsValue;
                    bool m_creditsValueHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_VALUEDETAIL_H_
