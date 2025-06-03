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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_EXTERNALMEDIAINFO_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_EXTERNALMEDIAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 媒资绑定资源信息，包含媒资绑定模板 ID 和文件信息。
                */
                class ExternalMediaInfo : public AbstractModel
                {
                public:
                    ExternalMediaInfo();
                    ~ExternalMediaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取目前仅支持绑定 COS 桶的媒体，请填写存储对象 Key 值，例如：`example-folder/example.mp4`。
                     * @return MediaKey 目前仅支持绑定 COS 桶的媒体，请填写存储对象 Key 值，例如：`example-folder/example.mp4`。
                     * 
                     */
                    std::string GetMediaKey() const;

                    /**
                     * 设置目前仅支持绑定 COS 桶的媒体，请填写存储对象 Key 值，例如：`example-folder/example.mp4`。
                     * @param _mediaKey 目前仅支持绑定 COS 桶的媒体，请填写存储对象 Key 值，例如：`example-folder/example.mp4`。
                     * 
                     */
                    void SetMediaKey(const std::string& _mediaKey);

                    /**
                     * 判断参数 MediaKey 是否已赋值
                     * @return MediaKey 是否已赋值
                     * 
                     */
                    bool MediaKeyHasBeenSet() const;

                    /**
                     * 获取该字段废弃，请勿使用。
                     * @return Definition 该字段废弃，请勿使用。
                     * @deprecated
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置该字段废弃，请勿使用。
                     * @param _definition 该字段废弃，请勿使用。
                     * @deprecated
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * @deprecated
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取媒资挂载的存储 Id。
                     * @return StorageId 媒资挂载的存储 Id。
                     * 
                     */
                    std::string GetStorageId() const;

                    /**
                     * 设置媒资挂载的存储 Id。
                     * @param _storageId 媒资挂载的存储 Id。
                     * 
                     */
                    void SetStorageId(const std::string& _storageId);

                    /**
                     * 判断参数 StorageId 是否已赋值
                     * @return StorageId 是否已赋值
                     * 
                     */
                    bool StorageIdHasBeenSet() const;

                private:

                    /**
                     * 目前仅支持绑定 COS 桶的媒体，请填写存储对象 Key 值，例如：`example-folder/example.mp4`。
                     */
                    std::string m_mediaKey;
                    bool m_mediaKeyHasBeenSet;

                    /**
                     * 该字段废弃，请勿使用。
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 媒资挂载的存储 Id。
                     */
                    std::string m_storageId;
                    bool m_storageIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_EXTERNALMEDIAINFO_H_
