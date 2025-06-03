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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEBUCKETLISTREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEBUCKETLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DescribeBucketList请求参数结构体
                */
                class DescribeBucketListRequest : public AbstractModel
                {
                public:
                    DescribeBucketListRequest();
                    ~DescribeBucketListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据源服务商。COS: 腾讯云COS，OSS: 阿里云OSS，OBS:华为云OBS
                     * @return SrcService 数据源服务商。COS: 腾讯云COS，OSS: 阿里云OSS，OBS:华为云OBS
                     * 
                     */
                    std::string GetSrcService() const;

                    /**
                     * 设置数据源服务商。COS: 腾讯云COS，OSS: 阿里云OSS，OBS:华为云OBS
                     * @param _srcService 数据源服务商。COS: 腾讯云COS，OSS: 阿里云OSS，OBS:华为云OBS
                     * 
                     */
                    void SetSrcService(const std::string& _srcService);

                    /**
                     * 判断参数 SrcService 是否已赋值
                     * @return SrcService 是否已赋值
                     * 
                     */
                    bool SrcServiceHasBeenSet() const;

                    /**
                     * 获取数据源账号的SecretId
                     * @return SrcSecretId 数据源账号的SecretId
                     * 
                     */
                    std::string GetSrcSecretId() const;

                    /**
                     * 设置数据源账号的SecretId
                     * @param _srcSecretId 数据源账号的SecretId
                     * 
                     */
                    void SetSrcSecretId(const std::string& _srcSecretId);

                    /**
                     * 判断参数 SrcSecretId 是否已赋值
                     * @return SrcSecretId 是否已赋值
                     * 
                     */
                    bool SrcSecretIdHasBeenSet() const;

                    /**
                     * 获取数据源账号的SecretKey
                     * @return SrcSecretKey 数据源账号的SecretKey
                     * 
                     */
                    std::string GetSrcSecretKey() const;

                    /**
                     * 设置数据源账号的SecretKey
                     * @param _srcSecretKey 数据源账号的SecretKey
                     * 
                     */
                    void SetSrcSecretKey(const std::string& _srcSecretKey);

                    /**
                     * 判断参数 SrcSecretKey 是否已赋值
                     * @return SrcSecretKey 是否已赋值
                     * 
                     */
                    bool SrcSecretKeyHasBeenSet() const;

                private:

                    /**
                     * 数据源服务商。COS: 腾讯云COS，OSS: 阿里云OSS，OBS:华为云OBS
                     */
                    std::string m_srcService;
                    bool m_srcServiceHasBeenSet;

                    /**
                     * 数据源账号的SecretId
                     */
                    std::string m_srcSecretId;
                    bool m_srcSecretIdHasBeenSet;

                    /**
                     * 数据源账号的SecretKey
                     */
                    std::string m_srcSecretKey;
                    bool m_srcSecretKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_DESCRIBEBUCKETLISTREQUEST_H_
