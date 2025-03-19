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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_REPORTMSGRES_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_REPORTMSGRES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * 上报消息结果
                */
                class ReportMsgRes : public AbstractModel
                {
                public:
                    ReportMsgRes();
                    ~ReportMsgRes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取上报消息对应下标的16位标识Id, 即第几个消息

                     * @return ReportId 上报消息对应下标的16位标识Id, 即第几个消息

                     * 
                     */
                    std::string GetReportId() const;

                    /**
                     * 设置上报消息对应下标的16位标识Id, 即第几个消息

                     * @param _reportId 上报消息对应下标的16位标识Id, 即第几个消息

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
                     * 获取上报消息结果，1表示成功推送，0表示推送失败

                     * @return ReportStatus 上报消息结果，1表示成功推送，0表示推送失败

                     * 
                     */
                    int64_t GetReportStatus() const;

                    /**
                     * 设置上报消息结果，1表示成功推送，0表示推送失败

                     * @param _reportStatus 上报消息结果，1表示成功推送，0表示推送失败

                     * 
                     */
                    void SetReportStatus(const int64_t& _reportStatus);

                    /**
                     * 判断参数 ReportStatus 是否已赋值
                     * @return ReportStatus 是否已赋值
                     * 
                     */
                    bool ReportStatusHasBeenSet() const;

                private:

                    /**
                     * 上报消息对应下标的16位标识Id, 即第几个消息

                     */
                    std::string m_reportId;
                    bool m_reportIdHasBeenSet;

                    /**
                     * 上报消息结果，1表示成功推送，0表示推送失败

                     */
                    int64_t m_reportStatus;
                    bool m_reportStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_REPORTMSGRES_H_
