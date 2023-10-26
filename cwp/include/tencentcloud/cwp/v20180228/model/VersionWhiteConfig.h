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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VERSIONWHITECONFIG_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VERSIONWHITECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 授权版本白名单配置信息
                */
                class VersionWhiteConfig : public AbstractModel
                {
                public:
                    VersionWhiteConfig();
                    ~VersionWhiteConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取到期天数
                     * @return Deadline 到期天数
                     * 
                     */
                    uint64_t GetDeadline() const;

                    /**
                     * 设置到期天数
                     * @param _deadline 到期天数
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
                     * 获取授权数量
                     * @return LicenseNum 授权数量
                     * 
                     */
                    uint64_t GetLicenseNum() const;

                    /**
                     * 设置授权数量
                     * @param _licenseNum 授权数量
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
                     * 获取是否可申请
                     * @return IsApplyFor 是否可申请
                     * 
                     */
                    bool GetIsApplyFor() const;

                    /**
                     * 设置是否可申请
                     * @param _isApplyFor 是否可申请
                     * 
                     */
                    void SetIsApplyFor(const bool& _isApplyFor);

                    /**
                     * 判断参数 IsApplyFor 是否已赋值
                     * @return IsApplyFor 是否已赋值
                     * 
                     */
                    bool IsApplyForHasBeenSet() const;

                    /**
                     * 获取类型
                     * @return SourceType 类型
                     * 
                     */
                    uint64_t GetSourceType() const;

                    /**
                     * 设置类型
                     * @param _sourceType 类型
                     * 
                     */
                    void SetSourceType(const uint64_t& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                private:

                    /**
                     * 到期天数
                     */
                    uint64_t m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * 授权数量
                     */
                    uint64_t m_licenseNum;
                    bool m_licenseNumHasBeenSet;

                    /**
                     * 是否可申请
                     */
                    bool m_isApplyFor;
                    bool m_isApplyForHasBeenSet;

                    /**
                     * 类型
                     */
                    uint64_t m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VERSIONWHITECONFIG_H_
