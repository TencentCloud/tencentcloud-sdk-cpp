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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_ERRDESCRIPTION_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_ERRDESCRIPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * 错误信息描述
                */
                class ErrDescription : public AbstractModel
                {
                public:
                    ErrDescription();
                    ~ErrDescription() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取错误码。
                     * @return ErrCode 错误码。
                     * 
                     */
                    std::string GetErrCode() const;

                    /**
                     * 设置错误码。
                     * @param _errCode 错误码。
                     * 
                     */
                    void SetErrCode(const std::string& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取具体错误信息。
                     * @return ErrMessage 具体错误信息。
                     * 
                     */
                    std::string GetErrMessage() const;

                    /**
                     * 设置具体错误信息。
                     * @param _errMessage 具体错误信息。
                     * 
                     */
                    void SetErrMessage(const std::string& _errMessage);

                    /**
                     * 判断参数 ErrMessage 是否已赋值
                     * @return ErrMessage 是否已赋值
                     * 
                     */
                    bool ErrMessageHasBeenSet() const;

                private:

                    /**
                     * 错误码。
                     */
                    std::string m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * 具体错误信息。
                     */
                    std::string m_errMessage;
                    bool m_errMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_ERRDESCRIPTION_H_
