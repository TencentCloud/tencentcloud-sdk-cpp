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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_VIDEOREDRAWCOSINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_VIDEOREDRAWCOSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * aigc cos信息，存储用户请求时填写的cos信息，存放结果
                */
                class VideoRedrawCosInfo : public AbstractModel
                {
                public:
                    VideoRedrawCosInfo();
                    ~VideoRedrawCosInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>cos所在地域</p>
                     * @return Region <p>cos所在地域</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>cos所在地域</p>
                     * @param _region <p>cos所在地域</p>
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
                     * 获取<p>cos桶信息</p>
                     * @return Bucket <p>cos桶信息</p>
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置<p>cos桶信息</p>
                     * @param _bucket <p>cos桶信息</p>
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
                     * 获取<p>任务存放cos的目录</p>
                     * @return Dir <p>任务存放cos的目录</p>
                     * 
                     */
                    std::string GetDir() const;

                    /**
                     * 设置<p>任务存放cos的目录</p>
                     * @param _dir <p>任务存放cos的目录</p>
                     * 
                     */
                    void SetDir(const std::string& _dir);

                    /**
                     * 判断参数 Dir 是否已赋值
                     * @return Dir 是否已赋值
                     * 
                     */
                    bool DirHasBeenSet() const;

                    /**
                     * 获取<p>临时Cos SecretId</p>
                     * @return TmpSecretId <p>临时Cos SecretId</p>
                     * 
                     */
                    std::string GetTmpSecretId() const;

                    /**
                     * 设置<p>临时Cos SecretId</p>
                     * @param _tmpSecretId <p>临时Cos SecretId</p>
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
                     * 获取<p>临时Cos SecretKey</p>
                     * @return TmpSecretKey <p>临时Cos SecretKey</p>
                     * 
                     */
                    std::string GetTmpSecretKey() const;

                    /**
                     * 设置<p>临时Cos SecretKey</p>
                     * @param _tmpSecretKey <p>临时Cos SecretKey</p>
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
                     * 获取<p>临时token</p>
                     * @return Token <p>临时token</p>
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 设置<p>临时token</p>
                     * @param _token <p>临时token</p>
                     * 
                     */
                    void SetToken(const std::string& _token);

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                private:

                    /**
                     * <p>cos所在地域</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>cos桶信息</p>
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * <p>任务存放cos的目录</p>
                     */
                    std::string m_dir;
                    bool m_dirHasBeenSet;

                    /**
                     * <p>临时Cos SecretId</p>
                     */
                    std::string m_tmpSecretId;
                    bool m_tmpSecretIdHasBeenSet;

                    /**
                     * <p>临时Cos SecretKey</p>
                     */
                    std::string m_tmpSecretKey;
                    bool m_tmpSecretKeyHasBeenSet;

                    /**
                     * <p>临时token</p>
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_VIDEOREDRAWCOSINFO_H_
