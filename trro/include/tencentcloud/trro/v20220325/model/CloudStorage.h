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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_CLOUDSTORAGE_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_CLOUDSTORAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * 云端录制文件上传到云存储的参数（对象存储cos）
                */
                class CloudStorage : public AbstractModel
                {
                public:
                    CloudStorage();
                    ~CloudStorage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取腾讯云对象存储COS以及第三方云存储账号信息
0：腾讯云对象存储 COS
1：AWS
【注意】目前第三方云存储仅支持AWS，更多第三方云存储陆续支持中
示例值：0
                     * @return Vendor 腾讯云对象存储COS以及第三方云存储账号信息
0：腾讯云对象存储 COS
1：AWS
【注意】目前第三方云存储仅支持AWS，更多第三方云存储陆续支持中
示例值：0
                     * 
                     */
                    int64_t GetVendor() const;

                    /**
                     * 设置腾讯云对象存储COS以及第三方云存储账号信息
0：腾讯云对象存储 COS
1：AWS
【注意】目前第三方云存储仅支持AWS，更多第三方云存储陆续支持中
示例值：0
                     * @param _vendor 腾讯云对象存储COS以及第三方云存储账号信息
0：腾讯云对象存储 COS
1：AWS
【注意】目前第三方云存储仅支持AWS，更多第三方云存储陆续支持中
示例值：0
                     * 
                     */
                    void SetVendor(const int64_t& _vendor);

                    /**
                     * 判断参数 Vendor 是否已赋值
                     * @return Vendor 是否已赋值
                     * 
                     */
                    bool VendorHasBeenSet() const;

                    /**
                     * 获取腾讯云对象存储的[地域信息]（https://cloud.tencent.com/document/product/436/6224#.E5.9C.B0.E5.9F.9F）。
示例值：cn-shanghai-1

AWS S3[地域信息]（https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html#concepts-regions）
示例值：ap-shanghai(cos, 具体参考云存储厂商支持的地域)
                     * @return Region 腾讯云对象存储的[地域信息]（https://cloud.tencent.com/document/product/436/6224#.E5.9C.B0.E5.9F.9F）。
示例值：cn-shanghai-1

AWS S3[地域信息]（https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html#concepts-regions）
示例值：ap-shanghai(cos, 具体参考云存储厂商支持的地域)
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置腾讯云对象存储的[地域信息]（https://cloud.tencent.com/document/product/436/6224#.E5.9C.B0.E5.9F.9F）。
示例值：cn-shanghai-1

AWS S3[地域信息]（https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html#concepts-regions）
示例值：ap-shanghai(cos, 具体参考云存储厂商支持的地域)
                     * @param _region 腾讯云对象存储的[地域信息]（https://cloud.tencent.com/document/product/436/6224#.E5.9C.B0.E5.9F.9F）。
示例值：cn-shanghai-1

AWS S3[地域信息]（https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html#concepts-regions）
示例值：ap-shanghai(cos, 具体参考云存储厂商支持的地域)
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
                     * 获取云存储桶名称。
                     * @return Bucket 云存储桶名称。
                     * 
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置云存储桶名称。
                     * @param _bucket 云存储桶名称。
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
                     * 获取云存储的access_key账号信息。
若存储至腾讯云对象存储COS，请前往https://console.cloud.tencent.com/cam/capi 查看或创建，对应链接中密钥字段的SecretId值。
                     * @return AccessKey 云存储的access_key账号信息。
若存储至腾讯云对象存储COS，请前往https://console.cloud.tencent.com/cam/capi 查看或创建，对应链接中密钥字段的SecretId值。
                     * 
                     */
                    std::string GetAccessKey() const;

                    /**
                     * 设置云存储的access_key账号信息。
若存储至腾讯云对象存储COS，请前往https://console.cloud.tencent.com/cam/capi 查看或创建，对应链接中密钥字段的SecretId值。
                     * @param _accessKey 云存储的access_key账号信息。
若存储至腾讯云对象存储COS，请前往https://console.cloud.tencent.com/cam/capi 查看或创建，对应链接中密钥字段的SecretId值。
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
                     * 获取云存储的secret_key账号信息。
若存储至腾讯云对象存储COS，请前往https://console.cloud.tencent.com/cam/capi 查看或创建，对应链接中密钥字段的SecretKey值。
                     * @return SecretKey 云存储的secret_key账号信息。
若存储至腾讯云对象存储COS，请前往https://console.cloud.tencent.com/cam/capi 查看或创建，对应链接中密钥字段的SecretKey值。
                     * 
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置云存储的secret_key账号信息。
若存储至腾讯云对象存储COS，请前往https://console.cloud.tencent.com/cam/capi 查看或创建，对应链接中密钥字段的SecretKey值。
                     * @param _secretKey 云存储的secret_key账号信息。
若存储至腾讯云对象存储COS，请前往https://console.cloud.tencent.com/cam/capi 查看或创建，对应链接中密钥字段的SecretKey值。
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
                     * 获取云存储bucket 的指定位置，由字符串数组组成。合法的字符串范围az,AZ,0~9,'_'和'-'，举个例子，录制文件xxx.m3u8在 ["prefix1", "prefix2"]作用下，会变成prefix1/prefix2/TaskId/xxx.m3u8。
                     * @return FileNamePrefix 云存储bucket 的指定位置，由字符串数组组成。合法的字符串范围az,AZ,0~9,'_'和'-'，举个例子，录制文件xxx.m3u8在 ["prefix1", "prefix2"]作用下，会变成prefix1/prefix2/TaskId/xxx.m3u8。
                     * 
                     */
                    std::vector<std::string> GetFileNamePrefix() const;

                    /**
                     * 设置云存储bucket 的指定位置，由字符串数组组成。合法的字符串范围az,AZ,0~9,'_'和'-'，举个例子，录制文件xxx.m3u8在 ["prefix1", "prefix2"]作用下，会变成prefix1/prefix2/TaskId/xxx.m3u8。
                     * @param _fileNamePrefix 云存储bucket 的指定位置，由字符串数组组成。合法的字符串范围az,AZ,0~9,'_'和'-'，举个例子，录制文件xxx.m3u8在 ["prefix1", "prefix2"]作用下，会变成prefix1/prefix2/TaskId/xxx.m3u8。
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
                     * 腾讯云对象存储COS以及第三方云存储账号信息
0：腾讯云对象存储 COS
1：AWS
【注意】目前第三方云存储仅支持AWS，更多第三方云存储陆续支持中
示例值：0
                     */
                    int64_t m_vendor;
                    bool m_vendorHasBeenSet;

                    /**
                     * 腾讯云对象存储的[地域信息]（https://cloud.tencent.com/document/product/436/6224#.E5.9C.B0.E5.9F.9F）。
示例值：cn-shanghai-1

AWS S3[地域信息]（https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/using-regions-availability-zones.html#concepts-regions）
示例值：ap-shanghai(cos, 具体参考云存储厂商支持的地域)
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 云存储桶名称。
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * 云存储的access_key账号信息。
若存储至腾讯云对象存储COS，请前往https://console.cloud.tencent.com/cam/capi 查看或创建，对应链接中密钥字段的SecretId值。
                     */
                    std::string m_accessKey;
                    bool m_accessKeyHasBeenSet;

                    /**
                     * 云存储的secret_key账号信息。
若存储至腾讯云对象存储COS，请前往https://console.cloud.tencent.com/cam/capi 查看或创建，对应链接中密钥字段的SecretKey值。
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * 云存储bucket 的指定位置，由字符串数组组成。合法的字符串范围az,AZ,0~9,'_'和'-'，举个例子，录制文件xxx.m3u8在 ["prefix1", "prefix2"]作用下，会变成prefix1/prefix2/TaskId/xxx.m3u8。
                     */
                    std::vector<std::string> m_fileNamePrefix;
                    bool m_fileNamePrefixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_CLOUDSTORAGE_H_
