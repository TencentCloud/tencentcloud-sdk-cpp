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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GETFACEIDRESULTREQUEST_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GETFACEIDRESULTREQUEST_H_

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
                * GetFaceIdResult请求参数结构体
                */
                class GetFaceIdResultRequest : public AbstractModel
                {
                public:
                    GetFaceIdResultRequest();
                    ~GetFaceIdResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取SDK人脸核身流程的标识。
- 调用[GetFaceIdToken](https://cloud.tencent.com/document/product/1007/49198)接口时生成。
                     * @return FaceIdToken SDK人脸核身流程的标识。
- 调用[GetFaceIdToken](https://cloud.tencent.com/document/product/1007/49198)接口时生成。
                     * 
                     */
                    std::string GetFaceIdToken() const;

                    /**
                     * 设置SDK人脸核身流程的标识。
- 调用[GetFaceIdToken](https://cloud.tencent.com/document/product/1007/49198)接口时生成。
                     * @param _faceIdToken SDK人脸核身流程的标识。
- 调用[GetFaceIdToken](https://cloud.tencent.com/document/product/1007/49198)接口时生成。
                     * 
                     */
                    void SetFaceIdToken(const std::string& _faceIdToken);

                    /**
                     * 判断参数 FaceIdToken 是否已赋值
                     * @return FaceIdToken 是否已赋值
                     * 
                     */
                    bool FaceIdTokenHasBeenSet() const;

                    /**
                     * 获取是否需要拉取视频。
- 默认false：不需要。
                     * @return IsNeedVideo 是否需要拉取视频。
- 默认false：不需要。
                     * 
                     */
                    bool GetIsNeedVideo() const;

                    /**
                     * 设置是否需要拉取视频。
- 默认false：不需要。
                     * @param _isNeedVideo 是否需要拉取视频。
- 默认false：不需要。
                     * 
                     */
                    void SetIsNeedVideo(const bool& _isNeedVideo);

                    /**
                     * 判断参数 IsNeedVideo 是否已赋值
                     * @return IsNeedVideo 是否已赋值
                     * 
                     */
                    bool IsNeedVideoHasBeenSet() const;

                    /**
                     * 获取是否需要拉取截帧。
- 默认false：不需要。
                     * @return IsNeedBestFrame 是否需要拉取截帧。
- 默认false：不需要。
                     * 
                     */
                    bool GetIsNeedBestFrame() const;

                    /**
                     * 设置是否需要拉取截帧。
- 默认false：不需要。
                     * @param _isNeedBestFrame 是否需要拉取截帧。
- 默认false：不需要。
                     * 
                     */
                    void SetIsNeedBestFrame(const bool& _isNeedBestFrame);

                    /**
                     * 判断参数 IsNeedBestFrame 是否已赋值
                     * @return IsNeedBestFrame 是否已赋值
                     * 
                     */
                    bool IsNeedBestFrameHasBeenSet() const;

                    /**
                     * 获取是否对回包整体进行加密。
                     * @return IsEncryptResponse 是否对回包整体进行加密。
                     * 
                     */
                    bool GetIsEncryptResponse() const;

                    /**
                     * 设置是否对回包整体进行加密。
                     * @param _isEncryptResponse 是否对回包整体进行加密。
                     * 
                     */
                    void SetIsEncryptResponse(const bool& _isEncryptResponse);

                    /**
                     * 判断参数 IsEncryptResponse 是否已赋值
                     * @return IsEncryptResponse 是否已赋值
                     * 
                     */
                    bool IsEncryptResponseHasBeenSet() const;

                    /**
                     * 获取是否需要对返回中的敏感信息进行加密。  
只需指定加密算法Algorithm即可，其余字段传入默认值。
                     * @return Encryption 是否需要对返回中的敏感信息进行加密。  
只需指定加密算法Algorithm即可，其余字段传入默认值。
                     * 
                     */
                    Encryption GetEncryption() const;

                    /**
                     * 设置是否需要对返回中的敏感信息进行加密。  
只需指定加密算法Algorithm即可，其余字段传入默认值。
                     * @param _encryption 是否需要对返回中的敏感信息进行加密。  
只需指定加密算法Algorithm即可，其余字段传入默认值。
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
                     * SDK人脸核身流程的标识。
- 调用[GetFaceIdToken](https://cloud.tencent.com/document/product/1007/49198)接口时生成。
                     */
                    std::string m_faceIdToken;
                    bool m_faceIdTokenHasBeenSet;

                    /**
                     * 是否需要拉取视频。
- 默认false：不需要。
                     */
                    bool m_isNeedVideo;
                    bool m_isNeedVideoHasBeenSet;

                    /**
                     * 是否需要拉取截帧。
- 默认false：不需要。
                     */
                    bool m_isNeedBestFrame;
                    bool m_isNeedBestFrameHasBeenSet;

                    /**
                     * 是否对回包整体进行加密。
                     */
                    bool m_isEncryptResponse;
                    bool m_isEncryptResponseHasBeenSet;

                    /**
                     * 是否需要对返回中的敏感信息进行加密。  
只需指定加密算法Algorithm即可，其余字段传入默认值。
                     */
                    Encryption m_encryption;
                    bool m_encryptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETFACEIDRESULTREQUEST_H_
