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

#ifndef TENCENTCLOUD_DRM_V20181115_MODEL_STARTENCRYPTIONREQUEST_H_
#define TENCENTCLOUD_DRM_V20181115_MODEL_STARTENCRYPTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/drm/v20181115/model/DrmSourceObject.h>
#include <tencentcloud/drm/v20181115/model/DrmOutputObject.h>


namespace TencentCloud
{
    namespace Drm
    {
        namespace V20181115
        {
            namespace Model
            {
                /**
                * StartEncryption请求参数结构体
                */
                class StartEncryptionRequest : public AbstractModel
                {
                public:
                    StartEncryptionRequest();
                    ~StartEncryptionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取cos的end point。
                     * @return CosEndPoint cos的end point。
                     * 
                     */
                    std::string GetCosEndPoint() const;

                    /**
                     * 设置cos的end point。
                     * @param _cosEndPoint cos的end point。
                     * 
                     */
                    void SetCosEndPoint(const std::string& _cosEndPoint);

                    /**
                     * 判断参数 CosEndPoint 是否已赋值
                     * @return CosEndPoint 是否已赋值
                     * 
                     */
                    bool CosEndPointHasBeenSet() const;

                    /**
                     * 获取cos api密钥id。
                     * @return CosSecretId cos api密钥id。
                     * 
                     */
                    std::string GetCosSecretId() const;

                    /**
                     * 设置cos api密钥id。
                     * @param _cosSecretId cos api密钥id。
                     * 
                     */
                    void SetCosSecretId(const std::string& _cosSecretId);

                    /**
                     * 判断参数 CosSecretId 是否已赋值
                     * @return CosSecretId 是否已赋值
                     * 
                     */
                    bool CosSecretIdHasBeenSet() const;

                    /**
                     * 获取cos api密钥。
                     * @return CosSecretKey cos api密钥。
                     * 
                     */
                    std::string GetCosSecretKey() const;

                    /**
                     * 设置cos api密钥。
                     * @param _cosSecretKey cos api密钥。
                     * 
                     */
                    void SetCosSecretKey(const std::string& _cosSecretKey);

                    /**
                     * 判断参数 CosSecretKey 是否已赋值
                     * @return CosSecretKey 是否已赋值
                     * 
                     */
                    bool CosSecretKeyHasBeenSet() const;

                    /**
                     * 获取使用的DRM方案类型，接口取值WIDEVINE,FAIRPLAY
                     * @return DrmType 使用的DRM方案类型，接口取值WIDEVINE,FAIRPLAY
                     * 
                     */
                    std::string GetDrmType() const;

                    /**
                     * 设置使用的DRM方案类型，接口取值WIDEVINE,FAIRPLAY
                     * @param _drmType 使用的DRM方案类型，接口取值WIDEVINE,FAIRPLAY
                     * 
                     */
                    void SetDrmType(const std::string& _drmType);

                    /**
                     * 判断参数 DrmType 是否已赋值
                     * @return DrmType 是否已赋值
                     * 
                     */
                    bool DrmTypeHasBeenSet() const;

                    /**
                     * 获取存储在COS上的原始内容信息
                     * @return SourceObject 存储在COS上的原始内容信息
                     * 
                     */
                    DrmSourceObject GetSourceObject() const;

                    /**
                     * 设置存储在COS上的原始内容信息
                     * @param _sourceObject 存储在COS上的原始内容信息
                     * 
                     */
                    void SetSourceObject(const DrmSourceObject& _sourceObject);

                    /**
                     * 判断参数 SourceObject 是否已赋值
                     * @return SourceObject 是否已赋值
                     * 
                     */
                    bool SourceObjectHasBeenSet() const;

                    /**
                     * 获取加密后的内容存储到COS的对象
                     * @return OutputObjects 加密后的内容存储到COS的对象
                     * 
                     */
                    std::vector<DrmOutputObject> GetOutputObjects() const;

                    /**
                     * 设置加密后的内容存储到COS的对象
                     * @param _outputObjects 加密后的内容存储到COS的对象
                     * 
                     */
                    void SetOutputObjects(const std::vector<DrmOutputObject>& _outputObjects);

                    /**
                     * 判断参数 OutputObjects 是否已赋值
                     * @return OutputObjects 是否已赋值
                     * 
                     */
                    bool OutputObjectsHasBeenSet() const;

                private:

                    /**
                     * cos的end point。
                     */
                    std::string m_cosEndPoint;
                    bool m_cosEndPointHasBeenSet;

                    /**
                     * cos api密钥id。
                     */
                    std::string m_cosSecretId;
                    bool m_cosSecretIdHasBeenSet;

                    /**
                     * cos api密钥。
                     */
                    std::string m_cosSecretKey;
                    bool m_cosSecretKeyHasBeenSet;

                    /**
                     * 使用的DRM方案类型，接口取值WIDEVINE,FAIRPLAY
                     */
                    std::string m_drmType;
                    bool m_drmTypeHasBeenSet;

                    /**
                     * 存储在COS上的原始内容信息
                     */
                    DrmSourceObject m_sourceObject;
                    bool m_sourceObjectHasBeenSet;

                    /**
                     * 加密后的内容存储到COS的对象
                     */
                    std::vector<DrmOutputObject> m_outputObjects;
                    bool m_outputObjectsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DRM_V20181115_MODEL_STARTENCRYPTIONREQUEST_H_
