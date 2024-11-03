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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_SCANINFO_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_SCANINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/ScanResultInfo.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 新手引导扫描信息
                */
                class ScanInfo : public AbstractModel
                {
                public:
                    ScanInfo();
                    ~ScanInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取进度
                     * @return ScanPercent 进度
                     * 
                     */
                    double GetScanPercent() const;

                    /**
                     * 设置进度
                     * @param _scanPercent 进度
                     * 
                     */
                    void SetScanPercent(const double& _scanPercent);

                    /**
                     * 判断参数 ScanPercent 是否已赋值
                     * @return ScanPercent 是否已赋值
                     * 
                     */
                    bool ScanPercentHasBeenSet() const;

                    /**
                     * 获取扫描结果信息
                     * @return ScanResultInfo 扫描结果信息
                     * 
                     */
                    ScanResultInfo GetScanResultInfo() const;

                    /**
                     * 设置扫描结果信息
                     * @param _scanResultInfo 扫描结果信息
                     * 
                     */
                    void SetScanResultInfo(const ScanResultInfo& _scanResultInfo);

                    /**
                     * 判断参数 ScanResultInfo 是否已赋值
                     * @return ScanResultInfo 是否已赋值
                     * 
                     */
                    bool ScanResultInfoHasBeenSet() const;

                    /**
                     * 获取扫描状态 0扫描中 1完成  2未勾选自动扫描
                     * @return ScanStatus 扫描状态 0扫描中 1完成  2未勾选自动扫描
                     * 
                     */
                    int64_t GetScanStatus() const;

                    /**
                     * 设置扫描状态 0扫描中 1完成  2未勾选自动扫描
                     * @param _scanStatus 扫描状态 0扫描中 1完成  2未勾选自动扫描
                     * 
                     */
                    void SetScanStatus(const int64_t& _scanStatus);

                    /**
                     * 判断参数 ScanStatus 是否已赋值
                     * @return ScanStatus 是否已赋值
                     * 
                     */
                    bool ScanStatusHasBeenSet() const;

                    /**
                     * 获取预计完成时间
                     * @return ScanTime 预计完成时间
                     * 
                     */
                    std::string GetScanTime() const;

                    /**
                     * 设置预计完成时间
                     * @param _scanTime 预计完成时间
                     * 
                     */
                    void SetScanTime(const std::string& _scanTime);

                    /**
                     * 判断参数 ScanTime 是否已赋值
                     * @return ScanTime 是否已赋值
                     * 
                     */
                    bool ScanTimeHasBeenSet() const;

                private:

                    /**
                     * 进度
                     */
                    double m_scanPercent;
                    bool m_scanPercentHasBeenSet;

                    /**
                     * 扫描结果信息
                     */
                    ScanResultInfo m_scanResultInfo;
                    bool m_scanResultInfoHasBeenSet;

                    /**
                     * 扫描状态 0扫描中 1完成  2未勾选自动扫描
                     */
                    int64_t m_scanStatus;
                    bool m_scanStatusHasBeenSet;

                    /**
                     * 预计完成时间
                     */
                    std::string m_scanTime;
                    bool m_scanTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_SCANINFO_H_
