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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_MODIFYWHITEBOARDBUCKETCONFIGREQUEST_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_MODIFYWHITEBOARDBUCKETCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiw
    {
        namespace V20190919
        {
            namespace Model
            {
                /**
                * ModifyWhiteboardBucketConfig请求参数结构体
                */
                class ModifyWhiteboardBucketConfigRequest : public AbstractModel
                {
                public:
                    ModifyWhiteboardBucketConfigRequest();
                    ~ModifyWhiteboardBucketConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取客户的SdkAppId
                     * @return SdkAppId 客户的SdkAppId
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置客户的SdkAppId
                     * @param SdkAppId 客户的SdkAppId
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取需要查询的任务类型
recording: 实时录制
transcode: 文档转码
                     * @return TaskType 需要查询的任务类型
recording: 实时录制
transcode: 文档转码
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置需要查询的任务类型
recording: 实时录制
transcode: 文档转码
                     * @param TaskType 需要查询的任务类型
recording: 实时录制
transcode: 文档转码
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取COS存储桶名字
                     * @return BucketName COS存储桶名字
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置COS存储桶名字
                     * @param BucketName COS存储桶名字
                     */
                    void SetBucketName(const std::string& _bucketName);

                    /**
                     * 判断参数 BucketName 是否已赋值
                     * @return BucketName 是否已赋值
                     */
                    bool BucketNameHasBeenSet() const;

                    /**
                     * 获取COS存储桶地域
                     * @return BucketLocation COS存储桶地域
                     */
                    std::string GetBucketLocation() const;

                    /**
                     * 设置COS存储桶地域
                     * @param BucketLocation COS存储桶地域
                     */
                    void SetBucketLocation(const std::string& _bucketLocation);

                    /**
                     * 判断参数 BucketLocation 是否已赋值
                     * @return BucketLocation 是否已赋值
                     */
                    bool BucketLocationHasBeenSet() const;

                    /**
                     * 获取存储桶里资源前缀
                     * @return BucketPrefix 存储桶里资源前缀
                     */
                    std::string GetBucketPrefix() const;

                    /**
                     * 设置存储桶里资源前缀
                     * @param BucketPrefix 存储桶里资源前缀
                     */
                    void SetBucketPrefix(const std::string& _bucketPrefix);

                    /**
                     * 判断参数 BucketPrefix 是否已赋值
                     * @return BucketPrefix 是否已赋值
                     */
                    bool BucketPrefixHasBeenSet() const;

                    /**
                     * 获取返回Url域名
                     * @return ResultDomain 返回Url域名
                     */
                    std::string GetResultDomain() const;

                    /**
                     * 设置返回Url域名
                     * @param ResultDomain 返回Url域名
                     */
                    void SetResultDomain(const std::string& _resultDomain);

                    /**
                     * 判断参数 ResultDomain 是否已赋值
                     * @return ResultDomain 是否已赋值
                     */
                    bool ResultDomainHasBeenSet() const;

                private:

                    /**
                     * 客户的SdkAppId
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 需要查询的任务类型
recording: 实时录制
transcode: 文档转码
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * COS存储桶名字
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * COS存储桶地域
                     */
                    std::string m_bucketLocation;
                    bool m_bucketLocationHasBeenSet;

                    /**
                     * 存储桶里资源前缀
                     */
                    std::string m_bucketPrefix;
                    bool m_bucketPrefixHasBeenSet;

                    /**
                     * 返回Url域名
                     */
                    std::string m_resultDomain;
                    bool m_resultDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_MODIFYWHITEBOARDBUCKETCONFIGREQUEST_H_
