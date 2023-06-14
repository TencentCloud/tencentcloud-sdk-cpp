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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_DESCRIBEAPKDETECTIONRESULTREQUEST_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_DESCRIBEAPKDETECTIONRESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * DescribeApkDetectionResult请求参数结构体
                */
                class DescribeApkDetectionResultRequest : public AbstractModel
                {
                public:
                    DescribeApkDetectionResultRequest();
                    ~DescribeApkDetectionResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取软件包的下载链接
                     * @return ApkUrl 软件包的下载链接
                     * 
                     */
                    std::string GetApkUrl() const;

                    /**
                     * 设置软件包的下载链接
                     * @param _apkUrl 软件包的下载链接
                     * 
                     */
                    void SetApkUrl(const std::string& _apkUrl);

                    /**
                     * 判断参数 ApkUrl 是否已赋值
                     * @return ApkUrl 是否已赋值
                     * 
                     */
                    bool ApkUrlHasBeenSet() const;

                    /**
                     * 获取软件包的md5值，具有唯一性。腾讯APK云检测服务会根据md5值来判断该包是否为库中已收集的样本，已存在，则返回检测结果，反之，需要一定时间检测该样本。
                     * @return ApkMd5 软件包的md5值，具有唯一性。腾讯APK云检测服务会根据md5值来判断该包是否为库中已收集的样本，已存在，则返回检测结果，反之，需要一定时间检测该样本。
                     * 
                     */
                    std::string GetApkMd5() const;

                    /**
                     * 设置软件包的md5值，具有唯一性。腾讯APK云检测服务会根据md5值来判断该包是否为库中已收集的样本，已存在，则返回检测结果，反之，需要一定时间检测该样本。
                     * @param _apkMd5 软件包的md5值，具有唯一性。腾讯APK云检测服务会根据md5值来判断该包是否为库中已收集的样本，已存在，则返回检测结果，反之，需要一定时间检测该样本。
                     * 
                     */
                    void SetApkMd5(const std::string& _apkMd5);

                    /**
                     * 判断参数 ApkMd5 是否已赋值
                     * @return ApkMd5 是否已赋值
                     * 
                     */
                    bool ApkMd5HasBeenSet() const;

                private:

                    /**
                     * 软件包的下载链接
                     */
                    std::string m_apkUrl;
                    bool m_apkUrlHasBeenSet;

                    /**
                     * 软件包的md5值，具有唯一性。腾讯APK云检测服务会根据md5值来判断该包是否为库中已收集的样本，已存在，则返回检测结果，反之，需要一定时间检测该样本。
                     */
                    std::string m_apkMd5;
                    bool m_apkMd5HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_DESCRIBEAPKDETECTIONRESULTREQUEST_H_
