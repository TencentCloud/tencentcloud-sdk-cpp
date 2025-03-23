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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_DOCKER_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_DOCKER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Docker容器信息
                */
                class Docker : public AbstractModel
                {
                public:
                    Docker();
                    ~Docker() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Docker Hub填写“[user/repo]:[tag]”，Tencent Registry填写“ccr.ccs.tencentyun.com/[namespace/repo]:[tag]”
                     * @return Image Docker Hub填写“[user/repo]:[tag]”，Tencent Registry填写“ccr.ccs.tencentyun.com/[namespace/repo]:[tag]”
                     * 
                     */
                    std::string GetImage() const;

                    /**
                     * 设置Docker Hub填写“[user/repo]:[tag]”，Tencent Registry填写“ccr.ccs.tencentyun.com/[namespace/repo]:[tag]”
                     * @param _image Docker Hub填写“[user/repo]:[tag]”，Tencent Registry填写“ccr.ccs.tencentyun.com/[namespace/repo]:[tag]”
                     * 
                     */
                    void SetImage(const std::string& _image);

                    /**
                     * 判断参数 Image 是否已赋值
                     * @return Image 是否已赋值
                     * 
                     */
                    bool ImageHasBeenSet() const;

                    /**
                     * 获取Docker Hub 用户名或 Tencent Registry 用户名；公共镜像可不填写此参数。
                     * @return User Docker Hub 用户名或 Tencent Registry 用户名；公共镜像可不填写此参数。
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置Docker Hub 用户名或 Tencent Registry 用户名；公共镜像可不填写此参数。
                     * @param _user Docker Hub 用户名或 Tencent Registry 用户名；公共镜像可不填写此参数。
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取Docker Hub 密码或 Tencent Registry 密码；公共镜像可不填写此参数。
                     * @return Password Docker Hub 密码或 Tencent Registry 密码；公共镜像可不填写此参数。
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置Docker Hub 密码或 Tencent Registry 密码；公共镜像可不填写此参数。
                     * @param _password Docker Hub 密码或 Tencent Registry 密码；公共镜像可不填写此参数。
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取Docker Hub 可以不填，但确保具有公网访问能力。或者是 Tencent Registry 服务地址“ccr.ccs.tencentyun.com”
                     * @return Server Docker Hub 可以不填，但确保具有公网访问能力。或者是 Tencent Registry 服务地址“ccr.ccs.tencentyun.com”
                     * 
                     */
                    std::string GetServer() const;

                    /**
                     * 设置Docker Hub 可以不填，但确保具有公网访问能力。或者是 Tencent Registry 服务地址“ccr.ccs.tencentyun.com”
                     * @param _server Docker Hub 可以不填，但确保具有公网访问能力。或者是 Tencent Registry 服务地址“ccr.ccs.tencentyun.com”
                     * 
                     */
                    void SetServer(const std::string& _server);

                    /**
                     * 判断参数 Server 是否已赋值
                     * @return Server 是否已赋值
                     * 
                     */
                    bool ServerHasBeenSet() const;

                    /**
                     * 获取拉取Docker镜像重试次数。默认值：0。
                     * @return MaxRetryCount 拉取Docker镜像重试次数。默认值：0。
                     * 
                     */
                    uint64_t GetMaxRetryCount() const;

                    /**
                     * 设置拉取Docker镜像重试次数。默认值：0。
                     * @param _maxRetryCount 拉取Docker镜像重试次数。默认值：0。
                     * 
                     */
                    void SetMaxRetryCount(const uint64_t& _maxRetryCount);

                    /**
                     * 判断参数 MaxRetryCount 是否已赋值
                     * @return MaxRetryCount 是否已赋值
                     * 
                     */
                    bool MaxRetryCountHasBeenSet() const;

                    /**
                     * 获取拉取Docker镜像失败时延迟时间。单位：秒。
                     * @return DelayOnRetry 拉取Docker镜像失败时延迟时间。单位：秒。
                     * 
                     */
                    uint64_t GetDelayOnRetry() const;

                    /**
                     * 设置拉取Docker镜像失败时延迟时间。单位：秒。
                     * @param _delayOnRetry 拉取Docker镜像失败时延迟时间。单位：秒。
                     * 
                     */
                    void SetDelayOnRetry(const uint64_t& _delayOnRetry);

                    /**
                     * 判断参数 DelayOnRetry 是否已赋值
                     * @return DelayOnRetry 是否已赋值
                     * 
                     */
                    bool DelayOnRetryHasBeenSet() const;

                    /**
                     * 获取Docker命令运行参数。
                     * @return DockerRunOption Docker命令运行参数。
                     * 
                     */
                    std::string GetDockerRunOption() const;

                    /**
                     * 设置Docker命令运行参数。
                     * @param _dockerRunOption Docker命令运行参数。
                     * 
                     */
                    void SetDockerRunOption(const std::string& _dockerRunOption);

                    /**
                     * 判断参数 DockerRunOption 是否已赋值
                     * @return DockerRunOption 是否已赋值
                     * 
                     */
                    bool DockerRunOptionHasBeenSet() const;

                private:

                    /**
                     * Docker Hub填写“[user/repo]:[tag]”，Tencent Registry填写“ccr.ccs.tencentyun.com/[namespace/repo]:[tag]”
                     */
                    std::string m_image;
                    bool m_imageHasBeenSet;

                    /**
                     * Docker Hub 用户名或 Tencent Registry 用户名；公共镜像可不填写此参数。
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * Docker Hub 密码或 Tencent Registry 密码；公共镜像可不填写此参数。
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * Docker Hub 可以不填，但确保具有公网访问能力。或者是 Tencent Registry 服务地址“ccr.ccs.tencentyun.com”
                     */
                    std::string m_server;
                    bool m_serverHasBeenSet;

                    /**
                     * 拉取Docker镜像重试次数。默认值：0。
                     */
                    uint64_t m_maxRetryCount;
                    bool m_maxRetryCountHasBeenSet;

                    /**
                     * 拉取Docker镜像失败时延迟时间。单位：秒。
                     */
                    uint64_t m_delayOnRetry;
                    bool m_delayOnRetryHasBeenSet;

                    /**
                     * Docker命令运行参数。
                     */
                    std::string m_dockerRunOption;
                    bool m_dockerRunOptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_DOCKER_H_
