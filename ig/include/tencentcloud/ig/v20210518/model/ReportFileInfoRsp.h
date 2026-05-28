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

#ifndef TENCENTCLOUD_IG_V20210518_MODEL_REPORTFILEINFORSP_H_
#define TENCENTCLOUD_IG_V20210518_MODEL_REPORTFILEINFORSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ig
    {
        namespace V20210518
        {
            namespace Model
            {
                /**
                * 报告文件信息返回
                */
                class ReportFileInfoRsp : public AbstractModel
                {
                public:
                    ReportFileInfoRsp();
                    ~ReportFileInfoRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>报告id</p>
                     * @return ReportId <p>报告id</p>
                     * 
                     */
                    std::string GetReportId() const;

                    /**
                     * 设置<p>报告id</p>
                     * @param _reportId <p>报告id</p>
                     * 
                     */
                    void SetReportId(const std::string& _reportId);

                    /**
                     * 判断参数 ReportId 是否已赋值
                     * @return ReportId 是否已赋值
                     * 
                     */
                    bool ReportIdHasBeenSet() const;

                    /**
                     * 获取<p>是否解析成功</p>
                     * @return IsAnalysis <p>是否解析成功</p>
                     * 
                     */
                    bool GetIsAnalysis() const;

                    /**
                     * 设置<p>是否解析成功</p>
                     * @param _isAnalysis <p>是否解析成功</p>
                     * 
                     */
                    void SetIsAnalysis(const bool& _isAnalysis);

                    /**
                     * 判断参数 IsAnalysis 是否已赋值
                     * @return IsAnalysis 是否已赋值
                     * 
                     */
                    bool IsAnalysisHasBeenSet() const;

                    /**
                     * 获取<p>解析错误信息</p>
                     * @return ErrInfo <p>解析错误信息</p>
                     * 
                     */
                    std::string GetErrInfo() const;

                    /**
                     * 设置<p>解析错误信息</p>
                     * @param _errInfo <p>解析错误信息</p>
                     * 
                     */
                    void SetErrInfo(const std::string& _errInfo);

                    /**
                     * 判断参数 ErrInfo 是否已赋值
                     * @return ErrInfo 是否已赋值
                     * 
                     */
                    bool ErrInfoHasBeenSet() const;

                private:

                    /**
                     * <p>报告id</p>
                     */
                    std::string m_reportId;
                    bool m_reportIdHasBeenSet;

                    /**
                     * <p>是否解析成功</p>
                     */
                    bool m_isAnalysis;
                    bool m_isAnalysisHasBeenSet;

                    /**
                     * <p>解析错误信息</p>
                     */
                    std::string m_errInfo;
                    bool m_errInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IG_V20210518_MODEL_REPORTFILEINFORSP_H_
