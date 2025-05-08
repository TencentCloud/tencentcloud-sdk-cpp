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
                     * 获取存储类型（目前支持 cos、cls）
                     * @return StorageType 存储类型（目前支持 cos、cls）
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置存储类型（目前支持 cos、cls）
                     * @param _storageType 存储类型（目前支持 cos、cls）
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
                     * 获取存储所在地域
                     * @return StorageRegion 存储所在地域
                     * 
                     */
                    std::string GetStorageRegion() const;

                    /**
                     * 设置存储所在地域
                     * @param _storageRegion 存储所在地域
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
                     * 获取存储名称(cos：存储名称为用户自定义的存储桶名称，不包含"-APPID"，仅支持小写字母、数字以及中划线"-"的组合，不能超过50字符，且不支持中划线"-"开头或结尾； cls：存储名称为日志主题id，字符长度为1-50个字符)
                     * @return StorageName 存储名称(cos：存储名称为用户自定义的存储桶名称，不包含"-APPID"，仅支持小写字母、数字以及中划线"-"的组合，不能超过50字符，且不支持中划线"-"开头或结尾； cls：存储名称为日志主题id，字符长度为1-50个字符)
                     * 
                     */
                    std::string GetStorageName() const;

                    /**
                     * 设置存储名称(cos：存储名称为用户自定义的存储桶名称，不包含"-APPID"，仅支持小写字母、数字以及中划线"-"的组合，不能超过50字符，且不支持中划线"-"开头或结尾； cls：存储名称为日志主题id，字符长度为1-50个字符)
                     * @param _storageName 存储名称(cos：存储名称为用户自定义的存储桶名称，不包含"-APPID"，仅支持小写字母、数字以及中划线"-"的组合，不能超过50字符，且不支持中划线"-"开头或结尾； cls：存储名称为日志主题id，字符长度为1-50个字符)
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
                     * 获取存储目录前缀，cos日志文件前缀仅支持字母和数字的组合，3-40个字符
                     * @return StoragePrefix 存储目录前缀，cos日志文件前缀仅支持字母和数字的组合，3-40个字符
                     * 
                     */
                    std::string GetStoragePrefix() const;

                    /**
                     * 设置存储目录前缀，cos日志文件前缀仅支持字母和数字的组合，3-40个字符
                     * @param _storagePrefix 存储目录前缀，cos日志文件前缀仅支持字母和数字的组合，3-40个字符
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
                     * 获取被指定存储用户ID
                     * @return StorageAccountId 被指定存储用户ID
                     * 
                     */
                    std::string GetStorageAccountId() const;

                    /**
                     * 设置被指定存储用户ID
                     * @param _storageAccountId 被指定存储用户ID
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
                     * 获取被指定存储用户appid
                     * @return StorageAppId 被指定存储用户appid
                     * 
                     */
                    std::string GetStorageAppId() const;

                    /**
                     * 设置被指定存储用户appid
                     * @param _storageAppId 被指定存储用户appid
                     * 
                     */
                    void SetStorageAppId(const std::string& _storageAppId);

                    /**
                     * 判断参数 StorageAppId 是否已赋值
                     * @return StorageAppId 是否已赋值
                     * 
                     */
                    bool StorageAppIdHasBeenSet() const;

                private:

                    /**
                     * 存储类型（目前支持 cos、cls）
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * 存储所在地域
                     */
                    std::string m_storageRegion;
                    bool m_storageRegionHasBeenSet;

                    /**
                     * 存储名称(cos：存储名称为用户自定义的存储桶名称，不包含"-APPID"，仅支持小写字母、数字以及中划线"-"的组合，不能超过50字符，且不支持中划线"-"开头或结尾； cls：存储名称为日志主题id，字符长度为1-50个字符)
                     */
                    std::string m_storageName;
                    bool m_storageNameHasBeenSet;

                    /**
                     * 存储目录前缀，cos日志文件前缀仅支持字母和数字的组合，3-40个字符
                     */
                    std::string m_storagePrefix;
                    bool m_storagePrefixHasBeenSet;

                    /**
                     * 被指定存储用户ID
                     */
                    std::string m_storageAccountId;
                    bool m_storageAccountIdHasBeenSet;

                    /**
                     * 被指定存储用户appid
                     */
                    std::string m_storageAppId;
                    bool m_storageAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_STORAGE_H_
