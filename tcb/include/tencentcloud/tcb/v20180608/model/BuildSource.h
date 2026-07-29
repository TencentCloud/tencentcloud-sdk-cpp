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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_BUILDSOURCE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_BUILDSOURCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 构建触发的源码来源: git,cos,inline
                */
                class BuildSource : public AbstractModel
                {
                public:
                    BuildSource();
                    ~BuildSource() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>源码来源类型，取值：&quot;git&quot; &quot;zip&quot;</p>
                     * @return Type <p>源码来源类型，取值：&quot;git&quot; &quot;zip&quot;</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>源码来源类型，取值：&quot;git&quot; &quot;zip&quot;</p>
                     * @param _type <p>源码来源类型，取值：&quot;git&quot; &quot;zip&quot;</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>Git 仓库 HTTPS URL；或 COS 下载完整 URL；与 CodeUrlWithAuth / CosTimestamp 之一非空（zip 二阶段上传时可留空）</p>
                     * @return Repo <p>Git 仓库 HTTPS URL；或 COS 下载完整 URL；与 CodeUrlWithAuth / CosTimestamp 之一非空（zip 二阶段上传时可留空）</p>
                     * 
                     */
                    std::string GetRepo() const;

                    /**
                     * 设置<p>Git 仓库 HTTPS URL；或 COS 下载完整 URL；与 CodeUrlWithAuth / CosTimestamp 之一非空（zip 二阶段上传时可留空）</p>
                     * @param _repo <p>Git 仓库 HTTPS URL；或 COS 下载完整 URL；与 CodeUrlWithAuth / CosTimestamp 之一非空（zip 二阶段上传时可留空）</p>
                     * 
                     */
                    void SetRepo(const std::string& _repo);

                    /**
                     * 判断参数 Repo 是否已赋值
                     * @return Repo 是否已赋值
                     * 
                     */
                    bool RepoHasBeenSet() const;

                    /**
                     * 获取<p>分支 tag commit；Git 默认 main，zip 模式下忽略</p>
                     * @return Ref <p>分支 tag commit；Git 默认 main，zip 模式下忽略</p>
                     * 
                     */
                    std::string GetRef() const;

                    /**
                     * 设置<p>分支 tag commit；Git 默认 main，zip 模式下忽略</p>
                     * @param _ref <p>分支 tag commit；Git 默认 main，zip 模式下忽略</p>
                     * 
                     */
                    void SetRef(const std::string& _ref);

                    /**
                     * 判断参数 Ref 是否已赋值
                     * @return Ref 是否已赋值
                     * 
                     */
                    bool RefHasBeenSet() const;

                    /**
                     * 获取<p>&quot;git&quot; &quot;github&quot; &quot;gitlab&quot; &quot;gitee&quot; &quot;coding&quot;；私有仓必填，平台据此走 OAuth 鉴权</p>
                     * @return Channel <p>&quot;git&quot; &quot;github&quot; &quot;gitlab&quot; &quot;gitee&quot; &quot;coding&quot;；私有仓必填，平台据此走 OAuth 鉴权</p>
                     * 
                     */
                    std::string GetChannel() const;

                    /**
                     * 设置<p>&quot;git&quot; &quot;github&quot; &quot;gitlab&quot; &quot;gitee&quot; &quot;coding&quot;；私有仓必填，平台据此走 OAuth 鉴权</p>
                     * @param _channel <p>&quot;git&quot; &quot;github&quot; &quot;gitlab&quot; &quot;gitee&quot; &quot;coding&quot;；私有仓必填，平台据此走 OAuth 鉴权</p>
                     * 
                     */
                    void SetChannel(const std::string& _channel);

                    /**
                     * 判断参数 Channel 是否已赋值
                     * @return Channel 是否已赋值
                     * 
                     */
                    bool ChannelHasBeenSet() const;

                    /**
                     * 获取<p>是否私有仓；true 时平台自动注入 CodeUrlWithAuth</p>
                     * @return IsPrivate <p>是否私有仓；true 时平台自动注入 CodeUrlWithAuth</p>
                     * 
                     */
                    bool GetIsPrivate() const;

                    /**
                     * 设置<p>是否私有仓；true 时平台自动注入 CodeUrlWithAuth</p>
                     * @param _isPrivate <p>是否私有仓；true 时平台自动注入 CodeUrlWithAuth</p>
                     * 
                     */
                    void SetIsPrivate(const bool& _isPrivate);

                    /**
                     * 判断参数 IsPrivate 是否已赋值
                     * @return IsPrivate 是否已赋值
                     * 
                     */
                    bool IsPrivateHasBeenSet() const;

                    /**
                     * 获取<p>调用方显式传入的带鉴权 clone URL 或带签名的 zip 下载直链（优先级最高，会覆盖平台 OAuth / 自动签名）</p>
                     * @return CodeUrlWithAuth <p>调用方显式传入的带鉴权 clone URL 或带签名的 zip 下载直链（优先级最高，会覆盖平台 OAuth / 自动签名）</p>
                     * 
                     */
                    std::string GetCodeUrlWithAuth() const;

                    /**
                     * 设置<p>调用方显式传入的带鉴权 clone URL 或带签名的 zip 下载直链（优先级最高，会覆盖平台 OAuth / 自动签名）</p>
                     * @param _codeUrlWithAuth <p>调用方显式传入的带鉴权 clone URL 或带签名的 zip 下载直链（优先级最高，会覆盖平台 OAuth / 自动签名）</p>
                     * 
                     */
                    void SetCodeUrlWithAuth(const std::string& _codeUrlWithAuth);

                    /**
                     * 判断参数 CodeUrlWithAuth 是否已赋值
                     * @return CodeUrlWithAuth 是否已赋值
                     * 
                     */
                    bool CodeUrlWithAuthHasBeenSet() const;

                    /**
                     * 获取<p>仅 Type=zip/cos 时使用。配合 zip 二阶段上传：填 DescribeCloudAppCosInfo 返回的 UnixTimestamp，平台据此自动签名出 ZIP_FILE_URL</p>
                     * @return CosTimestamp <p>仅 Type=zip/cos 时使用。配合 zip 二阶段上传：填 DescribeCloudAppCosInfo 返回的 UnixTimestamp，平台据此自动签名出 ZIP_FILE_URL</p>
                     * 
                     */
                    std::string GetCosTimestamp() const;

                    /**
                     * 设置<p>仅 Type=zip/cos 时使用。配合 zip 二阶段上传：填 DescribeCloudAppCosInfo 返回的 UnixTimestamp，平台据此自动签名出 ZIP_FILE_URL</p>
                     * @param _cosTimestamp <p>仅 Type=zip/cos 时使用。配合 zip 二阶段上传：填 DescribeCloudAppCosInfo 返回的 UnixTimestamp，平台据此自动签名出 ZIP_FILE_URL</p>
                     * 
                     */
                    void SetCosTimestamp(const std::string& _cosTimestamp);

                    /**
                     * 判断参数 CosTimestamp 是否已赋值
                     * @return CosTimestamp 是否已赋值
                     * 
                     */
                    bool CosTimestampHasBeenSet() const;

                    /**
                     * 获取<p>仅 Type=zip/cos 时使用。zip 文件后缀，默认 .zip；与 CosTimestamp 配合定位 COS 对象</p>
                     * @return CosSuffix <p>仅 Type=zip/cos 时使用。zip 文件后缀，默认 .zip；与 CosTimestamp 配合定位 COS 对象</p>
                     * 
                     */
                    std::string GetCosSuffix() const;

                    /**
                     * 设置<p>仅 Type=zip/cos 时使用。zip 文件后缀，默认 .zip；与 CosTimestamp 配合定位 COS 对象</p>
                     * @param _cosSuffix <p>仅 Type=zip/cos 时使用。zip 文件后缀，默认 .zip；与 CosTimestamp 配合定位 COS 对象</p>
                     * 
                     */
                    void SetCosSuffix(const std::string& _cosSuffix);

                    /**
                     * 判断参数 CosSuffix 是否已赋值
                     * @return CosSuffix 是否已赋值
                     * 
                     */
                    bool CosSuffixHasBeenSet() const;

                private:

                    /**
                     * <p>源码来源类型，取值：&quot;git&quot; &quot;zip&quot;</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>Git 仓库 HTTPS URL；或 COS 下载完整 URL；与 CodeUrlWithAuth / CosTimestamp 之一非空（zip 二阶段上传时可留空）</p>
                     */
                    std::string m_repo;
                    bool m_repoHasBeenSet;

                    /**
                     * <p>分支 tag commit；Git 默认 main，zip 模式下忽略</p>
                     */
                    std::string m_ref;
                    bool m_refHasBeenSet;

                    /**
                     * <p>&quot;git&quot; &quot;github&quot; &quot;gitlab&quot; &quot;gitee&quot; &quot;coding&quot;；私有仓必填，平台据此走 OAuth 鉴权</p>
                     */
                    std::string m_channel;
                    bool m_channelHasBeenSet;

                    /**
                     * <p>是否私有仓；true 时平台自动注入 CodeUrlWithAuth</p>
                     */
                    bool m_isPrivate;
                    bool m_isPrivateHasBeenSet;

                    /**
                     * <p>调用方显式传入的带鉴权 clone URL 或带签名的 zip 下载直链（优先级最高，会覆盖平台 OAuth / 自动签名）</p>
                     */
                    std::string m_codeUrlWithAuth;
                    bool m_codeUrlWithAuthHasBeenSet;

                    /**
                     * <p>仅 Type=zip/cos 时使用。配合 zip 二阶段上传：填 DescribeCloudAppCosInfo 返回的 UnixTimestamp，平台据此自动签名出 ZIP_FILE_URL</p>
                     */
                    std::string m_cosTimestamp;
                    bool m_cosTimestampHasBeenSet;

                    /**
                     * <p>仅 Type=zip/cos 时使用。zip 文件后缀，默认 .zip；与 CosTimestamp 配合定位 COS 对象</p>
                     */
                    std::string m_cosSuffix;
                    bool m_cosSuffixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_BUILDSOURCE_H_
