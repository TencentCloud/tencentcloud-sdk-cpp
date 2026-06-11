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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEIACFILEREPORTRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEIACFILEREPORTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/IaCFileRisk.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeIaCFileReport返回参数结构体
                */
                class DescribeIaCFileReportResponse : public AbstractModel
                {
                public:
                    DescribeIaCFileReportResponse();
                    ~DescribeIaCFileReportResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>检测文件</p>
                     * @return File <p>检测文件</p>
                     * 
                     */
                    std::string GetFile() const;

                    /**
                     * 判断参数 File 是否已赋值
                     * @return File 是否已赋值
                     * 
                     */
                    bool FileHasBeenSet() const;

                    /**
                     * 获取<p>检测状态(0:待扫描,1:检测中,2:已完成,3:检测异常)</p>
                     * @return Status <p>检测状态(0:待扫描,1:检测中,2:已完成,3:检测异常)</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>检测时间</p>
                     * @return ScanTime <p>检测时间</p>
                     * 
                     */
                    std::string GetScanTime() const;

                    /**
                     * 判断参数 ScanTime 是否已赋值
                     * @return ScanTime 是否已赋值
                     * 
                     */
                    bool ScanTimeHasBeenSet() const;

                    /**
                     * 获取<p>风险列表</p>
                     * @return Risks <p>风险列表</p>
                     * 
                     */
                    std::vector<IaCFileRisk> GetRisks() const;

                    /**
                     * 判断参数 Risks 是否已赋值
                     * @return Risks 是否已赋值
                     * 
                     */
                    bool RisksHasBeenSet() const;

                private:

                    /**
                     * <p>检测文件</p>
                     */
                    std::string m_file;
                    bool m_fileHasBeenSet;

                    /**
                     * <p>检测状态(0:待扫描,1:检测中,2:已完成,3:检测异常)</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>检测时间</p>
                     */
                    std::string m_scanTime;
                    bool m_scanTimeHasBeenSet;

                    /**
                     * <p>风险列表</p>
                     */
                    std::vector<IaCFileRisk> m_risks;
                    bool m_risksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEIACFILEREPORTRESPONSE_H_
