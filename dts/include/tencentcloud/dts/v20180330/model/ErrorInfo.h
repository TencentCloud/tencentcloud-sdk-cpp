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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_ERRORINFO_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_ERRORINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * 迁移任务错误信息及提示
                */
                class ErrorInfo : public AbstractModel
                {
                public:
                    ErrorInfo();
                    ~ErrorInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取具体的报错日志, 包含错误码和错误信息
                     * @return ErrorLog 具体的报错日志, 包含错误码和错误信息
                     * 
                     */
                    std::string GetErrorLog() const;

                    /**
                     * 设置具体的报错日志, 包含错误码和错误信息
                     * @param _errorLog 具体的报错日志, 包含错误码和错误信息
                     * 
                     */
                    void SetErrorLog(const std::string& _errorLog);

                    /**
                     * 判断参数 ErrorLog 是否已赋值
                     * @return ErrorLog 是否已赋值
                     * 
                     */
                    bool ErrorLogHasBeenSet() const;

                    /**
                     * 获取报错对应的帮助文档Ur
                     * @return HelpDoc 报错对应的帮助文档Ur
                     * 
                     */
                    std::string GetHelpDoc() const;

                    /**
                     * 设置报错对应的帮助文档Ur
                     * @param _helpDoc 报错对应的帮助文档Ur
                     * 
                     */
                    void SetHelpDoc(const std::string& _helpDoc);

                    /**
                     * 判断参数 HelpDoc 是否已赋值
                     * @return HelpDoc 是否已赋值
                     * 
                     */
                    bool HelpDocHasBeenSet() const;

                private:

                    /**
                     * 具体的报错日志, 包含错误码和错误信息
                     */
                    std::string m_errorLog;
                    bool m_errorLogHasBeenSet;

                    /**
                     * 报错对应的帮助文档Ur
                     */
                    std::string m_helpDoc;
                    bool m_helpDocHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_ERRORINFO_H_
