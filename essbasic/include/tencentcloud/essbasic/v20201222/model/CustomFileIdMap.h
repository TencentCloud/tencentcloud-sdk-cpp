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

#ifndef TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CUSTOMFILEIDMAP_H_
#define TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CUSTOMFILEIDMAP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20201222
        {
            namespace Model
            {
                /**
                * <自定义Id,文件id>映射对象
                */
                class CustomFileIdMap : public AbstractModel
                {
                public:
                    CustomFileIdMap();
                    ~CustomFileIdMap() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户自定义ID
                     * @return CustomId 用户自定义ID
                     * 
                     */
                    std::string GetCustomId() const;

                    /**
                     * 设置用户自定义ID
                     * @param _customId 用户自定义ID
                     * 
                     */
                    void SetCustomId(const std::string& _customId);

                    /**
                     * 判断参数 CustomId 是否已赋值
                     * @return CustomId 是否已赋值
                     * 
                     */
                    bool CustomIdHasBeenSet() const;

                    /**
                     * 获取文件id
                     * @return FileId 文件id
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置文件id
                     * @param _fileId 文件id
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                private:

                    /**
                     * 用户自定义ID
                     */
                    std::string m_customId;
                    bool m_customIdHasBeenSet;

                    /**
                     * 文件id
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20201222_MODEL_CUSTOMFILEIDMAP_H_
