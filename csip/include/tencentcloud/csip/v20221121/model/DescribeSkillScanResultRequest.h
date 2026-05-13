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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESKILLSCANRESULTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESKILLSCANRESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeSkillScanResult请求参数结构体
                */
                class DescribeSkillScanResultRequest : public AbstractModel
                {
                public:
                    DescribeSkillScanResultRequest();
                    ~DescribeSkillScanResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ZIP 文件的 SHA256 Hash
参数格式：sha256:<64位hex>
                     * @return ContentHash ZIP 文件的 SHA256 Hash
参数格式：sha256:<64位hex>
                     * 
                     */
                    std::string GetContentHash() const;

                    /**
                     * 设置ZIP 文件的 SHA256 Hash
参数格式：sha256:<64位hex>
                     * @param _contentHash ZIP 文件的 SHA256 Hash
参数格式：sha256:<64位hex>
                     * 
                     */
                    void SetContentHash(const std::string& _contentHash);

                    /**
                     * 判断参数 ContentHash 是否已赋值
                     * @return ContentHash 是否已赋值
                     * 
                     */
                    bool ContentHashHasBeenSet() const;

                    /**
                     * 获取指定引擎版本号
取值参考：由 CreateSkillScan 接口返回
                     * @return EngineVersion 指定引擎版本号
取值参考：由 CreateSkillScan 接口返回
                     * 
                     */
                    int64_t GetEngineVersion() const;

                    /**
                     * 设置指定引擎版本号
取值参考：由 CreateSkillScan 接口返回
                     * @param _engineVersion 指定引擎版本号
取值参考：由 CreateSkillScan 接口返回
                     * 
                     */
                    void SetEngineVersion(const int64_t& _engineVersion);

                    /**
                     * 判断参数 EngineVersion 是否已赋值
                     * @return EngineVersion 是否已赋值
                     * 
                     */
                    bool EngineVersionHasBeenSet() const;

                    /**
                     * 获取报告签名地址有效期
单位：小时
默认值：8760（1年）
补充说明：对返回的 ReportURL 生效
                     * @return ReportURLExpireHours 报告签名地址有效期
单位：小时
默认值：8760（1年）
补充说明：对返回的 ReportURL 生效
                     * 
                     */
                    int64_t GetReportURLExpireHours() const;

                    /**
                     * 设置报告签名地址有效期
单位：小时
默认值：8760（1年）
补充说明：对返回的 ReportURL 生效
                     * @param _reportURLExpireHours 报告签名地址有效期
单位：小时
默认值：8760（1年）
补充说明：对返回的 ReportURL 生效
                     * 
                     */
                    void SetReportURLExpireHours(const int64_t& _reportURLExpireHours);

                    /**
                     * 判断参数 ReportURLExpireHours 是否已赋值
                     * @return ReportURLExpireHours 是否已赋值
                     * 
                     */
                    bool ReportURLExpireHoursHasBeenSet() const;

                private:

                    /**
                     * ZIP 文件的 SHA256 Hash
参数格式：sha256:<64位hex>
                     */
                    std::string m_contentHash;
                    bool m_contentHashHasBeenSet;

                    /**
                     * 指定引擎版本号
取值参考：由 CreateSkillScan 接口返回
                     */
                    int64_t m_engineVersion;
                    bool m_engineVersionHasBeenSet;

                    /**
                     * 报告签名地址有效期
单位：小时
默认值：8760（1年）
补充说明：对返回的 ReportURL 生效
                     */
                    int64_t m_reportURLExpireHours;
                    bool m_reportURLExpireHoursHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBESKILLSCANRESULTREQUEST_H_
