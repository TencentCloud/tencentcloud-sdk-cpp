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

#ifndef TENCENTCLOUD_CR_V20180321_MODEL_DOWNLOADREPORTRESPONSE_H_
#define TENCENTCLOUD_CR_V20180321_MODEL_DOWNLOADREPORTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cr
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * DownloadReport返回参数结构体
                */
                class DownloadReportResponse : public AbstractModel
                {
                public:
                    DownloadReportResponse();
                    ~DownloadReportResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取催收日报下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DailyReportUrl 催收日报下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDailyReportUrl() const;

                    /**
                     * 判断参数 DailyReportUrl 是否已赋值
                     * @return DailyReportUrl 是否已赋值
                     */
                    bool DailyReportUrlHasBeenSet() const;

                    /**
                     * 获取催收结果下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultReportUrl 催收结果下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetResultReportUrl() const;

                    /**
                     * 判断参数 ResultReportUrl 是否已赋值
                     * @return ResultReportUrl 是否已赋值
                     */
                    bool ResultReportUrlHasBeenSet() const;

                    /**
                     * 获取催收明细下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DetailReportUrl 催收明细下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDetailReportUrl() const;

                    /**
                     * 判断参数 DetailReportUrl 是否已赋值
                     * @return DetailReportUrl 是否已赋值
                     */
                    bool DetailReportUrlHasBeenSet() const;

                    /**
                     * 获取回访日报下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CallbackDailyReportUrl 回访日报下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCallbackDailyReportUrl() const;

                    /**
                     * 判断参数 CallbackDailyReportUrl 是否已赋值
                     * @return CallbackDailyReportUrl 是否已赋值
                     */
                    bool CallbackDailyReportUrlHasBeenSet() const;

                    /**
                     * 获取回访结果下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CallbackResultReportUrl 回访结果下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCallbackResultReportUrl() const;

                    /**
                     * 判断参数 CallbackResultReportUrl 是否已赋值
                     * @return CallbackResultReportUrl 是否已赋值
                     */
                    bool CallbackResultReportUrlHasBeenSet() const;

                    /**
                     * 获取回访明细下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CallbackDetailReportUrl 回访明细下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCallbackDetailReportUrl() const;

                    /**
                     * 判断参数 CallbackDetailReportUrl 是否已赋值
                     * @return CallbackDetailReportUrl 是否已赋值
                     */
                    bool CallbackDetailReportUrlHasBeenSet() const;

                private:

                    /**
                     * 催收日报下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dailyReportUrl;
                    bool m_dailyReportUrlHasBeenSet;

                    /**
                     * 催收结果下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resultReportUrl;
                    bool m_resultReportUrlHasBeenSet;

                    /**
                     * 催收明细下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_detailReportUrl;
                    bool m_detailReportUrlHasBeenSet;

                    /**
                     * 回访日报下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_callbackDailyReportUrl;
                    bool m_callbackDailyReportUrlHasBeenSet;

                    /**
                     * 回访结果下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_callbackResultReportUrl;
                    bool m_callbackResultReportUrlHasBeenSet;

                    /**
                     * 回访明细下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_callbackDetailReportUrl;
                    bool m_callbackDetailReportUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CR_V20180321_MODEL_DOWNLOADREPORTRESPONSE_H_
