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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_AWSS3_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_AWSS3_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * AWS S3 目的地信息。通过 IAM 角色 + External ID 授权 EdgeOne 将实时日志投递至客户的 AWS S3 桶，无需提供长期访问密钥，详情见 [推送至 AWS S3](https://cloud.tencent.com/document/product/1552/96007)。
                */
                class AWSS3 : public AbstractModel
                {
                public:
                    AWSS3();
                    ~AWSS3() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>AWS S3 存储桶对应的服务端点域名，取值可参考 <a href="https://docs.aws.amazon.com/zh_cn/general/latest/gr/rande.html#regional-endpoints">AWS 服务端点</a>。例如：s3.us-west-2.amazonaws.com 。</p>
                     * @return Endpoint <p>AWS S3 存储桶对应的服务端点域名，取值可参考 <a href="https://docs.aws.amazon.com/zh_cn/general/latest/gr/rande.html#regional-endpoints">AWS 服务端点</a>。例如：s3.us-west-2.amazonaws.com 。</p>
                     * 
                     */
                    std::string GetEndpoint() const;

                    /**
                     * 设置<p>AWS S3 存储桶对应的服务端点域名，取值可参考 <a href="https://docs.aws.amazon.com/zh_cn/general/latest/gr/rande.html#regional-endpoints">AWS 服务端点</a>。例如：s3.us-west-2.amazonaws.com 。</p>
                     * @param _endpoint <p>AWS S3 存储桶对应的服务端点域名，取值可参考 <a href="https://docs.aws.amazon.com/zh_cn/general/latest/gr/rande.html#regional-endpoints">AWS 服务端点</a>。例如：s3.us-west-2.amazonaws.com 。</p>
                     * 
                     */
                    void SetEndpoint(const std::string& _endpoint);

                    /**
                     * 判断参数 Endpoint 是否已赋值
                     * @return Endpoint 是否已赋值
                     * 
                     */
                    bool EndpointHasBeenSet() const;

                    /**
                     * 获取<p>AWS S3 存储桶名称。可在 AWS S3 控制台 Buckets（存储桶）列表中查看对应桶名。<br>长度须为 3–63 个字符，只能包含小写字母、数字、句点（.）和连字符（-），且必须以字母或数字开头和结尾。</p>
                     * @return BucketName <p>AWS S3 存储桶名称。可在 AWS S3 控制台 Buckets（存储桶）列表中查看对应桶名。<br>长度须为 3–63 个字符，只能包含小写字母、数字、句点（.）和连字符（-），且必须以字母或数字开头和结尾。</p>
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置<p>AWS S3 存储桶名称。可在 AWS S3 控制台 Buckets（存储桶）列表中查看对应桶名。<br>长度须为 3–63 个字符，只能包含小写字母、数字、句点（.）和连字符（-），且必须以字母或数字开头和结尾。</p>
                     * @param _bucketName <p>AWS S3 存储桶名称。可在 AWS S3 控制台 Buckets（存储桶）列表中查看对应桶名。<br>长度须为 3–63 个字符，只能包含小写字母、数字、句点（.）和连字符（-），且必须以字母或数字开头和结尾。</p>
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
                     * 获取<p>日志文件在 AWS S3 桶中的存储目录路径，以 <code>/</code> 分隔可创建多级目录，且不能包含 <code>./..</code> 等相对路径段，路径总长度不超过 1024 个字节。<br>当目录路径存在时直接使用该路径，当目录路径不存在时会自动创建。<br>目录名仅允许由字母、数字、 及 <code>!-_.*&#39;()</code> 构成。<br>示例：<code>eo-logs/l7-access-logs</code> 。</p>
                     * @return Path <p>日志文件在 AWS S3 桶中的存储目录路径，以 <code>/</code> 分隔可创建多级目录，且不能包含 <code>./..</code> 等相对路径段，路径总长度不超过 1024 个字节。<br>当目录路径存在时直接使用该路径，当目录路径不存在时会自动创建。<br>目录名仅允许由字母、数字、 及 <code>!-_.*&#39;()</code> 构成。<br>示例：<code>eo-logs/l7-access-logs</code> 。</p>
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>日志文件在 AWS S3 桶中的存储目录路径，以 <code>/</code> 分隔可创建多级目录，且不能包含 <code>./..</code> 等相对路径段，路径总长度不超过 1024 个字节。<br>当目录路径存在时直接使用该路径，当目录路径不存在时会自动创建。<br>目录名仅允许由字母、数字、 及 <code>!-_.*&#39;()</code> 构成。<br>示例：<code>eo-logs/l7-access-logs</code> 。</p>
                     * @param _path <p>日志文件在 AWS S3 桶中的存储目录路径，以 <code>/</code> 分隔可创建多级目录，且不能包含 <code>./..</code> 等相对路径段，路径总长度不超过 1024 个字节。<br>当目录路径存在时直接使用该路径，当目录路径不存在时会自动创建。<br>目录名仅允许由字母、数字、 及 <code>!-_.*&#39;()</code> 构成。<br>示例：<code>eo-logs/l7-access-logs</code> 。</p>
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取<p>授权 EdgeOne 访问 AWS S3 桶的 IAM 角色的 ARN。<br>需先在 AWS 账号中创建一个授予 EdgeOne 写入权限的 IAM 角色（创建方式详情见 <a href="https://cloud.tencent.com/document/product/1552/96007">推送至 AWS S3</a>），创建后可在 AWS IAM 控制台的角色详情页顶部查看并复制该角色的 ARN。<br>例如：<code>arn:aws:iam::123456789012:role/eo-logs</code> 。</p>
                     * @return RoleARN <p>授权 EdgeOne 访问 AWS S3 桶的 IAM 角色的 ARN。<br>需先在 AWS 账号中创建一个授予 EdgeOne 写入权限的 IAM 角色（创建方式详情见 <a href="https://cloud.tencent.com/document/product/1552/96007">推送至 AWS S3</a>），创建后可在 AWS IAM 控制台的角色详情页顶部查看并复制该角色的 ARN。<br>例如：<code>arn:aws:iam::123456789012:role/eo-logs</code> 。</p>
                     * 
                     */
                    std::string GetRoleARN() const;

                    /**
                     * 设置<p>授权 EdgeOne 访问 AWS S3 桶的 IAM 角色的 ARN。<br>需先在 AWS 账号中创建一个授予 EdgeOne 写入权限的 IAM 角色（创建方式详情见 <a href="https://cloud.tencent.com/document/product/1552/96007">推送至 AWS S3</a>），创建后可在 AWS IAM 控制台的角色详情页顶部查看并复制该角色的 ARN。<br>例如：<code>arn:aws:iam::123456789012:role/eo-logs</code> 。</p>
                     * @param _roleARN <p>授权 EdgeOne 访问 AWS S3 桶的 IAM 角色的 ARN。<br>需先在 AWS 账号中创建一个授予 EdgeOne 写入权限的 IAM 角色（创建方式详情见 <a href="https://cloud.tencent.com/document/product/1552/96007">推送至 AWS S3</a>），创建后可在 AWS IAM 控制台的角色详情页顶部查看并复制该角色的 ARN。<br>例如：<code>arn:aws:iam::123456789012:role/eo-logs</code> 。</p>
                     * 
                     */
                    void SetRoleARN(const std::string& _roleARN);

                    /**
                     * 判断参数 RoleARN 是否已赋值
                     * @return RoleARN 是否已赋值
                     * 
                     */
                    bool RoleARNHasBeenSet() const;

                    /**
                     * 获取<p>数据压缩类型，取值有: <ul><li> gzip：gzip压缩。</li></ul>不填表示不启用压缩。</p>
                     * @return CompressType <p>数据压缩类型，取值有: <ul><li> gzip：gzip压缩。</li></ul>不填表示不启用压缩。</p>
                     * 
                     */
                    std::string GetCompressType() const;

                    /**
                     * 设置<p>数据压缩类型，取值有: <ul><li> gzip：gzip压缩。</li></ul>不填表示不启用压缩。</p>
                     * @param _compressType <p>数据压缩类型，取值有: <ul><li> gzip：gzip压缩。</li></ul>不填表示不启用压缩。</p>
                     * 
                     */
                    void SetCompressType(const std::string& _compressType);

                    /**
                     * 判断参数 CompressType 是否已赋值
                     * @return CompressType 是否已赋值
                     * 
                     */
                    bool CompressTypeHasBeenSet() const;

                private:

                    /**
                     * <p>AWS S3 存储桶对应的服务端点域名，取值可参考 <a href="https://docs.aws.amazon.com/zh_cn/general/latest/gr/rande.html#regional-endpoints">AWS 服务端点</a>。例如：s3.us-west-2.amazonaws.com 。</p>
                     */
                    std::string m_endpoint;
                    bool m_endpointHasBeenSet;

                    /**
                     * <p>AWS S3 存储桶名称。可在 AWS S3 控制台 Buckets（存储桶）列表中查看对应桶名。<br>长度须为 3–63 个字符，只能包含小写字母、数字、句点（.）和连字符（-），且必须以字母或数字开头和结尾。</p>
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * <p>日志文件在 AWS S3 桶中的存储目录路径，以 <code>/</code> 分隔可创建多级目录，且不能包含 <code>./..</code> 等相对路径段，路径总长度不超过 1024 个字节。<br>当目录路径存在时直接使用该路径，当目录路径不存在时会自动创建。<br>目录名仅允许由字母、数字、 及 <code>!-_.*&#39;()</code> 构成。<br>示例：<code>eo-logs/l7-access-logs</code> 。</p>
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>授权 EdgeOne 访问 AWS S3 桶的 IAM 角色的 ARN。<br>需先在 AWS 账号中创建一个授予 EdgeOne 写入权限的 IAM 角色（创建方式详情见 <a href="https://cloud.tencent.com/document/product/1552/96007">推送至 AWS S3</a>），创建后可在 AWS IAM 控制台的角色详情页顶部查看并复制该角色的 ARN。<br>例如：<code>arn:aws:iam::123456789012:role/eo-logs</code> 。</p>
                     */
                    std::string m_roleARN;
                    bool m_roleARNHasBeenSet;

                    /**
                     * <p>数据压缩类型，取值有: <ul><li> gzip：gzip压缩。</li></ul>不填表示不启用压缩。</p>
                     */
                    std::string m_compressType;
                    bool m_compressTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_AWSS3_H_
