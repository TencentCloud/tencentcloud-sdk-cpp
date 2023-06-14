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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DOWNLOADHELMCHARTRESPONSE_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DOWNLOADHELMCHARTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DownloadHelmChart返回参数结构体
                */
                class DownloadHelmChartResponse : public AbstractModel
                {
                public:
                    DownloadHelmChartResponse();
                    ~DownloadHelmChartResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取临时token
                     * @return TmpToken 临时token
                     * 
                     */
                    std::string GetTmpToken() const;

                    /**
                     * 判断参数 TmpToken 是否已赋值
                     * @return TmpToken 是否已赋值
                     * 
                     */
                    bool TmpTokenHasBeenSet() const;

                    /**
                     * 获取临时的secretId
                     * @return TmpSecretId 临时的secretId
                     * 
                     */
                    std::string GetTmpSecretId() const;

                    /**
                     * 判断参数 TmpSecretId 是否已赋值
                     * @return TmpSecretId 是否已赋值
                     * 
                     */
                    bool TmpSecretIdHasBeenSet() const;

                    /**
                     * 获取临时的secretKey
                     * @return TmpSecretKey 临时的secretKey
                     * 
                     */
                    std::string GetTmpSecretKey() const;

                    /**
                     * 判断参数 TmpSecretKey 是否已赋值
                     * @return TmpSecretKey 是否已赋值
                     * 
                     */
                    bool TmpSecretKeyHasBeenSet() const;

                    /**
                     * 获取存储桶信息
                     * @return Bucket 存储桶信息
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     * 
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return Region 实例ID
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取chart信息
                     * @return Path chart信息
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取开始时间时间戳
                     * @return StartTime 开始时间时间戳
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取token过期时间时间戳
                     * @return ExpiredTime token过期时间时间戳
                     * 
                     */
                    int64_t GetExpiredTime() const;

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                private:

                    /**
                     * 临时token
                     */
                    std::string m_tmpToken;
                    bool m_tmpTokenHasBeenSet;

                    /**
                     * 临时的secretId
                     */
                    std::string m_tmpSecretId;
                    bool m_tmpSecretIdHasBeenSet;

                    /**
                     * 临时的secretKey
                     */
                    std::string m_tmpSecretKey;
                    bool m_tmpSecretKeyHasBeenSet;

                    /**
                     * 存储桶信息
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * chart信息
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 开始时间时间戳
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * token过期时间时间戳
                     */
                    int64_t m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DOWNLOADHELMCHARTRESPONSE_H_
