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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYMEDIASTORAGECLASSREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYMEDIASTORAGECLASSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ModifyMediaStorageClass请求参数结构体
                */
                class ModifyMediaStorageClassRequest : public AbstractModel
                {
                public:
                    ModifyMediaStorageClassRequest();
                    ~ModifyMediaStorageClassRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取媒体文件唯一标识列表，最大长度：100。
                     * @return FileIds 媒体文件唯一标识列表，最大长度：100。
                     * 
                     */
                    std::vector<std::string> GetFileIds() const;

                    /**
                     * 设置媒体文件唯一标识列表，最大长度：100。
                     * @param _fileIds 媒体文件唯一标识列表，最大长度：100。
                     * 
                     */
                    void SetFileIds(const std::vector<std::string>& _fileIds);

                    /**
                     * 判断参数 FileIds 是否已赋值
                     * @return FileIds 是否已赋值
                     * 
                     */
                    bool FileIdsHasBeenSet() const;

                    /**
                     * 获取目标存储类型。可选值有：
<li> STANDARD：标准存储。</li>
<li> STANDARD_IA：低频存储。</li>
<li> ARCHIVE：归档存储。</li>
<li> DEEP_ARCHIVE：深度归档存储。</li>
                     * @return StorageClass 目标存储类型。可选值有：
<li> STANDARD：标准存储。</li>
<li> STANDARD_IA：低频存储。</li>
<li> ARCHIVE：归档存储。</li>
<li> DEEP_ARCHIVE：深度归档存储。</li>
                     * 
                     */
                    std::string GetStorageClass() const;

                    /**
                     * 设置目标存储类型。可选值有：
<li> STANDARD：标准存储。</li>
<li> STANDARD_IA：低频存储。</li>
<li> ARCHIVE：归档存储。</li>
<li> DEEP_ARCHIVE：深度归档存储。</li>
                     * @param _storageClass 目标存储类型。可选值有：
<li> STANDARD：标准存储。</li>
<li> STANDARD_IA：低频存储。</li>
<li> ARCHIVE：归档存储。</li>
<li> DEEP_ARCHIVE：深度归档存储。</li>
                     * 
                     */
                    void SetStorageClass(const std::string& _storageClass);

                    /**
                     * 判断参数 StorageClass 是否已赋值
                     * @return StorageClass 是否已赋值
                     * 
                     */
                    bool StorageClassHasBeenSet() const;

                    /**
                     * 获取<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @return SubAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @param _subAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取取回模式。当文件的存储类型从归档或深度归档转换为标准存储时，需要指定取回（也称为解冻）操作的模式，具体说明请参考[数据取回及取回模式](https://cloud.tencent.com/document/product/266/56196#retake)。
当媒体文件目前的存储类型为归档存储时，有以下取值：
<li>Expedited：极速模式。</li>
<li>Standard：标准模式。</li>
<li>Bulk：批量模式。</li>
当媒体文件目前的存储类型为深度归档存储时，有以下取值：
<li>Standard：标准模式。</li>
<li>Bulk：批量模式。</li>
                     * @return RestoreTier 取回模式。当文件的存储类型从归档或深度归档转换为标准存储时，需要指定取回（也称为解冻）操作的模式，具体说明请参考[数据取回及取回模式](https://cloud.tencent.com/document/product/266/56196#retake)。
当媒体文件目前的存储类型为归档存储时，有以下取值：
<li>Expedited：极速模式。</li>
<li>Standard：标准模式。</li>
<li>Bulk：批量模式。</li>
当媒体文件目前的存储类型为深度归档存储时，有以下取值：
<li>Standard：标准模式。</li>
<li>Bulk：批量模式。</li>
                     * 
                     */
                    std::string GetRestoreTier() const;

                    /**
                     * 设置取回模式。当文件的存储类型从归档或深度归档转换为标准存储时，需要指定取回（也称为解冻）操作的模式，具体说明请参考[数据取回及取回模式](https://cloud.tencent.com/document/product/266/56196#retake)。
当媒体文件目前的存储类型为归档存储时，有以下取值：
<li>Expedited：极速模式。</li>
<li>Standard：标准模式。</li>
<li>Bulk：批量模式。</li>
当媒体文件目前的存储类型为深度归档存储时，有以下取值：
<li>Standard：标准模式。</li>
<li>Bulk：批量模式。</li>
                     * @param _restoreTier 取回模式。当文件的存储类型从归档或深度归档转换为标准存储时，需要指定取回（也称为解冻）操作的模式，具体说明请参考[数据取回及取回模式](https://cloud.tencent.com/document/product/266/56196#retake)。
当媒体文件目前的存储类型为归档存储时，有以下取值：
<li>Expedited：极速模式。</li>
<li>Standard：标准模式。</li>
<li>Bulk：批量模式。</li>
当媒体文件目前的存储类型为深度归档存储时，有以下取值：
<li>Standard：标准模式。</li>
<li>Bulk：批量模式。</li>
                     * 
                     */
                    void SetRestoreTier(const std::string& _restoreTier);

                    /**
                     * 判断参数 RestoreTier 是否已赋值
                     * @return RestoreTier 是否已赋值
                     * 
                     */
                    bool RestoreTierHasBeenSet() const;

                private:

                    /**
                     * 媒体文件唯一标识列表，最大长度：100。
                     */
                    std::vector<std::string> m_fileIds;
                    bool m_fileIdsHasBeenSet;

                    /**
                     * 目标存储类型。可选值有：
<li> STANDARD：标准存储。</li>
<li> STANDARD_IA：低频存储。</li>
<li> ARCHIVE：归档存储。</li>
<li> DEEP_ARCHIVE：深度归档存储。</li>
                     */
                    std::string m_storageClass;
                    bool m_storageClassHasBeenSet;

                    /**
                     * <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 取回模式。当文件的存储类型从归档或深度归档转换为标准存储时，需要指定取回（也称为解冻）操作的模式，具体说明请参考[数据取回及取回模式](https://cloud.tencent.com/document/product/266/56196#retake)。
当媒体文件目前的存储类型为归档存储时，有以下取值：
<li>Expedited：极速模式。</li>
<li>Standard：标准模式。</li>
<li>Bulk：批量模式。</li>
当媒体文件目前的存储类型为深度归档存储时，有以下取值：
<li>Standard：标准模式。</li>
<li>Bulk：批量模式。</li>
                     */
                    std::string m_restoreTier;
                    bool m_restoreTierHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYMEDIASTORAGECLASSREQUEST_H_
