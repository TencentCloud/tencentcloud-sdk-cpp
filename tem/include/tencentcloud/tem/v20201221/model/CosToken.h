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

#ifndef TENCENTCLOUD_TEM_V20201221_MODEL_COSTOKEN_H_
#define TENCENTCLOUD_TEM_V20201221_MODEL_COSTOKEN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20201221
        {
            namespace Model
            {
                /**
                * Cos token
                */
                class CosToken : public AbstractModel
                {
                public:
                    CosToken();
                    ~CosToken() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取唯一请求 ID
                     * @return RequestId 唯一请求 ID
                     * 
                     */
                    std::string GetRequestId() const;

                    /**
                     * 设置唯一请求 ID
                     * @param _requestId 唯一请求 ID
                     * 
                     */
                    void SetRequestId(const std::string& _requestId);

                    /**
                     * 判断参数 RequestId 是否已赋值
                     * @return RequestId 是否已赋值
                     * 
                     */
                    bool RequestIdHasBeenSet() const;

                    /**
                     * 获取存储桶桶名
                     * @return Bucket 存储桶桶名
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置存储桶桶名
                     * @param _bucket 存储桶桶名
                     * 
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     * 
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取存储桶所在区域
                     * @return Region 存储桶所在区域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置存储桶所在区域
                     * @param _region 存储桶所在区域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取临时密钥的SecretId
                     * @return TmpSecretId 临时密钥的SecretId
                     * 
                     */
                    std::string GetTmpSecretId() const;

                    /**
                     * 设置临时密钥的SecretId
                     * @param _tmpSecretId 临时密钥的SecretId
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
                     * 获取临时密钥的SecretKey
                     * @return TmpSecretKey 临时密钥的SecretKey
                     * 
                     */
                    std::string GetTmpSecretKey() const;

                    /**
                     * 设置临时密钥的SecretKey
                     * @param _tmpSecretKey 临时密钥的SecretKey
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
                     * 获取临时密钥的 sessionToken
                     * @return SessionToken 临时密钥的 sessionToken
                     * 
                     */
                    std::string GetSessionToken() const;

                    /**
                     * 设置临时密钥的 sessionToken
                     * @param _sessionToken 临时密钥的 sessionToken
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
                     * 获取临时密钥获取的开始时间
                     * @return StartTime 临时密钥获取的开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置临时密钥获取的开始时间
                     * @param _startTime 临时密钥获取的开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取临时密钥的 expiredTime
                     * @return ExpiredTime 临时密钥的 expiredTime
                     * 
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 设置临时密钥的 expiredTime
                     * @param _expiredTime 临时密钥的 expiredTime
                     * 
                     */
                    void SetExpiredTime(const std::string& _expiredTime);

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取包完整路径
                     * @return FullPath 包完整路径
                     * 
                     */
                    std::string GetFullPath() const;

                    /**
                     * 设置包完整路径
                     * @param _fullPath 包完整路径
                     * 
                     */
                    void SetFullPath(const std::string& _fullPath);

                    /**
                     * 判断参数 FullPath 是否已赋值
                     * @return FullPath 是否已赋值
                     * 
                     */
                    bool FullPathHasBeenSet() const;

                private:

                    /**
                     * 唯一请求 ID
                     */
                    std::string m_requestId;
                    bool m_requestIdHasBeenSet;

                    /**
                     * 存储桶桶名
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * 存储桶所在区域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 临时密钥的SecretId
                     */
                    std::string m_tmpSecretId;
                    bool m_tmpSecretIdHasBeenSet;

                    /**
                     * 临时密钥的SecretKey
                     */
                    std::string m_tmpSecretKey;
                    bool m_tmpSecretKeyHasBeenSet;

                    /**
                     * 临时密钥的 sessionToken
                     */
                    std::string m_sessionToken;
                    bool m_sessionTokenHasBeenSet;

                    /**
                     * 临时密钥获取的开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 临时密钥的 expiredTime
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * 包完整路径
                     */
                    std::string m_fullPath;
                    bool m_fullPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20201221_MODEL_COSTOKEN_H_
