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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSMANUALSCANESTIMATETIMEOUTREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSMANUALSCANESTIMATETIMEOUTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeVirusManualScanEstimateTimeout请求参数结构体
                */
                class DescribeVirusManualScanEstimateTimeoutRequest : public AbstractModel
                {
                public:
                    DescribeVirusManualScanEstimateTimeoutRequest();
                    ~DescribeVirusManualScanEstimateTimeoutRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取扫描范围0容器1主机节点
                     * @return ScanRangeType 扫描范围0容器1主机节点
                     * 
                     */
                    uint64_t GetScanRangeType() const;

                    /**
                     * 设置扫描范围0容器1主机节点
                     * @param _scanRangeType 扫描范围0容器1主机节点
                     * 
                     */
                    void SetScanRangeType(const uint64_t& _scanRangeType);

                    /**
                     * 判断参数 ScanRangeType 是否已赋值
                     * @return ScanRangeType 是否已赋值
                     * 
                     */
                    bool ScanRangeTypeHasBeenSet() const;

                    /**
                     * 获取true 全选，false 自选
                     * @return ScanRangeAll true 全选，false 自选
                     * 
                     */
                    bool GetScanRangeAll() const;

                    /**
                     * 设置true 全选，false 自选
                     * @param _scanRangeAll true 全选，false 自选
                     * 
                     */
                    void SetScanRangeAll(const bool& _scanRangeAll);

                    /**
                     * 判断参数 ScanRangeAll 是否已赋值
                     * @return ScanRangeAll 是否已赋值
                     * 
                     */
                    bool ScanRangeAllHasBeenSet() const;

                    /**
                     * 获取自选扫描范围的容器id或者主机id 根据ScanRangeType决定
                     * @return ScanIds 自选扫描范围的容器id或者主机id 根据ScanRangeType决定
                     * 
                     */
                    std::vector<std::string> GetScanIds() const;

                    /**
                     * 设置自选扫描范围的容器id或者主机id 根据ScanRangeType决定
                     * @param _scanIds 自选扫描范围的容器id或者主机id 根据ScanRangeType决定
                     * 
                     */
                    void SetScanIds(const std::vector<std::string>& _scanIds);

                    /**
                     * 判断参数 ScanIds 是否已赋值
                     * @return ScanIds 是否已赋值
                     * 
                     */
                    bool ScanIdsHasBeenSet() const;

                private:

                    /**
                     * 扫描范围0容器1主机节点
                     */
                    uint64_t m_scanRangeType;
                    bool m_scanRangeTypeHasBeenSet;

                    /**
                     * true 全选，false 自选
                     */
                    bool m_scanRangeAll;
                    bool m_scanRangeAllHasBeenSet;

                    /**
                     * 自选扫描范围的容器id或者主机id 根据ScanRangeType决定
                     */
                    std::vector<std::string> m_scanIds;
                    bool m_scanIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVIRUSMANUALSCANESTIMATETIMEOUTREQUEST_H_
