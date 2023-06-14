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

#ifndef TENCENTCLOUD_BSCA_V20210811_MODEL_LICENSEUNION_H_
#define TENCENTCLOUD_BSCA_V20210811_MODEL_LICENSEUNION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bsca/v20210811/model/LicenseSummary.h>
#include <tencentcloud/bsca/v20210811/model/LicenseDetail.h>


namespace TencentCloud
{
    namespace Bsca
    {
        namespace V20210811
        {
            namespace Model
            {
                /**
                * 许可证详细信息。
                */
                class LicenseUnion : public AbstractModel
                {
                public:
                    LicenseUnion();
                    ~LicenseUnion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取许可证概览信息
                     * @return LicenseSummary 许可证概览信息
                     * 
                     */
                    LicenseSummary GetLicenseSummary() const;

                    /**
                     * 设置许可证概览信息
                     * @param _licenseSummary 许可证概览信息
                     * 
                     */
                    void SetLicenseSummary(const LicenseSummary& _licenseSummary);

                    /**
                     * 判断参数 LicenseSummary 是否已赋值
                     * @return LicenseSummary 是否已赋值
                     * 
                     */
                    bool LicenseSummaryHasBeenSet() const;

                    /**
                     * 获取许可证详细信息
                     * @return LicenseDetail 许可证详细信息
                     * 
                     */
                    LicenseDetail GetLicenseDetail() const;

                    /**
                     * 设置许可证详细信息
                     * @param _licenseDetail 许可证详细信息
                     * 
                     */
                    void SetLicenseDetail(const LicenseDetail& _licenseDetail);

                    /**
                     * 判断参数 LicenseDetail 是否已赋值
                     * @return LicenseDetail 是否已赋值
                     * 
                     */
                    bool LicenseDetailHasBeenSet() const;

                private:

                    /**
                     * 许可证概览信息
                     */
                    LicenseSummary m_licenseSummary;
                    bool m_licenseSummaryHasBeenSet;

                    /**
                     * 许可证详细信息
                     */
                    LicenseDetail m_licenseDetail;
                    bool m_licenseDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BSCA_V20210811_MODEL_LICENSEUNION_H_
