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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_PERSONIMAGEINFO_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_PERSONIMAGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * 自定义人物人脸图片信息
                */
                class PersonImageInfo : public AbstractModel
                {
                public:
                    PersonImageInfo();
                    ~PersonImageInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取人脸图片ID
                     * @return ImageId 人脸图片ID
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置人脸图片ID
                     * @param _imageId 人脸图片ID
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取自定义人脸图片的URL，存储在IVLDCustomPreson存储桶内
                     * @return ImageURL 自定义人脸图片的URL，存储在IVLDCustomPreson存储桶内
                     * 
                     */
                    std::string GetImageURL() const;

                    /**
                     * 设置自定义人脸图片的URL，存储在IVLDCustomPreson存储桶内
                     * @param _imageURL 自定义人脸图片的URL，存储在IVLDCustomPreson存储桶内
                     * 
                     */
                    void SetImageURL(const std::string& _imageURL);

                    /**
                     * 判断参数 ImageURL 是否已赋值
                     * @return ImageURL 是否已赋值
                     * 
                     */
                    bool ImageURLHasBeenSet() const;

                    /**
                     * 获取自定义人脸图片处理错误码
                     * @return ErrorCode 自定义人脸图片处理错误码
                     * 
                     */
                    std::string GetErrorCode() const;

                    /**
                     * 设置自定义人脸图片处理错误码
                     * @param _errorCode 自定义人脸图片处理错误码
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
                     * 获取自定义人脸图片处理错误信息
                     * @return ErrorMsg 自定义人脸图片处理错误信息
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 设置自定义人脸图片处理错误信息
                     * @param _errorMsg 自定义人脸图片处理错误信息
                     * 
                     */
                    void SetErrorMsg(const std::string& _errorMsg);

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                private:

                    /**
                     * 人脸图片ID
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * 自定义人脸图片的URL，存储在IVLDCustomPreson存储桶内
                     */
                    std::string m_imageURL;
                    bool m_imageURLHasBeenSet;

                    /**
                     * 自定义人脸图片处理错误码
                     */
                    std::string m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * 自定义人脸图片处理错误信息
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_PERSONIMAGEINFO_H_
