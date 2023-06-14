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

#ifndef TENCENTCLOUD_ZJ_V20190121_MODEL_SMSGETCROWDUPLOADINFORESPONSE_H_
#define TENCENTCLOUD_ZJ_V20190121_MODEL_SMSGETCROWDUPLOADINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/zj/v20190121/model/UploadFansInfoCosInfo.h>


namespace TencentCloud
{
    namespace Zj
    {
        namespace V20190121
        {
            namespace Model
            {
                /**
                * 获取短信人群包上传信息返回
                */
                class SmsGetCrowdUploadInfoResponse : public AbstractModel
                {
                public:
                    SmsGetCrowdUploadInfoResponse();
                    ~SmsGetCrowdUploadInfoResponse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取过期时间
                     * @return ExpiredTime 过期时间
                     * 
                     */
                    uint64_t GetExpiredTime() const;

                    /**
                     * 设置过期时间
                     * @param _expiredTime 过期时间
                     * 
                     */
                    void SetExpiredTime(const uint64_t& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取会话token
                     * @return SessionToken 会话token
                     * 
                     */
                    std::string GetSessionToken() const;

                    /**
                     * 设置会话token
                     * @param _sessionToken 会话token
                     * 
                     */
                    void SetSessionToken(const std::string& _sessionToken);

                    /**
                     * 判断参数 SessionToken 是否已赋值
                     * @return SessionToken 是否已赋值
                     * 
                     */
                    bool SessionTokenHasBeenSet() const;

                    /**
                     * 获取临时密钥id
                     * @return TmpSecretId 临时密钥id
                     * 
                     */
                    std::string GetTmpSecretId() const;

                    /**
                     * 设置临时密钥id
                     * @param _tmpSecretId 临时密钥id
                     * 
                     */
                    void SetTmpSecretId(const std::string& _tmpSecretId);

                    /**
                     * 判断参数 TmpSecretId 是否已赋值
                     * @return TmpSecretId 是否已赋值
                     * 
                     */
                    bool TmpSecretIdHasBeenSet() const;

                    /**
                     * 获取临时密钥
                     * @return TmpSecretKey 临时密钥
                     * 
                     */
                    std::string GetTmpSecretKey() const;

                    /**
                     * 设置临时密钥
                     * @param _tmpSecretKey 临时密钥
                     * 
                     */
                    void SetTmpSecretKey(const std::string& _tmpSecretKey);

                    /**
                     * 判断参数 TmpSecretKey 是否已赋值
                     * @return TmpSecretKey 是否已赋值
                     * 
                     */
                    bool TmpSecretKeyHasBeenSet() const;

                    /**
                     * 获取cos信息
                     * @return CosInfo cos信息
                     * 
                     */
                    UploadFansInfoCosInfo GetCosInfo() const;

                    /**
                     * 设置cos信息
                     * @param _cosInfo cos信息
                     * 
                     */
                    void SetCosInfo(const UploadFansInfoCosInfo& _cosInfo);

                    /**
                     * 判断参数 CosInfo 是否已赋值
                     * @return CosInfo 是否已赋值
                     * 
                     */
                    bool CosInfoHasBeenSet() const;

                private:

                    /**
                     * 过期时间
                     */
                    uint64_t m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * 会话token
                     */
                    std::string m_sessionToken;
                    bool m_sessionTokenHasBeenSet;

                    /**
                     * 临时密钥id
                     */
                    std::string m_tmpSecretId;
                    bool m_tmpSecretIdHasBeenSet;

                    /**
                     * 临时密钥
                     */
                    std::string m_tmpSecretKey;
                    bool m_tmpSecretKeyHasBeenSet;

                    /**
                     * cos信息
                     */
                    UploadFansInfoCosInfo m_cosInfo;
                    bool m_cosInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ZJ_V20190121_MODEL_SMSGETCROWDUPLOADINFORESPONSE_H_
