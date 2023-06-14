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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_FACEINFO_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_FACEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * 人脸操作信息
                */
                class FaceInfo : public AbstractModel
                {
                public:
                    FaceInfo();
                    ~FaceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取人脸操作错误码
                     * @return ErrorCode 人脸操作错误码
                     * 
                     */
                    std::string GetErrorCode() const;

                    /**
                     * 设置人脸操作错误码
                     * @param _errorCode 人脸操作错误码
                     * 
                     */
                    void SetErrorCode(const std::string& _errorCode);

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取人脸操作结果信息
                     * @return ErrorMsg 人脸操作结果信息
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 设置人脸操作结果信息
                     * @param _errorMsg 人脸操作结果信息
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
                     * 获取人脸唯一标识符
                     * @return FaceId 人脸唯一标识符
                     * 
                     */
                    std::string GetFaceId() const;

                    /**
                     * 设置人脸唯一标识符
                     * @param _faceId 人脸唯一标识符
                     * 
                     */
                    void SetFaceId(const std::string& _faceId);

                    /**
                     * 判断参数 FaceId 是否已赋值
                     * @return FaceId 是否已赋值
                     * 
                     */
                    bool FaceIdHasBeenSet() const;

                    /**
                     * 获取人脸保存地址
                     * @return FaceUrl 人脸保存地址
                     * 
                     */
                    std::string GetFaceUrl() const;

                    /**
                     * 设置人脸保存地址
                     * @param _faceUrl 人脸保存地址
                     * 
                     */
                    void SetFaceUrl(const std::string& _faceUrl);

                    /**
                     * 判断参数 FaceUrl 是否已赋值
                     * @return FaceUrl 是否已赋值
                     * 
                     */
                    bool FaceUrlHasBeenSet() const;

                    /**
                     * 获取人员唯一标识
                     * @return PersonId 人员唯一标识
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置人员唯一标识
                     * @param _personId 人员唯一标识
                     * 
                     */
                    void SetPersonId(const std::string& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     * 
                     */
                    bool PersonIdHasBeenSet() const;

                private:

                    /**
                     * 人脸操作错误码
                     */
                    std::string m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * 人脸操作结果信息
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                    /**
                     * 人脸唯一标识符
                     */
                    std::string m_faceId;
                    bool m_faceIdHasBeenSet;

                    /**
                     * 人脸保存地址
                     */
                    std::string m_faceUrl;
                    bool m_faceUrlHasBeenSet;

                    /**
                     * 人员唯一标识
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_FACEINFO_H_
