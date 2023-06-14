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

#ifndef TENCENTCLOUD_TIW_V20190919_MODEL_WHITEBOARDAPPLICATIONCONFIG_H_
#define TENCENTCLOUD_TIW_V20190919_MODEL_WHITEBOARDAPPLICATIONCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 白板应用配置，包括资源存储桶，域名，回调地址，回调密钥等
                */
                class WhiteboardApplicationConfig : public AbstractModel
                {
                public:
                    WhiteboardApplicationConfig();
                    ~WhiteboardApplicationConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务类型

recording: 实时录制
transcode: 文档转码
                     * @return TaskType 任务类型

recording: 实时录制
transcode: 文档转码
                     * 
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置任务类型

recording: 实时录制
transcode: 文档转码
                     * @param _taskType 任务类型

recording: 实时录制
transcode: 文档转码
                     * 
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取存储桶名字
                     * @return BucketName 存储桶名字
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置存储桶名字
                     * @param _bucketName 存储桶名字
                     * 
                     */
                    void SetBucketName(const std::string& _bucketName);

                    /**
                     * 判断参数 BucketName 是否已赋值
                     * @return BucketName 是否已赋值
                     * 
                     */
                    bool BucketNameHasBeenSet() const;

                    /**
                     * 获取存储桶地域
                     * @return BucketLocation 存储桶地域
                     * 
                     */
                    std::string GetBucketLocation() const;

                    /**
                     * 设置存储桶地域
                     * @param _bucketLocation 存储桶地域
                     * 
                     */
                    void SetBucketLocation(const std::string& _bucketLocation);

                    /**
                     * 判断参数 BucketLocation 是否已赋值
                     * @return BucketLocation 是否已赋值
                     * 
                     */
                    bool BucketLocationHasBeenSet() const;

                    /**
                     * 获取资源在存储桶中的前缀
                     * @return BucketPrefix 资源在存储桶中的前缀
                     * 
                     */
                    std::string GetBucketPrefix() const;

                    /**
                     * 设置资源在存储桶中的前缀
                     * @param _bucketPrefix 资源在存储桶中的前缀
                     * 
                     */
                    void SetBucketPrefix(const std::string& _bucketPrefix);

                    /**
                     * 判断参数 BucketPrefix 是否已赋值
                     * @return BucketPrefix 是否已赋值
                     * 
                     */
                    bool BucketPrefixHasBeenSet() const;

                    /**
                     * 获取目标CDN域名
                     * @return ResultDomain 目标CDN域名
                     * 
                     */
                    std::string GetResultDomain() const;

                    /**
                     * 设置目标CDN域名
                     * @param _resultDomain 目标CDN域名
                     * 
                     */
                    void SetResultDomain(const std::string& _resultDomain);

                    /**
                     * 判断参数 ResultDomain 是否已赋值
                     * @return ResultDomain 是否已赋值
                     * 
                     */
                    bool ResultDomainHasBeenSet() const;

                    /**
                     * 获取回调地址
                     * @return Callback 回调地址
                     * 
                     */
                    std::string GetCallback() const;

                    /**
                     * 设置回调地址
                     * @param _callback 回调地址
                     * 
                     */
                    void SetCallback(const std::string& _callback);

                    /**
                     * 判断参数 Callback 是否已赋值
                     * @return Callback 是否已赋值
                     * 
                     */
                    bool CallbackHasBeenSet() const;

                    /**
                     * 获取回调鉴权密钥
                     * @return CallbackKey 回调鉴权密钥
                     * 
                     */
                    std::string GetCallbackKey() const;

                    /**
                     * 设置回调鉴权密钥
                     * @param _callbackKey 回调鉴权密钥
                     * 
                     */
                    void SetCallbackKey(const std::string& _callbackKey);

                    /**
                     * 判断参数 CallbackKey 是否已赋值
                     * @return CallbackKey 是否已赋值
                     * 
                     */
                    bool CallbackKeyHasBeenSet() const;

                    /**
                     * 获取配置的应用SdkAppId
                     * @return SdkAppId 配置的应用SdkAppId
                     * 
                     */
                    int64_t GetSdkAppId() const;

                    /**
                     * 设置配置的应用SdkAppId
                     * @param _sdkAppId 配置的应用SdkAppId
                     * 
                     */
                    void SetSdkAppId(const int64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取IM管理员UserId
                     * @return AdminUserId IM管理员UserId
                     * 
                     */
                    std::string GetAdminUserId() const;

                    /**
                     * 设置IM管理员UserId
                     * @param _adminUserId IM管理员UserId
                     * 
                     */
                    void SetAdminUserId(const std::string& _adminUserId);

                    /**
                     * 判断参数 AdminUserId 是否已赋值
                     * @return AdminUserId 是否已赋值
                     * 
                     */
                    bool AdminUserIdHasBeenSet() const;

                    /**
                     * 获取IM管理员UserSig
                     * @return AdminUserSig IM管理员UserSig
                     * 
                     */
                    std::string GetAdminUserSig() const;

                    /**
                     * 设置IM管理员UserSig
                     * @param _adminUserSig IM管理员UserSig
                     * 
                     */
                    void SetAdminUserSig(const std::string& _adminUserSig);

                    /**
                     * 判断参数 AdminUserSig 是否已赋值
                     * @return AdminUserSig 是否已赋值
                     * 
                     */
                    bool AdminUserSigHasBeenSet() const;

                private:

                    /**
                     * 任务类型

recording: 实时录制
transcode: 文档转码
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 存储桶名字
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * 存储桶地域
                     */
                    std::string m_bucketLocation;
                    bool m_bucketLocationHasBeenSet;

                    /**
                     * 资源在存储桶中的前缀
                     */
                    std::string m_bucketPrefix;
                    bool m_bucketPrefixHasBeenSet;

                    /**
                     * 目标CDN域名
                     */
                    std::string m_resultDomain;
                    bool m_resultDomainHasBeenSet;

                    /**
                     * 回调地址
                     */
                    std::string m_callback;
                    bool m_callbackHasBeenSet;

                    /**
                     * 回调鉴权密钥
                     */
                    std::string m_callbackKey;
                    bool m_callbackKeyHasBeenSet;

                    /**
                     * 配置的应用SdkAppId
                     */
                    int64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * IM管理员UserId
                     */
                    std::string m_adminUserId;
                    bool m_adminUserIdHasBeenSet;

                    /**
                     * IM管理员UserSig
                     */
                    std::string m_adminUserSig;
                    bool m_adminUserSigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIW_V20190919_MODEL_WHITEBOARDAPPLICATIONCONFIG_H_
