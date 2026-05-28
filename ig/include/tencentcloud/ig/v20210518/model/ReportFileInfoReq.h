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

#ifndef TENCENTCLOUD_IG_V20210518_MODEL_REPORTFILEINFOREQ_H_
#define TENCENTCLOUD_IG_V20210518_MODEL_REPORTFILEINFOREQ_H_

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
                * 报告文件信息参数
                */
                class ReportFileInfoReq : public AbstractModel
                {
                public:
                    ReportFileInfoReq();
                    ~ReportFileInfoReq() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>报告文件链接</p>
                     * @return ReportFileUrl <p>报告文件链接</p>
                     * 
                     */
                    std::string GetReportFileUrl() const;

                    /**
                     * 设置<p>报告文件链接</p>
                     * @param _reportFileUrl <p>报告文件链接</p>
                     * 
                     */
                    void SetReportFileUrl(const std::string& _reportFileUrl);

                    /**
                     * 判断参数 ReportFileUrl 是否已赋值
                     * @return ReportFileUrl 是否已赋值
                     * 
                     */
                    bool ReportFileUrlHasBeenSet() const;

                    /**
                     * 获取<p>报告文件类型，1:pdf，2:图片</p>
                     * @return ReportFileType <p>报告文件类型，1:pdf，2:图片</p>
                     * 
                     */
                    int64_t GetReportFileType() const;

                    /**
                     * 设置<p>报告文件类型，1:pdf，2:图片</p>
                     * @param _reportFileType <p>报告文件类型，1:pdf，2:图片</p>
                     * 
                     */
                    void SetReportFileType(const int64_t& _reportFileType);

                    /**
                     * 判断参数 ReportFileType 是否已赋值
                     * @return ReportFileType 是否已赋值
                     * 
                     */
                    bool ReportFileTypeHasBeenSet() const;

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

                private:

                    /**
                     * <p>报告文件链接</p>
                     */
                    std::string m_reportFileUrl;
                    bool m_reportFileUrlHasBeenSet;

                    /**
                     * <p>报告文件类型，1:pdf，2:图片</p>
                     */
                    int64_t m_reportFileType;
                    bool m_reportFileTypeHasBeenSet;

                    /**
                     * <p>报告id</p>
                     */
                    std::string m_reportId;
                    bool m_reportIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IG_V20210518_MODEL_REPORTFILEINFOREQ_H_
