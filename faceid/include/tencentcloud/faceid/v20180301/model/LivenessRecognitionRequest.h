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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_LIVENESSRECOGNITIONREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_LIVENESSRECOGNITIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/Encryption.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * LivenessRecognition请求参数结构体
                */
                class LivenessRecognitionRequest : public AbstractModel
                {
                public:
                    LivenessRecognitionRequest();
                    ~LivenessRecognitionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取身份证号。
                     * @return IdCard 身份证号。
                     * 
                     */
                    std::string GetIdCard() const;

                    /**
                     * 设置身份证号。
                     * @param _idCard 身份证号。
                     * 
                     */
                    void SetIdCard(const std::string& _idCard);

                    /**
                     * 判断参数 IdCard 是否已赋值
                     * @return IdCard 是否已赋值
                     * 
                     */
                    bool IdCardHasBeenSet() const;

                    /**
                     * 获取姓名。
- 中文请使用UTF-8编码。
                     * @return Name 姓名。
- 中文请使用UTF-8编码。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置姓名。
- 中文请使用UTF-8编码。
                     * @param _name 姓名。
- 中文请使用UTF-8编码。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取活体检测类型。
- 取值：LIP/ACTION/SILENT。
- LIP为数字模式，ACTION为动作模式，SILENT为静默模式，三种模式选择一种传入。
                     * @return LivenessType 活体检测类型。
- 取值：LIP/ACTION/SILENT。
- LIP为数字模式，ACTION为动作模式，SILENT为静默模式，三种模式选择一种传入。
                     * 
                     */
                    std::string GetLivenessType() const;

                    /**
                     * 设置活体检测类型。
- 取值：LIP/ACTION/SILENT。
- LIP为数字模式，ACTION为动作模式，SILENT为静默模式，三种模式选择一种传入。
                     * @param _livenessType 活体检测类型。
- 取值：LIP/ACTION/SILENT。
- LIP为数字模式，ACTION为动作模式，SILENT为静默模式，三种模式选择一种传入。
                     * 
                     */
                    void SetLivenessType(const std::string& _livenessType);

                    /**
                     * 判断参数 LivenessType 是否已赋值
                     * @return LivenessType 是否已赋值
                     * 
                     */
                    bool LivenessTypeHasBeenSet() const;

                    /**
                     * 获取用于活体检测的视频，视频的BASE64值；
BASE64编码后的大小不超过8M，支持mp4、avi、flv格式。
                     * @return VideoBase64 用于活体检测的视频，视频的BASE64值；
BASE64编码后的大小不超过8M，支持mp4、avi、flv格式。
                     * 
                     */
                    std::string GetVideoBase64() const;

                    /**
                     * 设置用于活体检测的视频，视频的BASE64值；
BASE64编码后的大小不超过8M，支持mp4、avi、flv格式。
                     * @param _videoBase64 用于活体检测的视频，视频的BASE64值；
BASE64编码后的大小不超过8M，支持mp4、avi、flv格式。
                     * 
                     */
                    void SetVideoBase64(const std::string& _videoBase64);

                    /**
                     * 判断参数 VideoBase64 是否已赋值
                     * @return VideoBase64 是否已赋值
                     * 
                     */
                    bool VideoBase64HasBeenSet() const;

                    /**
                     * 获取用于活体检测的视频Url 地址。
- 视频下载后经Base64编码不超过 8M，视频下载耗时不超过4S，支持mp4、avi、flv格式。
- 视频的 VideoUrl、VideoBase64 必须提供一个，如果都提供，只使用 VideoBase64。
- 建议视频存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议视频存储于腾讯云。
- 非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * @return VideoUrl 用于活体检测的视频Url 地址。
- 视频下载后经Base64编码不超过 8M，视频下载耗时不超过4S，支持mp4、avi、flv格式。
- 视频的 VideoUrl、VideoBase64 必须提供一个，如果都提供，只使用 VideoBase64。
- 建议视频存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议视频存储于腾讯云。
- 非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * 
                     */
                    std::string GetVideoUrl() const;

                    /**
                     * 设置用于活体检测的视频Url 地址。
- 视频下载后经Base64编码不超过 8M，视频下载耗时不超过4S，支持mp4、avi、flv格式。
- 视频的 VideoUrl、VideoBase64 必须提供一个，如果都提供，只使用 VideoBase64。
- 建议视频存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议视频存储于腾讯云。
- 非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * @param _videoUrl 用于活体检测的视频Url 地址。
- 视频下载后经Base64编码不超过 8M，视频下载耗时不超过4S，支持mp4、avi、flv格式。
- 视频的 VideoUrl、VideoBase64 必须提供一个，如果都提供，只使用 VideoBase64。
- 建议视频存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议视频存储于腾讯云。
- 非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     * 
                     */
                    void SetVideoUrl(const std::string& _videoUrl);

                    /**
                     * 判断参数 VideoUrl 是否已赋值
                     * @return VideoUrl 是否已赋值
                     * 
                     */
                    bool VideoUrlHasBeenSet() const;

                    /**
                     * 获取验证数据。
- 数字模式传参：传数字验证码，验证码需先调用<a href="https://cloud.tencent.com/document/product/1007/31821">获取数字验证码接口</a>得到；
- 动作模式传参：传动作顺序，动作顺序需先调用<a href="https://cloud.tencent.com/document/product/1007/31822">获取动作顺序接口</a>得到；
- 静默模式传参：空。
                     * @return ValidateData 验证数据。
- 数字模式传参：传数字验证码，验证码需先调用<a href="https://cloud.tencent.com/document/product/1007/31821">获取数字验证码接口</a>得到；
- 动作模式传参：传动作顺序，动作顺序需先调用<a href="https://cloud.tencent.com/document/product/1007/31822">获取动作顺序接口</a>得到；
- 静默模式传参：空。
                     * 
                     */
                    std::string GetValidateData() const;

                    /**
                     * 设置验证数据。
- 数字模式传参：传数字验证码，验证码需先调用<a href="https://cloud.tencent.com/document/product/1007/31821">获取数字验证码接口</a>得到；
- 动作模式传参：传动作顺序，动作顺序需先调用<a href="https://cloud.tencent.com/document/product/1007/31822">获取动作顺序接口</a>得到；
- 静默模式传参：空。
                     * @param _validateData 验证数据。
- 数字模式传参：传数字验证码，验证码需先调用<a href="https://cloud.tencent.com/document/product/1007/31821">获取数字验证码接口</a>得到；
- 动作模式传参：传动作顺序，动作顺序需先调用<a href="https://cloud.tencent.com/document/product/1007/31822">获取动作顺序接口</a>得到；
- 静默模式传参：空。
                     * 
                     */
                    void SetValidateData(const std::string& _validateData);

                    /**
                     * 判断参数 ValidateData 是否已赋值
                     * @return ValidateData 是否已赋值
                     * 
                     */
                    bool ValidateDataHasBeenSet() const;

                    /**
                     * 获取额外配置，传入JSON字符串。
- 格式如下：
{
"BestFrameNum": 2  //需要返回多张最佳截图，取值范围2-10
}
                     * @return Optional 额外配置，传入JSON字符串。
- 格式如下：
{
"BestFrameNum": 2  //需要返回多张最佳截图，取值范围2-10
}
                     * 
                     */
                    std::string GetOptional() const;

                    /**
                     * 设置额外配置，传入JSON字符串。
- 格式如下：
{
"BestFrameNum": 2  //需要返回多张最佳截图，取值范围2-10
}
                     * @param _optional 额外配置，传入JSON字符串。
- 格式如下：
{
"BestFrameNum": 2  //需要返回多张最佳截图，取值范围2-10
}
                     * 
                     */
                    void SetOptional(const std::string& _optional);

                    /**
                     * 判断参数 Optional 是否已赋值
                     * @return Optional 是否已赋值
                     * 
                     */
                    bool OptionalHasBeenSet() const;

                    /**
                     * 获取敏感数据加密信息。
- 对传入信息（姓名、身份证号）有加密需求的用户可使用此参数，详情请点击左侧链接。
                     * @return Encryption 敏感数据加密信息。
- 对传入信息（姓名、身份证号）有加密需求的用户可使用此参数，详情请点击左侧链接。
                     * 
                     */
                    Encryption GetEncryption() const;

                    /**
                     * 设置敏感数据加密信息。
- 对传入信息（姓名、身份证号）有加密需求的用户可使用此参数，详情请点击左侧链接。
                     * @param _encryption 敏感数据加密信息。
- 对传入信息（姓名、身份证号）有加密需求的用户可使用此参数，详情请点击左侧链接。
                     * 
                     */
                    void SetEncryption(const Encryption& _encryption);

                    /**
                     * 判断参数 Encryption 是否已赋值
                     * @return Encryption 是否已赋值
                     * 
                     */
                    bool EncryptionHasBeenSet() const;

                private:

                    /**
                     * 身份证号。
                     */
                    std::string m_idCard;
                    bool m_idCardHasBeenSet;

                    /**
                     * 姓名。
- 中文请使用UTF-8编码。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 活体检测类型。
- 取值：LIP/ACTION/SILENT。
- LIP为数字模式，ACTION为动作模式，SILENT为静默模式，三种模式选择一种传入。
                     */
                    std::string m_livenessType;
                    bool m_livenessTypeHasBeenSet;

                    /**
                     * 用于活体检测的视频，视频的BASE64值；
BASE64编码后的大小不超过8M，支持mp4、avi、flv格式。
                     */
                    std::string m_videoBase64;
                    bool m_videoBase64HasBeenSet;

                    /**
                     * 用于活体检测的视频Url 地址。
- 视频下载后经Base64编码不超过 8M，视频下载耗时不超过4S，支持mp4、avi、flv格式。
- 视频的 VideoUrl、VideoBase64 必须提供一个，如果都提供，只使用 VideoBase64。
- 建议视频存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议视频存储于腾讯云。
- 非腾讯云存储的 Url 速度和稳定性可能受一定影响。
                     */
                    std::string m_videoUrl;
                    bool m_videoUrlHasBeenSet;

                    /**
                     * 验证数据。
- 数字模式传参：传数字验证码，验证码需先调用<a href="https://cloud.tencent.com/document/product/1007/31821">获取数字验证码接口</a>得到；
- 动作模式传参：传动作顺序，动作顺序需先调用<a href="https://cloud.tencent.com/document/product/1007/31822">获取动作顺序接口</a>得到；
- 静默模式传参：空。
                     */
                    std::string m_validateData;
                    bool m_validateDataHasBeenSet;

                    /**
                     * 额外配置，传入JSON字符串。
- 格式如下：
{
"BestFrameNum": 2  //需要返回多张最佳截图，取值范围2-10
}
                     */
                    std::string m_optional;
                    bool m_optionalHasBeenSet;

                    /**
                     * 敏感数据加密信息。
- 对传入信息（姓名、身份证号）有加密需求的用户可使用此参数，详情请点击左侧链接。
                     */
                    Encryption m_encryption;
                    bool m_encryptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_LIVENESSRECOGNITIONREQUEST_H_
