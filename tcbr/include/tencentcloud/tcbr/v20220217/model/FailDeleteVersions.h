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

#ifndef TENCENTCLOUD_TCBR_V20220217_MODEL_FAILDELETEVERSIONS_H_
#define TENCENTCLOUD_TCBR_V20220217_MODEL_FAILDELETEVERSIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcbr/v20220217/model/SimpleVersion.h>


namespace TencentCloud
{
    namespace Tcbr
    {
        namespace V20220217
        {
            namespace Model
            {
                /**
                * 删除失败版本信息
                */
                class FailDeleteVersions : public AbstractModel
                {
                public:
                    FailDeleteVersions();
                    ~FailDeleteVersions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取删除失败版本信息
                     * @return Version 删除失败版本信息
                     * 
                     */
                    SimpleVersion GetVersion() const;

                    /**
                     * 设置删除失败版本信息
                     * @param _version 删除失败版本信息
                     * 
                     */
                    void SetVersion(const SimpleVersion& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取删除失败错误码
                     * @return ErrorCode 删除失败错误码
                     * 
                     */
                    int64_t GetErrorCode() const;

                    /**
                     * 设置删除失败错误码
                     * @param _errorCode 删除失败错误码
                     * 
                     */
                    void SetErrorCode(const int64_t& _errorCode);

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取删除失败错误信息
                     * @return ErrorMsg 删除失败错误信息
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 设置删除失败错误信息
                     * @param _errorMsg 删除失败错误信息
                     * 
                     */
                    void SetErrorMsg(const std::string& _errorMsg);

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                    /**
                     * 获取删除操作 RequestId
                     * @return RequestId 删除操作 RequestId
                     * 
                     */
                    std::string GetRequestId() const;

                    /**
                     * 设置删除操作 RequestId
                     * @param _requestId 删除操作 RequestId
                     * 
                     */
                    void SetRequestId(const std::string& _requestId);

                    /**
                     * 判断参数 RequestId 是否已赋值
                     * @return RequestId 是否已赋值
                     * 
                     */
                    bool RequestIdHasBeenSet() const;

                private:

                    /**
                     * 删除失败版本信息
                     */
                    SimpleVersion m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 删除失败错误码
                     */
                    int64_t m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * 删除失败错误信息
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                    /**
                     * 删除操作 RequestId
                     */
                    std::string m_requestId;
                    bool m_requestIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_FAILDELETEVERSIONS_H_
