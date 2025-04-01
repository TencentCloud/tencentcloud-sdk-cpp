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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_LICENSESERVICENUMINFO_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_LICENSESERVICENUMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/TWeCallLicenseInfo.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * 增值服务数量统计
                */
                class LicenseServiceNumInfo : public AbstractModel
                {
                public:
                    LicenseServiceNumInfo();
                    ~LicenseServiceNumInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务类型
                     * @return LicenseType 服务类型
                     * 
                     */
                    std::string GetLicenseType() const;

                    /**
                     * 设置服务类型
                     * @param _licenseType 服务类型
                     * 
                     */
                    void SetLicenseType(const std::string& _licenseType);

                    /**
                     * 判断参数 LicenseType 是否已赋值
                     * @return LicenseType 是否已赋值
                     * 
                     */
                    bool LicenseTypeHasBeenSet() const;

                    /**
                     * 获取授权总数
                     * @return TotalNum 授权总数
                     * 
                     */
                    int64_t GetTotalNum() const;

                    /**
                     * 设置授权总数
                     * @param _totalNum 授权总数
                     * 
                     */
                    void SetTotalNum(const int64_t& _totalNum);

                    /**
                     * 判断参数 TotalNum 是否已赋值
                     * @return TotalNum 是否已赋值
                     * 
                     */
                    bool TotalNumHasBeenSet() const;

                    /**
                     * 获取已使用授权数
                     * @return UsedNum 已使用授权数
                     * 
                     */
                    int64_t GetUsedNum() const;

                    /**
                     * 设置已使用授权数
                     * @param _usedNum 已使用授权数
                     * 
                     */
                    void SetUsedNum(const int64_t& _usedNum);

                    /**
                     * 判断参数 UsedNum 是否已赋值
                     * @return UsedNum 是否已赋值
                     * 
                     */
                    bool UsedNumHasBeenSet() const;

                    /**
                     * 获取TWeCall激活码
                     * @return TWeCallLicense TWeCall激活码
                     * 
                     */
                    std::vector<TWeCallLicenseInfo> GetTWeCallLicense() const;

                    /**
                     * 设置TWeCall激活码
                     * @param _tWeCallLicense TWeCall激活码
                     * 
                     */
                    void SetTWeCallLicense(const std::vector<TWeCallLicenseInfo>& _tWeCallLicense);

                    /**
                     * 判断参数 TWeCallLicense 是否已赋值
                     * @return TWeCallLicense 是否已赋值
                     * 
                     */
                    bool TWeCallLicenseHasBeenSet() const;

                private:

                    /**
                     * 服务类型
                     */
                    std::string m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * 授权总数
                     */
                    int64_t m_totalNum;
                    bool m_totalNumHasBeenSet;

                    /**
                     * 已使用授权数
                     */
                    int64_t m_usedNum;
                    bool m_usedNumHasBeenSet;

                    /**
                     * TWeCall激活码
                     */
                    std::vector<TWeCallLicenseInfo> m_tWeCallLicense;
                    bool m_tWeCallLicenseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_LICENSESERVICENUMINFO_H_
