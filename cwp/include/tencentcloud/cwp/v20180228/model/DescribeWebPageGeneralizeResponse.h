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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEWEBPAGEGENERALIZERESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEWEBPAGEGENERALIZERESPONSE_H_

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
                * DescribeWebPageGeneralize返回参数结构体
                */
                class DescribeWebPageGeneralizeResponse : public AbstractModel
                {
                public:
                    DescribeWebPageGeneralizeResponse();
                    ~DescribeWebPageGeneralizeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取防护监测 0 未开启 1 已开启 2 异常
                     * @return ProtectMonitor 防护监测 0 未开启 1 已开启 2 异常
                     * 
                     */
                    uint64_t GetProtectMonitor() const;

                    /**
                     * 判断参数 ProtectMonitor 是否已赋值
                     * @return ProtectMonitor 是否已赋值
                     * 
                     */
                    bool ProtectMonitorHasBeenSet() const;

                    /**
                     * 获取防护目录数
                     * @return ProtectDirNum 防护目录数
                     * 
                     */
                    uint64_t GetProtectDirNum() const;

                    /**
                     * 判断参数 ProtectDirNum 是否已赋值
                     * @return ProtectDirNum 是否已赋值
                     * 
                     */
                    bool ProtectDirNumHasBeenSet() const;

                    /**
                     * 获取防护文件数
                     * @return ProtectFileNum 防护文件数
                     * 
                     */
                    uint64_t GetProtectFileNum() const;

                    /**
                     * 判断参数 ProtectFileNum 是否已赋值
                     * @return ProtectFileNum 是否已赋值
                     * 
                     */
                    bool ProtectFileNumHasBeenSet() const;

                    /**
                     * 获取篡改文件数
                     * @return TamperFileNum 篡改文件数
                     * 
                     */
                    uint64_t GetTamperFileNum() const;

                    /**
                     * 判断参数 TamperFileNum 是否已赋值
                     * @return TamperFileNum 是否已赋值
                     * 
                     */
                    bool TamperFileNumHasBeenSet() const;

                    /**
                     * 获取篡改数
                     * @return TamperNum 篡改数
                     * 
                     */
                    uint64_t GetTamperNum() const;

                    /**
                     * 判断参数 TamperNum 是否已赋值
                     * @return TamperNum 是否已赋值
                     * 
                     */
                    bool TamperNumHasBeenSet() const;

                    /**
                     * 获取今日防护数
                     * @return ProtectToday 今日防护数
                     * 
                     */
                    uint64_t GetProtectToday() const;

                    /**
                     * 判断参数 ProtectToday 是否已赋值
                     * @return ProtectToday 是否已赋值
                     * 
                     */
                    bool ProtectTodayHasBeenSet() const;

                    /**
                     * 获取防护主机数
                     * @return ProtectHostNum 防护主机数
                     * 
                     */
                    uint64_t GetProtectHostNum() const;

                    /**
                     * 判断参数 ProtectHostNum 是否已赋值
                     * @return ProtectHostNum 是否已赋值
                     * 
                     */
                    bool ProtectHostNumHasBeenSet() const;

                private:

                    /**
                     * 防护监测 0 未开启 1 已开启 2 异常
                     */
                    uint64_t m_protectMonitor;
                    bool m_protectMonitorHasBeenSet;

                    /**
                     * 防护目录数
                     */
                    uint64_t m_protectDirNum;
                    bool m_protectDirNumHasBeenSet;

                    /**
                     * 防护文件数
                     */
                    uint64_t m_protectFileNum;
                    bool m_protectFileNumHasBeenSet;

                    /**
                     * 篡改文件数
                     */
                    uint64_t m_tamperFileNum;
                    bool m_tamperFileNumHasBeenSet;

                    /**
                     * 篡改数
                     */
                    uint64_t m_tamperNum;
                    bool m_tamperNumHasBeenSet;

                    /**
                     * 今日防护数
                     */
                    uint64_t m_protectToday;
                    bool m_protectTodayHasBeenSet;

                    /**
                     * 防护主机数
                     */
                    uint64_t m_protectHostNum;
                    bool m_protectHostNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEWEBPAGEGENERALIZERESPONSE_H_
