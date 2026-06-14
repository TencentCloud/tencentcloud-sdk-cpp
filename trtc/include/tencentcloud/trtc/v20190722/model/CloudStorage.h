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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_CLOUDSTORAGE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_CLOUDSTORAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * 腾讯云对象存储COS以及第三方云存储的账号信息
                */
                class CloudStorage : public AbstractModel
                {
                public:
                    CloudStorage();
                    ~CloudStorage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>腾讯云对象存储COS以及第三方云存储账号信息<br>0：腾讯云对象存储 COS<br>1：AWS<br>【注意】目前第三方云存储仅支持AWS，更多第三方云存储陆续支持中</p>
                     * @return Vendor <p>腾讯云对象存储COS以及第三方云存储账号信息<br>0：腾讯云对象存储 COS<br>1：AWS<br>【注意】目前第三方云存储仅支持AWS，更多第三方云存储陆续支持中</p>
                     * 
                     */
                    uint64_t GetVendor() const;

                    /**
                     * 设置<p>腾讯云对象存储COS以及第三方云存储账号信息<br>0：腾讯云对象存储 COS<br>1：AWS<br>【注意】目前第三方云存储仅支持AWS，更多第三方云存储陆续支持中</p>
                     * @param _vendor <p>腾讯云对象存储COS以及第三方云存储账号信息<br>0：腾讯云对象存储 COS<br>1：AWS<br>【注意】目前第三方云存储仅支持AWS，更多第三方云存储陆续支持中</p>
                     * 
                     */
                    void SetVendor(const uint64_t& _vendor);

                    /**
                     * 判断参数 Vendor 是否已赋值
                     * @return Vendor 是否已赋值
                     * 
                     */
                    bool VendorHasBeenSet() const;

                    /**
                     * 获取<p>腾讯云对象存储的[地域信息]（https://cloud.tencent.com/document/product/436/6224#.E5.9C.B0.E5.9F.9F）。<br>示例值：cn-shanghai-1</p><p>AWS S3[地域信息]（https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html#concepts-regions）</p>
                     * @return Region <p>腾讯云对象存储的[地域信息]（https://cloud.tencent.com/document/product/436/6224#.E5.9C.B0.E5.9F.9F）。<br>示例值：cn-shanghai-1</p><p>AWS S3[地域信息]（https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html#concepts-regions）</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>腾讯云对象存储的[地域信息]（https://cloud.tencent.com/document/product/436/6224#.E5.9C.B0.E5.9F.9F）。<br>示例值：cn-shanghai-1</p><p>AWS S3[地域信息]（https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html#concepts-regions）</p>
                     * @param _region <p>腾讯云对象存储的[地域信息]（https://cloud.tencent.com/document/product/436/6224#.E5.9C.B0.E5.9F.9F）。<br>示例值：cn-shanghai-1</p><p>AWS S3[地域信息]（https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html#concepts-regions）</p>
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
                     * 获取<p>云存储桶名称。</p>
                     * @return Bucket <p>云存储桶名称。</p>
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置<p>云存储桶名称。</p>
                     * @param _bucket <p>云存储桶名称。</p>
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
                     * 获取<p>云存储的access_key账号信息。<br>若存储至腾讯云对象存储COS，请前往https://console.cloud.tencent.com/cam/capi 查看或创建，对应链接中密钥字段的SecretId值。</p>
                     * @return AccessKey <p>云存储的access_key账号信息。<br>若存储至腾讯云对象存储COS，请前往https://console.cloud.tencent.com/cam/capi 查看或创建，对应链接中密钥字段的SecretId值。</p>
                     * 
                     */
                    std::string GetAccessKey() const;

                    /**
                     * 设置<p>云存储的access_key账号信息。<br>若存储至腾讯云对象存储COS，请前往https://console.cloud.tencent.com/cam/capi 查看或创建，对应链接中密钥字段的SecretId值。</p>
                     * @param _accessKey <p>云存储的access_key账号信息。<br>若存储至腾讯云对象存储COS，请前往https://console.cloud.tencent.com/cam/capi 查看或创建，对应链接中密钥字段的SecretId值。</p>
                     * 
                     */
                    void SetAccessKey(const std::string& _accessKey);

                    /**
                     * 判断参数 AccessKey 是否已赋值
                     * @return AccessKey 是否已赋值
                     * 
                     */
                    bool AccessKeyHasBeenSet() const;

                    /**
                     * 获取<p>云存储的secret_key账号信息。<br>若存储至腾讯云对象存储COS，请前往https://console.cloud.tencent.com/cam/capi 查看或创建，对应链接中密钥字段的SecretKey值。</p>
                     * @return SecretKey <p>云存储的secret_key账号信息。<br>若存储至腾讯云对象存储COS，请前往https://console.cloud.tencent.com/cam/capi 查看或创建，对应链接中密钥字段的SecretKey值。</p>
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置<p>云存储的secret_key账号信息。<br>若存储至腾讯云对象存储COS，请前往https://console.cloud.tencent.com/cam/capi 查看或创建，对应链接中密钥字段的SecretKey值。</p>
                     * @param _secretKey <p>云存储的secret_key账号信息。<br>若存储至腾讯云对象存储COS，请前往https://console.cloud.tencent.com/cam/capi 查看或创建，对应链接中密钥字段的SecretKey值。</p>
                     * 
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     * 
                     */
                    bool SecretKeyHasBeenSet() const;

                    /**
                     * 获取<p>云存储bucket 的指定位置，由字符串数组组成。合法的字符串范围az,AZ,0~9,&#39;_&#39;和&#39;-&#39;，举个例子，录制文件xxx.m3u8在 [&quot;prefix1&quot;, &quot;prefix2&quot;]作用下，会变成prefix1/prefix2/TaskId/xxx.m3u8。</p>
                     * @return FileNamePrefix <p>云存储bucket 的指定位置，由字符串数组组成。合法的字符串范围az,AZ,0~9,&#39;_&#39;和&#39;-&#39;，举个例子，录制文件xxx.m3u8在 [&quot;prefix1&quot;, &quot;prefix2&quot;]作用下，会变成prefix1/prefix2/TaskId/xxx.m3u8。</p>
                     * 
                     */
                    std::vector<std::string> GetFileNamePrefix() const;

                    /**
                     * 设置<p>云存储bucket 的指定位置，由字符串数组组成。合法的字符串范围az,AZ,0~9,&#39;_&#39;和&#39;-&#39;，举个例子，录制文件xxx.m3u8在 [&quot;prefix1&quot;, &quot;prefix2&quot;]作用下，会变成prefix1/prefix2/TaskId/xxx.m3u8。</p>
                     * @param _fileNamePrefix <p>云存储bucket 的指定位置，由字符串数组组成。合法的字符串范围az,AZ,0~9,&#39;_&#39;和&#39;-&#39;，举个例子，录制文件xxx.m3u8在 [&quot;prefix1&quot;, &quot;prefix2&quot;]作用下，会变成prefix1/prefix2/TaskId/xxx.m3u8。</p>
                     * 
                     */
                    void SetFileNamePrefix(const std::vector<std::string>& _fileNamePrefix);

                    /**
                     * 判断参数 FileNamePrefix 是否已赋值
                     * @return FileNamePrefix 是否已赋值
                     * 
                     */
                    bool FileNamePrefixHasBeenSet() const;

                private:

                    /**
                     * <p>腾讯云对象存储COS以及第三方云存储账号信息<br>0：腾讯云对象存储 COS<br>1：AWS<br>【注意】目前第三方云存储仅支持AWS，更多第三方云存储陆续支持中</p>
                     */
                    uint64_t m_vendor;
                    bool m_vendorHasBeenSet;

                    /**
                     * <p>腾讯云对象存储的[地域信息]（https://cloud.tencent.com/document/product/436/6224#.E5.9C.B0.E5.9F.9F）。<br>示例值：cn-shanghai-1</p><p>AWS S3[地域信息]（https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html#concepts-regions）</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>云存储桶名称。</p>
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * <p>云存储的access_key账号信息。<br>若存储至腾讯云对象存储COS，请前往https://console.cloud.tencent.com/cam/capi 查看或创建，对应链接中密钥字段的SecretId值。</p>
                     */
                    std::string m_accessKey;
                    bool m_accessKeyHasBeenSet;

                    /**
                     * <p>云存储的secret_key账号信息。<br>若存储至腾讯云对象存储COS，请前往https://console.cloud.tencent.com/cam/capi 查看或创建，对应链接中密钥字段的SecretKey值。</p>
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * <p>云存储bucket 的指定位置，由字符串数组组成。合法的字符串范围az,AZ,0~9,&#39;_&#39;和&#39;-&#39;，举个例子，录制文件xxx.m3u8在 [&quot;prefix1&quot;, &quot;prefix2&quot;]作用下，会变成prefix1/prefix2/TaskId/xxx.m3u8。</p>
                     */
                    std::vector<std::string> m_fileNamePrefix;
                    bool m_fileNamePrefixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_CLOUDSTORAGE_H_
