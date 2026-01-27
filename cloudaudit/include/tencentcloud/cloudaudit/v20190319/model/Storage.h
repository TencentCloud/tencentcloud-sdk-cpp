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

#ifndef TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_STORAGE_H_
#define TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_STORAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cloudaudit
    {
        namespace V20190319
        {
            namespace Model
            {
                /**
                * 跟踪集存储信息
                */
                class Storage : public AbstractModel
                {
                public:
                    Storage();
                    ~Storage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>存储类型（目前支持 cos、cls、ckafka）</p>
                     * @return StorageType <p>存储类型（目前支持 cos、cls、ckafka）</p>
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置<p>存储类型（目前支持 cos、cls、ckafka）</p>
                     * @param _storageType <p>存储类型（目前支持 cos、cls、ckafka）</p>
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取<p>存储所在地域</p>
                     * @return StorageRegion <p>存储所在地域</p>
                     * 
                     */
                    std::string GetStorageRegion() const;

                    /**
                     * 设置<p>存储所在地域</p>
                     * @param _storageRegion <p>存储所在地域</p>
                     * 
                     */
                    void SetStorageRegion(const std::string& _storageRegion);

                    /**
                     * 判断参数 StorageRegion 是否已赋值
                     * @return StorageRegion 是否已赋值
                     * 
                     */
                    bool StorageRegionHasBeenSet() const;

                    /**
                     * 获取<p>存储名称(cos：存储名称为用户自定义的存储桶名称，不包含&quot;-APPID&quot;，仅支持小写字母、数字以及中划线&quot;-&quot;的组合，不能超过50字符，且不支持中划线&quot;-&quot;开头或结尾； cls：存储名称为日志主题id，字符长度为1-50个字符； ckafka： ckafka实例ID/topic. 举例：ckafka-xxxxxx/tencent_test_audit_log)</p>
                     * @return StorageName <p>存储名称(cos：存储名称为用户自定义的存储桶名称，不包含&quot;-APPID&quot;，仅支持小写字母、数字以及中划线&quot;-&quot;的组合，不能超过50字符，且不支持中划线&quot;-&quot;开头或结尾； cls：存储名称为日志主题id，字符长度为1-50个字符； ckafka： ckafka实例ID/topic. 举例：ckafka-xxxxxx/tencent_test_audit_log)</p>
                     * 
                     */
                    std::string GetStorageName() const;

                    /**
                     * 设置<p>存储名称(cos：存储名称为用户自定义的存储桶名称，不包含&quot;-APPID&quot;，仅支持小写字母、数字以及中划线&quot;-&quot;的组合，不能超过50字符，且不支持中划线&quot;-&quot;开头或结尾； cls：存储名称为日志主题id，字符长度为1-50个字符； ckafka： ckafka实例ID/topic. 举例：ckafka-xxxxxx/tencent_test_audit_log)</p>
                     * @param _storageName <p>存储名称(cos：存储名称为用户自定义的存储桶名称，不包含&quot;-APPID&quot;，仅支持小写字母、数字以及中划线&quot;-&quot;的组合，不能超过50字符，且不支持中划线&quot;-&quot;开头或结尾； cls：存储名称为日志主题id，字符长度为1-50个字符； ckafka： ckafka实例ID/topic. 举例：ckafka-xxxxxx/tencent_test_audit_log)</p>
                     * 
                     */
                    void SetStorageName(const std::string& _storageName);

                    /**
                     * 判断参数 StorageName 是否已赋值
                     * @return StorageName 是否已赋值
                     * 
                     */
                    bool StorageNameHasBeenSet() const;

                    /**
                     * 获取<p>存储目录前缀，cos日志文件前缀仅支持字母和数字的组合，3-40个字符</p>
                     * @return StoragePrefix <p>存储目录前缀，cos日志文件前缀仅支持字母和数字的组合，3-40个字符</p>
                     * 
                     */
                    std::string GetStoragePrefix() const;

                    /**
                     * 设置<p>存储目录前缀，cos日志文件前缀仅支持字母和数字的组合，3-40个字符</p>
                     * @param _storagePrefix <p>存储目录前缀，cos日志文件前缀仅支持字母和数字的组合，3-40个字符</p>
                     * 
                     */
                    void SetStoragePrefix(const std::string& _storagePrefix);

                    /**
                     * 判断参数 StoragePrefix 是否已赋值
                     * @return StoragePrefix 是否已赋值
                     * 
                     */
                    bool StoragePrefixHasBeenSet() const;

                    /**
                     * 获取<p>被指定存储用户ID</p>
                     * @return StorageAccountId <p>被指定存储用户ID</p>
                     * 
                     */
                    std::string GetStorageAccountId() const;

                    /**
                     * 设置<p>被指定存储用户ID</p>
                     * @param _storageAccountId <p>被指定存储用户ID</p>
                     * 
                     */
                    void SetStorageAccountId(const std::string& _storageAccountId);

                    /**
                     * 判断参数 StorageAccountId 是否已赋值
                     * @return StorageAccountId 是否已赋值
                     * 
                     */
                    bool StorageAccountIdHasBeenSet() const;

                    /**
                     * 获取<p>被指定存储用户appid</p>
                     * @return StorageAppId <p>被指定存储用户appid</p>
                     * 
                     */
                    std::string GetStorageAppId() const;

                    /**
                     * 设置<p>被指定存储用户appid</p>
                     * @param _storageAppId <p>被指定存储用户appid</p>
                     * 
                     */
                    void SetStorageAppId(const std::string& _storageAppId);

                    /**
                     * 判断参数 StorageAppId 是否已赋值
                     * @return StorageAppId 是否已赋值
                     * 
                     */
                    bool StorageAppIdHasBeenSet() const;

                    /**
                     * 获取<p>是否压缩。<br>1:压缩  2:不压缩</p>
                     * @return Compress <p>是否压缩。<br>1:压缩  2:不压缩</p>
                     * 
                     */
                    uint64_t GetCompress() const;

                    /**
                     * 设置<p>是否压缩。<br>1:压缩  2:不压缩</p>
                     * @param _compress <p>是否压缩。<br>1:压缩  2:不压缩</p>
                     * 
                     */
                    void SetCompress(const uint64_t& _compress);

                    /**
                     * 判断参数 Compress 是否已赋值
                     * @return Compress 是否已赋值
                     * 
                     */
                    bool CompressHasBeenSet() const;

                private:

                    /**
                     * <p>存储类型（目前支持 cos、cls、ckafka）</p>
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * <p>存储所在地域</p>
                     */
                    std::string m_storageRegion;
                    bool m_storageRegionHasBeenSet;

                    /**
                     * <p>存储名称(cos：存储名称为用户自定义的存储桶名称，不包含&quot;-APPID&quot;，仅支持小写字母、数字以及中划线&quot;-&quot;的组合，不能超过50字符，且不支持中划线&quot;-&quot;开头或结尾； cls：存储名称为日志主题id，字符长度为1-50个字符； ckafka： ckafka实例ID/topic. 举例：ckafka-xxxxxx/tencent_test_audit_log)</p>
                     */
                    std::string m_storageName;
                    bool m_storageNameHasBeenSet;

                    /**
                     * <p>存储目录前缀，cos日志文件前缀仅支持字母和数字的组合，3-40个字符</p>
                     */
                    std::string m_storagePrefix;
                    bool m_storagePrefixHasBeenSet;

                    /**
                     * <p>被指定存储用户ID</p>
                     */
                    std::string m_storageAccountId;
                    bool m_storageAccountIdHasBeenSet;

                    /**
                     * <p>被指定存储用户appid</p>
                     */
                    std::string m_storageAppId;
                    bool m_storageAppIdHasBeenSet;

                    /**
                     * <p>是否压缩。<br>1:压缩  2:不压缩</p>
                     */
                    uint64_t m_compress;
                    bool m_compressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_STORAGE_H_
