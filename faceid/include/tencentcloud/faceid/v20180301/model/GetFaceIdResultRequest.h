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
                     * 获取<p>SDK人脸核身流程的标识。</p><ul><li>调用<a href="https://cloud.tencent.com/document/product/1007/49198">GetFaceIdToken</a>接口时生成。</li></ul>
                     * @return FaceIdToken <p>SDK人脸核身流程的标识。</p><ul><li>调用<a href="https://cloud.tencent.com/document/product/1007/49198">GetFaceIdToken</a>接口时生成。</li></ul>
                     * 
                     */
                    std::string GetFaceIdToken() const;

                    /**
                     * 设置<p>SDK人脸核身流程的标识。</p><ul><li>调用<a href="https://cloud.tencent.com/document/product/1007/49198">GetFaceIdToken</a>接口时生成。</li></ul>
                     * @param _faceIdToken <p>SDK人脸核身流程的标识。</p><ul><li>调用<a href="https://cloud.tencent.com/document/product/1007/49198">GetFaceIdToken</a>接口时生成。</li></ul>
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
                     * 获取<p>是否需要拉取视频。</p><ul><li>默认false：不需要。</li></ul>
                     * @return IsNeedVideo <p>是否需要拉取视频。</p><ul><li>默认false：不需要。</li></ul>
                     * 
                     */
                    bool GetIsNeedVideo() const;

                    /**
                     * 设置<p>是否需要拉取视频。</p><ul><li>默认false：不需要。</li></ul>
                     * @param _isNeedVideo <p>是否需要拉取视频。</p><ul><li>默认false：不需要。</li></ul>
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
                     * 获取<p>是否需要拉取截帧。</p><ul><li>默认false：不需要。</li></ul>
                     * @return IsNeedBestFrame <p>是否需要拉取截帧。</p><ul><li>默认false：不需要。</li></ul>
                     * 
                     */
                    bool GetIsNeedBestFrame() const;

                    /**
                     * 设置<p>是否需要拉取截帧。</p><ul><li>默认false：不需要。</li></ul>
                     * @param _isNeedBestFrame <p>是否需要拉取截帧。</p><ul><li>默认false：不需要。</li></ul>
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
                     * 获取<p>是否对回包整体进行加密。</p>
                     * @return IsEncryptResponse <p>是否对回包整体进行加密。</p>
                     * 
                     */
                    bool GetIsEncryptResponse() const;

                    /**
                     * 设置<p>是否对回包整体进行加密。</p>
                     * @param _isEncryptResponse <p>是否对回包整体进行加密。</p>
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
                     * 获取<p>是否需要对返回中的敏感信息进行加密。<br>只需指定加密算法Algorithm即可，其余字段传入默认值。</p>
                     * @return Encryption <p>是否需要对返回中的敏感信息进行加密。<br>只需指定加密算法Algorithm即可，其余字段传入默认值。</p>
                     * 
                     */
                    Encryption GetEncryption() const;

                    /**
                     * 设置<p>是否需要对返回中的敏感信息进行加密。<br>只需指定加密算法Algorithm即可，其余字段传入默认值。</p>
                     * @param _encryption <p>是否需要对返回中的敏感信息进行加密。<br>只需指定加密算法Algorithm即可，其余字段传入默认值。</p>
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
                     * <p>SDK人脸核身流程的标识。</p><ul><li>调用<a href="https://cloud.tencent.com/document/product/1007/49198">GetFaceIdToken</a>接口时生成。</li></ul>
                     */
                    std::string m_faceIdToken;
                    bool m_faceIdTokenHasBeenSet;

                    /**
                     * <p>是否需要拉取视频。</p><ul><li>默认false：不需要。</li></ul>
                     */
                    bool m_isNeedVideo;
                    bool m_isNeedVideoHasBeenSet;

                    /**
                     * <p>是否需要拉取截帧。</p><ul><li>默认false：不需要。</li></ul>
                     */
                    bool m_isNeedBestFrame;
                    bool m_isNeedBestFrameHasBeenSet;

                    /**
                     * <p>是否对回包整体进行加密。</p>
                     */
                    bool m_isEncryptResponse;
                    bool m_isEncryptResponseHasBeenSet;

                    /**
                     * <p>是否需要对返回中的敏感信息进行加密。<br>只需指定加密算法Algorithm即可，其余字段传入默认值。</p>
                     */
                    Encryption m_encryption;
                    bool m_encryptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETFACEIDRESULTREQUEST_H_
