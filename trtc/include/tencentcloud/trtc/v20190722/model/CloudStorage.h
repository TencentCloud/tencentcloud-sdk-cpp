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
                * 第三方云存储的账号信息。
                */
                class CloudStorage : public AbstractModel
                {
                public:
                    CloudStorage();
                    ~CloudStorage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取第三方云储存的供应商:
0：腾讯云存储 COS，暂不支持其他家。
                     * @return Vendor 第三方云储存的供应商:
0：腾讯云存储 COS，暂不支持其他家。
                     */
                    uint64_t GetVendor() const;

                    /**
                     * 设置第三方云储存的供应商:
0：腾讯云存储 COS，暂不支持其他家。
                     * @param Vendor 第三方云储存的供应商:
0：腾讯云存储 COS，暂不支持其他家。
                     */
                    void SetVendor(const uint64_t& _vendor);

                    /**
                     * 判断参数 Vendor 是否已赋值
                     * @return Vendor 是否已赋值
                     */
                    bool VendorHasBeenSet() const;

                    /**
                     * 获取第三方云存储的地域信息。
                     * @return Region 第三方云存储的地域信息。
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置第三方云存储的地域信息。
                     * @param Region 第三方云存储的地域信息。
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取第三方存储桶信息。
                     * @return Bucket 第三方存储桶信息。
                     */
                    std::string GetBucket() const;

                    /**
                     * 设置第三方存储桶信息。
                     * @param Bucket 第三方存储桶信息。
                     */
                    void SetBucket(const std::string& _bucket);

                    /**
                     * 判断参数 Bucket 是否已赋值
                     * @return Bucket 是否已赋值
                     */
                    bool BucketHasBeenSet() const;

                    /**
                     * 获取第三方存储的access_key账号信息。
若存储至腾讯云COS，请前往https://console.cloud.tencent.com/cam/capi 查看或创建
                     * @return AccessKey 第三方存储的access_key账号信息。
若存储至腾讯云COS，请前往https://console.cloud.tencent.com/cam/capi 查看或创建
                     */
                    std::string GetAccessKey() const;

                    /**
                     * 设置第三方存储的access_key账号信息。
若存储至腾讯云COS，请前往https://console.cloud.tencent.com/cam/capi 查看或创建
                     * @param AccessKey 第三方存储的access_key账号信息。
若存储至腾讯云COS，请前往https://console.cloud.tencent.com/cam/capi 查看或创建
                     */
                    void SetAccessKey(const std::string& _accessKey);

                    /**
                     * 判断参数 AccessKey 是否已赋值
                     * @return AccessKey 是否已赋值
                     */
                    bool AccessKeyHasBeenSet() const;

                    /**
                     * 获取第三方存储的secret_key账号信息。
若存储至腾讯云COS，请前往https://console.cloud.tencent.com/cam/capi 查看或创建
                     * @return SecretKey 第三方存储的secret_key账号信息。
若存储至腾讯云COS，请前往https://console.cloud.tencent.com/cam/capi 查看或创建
                     */
                    std::string GetSecretKey() const;

                    /**
                     * 设置第三方存储的secret_key账号信息。
若存储至腾讯云COS，请前往https://console.cloud.tencent.com/cam/capi 查看或创建
                     * @param SecretKey 第三方存储的secret_key账号信息。
若存储至腾讯云COS，请前往https://console.cloud.tencent.com/cam/capi 查看或创建
                     */
                    void SetSecretKey(const std::string& _secretKey);

                    /**
                     * 判断参数 SecretKey 是否已赋值
                     * @return SecretKey 是否已赋值
                     */
                    bool SecretKeyHasBeenSet() const;

                    /**
                     * 获取第三方云存储bucket 的指定位置，由字符串数组组成。合法的字符串范围a~z,A~Z,0~9,'_'和'-'，举个例子，录制文件xxx.m3u8在 ["prefix1", "prefix2"]作用下，会变成prefix1/prefix2/TaskId/xxx.m3u8。
                     * @return FileNamePrefix 第三方云存储bucket 的指定位置，由字符串数组组成。合法的字符串范围a~z,A~Z,0~9,'_'和'-'，举个例子，录制文件xxx.m3u8在 ["prefix1", "prefix2"]作用下，会变成prefix1/prefix2/TaskId/xxx.m3u8。
                     */
                    std::vector<std::string> GetFileNamePrefix() const;

                    /**
                     * 设置第三方云存储bucket 的指定位置，由字符串数组组成。合法的字符串范围a~z,A~Z,0~9,'_'和'-'，举个例子，录制文件xxx.m3u8在 ["prefix1", "prefix2"]作用下，会变成prefix1/prefix2/TaskId/xxx.m3u8。
                     * @param FileNamePrefix 第三方云存储bucket 的指定位置，由字符串数组组成。合法的字符串范围a~z,A~Z,0~9,'_'和'-'，举个例子，录制文件xxx.m3u8在 ["prefix1", "prefix2"]作用下，会变成prefix1/prefix2/TaskId/xxx.m3u8。
                     */
                    void SetFileNamePrefix(const std::vector<std::string>& _fileNamePrefix);

                    /**
                     * 判断参数 FileNamePrefix 是否已赋值
                     * @return FileNamePrefix 是否已赋值
                     */
                    bool FileNamePrefixHasBeenSet() const;

                private:

                    /**
                     * 第三方云储存的供应商:
0：腾讯云存储 COS，暂不支持其他家。
                     */
                    uint64_t m_vendor;
                    bool m_vendorHasBeenSet;

                    /**
                     * 第三方云存储的地域信息。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 第三方存储桶信息。
                     */
                    std::string m_bucket;
                    bool m_bucketHasBeenSet;

                    /**
                     * 第三方存储的access_key账号信息。
若存储至腾讯云COS，请前往https://console.cloud.tencent.com/cam/capi 查看或创建
                     */
                    std::string m_accessKey;
                    bool m_accessKeyHasBeenSet;

                    /**
                     * 第三方存储的secret_key账号信息。
若存储至腾讯云COS，请前往https://console.cloud.tencent.com/cam/capi 查看或创建
                     */
                    std::string m_secretKey;
                    bool m_secretKeyHasBeenSet;

                    /**
                     * 第三方云存储bucket 的指定位置，由字符串数组组成。合法的字符串范围a~z,A~Z,0~9,'_'和'-'，举个例子，录制文件xxx.m3u8在 ["prefix1", "prefix2"]作用下，会变成prefix1/prefix2/TaskId/xxx.m3u8。
                     */
                    std::vector<std::string> m_fileNamePrefix;
                    bool m_fileNamePrefixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_CLOUDSTORAGE_H_
